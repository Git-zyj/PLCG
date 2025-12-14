/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 ^= (min(var_0, (((((((arr_12 [i_0] [i_2] [i_3] [i_4]) / 18298))) ? ((31 ? 42061 : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((arr_2 [i_0]) ? -83 : 1262337290)))))));
                                arr_14 [i_4] [i_4] [i_4] [i_3] [i_0] [i_4] = ((((((arr_6 [i_0] [i_2 - 3] [i_2]) * (arr_6 [i_0] [i_2 - 1] [i_2 - 1])))) ? ((-(arr_6 [i_0] [i_2 - 2] [i_2 - 2]))) : ((-(arr_6 [i_0] [i_2 - 2] [i_2])))));
                            }
                        }
                    }
                }
                var_18 = 16383;
                var_19 = ((((min(4294967295, (arr_9 [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 1])))) ? (~40) : (((((~(arr_7 [i_0] [i_1] [i_0])))) - ((-2112889998 ? var_15 : (arr_6 [i_0] [i_0] [i_1 + 1])))))));
            }
        }
    }
    var_20 = (var_4 ? var_0 : var_4);
    var_21 = (max(var_21, 1792));
    #pragma endscop
}
