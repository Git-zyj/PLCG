/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = ((~(arr_4 [i_1] [i_0] [i_0])));
                var_21 ^= arr_2 [i_0];
                arr_5 [i_0] [i_0] [i_0] = (max((arr_2 [i_0]), ((((arr_4 [i_0] [i_0] [i_0]) + (arr_4 [i_0] [i_1] [i_0]))))));
                var_22 = ((-(~var_7)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((((((-(arr_7 [i_3 - 3] [i_2] [i_2] [i_3 + 4]))) + 2147483647)) << (((((((-(arr_4 [i_0] [i_0] [i_0])))) + 7211)) - 5))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (((((~(arr_2 [i_3 - 3])))) ? -var_13 : (((arr_8 [i_3 - 2] [i_2]) / (arr_2 [i_3 - 3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((~(max((!var_17), (~var_15)))));
    #pragma endscop
}
