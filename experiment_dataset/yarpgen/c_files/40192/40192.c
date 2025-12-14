/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 ^= ((~(((arr_5 [i_0] [i_1] [i_2 - 2]) ? (arr_5 [i_2] [i_1] [i_0]) : 4294967295))));
                    var_21 = (~4294967295);
                    var_22 = (~0);

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_23 = (min(var_5, ((((arr_4 [i_0] [i_1] [i_2]) != (arr_4 [14] [i_1] [i_2 + 2]))))));
                        arr_10 [i_3] [i_3] [i_3] [6] = -539477520;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_4] = 2432883226483280329;
                        arr_15 [i_0] [i_1] [i_2] = (((arr_1 [i_0]) * var_9));
                        arr_16 [i_0] = 5;
                    }
                    var_24 = (((((((arr_8 [0]) ? var_13 : var_14)))) << (((var_14 && (arr_9 [11] [i_2] [i_1] [i_2 + 2] [i_2] [i_0]))))));
                }
            }
        }
    }
    var_25 = var_0;
    var_26 &= var_18;
    #pragma endscop
}
