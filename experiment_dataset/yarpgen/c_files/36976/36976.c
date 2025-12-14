/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 *= ((((min(((var_5 ? var_11 : var_1)), (arr_1 [i_2] [i_2])))) ? (((((arr_5 [i_3] [i_1]) != -20362)) ? ((var_3 ? var_3 : 1548718974834286037)) : (22788 == var_10))) : ((max(((((arr_6 [2] [i_3] [i_2] [i_2]) >= 3))), ((56408 ? var_5 : -20362)))))));
                            var_14 = (max(var_14, (arr_1 [i_2 - 1] [i_2 - 2])));
                            var_15 = (min(var_15, (min((arr_10 [i_0]), (((var_6 ? var_8 : var_12)))))));
                            var_16 -= (((arr_11 [i_0] [i_0] [20] [i_1]) < ((((!((max(var_4, var_8)))))))));
                        }
                    }
                }
                var_17 -= -83;
                var_18 = (max(var_18, var_6));
                var_19 = (min(var_19, ((min(var_3, (max((arr_4 [i_0]), var_3)))))));
            }
        }
    }
    var_20 = (max(var_20, var_1));
    var_21 -= ((var_12 <= (((!(~var_10))))));
    var_22 -= ((var_4 ? (var_4 <= -1548718974834286037) : ((-var_12 ? 2822856684076948770 : ((1548718974834286037 ? var_0 : var_1))))));
    #pragma endscop
}
