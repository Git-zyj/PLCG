/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 601113619;
    var_17 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [9] [i_4] = ((((((arr_12 [i_1] [i_4 + 1] [11] [i_3] [i_1 - 2] [i_3] [i_3]) ? (arr_8 [i_1 - 2]) : (arr_8 [i_1 - 2])))) ? ((((arr_13 [i_1 + 2] [i_1]) + (arr_5 [i_1 + 2] [i_4 + 1] [i_4])))) : ((-22893 ? 3716063840 : 32767))));
                                var_19 = (max(var_19, ((((((-107 ? var_5 : -4457))) ? (arr_13 [i_1 + 3] [i_3]) : (((((var_1 ^ (arr_1 [1])))) ? (!-25) : (arr_13 [i_1 - 2] [i_3]))))))));
                            }
                        }
                    }
                    var_20 = ((((-32752 == (arr_6 [i_1 + 4] [i_1 + 2]))) ? ((max(((max(var_11, -25))), (arr_5 [i_0] [12] [i_2])))) : (max((arr_10 [i_1] [i_1 + 4] [i_2] [i_2] [i_1 + 1]), var_13))));
                }
            }
        }
    }
    #pragma endscop
}
