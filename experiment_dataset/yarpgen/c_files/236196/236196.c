/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(3349424204060312142, 8840931165632882165))) ? ((var_16 ? (min(var_8, 6772422796215102572)) : 15619343410407534549)) : (min(16454144043394992339, (var_1 + var_16))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) || var_16));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] = ((arr_2 [i_1 + 1]) ? (arr_3 [i_2 + 1] [i_0 + 1]) : ((4317084203363437025 ? var_17 : 14957599118163514669)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_4] = -var_19;
                                var_22 = (min(var_22, (arr_11 [i_0] [i_1] [i_2 + 1])));
                            }
                        }
                    }
                    var_23 = (max(var_23, (~var_6)));
                    arr_16 [i_0] = ((var_0 < ((var_16 ? (arr_2 [i_2]) : (arr_7 [8] [i_1] [i_1 + 1] [i_1 + 1])))));
                    arr_17 [i_0] [i_0] [i_2] = ((var_4 % var_15) ? 3349424204060312142 : var_6);
                }
                var_24 *= (-(arr_7 [3] [i_0] [i_0 + 1] [i_0 + 1]));
                var_25 = var_4;
                arr_18 [12] &= (((((min(var_1, var_5))) ? (max(var_0, (arr_13 [i_0 + 1] [i_0] [i_0]))) : -2827400663302017066)) & ((-(((arr_14 [i_0] [i_0] [13] [18] [i_0] [i_0] [i_0]) ? (arr_5 [14] [i_0 - 1] [i_1 - 1] [i_1]) : var_0)))));
            }
        }
    }
    #pragma endscop
}
