/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [12] [12] |= (!-58);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 += ((!(var_19 != var_0)));
                    arr_11 [i_1] = (arr_10 [i_0] [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_14 [i_0] [i_1] [i_3] [i_3] = (((arr_2 [i_0 + 1]) + var_8));
                    var_21 = var_3;
                    var_22 = (min(var_22, (((var_0 + (arr_8 [i_0] [i_1] [i_1] [i_3]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 7;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            {
                arr_23 [2] [2] &= ((+(((2010706359747940335 * var_15) / (max(2010706359747940346, 231))))));
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 7;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_32 [i_4] [i_5 - 1] [i_6] [i_4] = (((var_19 % var_5) % (arr_26 [i_4 - 1] [i_5 - 3] [i_6 + 3] [i_8] [i_8])));
                                var_23 = (max(var_23, var_6));
                                arr_33 [6] [i_5 + 1] [i_6] [i_7] [4] [4] &= (arr_13 [i_7] [i_5 - 2]);
                                arr_34 [4] [i_5] [4] |= (((((((var_12 ? (arr_17 [0] [i_8]) : var_13)) >> (min((arr_24 [2] [i_7]), var_5))))) ? (arr_10 [i_8] [i_7] [i_5]) : ((((((arr_1 [i_7] [i_6]) / (arr_4 [i_4])))) ? ((-(arr_6 [i_7]))) : var_1))));
                                var_24 = (((((!var_5) + ((-9223372036854775798 ? var_15 : var_0)))) != var_8));
                            }
                        }
                    }
                }
                var_25 = ((((max((var_9 % var_3), ((max((arr_25 [i_5]), var_14)))))) ? (!9223372036854775807) : var_19));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                var_26 += (min((arr_8 [5] [i_9 - 1] [i_9 - 1] [i_9 - 1]), (max(var_2, var_4))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_27 = ((var_0 && (((((arr_5 [i_9] [20]) % var_8))))));
                            var_28 -= var_3;
                            arr_46 [i_9 - 1] [18] [i_11] [i_9] [20] = ((var_8 ? (((((var_2 ? var_9 : var_0))) ? var_12 : (arr_4 [7]))) : 2010706359747940345));
                            var_29 = (max(var_29, ((((var_12 | (arr_3 [i_9 - 1])))))));
                            arr_47 [i_9] [i_10] [i_9] [i_12] = (-var_9 ? (min((arr_40 [i_9 - 1]), (arr_6 [5]))) : var_9);
                        }
                    }
                }
                var_30 = (max(var_30, -186));
                var_31 = var_4;
            }
        }
    }
    var_32 = (((min(var_8, var_19))));
    #pragma endscop
}
