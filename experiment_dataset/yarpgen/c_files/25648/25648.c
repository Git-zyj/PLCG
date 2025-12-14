/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((~0) ? ((var_3 ? var_12 : (max(-17, -2983667948931662508)))) : (((var_16 / ((max(61789, 30924)))))));
    var_18 = var_16;
    var_19 = 18;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (~1);
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_1] = arr_13 [1] [i_4] [1] [i_4] [0];
                                arr_16 [i_0 + 2] [i_1] [17] [i_1] [i_3] [i_4] = ((((min(var_2, 12745))) <= (((arr_3 [i_2 + 3] [i_3 - 1]) ? (arr_3 [i_2 - 2] [i_3 - 4]) : (arr_3 [i_2 + 4] [i_3 - 2])))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] = (~((-(max(26, (arr_12 [22] [i_1] [i_1] [i_1] [i_2]))))));
                    var_21 += (((arr_5 [i_2]) & (arr_12 [i_2 + 4] [i_2 - 2] [i_0] [i_1] [i_0])));
                    var_22 = ((((1611299617 & (arr_1 [i_2 + 3]))) < (arr_1 [i_2 + 2])));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_5 + 2] [1] [i_1] [18] = (~((-(arr_8 [i_1]))));
                    arr_21 [i_1] [i_1] = -1;
                    arr_22 [i_1] [i_5] [1] = ((((((arr_8 [i_1]) ? 21768 : 17892))) ^ (17892 + var_9)));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_23 = ((-((1 ? var_10 : 4294967289))));

                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            arr_29 [i_1] [i_1] [i_5] [i_6] [i_6] = ((((6 ? (arr_3 [i_7] [i_1 + 1]) : -36)) <= ((1 ? 94 : 1))));
                            arr_30 [i_1] [16] [i_1] [i_1] = (arr_24 [i_0] [i_1] [1] [i_6] [i_1]);
                            arr_31 [i_1] [i_1] = (((3697316951 ? var_8 : (arr_14 [i_0] [4] [i_0] [4] [4]))));
                        }
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            var_24 = (arr_5 [i_5 + 1]);
                            var_25 += (((arr_5 [i_1 - 2]) ? (arr_5 [i_1]) : (arr_5 [i_5 + 3])));
                        }
                        arr_34 [i_0] [i_0 + 2] [i_1] [i_0] [i_0] [i_0] = (arr_13 [1] [1] [1] [i_6] [i_1 - 2]);
                        arr_35 [i_0] [i_0] [i_0] [2] [i_1] = (16383 - 32767);
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_26 = (((-(arr_19 [i_1] [i_1] [i_1]))) > (arr_5 [i_1]));
                        arr_38 [i_1] [6] [i_5] [i_1] [6] = ((-(-1694985193 % 1705907552)));
                        var_27 |= ((arr_32 [i_0 - 2] [i_0] [i_0]) && (((0 ? var_10 : 1))));
                        var_28 = 18;
                        arr_39 [i_0] [i_1] [i_5] [i_9] [6] [8] = (arr_12 [i_0] [i_0] [i_1] [i_0] [i_9]);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_29 = ((-19 ? 255 : ((5 ? (arr_7 [i_0 - 2] [i_1] [i_10]) : var_3))));
                                var_30 = ((~(~2383881909)));
                                var_31 = (((arr_42 [i_0] [i_5] [i_10] [i_11]) ? (arr_3 [i_5] [1]) : 33008));
                                var_32 = var_13;
                            }
                        }
                    }
                }
                var_33 ^= 1325319982;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    var_34 += ((!(arr_41 [i_12] [i_13 + 3] [12])));
                    var_35 &= (min((((65535 == (max(var_8, 1048575))))), (((2837202374 / 112) ? (~-3651956845697547696) : (((var_13 & (arr_43 [i_12] [i_12] [i_13] [i_13 + 2] [19] [i_14]))))))));
                }
            }
        }
    }
    #pragma endscop
}
