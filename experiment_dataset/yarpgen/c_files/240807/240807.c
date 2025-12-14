/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (arr_3 [i_1 + 3])));
                                var_13 = ((((3559562621 ? var_3 : var_3))) ? ((((((max((arr_4 [14] [9] [12]), var_2))) && 35184372086784)))) : (arr_3 [i_0]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_14, ((max(-2045142763, 88)))));
    #pragma endscop
}
