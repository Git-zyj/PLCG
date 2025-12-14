/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 -= (((arr_0 [i_0] [i_0]) / 30));
        var_18 = 16994124146760139532;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = (707059531 ^ (min((((var_13 >= (arr_3 [i_1] [i_1])))), 388904202)));
        arr_4 [i_1] = ((((((-65526 + 2147483647) << ((((((26 ? -1 : -103)) + 4)) - 3))))) ? (arr_1 [i_1]) : ((max((arr_3 [i_1] [i_1]), (arr_0 [i_1] [i_1]))))));
        var_20 = (min((((-(arr_0 [i_1] [i_1])))), 35184372088831));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_21 = (((61556 ? 3906063093 : 7)));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_22 = ((arr_10 [i_3 - 2] [i_3] [i_3 - 2]) ? (arr_5 [i_3 - 1] [i_2]) : (arr_5 [i_3 + 1] [7]));
                    var_23 ^= var_12;

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_24 = (arr_9 [i_3 - 1] [i_3]);
                        var_25 = (arr_15 [i_5] [i_5] [i_4] [i_5] [i_2]);
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_26 = -var_7;
                        var_27 &= (((arr_15 [i_3 - 1] [i_3 + 3] [i_3 + 3] [i_3 + 2] [i_3]) & (arr_15 [i_3 - 1] [i_3 + 3] [i_3 - 1] [i_3 + 3] [i_3])));
                    }
                }
            }
        }
    }
    var_28 = (min(var_0, (min((((var_3 ? var_0 : var_5))), var_7))));
    #pragma endscop
}
