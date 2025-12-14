/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = (max((var_4 % var_0), ((((((-127 - 1) + 2147483647)) << (((((-9223372036854775798 - -9223372036854775794) + 35)) - 31)))))));
                    var_12 = (((var_1 & var_3) >> ((((var_2 >> (2864183325 - 2864183321))) - 904))));
                    arr_7 [i_0] [9] = ((var_4 % (((var_1 ? var_10 : var_7)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_13 = var_11;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_14 = (min(((min(var_6, var_0))), (((var_2 ? var_0 : var_0)))));
                                arr_20 [i_4] [4] = ((((((6283 ? 0 : 2864183330)) == var_6)) ? (var_2 ^ var_3) : var_7));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 6;i_8 += 1)
                        {
                            var_15 = var_6;
                            var_16 = ((var_2 ? var_8 : ((30361 ? ((min(var_10, var_8))) : var_2))));
                        }
                        var_17 = (((var_1 < var_9) | ((var_1 ? var_8 : var_5))));
                        var_18 = (var_0 % var_7);
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_19 = (((var_7 | var_8) ^ ((max(var_8, var_2)))));
                                var_20 *= (((var_8 >= var_9) ? var_0 : -8453102831215567733));
                                var_21 -= (min(((var_5 | (var_9 - var_4))), var_7));
                                var_22 = (((var_0 / (((var_4 ? var_1 : var_9))))));
                            }
                        }
                    }
                    var_23 = (max(var_23, (min(2864183305, -7955))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                {
                    var_24 = ((((min(var_3, var_1))) & var_10));
                    var_25 = (min(((max(var_2, var_5))), ((var_8 ? var_7 : var_6))));
                    arr_40 [i_11] [i_13] [i_13] [i_12] = ((((var_6 % ((var_5 ? var_7 : var_11)))) % ((var_6 ? var_3 : var_6))));
                    var_26 = ((var_8 & ((var_10 | (var_4 / var_6)))));
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                arr_47 [i_11] [5] [i_11] = (((var_4 * (((min(var_7, var_8)))))));
                                var_27 = ((((max(var_2, var_2))) ? (var_8 <= var_2) : (var_9 || var_10)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
