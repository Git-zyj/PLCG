/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((~var_5), ((~(min(var_6, var_13))))));
    var_17 = ((((((var_8 ? var_7 : var_13)))) ? (((var_11 != var_5) & var_13)) : -12898));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = ((!(29 * -3421)));
                                arr_14 [i_2 + 3] [i_0] [i_3] [i_2 + 3] [i_1] [i_0] [i_0] = var_7;
                                var_19 = ((!(((var_1 ? 0 : (arr_7 [i_0] [i_2 + 2] [4] [i_3]))))));
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_0] [i_0] = min(((((3892711164 || (arr_7 [i_0] [i_0] [12] [i_1]))))), (((((~(arr_10 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0])))) ? (((min(-3421, (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]))))) : (min(var_5, 2956523843)))));
                var_20 += ((1578949804 ? (((0 <= 4) << (!-48))) : var_8));
                var_21 = (min(((((((2191053802 ? var_4 : (arr_7 [i_0] [i_1] [i_1] [i_1])))) && ((min(8, 57)))))), (((48 <= 67) / ((min(var_15, (arr_6 [i_0] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
