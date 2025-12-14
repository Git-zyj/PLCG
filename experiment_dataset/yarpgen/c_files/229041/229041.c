/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(arr_0 [i_0 + 1])));
        arr_3 [i_0 - 1] = var_15;
        arr_4 [i_0] [i_0] = var_16;
        arr_5 [i_0] |= (arr_0 [i_0]);
        var_20 = arr_0 [i_0];
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_16 [i_1] [i_2] [i_3] [i_1] [i_4] = max(((((7168 >= 25165824) == 25165824))), (arr_13 [i_4] [12] [i_2] [i_1]));
                            var_21 = ((~(((arr_6 [i_1 + 2] [17]) | (arr_6 [i_1 + 2] [i_1])))));
                            var_22 = (arr_12 [i_1] [i_1] [i_1 + 4] [i_2]);
                            var_23 *= (arr_11 [i_1] [11] [i_4]);
                        }
                    }
                }
                arr_17 [i_1] = (((arr_14 [11] [i_1 + 4] [i_1 + 4] [2]) & ((((max((arr_9 [i_1 + 4]), (arr_8 [i_1])))) ? (((arr_7 [i_1] [i_2]) ? (arr_10 [i_2]) : (arr_7 [i_1] [i_2]))) : ((var_0 ? (arr_11 [i_2] [i_1] [i_1]) : (arr_1 [i_1])))))));
                var_24 = var_1;
            }
        }
    }
    #pragma endscop
}
