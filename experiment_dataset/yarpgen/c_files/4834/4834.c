/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= 1887121763;

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_3 [1] = (min((((((-4357424918220776269 ? 474150816 : 64418))) ? var_3 : var_3)), (((((max(0, 64418))) == ((87 ? var_6 : 10)))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_8 [6] [6] [i_0] |= (min(((max(-112, 1117))), (((((arr_1 [i_1]) >= var_9))))));
            arr_9 [1] = (arr_4 [i_0 - 1]);
            arr_10 [0] [0] [0] = ((var_4 << ((((var_8 % (((var_3 ? var_1 : var_4))))) - 167))));
        }
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_14 [i_2] = (((4238924521 - var_7) + (((max(var_0, var_4))))));
        arr_15 [i_2] = ((-(min(1118, -1877719802119752147))));
        arr_16 [i_2] = ((min(4238924521, ((min(67, 60722))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                {
                    arr_23 [i_4] [i_4] [i_4] = 0;
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_30 [i_3] [i_4] [i_5 - 2] [i_3] [i_7] [i_3] = (~-67);
                                arr_31 [i_4] = ((~(arr_24 [i_5 + 2])));
                                arr_32 [i_7] [i_4] [i_4] [i_4] [i_3] [i_3] = var_7;
                            }
                        }
                    }
                    arr_33 [i_4] [i_4] = (var_5 ? var_9 : var_3);
                    arr_34 [i_3] |= 1;
                    arr_35 [i_5 - 1] [i_4] [i_4] [3] = ((var_4 ? ((~(arr_29 [i_3] [i_4] [i_4 + 3] [i_5 - 2] [i_4]))) : (-27724 ^ 65507)));
                }
            }
        }
        arr_36 [i_3] [i_3] = var_9;
    }
    #pragma endscop
}
