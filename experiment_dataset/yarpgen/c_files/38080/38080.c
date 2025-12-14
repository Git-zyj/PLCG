/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max((((var_3 + var_9) ? var_7 : 1793848699)), ((min(var_4, (~var_2)))))))));
    var_11 = 13964;
    var_12 = -8576632646806834646;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((1 <= ((~((5240306279317975553 ? 1157310613977907835 : var_9)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_14 ^= (((!13977) <= ((~((51571 ? -24777 : 8191))))));
                            var_15 ^= (arr_1 [i_0 + 2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_14 [i_5] [i_0] [i_5] [i_5] [i_5] [i_5] = (((((((~(arr_2 [i_1]))) ^ (~var_3)))) ? 1074559168 : 24777));
                            var_16 = -4922;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
