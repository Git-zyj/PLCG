/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 ^= (min(70368744177663, (((arr_5 [i_2 + 1]) << (arr_7 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = 5177014102607600970;
                                arr_14 [i_1 - 2] [i_3] [i_3] = arr_6 [i_1 + 3] [i_3] [i_3 + 1] [i_3];
                                arr_15 [i_0] [i_3] [i_2] [i_3 + 1] [i_4] = (max((max((min(var_4, (arr_6 [i_0] [i_0] [i_0] [i_0]))), -var_0)), -70368744177664));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_3;
    var_22 = (!-70368744177661);
    #pragma endscop
}
