/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((var_4 >= (((var_12 > 5462024633872646159) | var_12)))))));
                    var_15 = (~((max(var_3, var_1))));
                }
            }
        }
    }
    var_16 = (max(var_16, ((((((var_9 ? (max(var_5, 4283632446)) : var_7))) * 6205829553530007058)))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((-10 ? var_4 : (arr_18 [i_4 + 1] [i_6] [i_6 + 2] [i_6] [i_7 + 1] [i_7 + 1])))))));
                                var_18 = ((!(!var_11)));
                                arr_20 [0] [i_4] [i_5] [1] [1] = ((~((0 ? 1 : var_8))));
                            }
                        }
                    }
                    var_19 = var_6;
                }
            }
        }
    }
    var_20 = (min(var_8, var_1));
    #pragma endscop
}
