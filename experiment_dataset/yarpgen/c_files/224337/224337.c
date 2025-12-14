/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = 1;
                var_14 |= (--64429);
                arr_7 [i_0] [1] = ((15398992342944017534 ? (~1) : (max((var_7 >> 1), (max(var_8, var_10))))));
                var_15 *= var_7;
                arr_8 [i_0] [i_0] [i_1] = (max(((var_5 ? (((arr_5 [i_0 - 1] [i_1] [i_0 - 1]) ? var_8 : var_11)) : (((max(var_9, var_10)))))), (((((max(var_1, var_1))) + var_11)))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_16 = var_11;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_17 = var_2;
                        var_18 = 1111105410;
                        arr_18 [i_4] [i_4] = ((var_9 ? (arr_16 [i_2] [i_3] [i_4] [i_5]) : 1));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_19 ^= var_9;
                                var_20 = (min(var_20, var_11));
                                arr_24 [i_2] [i_3] [i_4] [4] [i_7] [i_3] = -1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_21 = ((~((0 ? 61698 : (arr_30 [i_2] [i_3] [i_4])))));
                                arr_31 [i_2] [i_9] [i_4 + 1] [i_9] [i_2] = (((((var_10 ? var_6 : (arr_21 [i_2] [i_3] [i_4] [i_2])))) ? 65002 : var_3));
                                var_22 = (((var_7 ? var_7 : var_5)));
                            }
                        }
                    }
                }
            }
        }
        arr_32 [i_2] = 1;
        var_23 = (max(var_23, var_10));
    }
    var_24 = (max(var_24, 64980));
    #pragma endscop
}
