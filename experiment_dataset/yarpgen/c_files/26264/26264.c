/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 - 1] = ((~((~(arr_1 [i_0 - 1])))));
        arr_4 [i_0] = ((((((arr_0 [i_0 - 1]) ? var_3 : (max(-102, 65536))))) ? ((((((arr_0 [i_0 - 2]) ? 8 : var_10))) ? (~var_0) : ((var_4 ? (arr_2 [i_0]) : var_7)))) : var_14));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((var_6 ? ((((((var_12 ? (arr_5 [i_1]) : 17603))) || 104))) : -127));
        arr_8 [i_1 - 1] = (((arr_0 [i_1 - 1]) - ((-65511 ? ((min((arr_0 [i_1]), 125))) : (min(-1848576649, 65520))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_16 [i_3] = (min((max((arr_12 [i_4]), (!17))), ((((var_2 ? (arr_0 [i_2]) : var_15))))));
                        arr_17 [i_3] = ((max(var_12, -0)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_25 [i_5] [i_5] = (var_12 ? (((arr_24 [i_6 + 1] [i_6 + 1] [6] [6]) >> (((arr_24 [9] [i_6 - 1] [9] [9]) - 216421785)))) : ((2813 ? 28 : (104 + 28))));
                        arr_26 [i_1 - 2] [i_1] [i_1] [0] = (min((((arr_0 [i_1 + 1]) ? 46122 : 103)), var_15));
                    }
                }
            }
        }
        arr_27 [i_1 - 2] [i_1 + 1] = (arr_2 [i_1 - 1]);
    }
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            {

                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_42 [10] [i_8] [i_8] [i_11] [15] = (-(((((-127 - 1) ? 0 : 65518)) + var_0)));
                                arr_43 [i_8] [i_8] [i_12] [i_12] [i_12] = (max((min(131, var_5)), (((!(!var_3))))));
                                arr_44 [i_8] [i_8] [i_9] [i_8] [i_8] [i_8] = (~var_1);
                            }
                        }
                    }
                    arr_45 [i_8] [i_9] [i_8] = ((!(!var_7)));
                    arr_46 [i_8] [i_9] = var_11;
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 14;i_14 += 1)
                        {
                            {
                                arr_53 [i_8] [i_8] [i_9] [i_8] [i_13] [i_13] [i_13] = (((arr_15 [i_9] [i_14] [i_14 + 1] [i_14 + 2] [0] [i_9]) ? ((-(arr_11 [i_8] [13] [i_13] [15]))) : ((var_0 ? var_14 : (arr_1 [i_9])))));
                                arr_54 [i_8] [i_8] [i_10] [i_13] [i_9] [i_9] = ((((max((arr_41 [i_14] [i_14 + 2] [6] [i_14 + 1] [i_9]), (arr_34 [i_10] [i_14 + 1] [i_9])))) ? ((-(((arr_10 [i_14 + 2] [i_13] [i_10]) ? (arr_34 [2] [10] [i_9]) : (arr_51 [i_8] [0] [i_9] [12] [i_9]))))) : ((((!var_3) != var_3)))));
                                arr_55 [8] [i_9] [i_10] [i_13] [i_14] [i_10] = (arr_22 [i_10]);
                            }
                        }
                    }
                }
                arr_56 [i_9] = (-((~(arr_6 [i_9] [i_9]))));
                arr_57 [i_9] [i_9] = (min(((min((arr_32 [i_9]), var_7))), ((((min(var_9, var_7))) ? (arr_40 [2] [2] [i_8] [i_9]) : (arr_33 [i_8] [i_9])))));
            }
        }
    }
    var_17 = ((var_4 && 10038) ? ((((min(var_11, var_15))) ? -119 : ((var_10 ? var_0 : var_3)))) : var_0);
    var_18 = ((min(var_12, ((var_2 ? var_13 : var_4)))));
    #pragma endscop
}
