/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 -= var_2;
                            var_13 = (min(var_13, ((((((748126617 ? 31676 : 883044015719544884))) ? (((arr_10 [i_3 + 3] [4] [i_2]) ? (arr_10 [i_3 + 2] [i_1] [14]) : (arr_10 [i_3 + 3] [i_1] [i_3 + 3]))) : (((max((arr_10 [i_0] [i_0] [i_0]), var_5)))))))));
                        }
                    }
                }
                arr_12 [i_1] [i_0] = (((max(64, (arr_10 [i_0] [i_1] [i_1]))) < 2496175661));
            }
        }
    }
    var_14 = (max(var_14, var_9));
    var_15 = ((!(((-1516161976 / ((var_10 ? var_5 : var_4)))))));
    var_16 *= (max(-31, -883044015719544891));
    #pragma endscop
}
