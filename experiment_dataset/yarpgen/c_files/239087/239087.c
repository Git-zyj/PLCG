/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 -= (((((!(arr_3 [i_0] [i_1] [i_0]))))) & var_17);
                var_20 = (((arr_3 [i_0] [i_0] [i_0]) | (~3890138213)));
                var_21 *= (arr_1 [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_22 = (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_1] [i_2] [i_3]) : (arr_7 [i_0] [i_1] [i_2] [i_2])));
                        var_23 -= (arr_6 [i_2] [i_2]);
                    }
                    var_24 = (((arr_6 [i_0] [i_1]) <= var_1));
                    var_25 &= (((arr_7 [i_0] [i_0] [i_1] [i_2]) ? (arr_7 [i_0] [i_1] [i_2] [14]) : (arr_0 [i_2])));
                }
                var_26 = (min(var_26, ((min((((((max(var_18, (arr_6 [i_1] [i_1])))) | (arr_5 [i_1] [i_1])))), (((((min((arr_6 [i_1] [i_1]), (arr_3 [i_1] [i_1] [i_0]))))) | ((~(arr_4 [i_0]))))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    arr_17 [i_4] = ((((404829085 ? var_0 : (arr_10 [i_4] [i_4]))) << ((((((~(arr_9 [i_5]))) + 232)) - 40))));
                    var_27 += ((!(((arr_15 [i_6] [i_5] [i_4]) > ((var_13 & (arr_10 [i_4] [i_5])))))));
                    var_28 = (((arr_9 [i_6]) ? (((arr_15 [i_4] [i_5] [i_4]) | (arr_15 [i_4] [i_4] [i_6]))) : ((((max(var_6, (arr_11 [i_6])))) ? ((var_17 & (arr_12 [i_6] [i_4]))) : (~var_6)))));
                }
            }
        }
    }
    #pragma endscop
}
