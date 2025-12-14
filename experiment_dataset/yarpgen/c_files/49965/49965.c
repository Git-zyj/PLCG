/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (((arr_7 [i_0] [i_1] [i_2] [i_3]) ? (arr_7 [i_0] [i_1] [i_2] [i_1]) : var_9));
                        arr_11 [i_1] [i_2] [i_1] = (arr_3 [i_2] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_1] [8] [i_2] [i_2] = 32767;
                        arr_17 [i_0] [i_1] [i_2] [i_4] |= ((1 ? (((arr_8 [i_0] [i_1] [i_0] [19] [i_4] [i_4]) ? 32750 : var_12)) : (((-5545824168943068458 ? var_2 : (arr_15 [i_0] [i_2] [i_4] [i_4] [i_4] [i_1]))))));
                        var_15 |= ((~(arr_0 [i_1] [i_2])));
                        var_16 *= (!-5545824168943068453);
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, 32767));

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            arr_22 [4] [i_6] [i_0] [i_5] [i_6 + 1] &= 0;
                            arr_23 [i_1] [i_1] [i_2] [i_1] [i_1] [i_5] = var_14;
                            var_18 = var_3;
                            arr_24 [i_6] [14] [i_1] [i_1] [i_0] = 3346271416;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_19 = (min(var_19, var_9));
                            arr_27 [i_1] [i_2] [i_2] [i_2] [i_2] = (((arr_1 [i_1]) ? (((!(arr_9 [i_0] [i_0] [i_1] [i_2] [i_5] [i_7])))) : var_10));
                            arr_28 [i_5] [i_5] [i_5] [i_0] [i_5] &= (arr_26 [4] [i_0] [i_2] [i_2]);
                            arr_29 [i_0] [i_1] [i_1] [i_5] [17] [4] [i_0] = ((arr_5 [i_5] [i_2]) == (arr_3 [11] [20]));
                            arr_30 [i_0] [i_2] [i_1] = arr_25 [i_7] [i_1] [1];
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_33 [16] [i_1] [i_0] [i_1] [i_1] [12] |= arr_21 [i_0] [i_1] [i_0] [i_5] [i_8];
                            var_20 ^= ((+((var_2 ? (arr_7 [i_1] [i_2] [i_5] [1]) : var_5))));
                            arr_34 [i_1] [i_1] [i_2] [i_5] [i_8] [i_2] [i_2] = var_4;
                        }
                        arr_35 [i_1] [i_1] [i_5] [i_5] = ((var_9 ? (arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5]) : (!var_11)));
                        arr_36 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1] = 111;
                    }
                    var_21 = (min(var_21, (arr_20 [i_0])));
                }
                var_22 = (min(var_22, (arr_18 [i_0] [i_1])));
                arr_37 [4] [i_0] [i_0] |= (min(((min((arr_8 [7] [i_0] [11] [i_1] [3] [i_1]), var_10))), (((arr_8 [i_0] [i_0] [i_0] [i_1] [4] [i_1]) ? var_4 : var_12))));
            }
        }
    }
    var_23 = var_0;
    #pragma endscop
}
