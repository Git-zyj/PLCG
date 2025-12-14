/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0] [i_0]) >> (((arr_1 [8] [i_0]) - 34627))));
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (((var_5 - (arr_0 [i_0] [i_0]))));
        var_13 = ((-(arr_0 [i_0] [i_0])));
    }
    var_14 ^= var_10;

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 = ((((max((((arr_4 [i_1]) ? 1080628837 : var_5)), (arr_7 [i_1])))) ? (min((((arr_1 [i_1] [i_1]) ? (arr_6 [i_1]) : var_0)), (!var_0))) : ((((var_4 == (arr_1 [i_1] [i_1]))) ? var_8 : var_1))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_2] [i_3] [i_3] [i_3] [i_2] = arr_0 [i_4] [i_1];

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_20 [0] [0] [i_2] [i_4 + 1] = (min((~-1288), (arr_1 [i_2 - 2] [i_3 - 1])));
                            arr_21 [i_1] [i_1] [i_1] [i_2] = (((((~(arr_15 [i_2] [i_2])))) && (((var_10 ? 112962262 : ((var_0 ? var_4 : var_0)))))));
                            arr_22 [i_1] [i_2] [i_2] [i_2] = var_6;
                        }
                    }
                }
            }
        }
        arr_23 [i_1] = (arr_18 [i_1] [i_1]);
        arr_24 [i_1] &= ((var_3 ? 7258715960135217164 : (((-(arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
        var_16 = ((-(min((arr_15 [i_1] [i_1]), (arr_5 [i_1] [i_1])))));
    }
    var_17 = ((~(min(var_10, (1 / var_0)))));
    #pragma endscop
}
