/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [13] [i_2] [i_3] [i_0] = (max((arr_7 [i_0 - 2] [i_4 - 1] [17]), ((((arr_11 [i_1 - 1] [i_1 + 1] [i_0 - 2] [i_0 - 2]) == (~var_12))))));
                                arr_15 [i_0 - 1] [16] [i_0] [i_0] [i_3] [15] = var_3;
                            }
                        }
                    }
                    var_20 = 3109907848;
                    var_21 = (((((var_18 ? (arr_11 [i_1 + 1] [i_1 - 1] [i_0 + 3] [i_0 + 1]) : (arr_11 [i_1 + 1] [i_1 - 1] [i_0 + 3] [i_0 + 1])))) ? (~-2108051915) : (3697 != 192)));
                }
            }
        }
    }
    var_22 = (((min((((-580800719 ? var_0 : var_5))), var_12))) ? ((max(var_4, (var_2 * var_7)))) : (max(var_12, (!var_11))));
    var_23 = 20;
    #pragma endscop
}
