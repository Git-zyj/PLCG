/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (var_4 ^ -1);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_17 = (min(944468450, 0));
                            var_18 = (min(7583189138231618046, (((var_0 ? 1 : 63488)))));
                            var_19 = ((~(max(1, (min(-21583, 10))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = ((1 ? 1 : 1));
    #pragma endscop
}
