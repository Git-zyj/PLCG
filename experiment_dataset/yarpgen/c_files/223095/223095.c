/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] = max(27, 2997945921444901673);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = var_2;
                                var_17 = (max((((-var_6 + 2147483647) << (((((arr_3 [i_1] [i_3]) << (2522901761 - 2522901749))) - 1085165568)))), (arr_12 [i_4 - 2] [i_2] [i_2] [i_1] [16])));
                                var_18 = ((((min((arr_7 [i_3 + 3] [i_0] [i_0 - 2]), (arr_7 [i_0 - 3] [i_0] [i_2])))) ? 82 : 72));
                            }
                        }
                    }
                    var_19 = (arr_0 [19]);
                    var_20 = (min(var_20, ((min((max((arr_5 [i_0 + 1]), (((var_2 << (arr_1 [16] [i_1])))))), (arr_5 [i_0 - 2]))))));
                }
            }
        }
    }
    var_21 += ((-9223372036854775807 - 1) ? var_14 : (--170));
    #pragma endscop
}
