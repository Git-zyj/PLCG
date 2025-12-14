/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((~(((arr_0 [i_4] [i_0]) / 3525366467721384324))))));
                                var_16 = (max(var_16, var_6));
                                var_17 = (((((arr_8 [20] [i_3 - 1] [i_3] [i_2] [i_1 - 2] [i_0 - 1]) - 4294967295)) - (((max(1, (arr_8 [i_0] [4] [i_2] [i_2] [i_3 + 1] [i_4])))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] = (((-(arr_0 [i_0] [i_0]))));
                }
            }
        }
        var_18 |= var_13;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_19 = ((-(~0)));
                    arr_20 [i_6] [i_0] [8] = ((-(-6869 / var_1)));
                }
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
