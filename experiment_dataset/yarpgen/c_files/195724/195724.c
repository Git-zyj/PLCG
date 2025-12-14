/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((13601233549725045459 ? var_1 : (((-2147483647 - 1) & -1844753459))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1 - 2] [i_0] [i_0] [i_0] &= ((((max(var_2, (arr_8 [i_3]))))) ? 2147483647 : ((var_4 ? 243378467 : (arr_2 [i_1 - 3]))));
                            arr_15 [i_3] [i_2] [i_0] = (((arr_10 [i_2] [i_0] [i_0] [i_2]) ? var_10 : ((((((arr_6 [i_1] [i_0] [i_2 + 1]) % -777438432))) & ((243378456 ? var_7 : 5039554821900937393))))));
                        }
                    }
                }
                var_12 = (min(var_12, 2147483647));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_13 = (min(var_13, (((-1228167061 >= ((4051588834 << (var_2 - 1262842783))))))));
        var_14 -= (~var_3);
        var_15 = ((var_8 > (arr_16 [i_4] [i_4])));
    }
    #pragma endscop
}
