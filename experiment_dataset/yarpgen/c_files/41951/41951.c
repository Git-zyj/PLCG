/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_1;
    var_14 ^= var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = ((~((((max(-104, 203))) ? (max(-950568502, 65535)) : ((0 ? 34484 : -95))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 -= (max(((min(var_3, ((min(-104, 95)))))), (-9223372036854775805 - -1969)));
                            var_17 -= ((var_11 - ((var_6 ? 75 : 3))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
