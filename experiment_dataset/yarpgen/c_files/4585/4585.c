/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_6, 49498));
    var_19 = var_0;
    var_20 = ((((min(var_12, var_8))) != var_2));
    var_21 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = ((((min((arr_1 [i_3 + 3] [i_1 + 1]), (arr_1 [i_3 - 1] [i_1 + 1])))) < var_11));
                                arr_13 [i_1] [i_4] = ((~((min(((var_5 >= (arr_8 [i_3] [11] [i_1] [i_0]))), ((!(arr_0 [i_0] [i_1]))))))));
                            }
                        }
                    }
                }
                var_23 ^= var_13;
                var_24 -= (min(var_1, 16029));

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_16 [i_1] [i_1] [i_5] = ((~((~(arr_4 [i_1])))));
                    arr_17 [i_1 - 1] [i_1] = (arr_10 [i_0] [10] [10] [i_1] [i_1] [7]);
                    arr_18 [i_1] [4] [i_1] [i_5] = ((~(~var_2)));
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_25 = var_14;
                    arr_23 [i_1] = var_1;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_26 = (max(((~((min((arr_21 [i_1] [i_1] [6]), var_4))))), (~49509)));
                                arr_28 [i_0] [i_0] [i_0] [i_1] [6] [i_0] [3] = (arr_14 [i_1] [i_1 + 1] [14] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
