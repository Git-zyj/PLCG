/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_0] = 1;
                    arr_7 [i_1] [i_0] = (((((1 ? 39142715481737623 : var_4))) ? 1 : (~var_4)));
                }
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] = (((((-39142715481737612 ? (((var_7 ? var_0 : var_14))) : (var_11 / var_7)))) ? ((~((-39142715481737623 ? (arr_5 [i_0]) : (arr_9 [i_1 + 1] [i_3] [i_0]))))) : var_2));
                                var_15 = var_10;
                                arr_18 [i_0] [i_0] [i_0] [i_4] [i_5] [i_3 - 2] = arr_5 [i_0];
                            }
                        }
                    }
                    var_16 = (((!var_12) && (((var_0 || var_13) || 9516))));
                }
                var_17 = (arr_2 [i_0] [i_0] [i_0]);
                arr_19 [i_0] = ((+(((var_12 * 20637) ? (93 * var_8) : -var_9))));
                arr_20 [i_0] = (arr_9 [i_0] [i_0 + 2] [i_0]);

                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    var_18 ^= arr_3 [i_1 - 1] [i_1] [i_6];
                    var_19 = var_0;
                }
            }
        }
    }
    var_20 = (min(var_20, ((((((((min(1376085885, var_6))) ? 20944 : var_1))) * var_6)))));
    #pragma endscop
}
