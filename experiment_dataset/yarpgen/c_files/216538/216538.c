/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_16));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (((arr_4 [i_2] [i_2] [i_2 + 1]) > (6 % var_17)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_0] = ((((min((arr_7 [i_2 - 3] [i_2 - 3]), (arr_7 [i_2 + 1] [i_4])))) ? ((-(arr_7 [i_2 + 1] [i_2 + 1]))) : (((arr_0 [i_2 - 1] [i_2 + 1]) ? (arr_7 [i_2 - 3] [i_2 - 3]) : (arr_0 [i_2 - 3] [i_2 - 3])))));
                                var_22 = ((!((min((((arr_9 [i_4] [9] [i_2 + 1] [i_1] [i_0]) ? 31 : var_18)), var_0)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_5] [i_5 - 1] [5] [i_5 - 1] = (min((((arr_8 [i_1] [i_2] [i_2] [i_2] [i_2 - 3]) ? 1729224314049030185 : 7340032)), (((((((arr_16 [i_0] [i_1] [i_2] [i_1] [i_6] [i_6] [i_2]) ? 124 : (arr_3 [i_0])))) ? ((-1 ? var_3 : var_8)) : 2314773597)))));
                                var_23 ^= (arr_0 [i_0] [8]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = min((((var_5 ^ (((715586495 ? var_19 : var_19)))))), var_18);
    #pragma endscop
}
