/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1620706186564228832;
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((max(((max(48135106, (arr_2 [i_0] [i_2] [i_2])))), (var_5 % 1))))));
                    arr_8 [i_1] = ((!((((-50 ? var_4 : 54))))));
                    var_15 = arr_4 [i_2] [i_1] [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [9] [14] [i_3] [i_1] = min(((54 ? 8282997122039701118 : -50)), 8282997122039701118);
                                arr_16 [i_1] [9] [10] [i_3] [i_2] = 1;
                            }
                        }
                    }
                    var_16 = (min((((arr_12 [i_0] [i_0] [i_1] [i_1] [i_2]) ? var_7 : (12 == var_7))), 50));
                }
            }
        }
    }
    #pragma endscop
}
