/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = (min((((8 - (arr_3 [i_0] [i_1])))), ((127 + (!2648730273137140447)))));
                arr_7 [i_0] [i_1] = 8357384025628472652;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] = ((((-(var_0 << 1))) << (var_2 + 25854)));
                                var_10 = ((((min(((-(arr_17 [i_1] [i_3 - 4] [i_1] [i_1] [i_0]))), var_2))) & (arr_9 [i_3 + 1] [i_1 + 2] [i_1 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_22 [i_5] = var_0;
        var_11 = var_2;
        var_12 -= ((54 ? var_4 : var_7));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    arr_28 [i_5] [i_5] [10] [i_7] &= 3042068902618642839;
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                arr_33 [i_5] [i_6] [i_7] [i_9] [i_5] |= 18;
                                arr_34 [i_5] [i_6] [i_7] [i_6] = 30;
                            }
                        }
                    }
                    arr_35 [i_5] [i_6] [i_7] = (((var_9 ? 15404675171090908765 : 2648730273137140447)));
                    arr_36 [i_7] [i_6] [i_5] = 9223372036854775807;
                }
            }
        }
    }
    var_13 = ((var_1 ? (min(-6463834830483557592, var_8) : (var_1 > var_8))));
    #pragma endscop
}
