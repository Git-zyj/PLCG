/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (max(var_15, var_13));
                arr_4 [11] [i_1] [i_1] = ((-1608384541 ? ((-(arr_1 [i_1]))) : -118));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_16 = (max(var_16, ((max((~var_3), ((~((~(arr_3 [i_4] [i_3] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_16 [i_6] [0] [i_4] [i_4] [8] = (arr_13 [i_3] [i_3] [i_4] [i_5]);
                                arr_17 [i_6] [i_4] [i_4] [i_4] [14] = (arr_11 [i_2] [i_3] [i_4] [i_5]);
                                arr_18 [i_2] [i_2] [i_4] [10] [i_2] = ((~(arr_14 [12] [i_3] [i_4] [i_5] [i_4])));
                                var_17 = (max(var_17, (min((max((arr_10 [i_2] [i_3] [i_4] [3]), 127)), -117))));
                                arr_19 [i_4] [i_3] [i_4] [i_5] [i_6] = ((((~(arr_6 [i_2]))) <= ((((!(arr_5 [i_2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (var_9 || var_3);
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                var_19 = ((+((((((arr_23 [i_7] [i_8]) << (var_2 - 1525856917)))) ? (arr_15 [i_8] [i_7 + 4] [i_7]) : (arr_10 [i_8] [i_8] [i_7] [i_7])))));
                arr_28 [i_7 - 2] [i_7] &= (((((((arr_22 [i_7 - 2]) / (arr_6 [i_8]))) / var_7)) >> (((0 || (((~(arr_3 [12] [i_7] [i_8])))))))));
            }
        }
    }
    #pragma endscop
}
