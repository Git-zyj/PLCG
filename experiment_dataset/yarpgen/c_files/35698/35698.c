/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (arr_4 [i_0]);
                    arr_7 [i_1] [7] [7] [i_1] = (((((max(var_13, 207))) ? 1 : var_10)));
                    arr_8 [i_0 - 1] [i_1] [i_2 - 1] [i_2 - 3] = ((1 - (max(1842600906, (arr_0 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_2] [i_1] [i_0 + 1] = (((((1 ? 73 : -10016))) ? 30 : var_0));
                                var_21 = ((-(max(-var_15, (arr_5 [i_4 + 1] [i_4] [i_3 - 4] [i_2])))));
                                var_22 = (((((-36 ? 8712876305247380903 : (arr_5 [i_0] [i_1] [i_2] [i_4 - 1]))) ? 39 : ((1 ? 1 : 9113977890437379050)))));
                                arr_14 [15] [i_3] [15] [i_3] [i_4] [i_0 + 1] = ((-9223372036854775804 ? 119 : 8026));
                                arr_15 [i_1] [i_2 - 1] [i_3] [i_4] = (arr_6 [i_2] [6] [i_2]);
                            }
                        }
                    }
                    var_23 = ((((min((arr_2 [i_0 - 2] [i_0]), var_11))) ? ((max((max(var_4, var_18)), (!-2147483645)))) : 65533));
                }
            }
        }
    }
    var_24 -= var_10;
    #pragma endscop
}
