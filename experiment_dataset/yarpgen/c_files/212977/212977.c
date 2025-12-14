/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_17 = ((((((19 ? var_10 : 40620)) ? (var_12 - -14) : (12 + 186)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_18 = -220;
                        var_19 = (max((((!(!1589896086)))), (((1751592099 && 0) ? (arr_4 [i_0 + 2] [i_3]) : (1 || var_11)))));
                        var_20 = var_7;
                        arr_9 [i_1] [i_1] [i_1] = (!-28517);
                    }
                }
            }
        }
        arr_10 [8] [i_0 + 1] |= var_9;
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_22 [i_0 - 1] [i_0] [i_0] [11] [i_0] = (min((~var_3), ((((arr_20 [i_0 - 2]) != (min(3552435978, var_2)))))));
                                arr_23 [i_0 + 2] [i_4 + 1] [i_0 + 2] [i_6] [i_7] = -1611209433;
                            }
                        }
                    }
                    arr_24 [i_5] = -1589896086;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] = ((-(!7680)));
                                arr_32 [i_0] [i_4 - 1] [i_4 + 2] [i_5] [i_4 - 1] [1] [i_9 + 3] = (max((((arr_19 [i_4 - 3] [i_4 + 1] [i_4 - 4] [i_4 - 4] [i_4 + 1]) && (arr_19 [i_4 + 1] [i_4 - 3] [4] [i_4] [i_4 - 3]))), (((((94 ? var_1 : var_13))) && 3920644204))));
                                arr_33 [i_0] [i_0 - 1] [2] [i_0] [i_0 + 2] [1] = ((+((var_13 ? (arr_20 [i_9 - 1]) : (arr_29 [12] [i_4] [i_4 + 2] [i_4] [6] [12])))));
                            }
                        }
                    }
                }
            }
        }
        var_21 = -1589896060;
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_22 = (!var_15);
        arr_36 [i_10] = (((!((min(-23, var_3))))) ? ((69 ? 1589896086 : 60)) : -24);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    arr_41 [i_10] [i_11] [i_11] = (arr_37 [i_10]);
                    var_23 = ((((((-(arr_35 [i_11] [9]))))) < (max(((var_10 ^ (arr_40 [i_10] [i_12]))), (~0)))));
                    var_24 = ((-((var_12 ? (arr_34 [i_10]) : -1589896086))));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    {
                        var_25 = (min(var_25, (!1589896077)));
                        var_26 = (((((max((arr_28 [7] [i_14] [16] [2] [2] [i_14] [i_14]), -10))) && (!12))));
                    }
                }
            }
        }
        var_27 = -1083238242231790839;
        arr_52 [19] [19] = ((-(min(var_8, (min(-7828600346941862073, 159))))));
    }
    var_28 = ((var_5 - (var_15 + 1211094681)));
    #pragma endscop
}
