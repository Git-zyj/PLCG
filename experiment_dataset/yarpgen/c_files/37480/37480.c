/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = ((!(((-126 ? 268434432 : 49824)))));
                    var_21 &= 171;
                    arr_8 [i_0] |= 119;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((min(17028, 0)))));
                                var_23 = ((-(arr_11 [i_4] [i_1] [i_2] [i_4] [i_4])));
                                var_24 |= ((!((((arr_9 [i_3 - 1] [i_3 - 1] [i_4 + 1] [i_4 + 1]) / ((4294967279 ? var_1 : 92)))))));
                                var_25 = (max(((var_15 ? ((var_13 ? 65535 : 2598501084665184847)) : (max(3471155469, 1048574)))), 18446744073708503041));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
