/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (max((((arr_7 [i_2 + 1] [i_1 - 1] [i_1 + 1]) ? 237676393 : -841022054)), (arr_7 [1] [8] [i_0])));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_1]);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {

        for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
        {
            arr_15 [i_3] [1] [i_3] = var_5;
            var_15 = (((arr_11 [i_3]) > var_3));
        }
        for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_16 = 0;
                            arr_25 [i_3] [i_5] [i_5] [16] [i_5] [i_8] = (~(arr_23 [i_3] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_8] [i_8]));
                            var_17 = (((arr_21 [i_7 + 2]) && (arr_24 [i_3] [i_3] [i_3] [21])));
                            arr_26 [i_3] [i_3] [i_3] = ((+(((arr_11 [i_3]) ? (arr_23 [2] [i_8] [i_5] [i_3 + 1] [i_5] [i_3 + 1]) : (arr_12 [i_3])))));
                        }
                        arr_27 [i_3] = ((1139724514 ? (((arr_23 [i_3] [i_5] [9] [i_6] [i_7] [i_7 + 1]) ? 209 : 18)) : (arr_11 [i_3])));
                        var_18 += (((((arr_23 [i_3] [i_7] [i_3] [i_3] [i_3] [i_3]) > (arr_18 [6] [i_5] [i_5]))) ? ((var_6 ? (arr_14 [i_3] [i_7]) : 1)) : (arr_11 [i_7])));
                        arr_28 [i_7] &= (arr_19 [i_3 - 1] [i_6 + 1] [i_7 - 2]);
                    }
                }
            }
            arr_29 [i_3] [i_3] = 30564;
        }
        var_19 = ((-(arr_19 [i_3 - 1] [i_3] [16])));
    }
    #pragma endscop
}
