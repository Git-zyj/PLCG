/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((((((1 ? 1 : var_16))) ? (1 / var_19) : var_7)) > (~var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max((max(-16752, (arr_5 [i_0 - 1] [i_0 - 1]))), ((1 ? var_16 : (arr_5 [i_0 - 1] [i_0 - 1])))));
                var_21 *= var_8;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_17 [10] [1] [1] [i_3] [4] = 780232634;
                                var_22 = (min(var_22, (((-(~1485094298))))));
                                var_23 = ((max(var_19, ((-(arr_13 [i_0] [i_1] [i_0] [i_3]))))));
                                var_24 ^= ((((~(((arr_10 [i_0] [2] [i_2] [i_3] [i_4]) ? (arr_14 [i_0] [i_0] [i_2] [i_3] [i_4]) : (arr_16 [1] [i_1] [5] [i_3 + 1] [i_4] [i_2]))))) ^ var_9));
                            }
                        }
                    }
                }
                var_25 = (max(var_25, ((((((arr_8 [i_0 - 1] [2] [10]) ^ var_11)))))));
            }
        }
    }
    var_26 = var_4;
    #pragma endscop
}
