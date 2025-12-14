/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(max((((-31 + 2147483647) << (1 - 1))), ((44029 << (((-756271331138860688 + 756271331138860713) - 12))))))));
    var_17 = ((6519142977128450640 << (3510073314462624439 - 3510073314462624431)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] = ((11548 < (arr_3 [i_0] [i_1])));
            arr_6 [i_1] [i_0] [5] = (arr_1 [16] [16]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_18 = (arr_12 [i_4] [22] [i_2] [i_0]);
                            arr_16 [19] [i_1] [i_3] [i_2] [i_4] = var_5;
                            var_19 = (arr_3 [23] [i_0]);
                        }
                    }
                }
            }
            var_20 = ((var_3 > (((arr_3 [i_0] [17]) >> (arr_9 [i_1] [i_1 - 1] [13])))));
        }
        arr_17 [i_0] |= (max(-5330583349520875671, (9 ^ 3168840683)));
    }
    #pragma endscop
}
