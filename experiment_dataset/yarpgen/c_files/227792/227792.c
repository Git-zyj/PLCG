/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (min(var_10, (((-1 - 1) ? (arr_2 [i_2 - 1]) : ((min((arr_0 [i_0]), (arr_1 [i_2 - 1]))))))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_0] [16] = arr_5 [i_3] [i_2];

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            var_16 ^= ((max(((var_3 ? 1 : (arr_1 [i_2 + 2]))), (arr_4 [i_0] [i_0] [i_0]))));
                            var_17 = (max(var_17, (arr_6 [i_0] [i_1] [i_4 + 1] [22])));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            var_18 += ((~(arr_7 [i_5] [i_5 - 2] [i_5])));
                            arr_16 [i_5 - 1] [i_3] [i_3] [i_1] [i_1] [i_1] [17] = ((25 ? (arr_4 [i_2 - 1] [i_2] [i_2 + 1]) : (arr_1 [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
