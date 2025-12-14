/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (max(0, var_5));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_11 = (((1 ? 1 : -20492)));
                            var_12 = (((var_5 > var_8) != var_1));
                            var_13 ^= var_3;
                        }
                    }
                }
            }
        }
    }
    var_14 = var_8;
    #pragma endscop
}
