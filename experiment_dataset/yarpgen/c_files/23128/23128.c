/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (arr_3 [i_0] [i_1]);
                var_18 = (((((min(0, 242)) / (((arr_0 [i_0 + 1] [i_1]) + var_10))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_19 += (!((min((arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]), -13754))));
                            arr_12 [i_1] = (var_0 % 4294967295);
                            var_20 = min(-6207748674322164883, 3320267534);
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, var_7));
    #pragma endscop
}
