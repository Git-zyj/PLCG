/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 = var_13;
                            var_18 = (max(var_18, (((20319 ? -98652022 : (((arr_2 [i_0]) ? 48 : ((20313 ? 18446744073709551615 : -18465)))))))));
                        }
                    }
                }
                var_19 = (min(var_19, ((((max(0, 1546655401)) < var_1)))));
            }
        }
    }
    var_20 ^= var_12;
    #pragma endscop
}
