/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 = 25247;
                            var_20 = (arr_2 [i_0 - 1]);
                            var_21 = var_17;
                        }
                    }
                }
                var_22 += ((-((1 ? 50046 : 10515824618746408317))));
                var_23 = (min(var_23, (15507 - 1553836841)));
            }
        }
    }
    #pragma endscop
}
