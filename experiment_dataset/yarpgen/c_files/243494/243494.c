/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_0] [i_1] [i_0] = ((3072 ? (min(5733944282038156570, 12712799791671395045)) : 134217727));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_3] [i_2] = ((3581030956944922284 ? 2055100632 : 1));
                                var_12 = arr_5 [i_1 - 1] [i_3 + 1];
                            }
                        }
                    }
                    var_13 = (max(var_13, ((((((-1105758232 ? (!var_5) : var_9))) || var_6)))));
                }
            }
        }
    }
    var_14 = (max(var_1, (min(((0 ? 12393890691965405590 : 34359738367)), ((max(1, var_6)))))));
    #pragma endscop
}
