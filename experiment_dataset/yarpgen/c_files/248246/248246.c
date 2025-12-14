/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_10 [0] [i_3] [0] [8] = ((~(arr_6 [i_0] [i_3])));
                        arr_11 [i_3] [i_3] [i_0] = 13;
                        arr_12 [i_0] [i_3] = (!65176);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_17 [i_3] [i_1] [i_2] [i_1] [8] = ((var_3 ? 0 : (arr_0 [i_0 - 1] [i_0 - 1])));
                            arr_18 [i_3] [i_1] = 710922122;
                        }
                    }
                }
            }
        }
        arr_19 [3] = (927392400 ? 92 : (arr_5 [i_0 - 1] [i_0] [i_0 + 1] [7]));
        arr_20 [9] = (arr_7 [1] [4] [i_0 - 1] [i_0]);
        arr_21 [6] = ((var_5 ? (arr_0 [i_0 - 1] [i_0 - 1]) : var_8));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_24 [i_5] = (((~50201) ? (((var_0 ? ((var_3 ? var_3 : 663457026)) : 663457022))) : -595914424));
        arr_25 [i_5] = ((var_9 ? ((((((3087506898845005199 ? 927392400 : 318010988785723728))) ? var_6 : 595914405))) : ((7572 ? 3087506898845005226 : (arr_23 [i_5] [i_5])))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        arr_28 [i_6] [i_6] = (arr_26 [i_6 + 1] [i_6 - 1]);
        arr_29 [3] [i_6] = 465;
        arr_30 [1] [i_6] = (arr_27 [i_6]);
        arr_31 [15] = ((-927392383 ? var_9 : (arr_26 [i_6 + 2] [i_6 + 2])));
        arr_32 [i_6] = ((!(arr_27 [i_6 + 2])));
    }
    var_10 &= (~var_3);
    #pragma endscop
}
