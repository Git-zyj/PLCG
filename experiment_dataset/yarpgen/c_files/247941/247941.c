/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 = (~1082535676);
                                arr_13 [i_2] [i_1] = 1082535671;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_19 [4] [i_1] [4] [i_5] [i_0] |= (min((((arr_17 [i_1] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6]) ? (arr_17 [i_0] [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1]) : (arr_17 [i_1] [i_6] [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 1]))), ((((arr_7 [i_0] [i_0] [i_0]) > ((var_9 * (arr_4 [i_5] [i_2] [i_1] [7]))))))));
                                var_12 = ((41 >= (~3212431595)));
                                arr_20 [i_0] [i_0] [i_0] [13] [i_2] = (((((arr_0 [i_6 - 1]) & 1082535713)) | ((((arr_7 [i_6] [i_6 + 1] [i_6 - 1]) ^ (arr_12 [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((!(((var_10 ? (var_5 + 3212431580) : ((var_4 ? var_5 : -5057292575370290746)))))));

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_14 = ((var_7 ? (max((max((arr_21 [i_7]), (arr_22 [i_7] [i_7]))), (!var_1))) : (max(1082535676, 262143))));
        var_15 += ((3 + ((min(var_7, (arr_21 [i_7]))))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 17;i_12 += 1)
                        {
                            {
                                arr_36 [i_10] [i_9] [1] [i_11] [i_10] = -205;
                                var_16 = 36;
                                var_17 = (((!(arr_21 [17]))) ? (arr_33 [i_10]) : (!var_7));
                                arr_37 [i_10] [i_9] [i_10] [i_11] [i_11] = var_3;
                            }
                        }
                    }
                    arr_38 [i_8] [i_10] [i_10] [19] = (!var_6);
                }
            }
        }
        var_18 = (min(var_18, ((1 + (arr_21 [i_8 - 1])))));
        var_19 = ((arr_33 [16]) - (arr_29 [i_8] [i_8 - 1] [i_8]));
    }
    var_20 = (!8);
    #pragma endscop
}
