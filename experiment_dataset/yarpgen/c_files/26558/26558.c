/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = var_5;
                    var_21 += ((((var_11 < (arr_4 [i_2 - 1] [i_2] [i_2 + 1]))) ? (min((arr_7 [i_2 - 2] [i_1] [i_2 + 1]), (arr_4 [i_2 - 3] [i_2] [i_2 + 1]))) : (max(5101710052988045261, -43))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = ((var_5 <= ((((max(var_13, var_16))) ? 1 : (arr_2 [i_1] [i_4])))));
                                arr_15 [i_0] [i_1] [i_1] [i_0] [i_4] &= -49;
                                var_23 &= ((0 ? (~1889530224) : -2067551296));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (var_0 - var_4);
    var_25 = (min((!var_14), ((min(var_8, var_3)))));
    #pragma endscop
}
