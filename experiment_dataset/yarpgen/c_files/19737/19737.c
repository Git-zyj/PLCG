/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((((var_7 ? var_11 : 16528522125747541331)) < (var_5 | var_3)))), var_3));
    var_19 *= var_8;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = (!-6470717069350316213);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] [i_2] = -var_9;
                                var_21 = (((((6470717069350316209 ? var_7 : 255))) ? (arr_8 [i_0] [i_0 - 4] [i_4 - 1] [i_4 + 2]) : (((arr_8 [i_0] [i_0 - 3] [i_4 + 2] [i_4 + 3]) ? (arr_8 [i_0 - 3] [i_0 + 1] [i_4 - 1] [i_4 + 1]) : (arr_8 [i_0] [i_0 - 4] [i_4 + 2] [i_4 - 1])))));
                                arr_15 [i_0] [i_0] [i_1] [i_0] = var_1;
                                var_22 = ((((11976027004359235402 || (-127 - 1))) || 15));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
