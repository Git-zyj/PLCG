/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    arr_8 [i_0] = (arr_4 [i_0]);
                    var_16 = var_11;
                    arr_9 [i_0] = -20476;
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_17 = (arr_12 [i_0 - 1] [10] [i_0] [i_0]);
                    var_18 = (max(var_18, var_9));
                    var_19 = (max(226, (arr_10 [i_0 + 1] [i_0 - 3] [i_0] [i_0 - 2])));
                }
                for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_19 [i_0 - 1] [i_0] [9] [9] = (max((((arr_3 [i_0] [i_0]) ? var_11 : (arr_18 [11] [i_1] [11] [8] [i_6]))), ((((arr_5 [i_0] [i_4 + 3]) ? (arr_6 [i_4 + 3] [i_0 + 2]) : ((min(-20481, -20476))))))));
                                arr_20 [i_0] [i_0] [i_1] [i_1] [i_4] [i_5] [i_0] = (max((((((((arr_12 [7] [7] [i_5] [i_6]) ? var_7 : var_7))) ? (min(65531, -210960495)) : var_1))), ((((min(var_11, var_0))) ? (arr_3 [i_0] [i_0]) : (arr_16 [i_0] [i_5] [i_4] [i_0])))));
                                var_20 = (max((((2047 ? -20487 : (arr_5 [i_0] [i_0])))), var_11));
                                arr_21 [i_0] [i_0] [i_4] [i_5] [i_6] = var_10;
                            }
                        }
                    }
                    var_21 = (!2037);
                    arr_22 [i_0] [i_0] = ((((min(var_9, var_1))) == (~51)));
                }
                for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    var_22 = (~2047);
                    arr_26 [i_1] [i_0] = var_7;
                    var_23 -= var_12;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_32 [i_0 + 1] [16] [i_7 + 3] [i_8] [i_0] = (((((-(arr_14 [i_7 + 2] [i_0 - 1])))) ? (min((arr_14 [i_7 - 1] [i_0 - 3]), var_15)) : (arr_14 [i_7 - 1] [i_0 - 2])));
                                var_24 = ((var_8 ? var_3 : 3584));
                                var_25 = (!4);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_37 [i_0] [i_1] [i_7] [i_10 + 1] [i_11] = ((-6474782988267794907 ? (!134) : ((-3603 ? (arr_4 [i_0]) : 3269345199))));
                                var_26 = (min(var_26, var_14));
                            }
                        }
                    }
                }
                var_27 = var_5;
                var_28 = var_12;
                var_29 &= 4294965249;
                var_30 = (arr_25 [i_0] [i_0] [i_1]);
            }
        }
    }
    var_31 = (((((2037 ? (!var_14) : var_15))) ? 65535 : ((var_14 ? ((var_12 ? var_4 : 1025622096)) : ((max(var_4, var_3)))))));
    #pragma endscop
}
