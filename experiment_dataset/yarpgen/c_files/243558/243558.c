/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(~var_12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = (+((-((var_10 ? (arr_7 [i_2] [i_0] [i_0]) : 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = (12740965810522540568 ^ 10823567622946702136);
                                var_21 ^= var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 *= ((((var_0 - 255) - ((var_17 ? var_18 : var_15)))) - ((((((1 ? 3663137447292395598 : 12740965810522540574))) ? ((max(1, 1))) : var_13))));
    #pragma endscop
}
