/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_11 -= ((32767 | (arr_10 [i_0] [9] [i_0] [i_0])));
                            arr_15 [i_4] [i_3] [i_3] [i_3] [i_0] = (arr_0 [i_0] [i_0]);
                        }
                        var_12 = (max(var_12, (min((((arr_7 [i_1] [i_2]) ? (~-21511) : var_3)), ((min(((0 | (arr_10 [i_0] [i_0] [i_2] [i_3]))), (min((arr_0 [i_0] [i_1]), (arr_6 [i_0] [i_1] [i_2] [i_3]))))))))));
                    }
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] = var_4;
                        arr_19 [i_0] [i_1] [i_2] [i_0] = (arr_12 [12] [12] [12] [i_5 + 2] [i_2]);
                    }
                    var_13 = var_9;
                    arr_20 [i_0] [i_2] [i_1 + 1] [i_0] = (max(((139 << ((((arr_17 [0]) == 511))))), (min(1, (arr_7 [i_0] [i_1 + 3])))));
                }
            }
        }
    }
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                arr_26 [i_7] [i_7] = ((((!(((-(arr_17 [i_7])))))) ? (arr_25 [i_7] [i_7]) : (((!(arr_11 [i_6] [7] [i_6] [i_7] [i_7]))))));
                var_15 += (((var_5 ? (arr_9 [i_6] [10] [i_7] [10] [i_7]) : (arr_17 [i_7]))));
            }
        }
    }
    var_16 = (max(((min((2554675835099639453 || var_3), ((var_6 << (3631448364 - 3631448356)))))), 2554675835099639453));
    #pragma endscop
}
