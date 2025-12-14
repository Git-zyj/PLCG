/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((!var_11) ? var_10 : (-2147483647 - 1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_13 += var_5;
                        var_14 = (var_5 + (!2047611559));
                        arr_9 [i_0] = ((var_3 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_1] [4])));
                        var_15 &= (arr_3 [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_16 += (arr_1 [i_2]);

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            var_17 = var_2;
                            var_18 = (!(arr_12 [i_0] [i_1] [10] [i_0] [11]));
                            var_19 ^= ((~((var_4 ? 18446744073709551615 : var_1))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            var_20 ^= (3104007819173597482 && 2047611559);
                            arr_19 [i_0] = -22603;
                            arr_20 [i_0] [10] [i_4] [4] [i_4] = (var_11 || var_6);
                        }

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_21 += 22603;
                            var_22 = (((((min(22603, (arr_17 [i_0] [i_0] [2])))) ? (max(127, var_2)) : (max(127, 21930)))));
                            var_23 = 22591;
                        }
                    }
                    var_24 += ((max(15342736254535954141, (!3758096384))) & var_3);
                }
            }
        }
    }
    var_25 = var_0;
    var_26 = 37900;
    var_27 = var_5;
    #pragma endscop
}
