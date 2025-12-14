/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(1040384 + var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = var_10;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_14 [i_4] [i_3] [i_2] [i_0] = (max((((235 ? (arr_11 [i_2 - 3] [i_2 - 1] [i_2] [i_2 + 1] [i_2]) : (arr_12 [i_0] [i_1] [12] [i_2 - 2] [i_3] [i_4])))), (max((max(var_8, (arr_9 [i_4] [i_0]))), (((var_4 ? 140 : (arr_7 [i_2] [i_2] [i_2] [i_1]))))))));
                            arr_15 [i_0] [i_0] [i_2 - 3] [i_0] [i_1] [i_3] = (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            var_13 = (((((~1) + 2147483647)) >> (arr_7 [i_4] [i_3] [i_1] [i_0])));
                        }
                        var_14 = (~(((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_3] [i_3]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
