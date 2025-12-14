/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((~(((var_13 + 9223372036854775807) << (((((~53648) + 53679)) - 29))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 -= (arr_1 [i_0]);
        arr_4 [i_0] = (((((var_12 ? (arr_0 [i_0] [i_0]) : 1785664830))) ? ((((!(arr_3 [i_0]))))) : ((25564 & (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_16 = ((((min(-76, 76))) ? ((((!((min(76, 53648))))))) : (~var_5)));
        var_17 = ((!((((~var_10) ? (arr_5 [i_1 + 3] [i_1]) : var_2)))));
        var_18 = var_5;

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_19 *= (((-((max((arr_5 [i_1] [i_2]), var_12))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    {
                        var_20 = (min(var_20, (((+((~((var_7 ? (arr_6 [i_3] [5]) : 3)))))))));
                        arr_17 [i_1] [3] [i_1] [i_2] = (((!var_7) || ((((arr_5 [i_1 - 1] [i_2 + 3]) / (arr_5 [i_1 + 3] [i_2 + 1]))))));
                        var_21 = ((((max((!var_12), (max(-100, (arr_8 [i_2] [1])))))) ? (((!var_13) ? (min((arr_8 [i_2] [i_2]), (arr_16 [i_2] [i_2]))) : (((max(var_8, (arr_16 [i_2] [i_2]))))))) : ((((((arr_12 [i_2]) > (arr_7 [i_1]))) ? (arr_5 [i_1 + 2] [i_4 + 1]) : (!var_2))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
