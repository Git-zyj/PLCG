/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 ^= (max((arr_0 [i_1] [9]), ((((max((arr_0 [i_0] [i_3]), 32)) <= (arr_6 [i_0] [i_1 - 1] [i_2] [i_3]))))));
                            var_18 |= (max(16845, (arr_3 [15])));
                            var_19 = ((((min(16845, 15))) / (max(((var_0 ? (arr_8 [10] [i_3] [i_2] [i_3] [i_0]) : (arr_8 [i_3] [i_3] [i_0] [i_3] [i_0]))), (arr_2 [i_0] [i_1] [i_2])))));
                            arr_11 [i_0] [i_1] [i_3] [i_1] = ((var_6 >> (((((arr_2 [i_1 + 1] [i_2] [i_3]) & (arr_7 [i_2] [i_0]))) - 105))));
                        }
                    }
                }
                arr_12 [i_0] = ((((arr_8 [i_1] [i_0] [10] [i_0] [i_0]) ? (arr_8 [i_1 - 1] [i_0] [i_1 + 1] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))));
            }
        }
    }
    #pragma endscop
}
