/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -103;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 -= var_15;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_18 -= ((+((((~var_10) < (((var_0 || (arr_9 [i_0] [10] [14] [i_3])))))))));
                            var_19 = (max(var_19, ((((var_9 ^ 49) == var_12)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
