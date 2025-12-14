/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = (!0);
                    var_13 = ((((max(4294967295, 1))) ? (((var_9 - (((max((arr_1 [i_0]), (arr_0 [12])))))))) : (((((1 ? var_4 : var_6))) ? var_11 : 6210639466553448420))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_1] [i_2] = var_2;
                                var_14 |= ((((-(min(var_3, (arr_9 [23] [i_2] [22] [19]))))) | (!0)));
                                arr_12 [17] [0] [i_2] [i_3] [i_4] = (max((4183640685 < 29725156), (arr_5 [i_0] [i_1])));
                                arr_13 [7] [4] [4] [20] [22] = -1460097630;
                                var_15 = (arr_7 [15] [i_1] [i_1]);
                            }
                        }
                    }
                    var_16 |= var_3;
                }
            }
        }
        arr_14 [11] = (arr_5 [0] [0]);
    }
    var_17 |= var_0;

    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    var_18 = (min(-22822, -7872932902502539872));
                    var_19 = (max(var_19, 1));

                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_20 |= 11887121331207852234;
                            var_21 |= (((arr_17 [i_5 + 1] [12]) ? 16127596631541899020 : 0));
                        }
                        arr_28 [i_7] [i_6] [i_7] = 0;
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        arr_33 [i_7] [i_5] [i_6] [i_7] = (var_6 * (max((min((arr_29 [i_5] [i_6] [i_7] [i_5]), var_7)), (((var_2 ? 27765 : var_8))))));

                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            var_22 |= ((-(27765 >> 0)));
                            arr_37 [i_5] [i_7] [i_7] [i_10] [i_11 + 1] = -14605;
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            var_23 = (max(var_23, var_0));
                            arr_40 [i_5 - 2] [i_6] [i_7] [i_7] [13] = ((min(35, ((-(arr_30 [i_5] [i_6] [i_7 + 1] [i_7 + 1] [i_5] [i_5]))))));
                        }
                        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                        {
                            var_24 = (((((-1881734679 ? (arr_1 [i_5]) : (max(var_10, (arr_16 [1] [i_6])))))) ? 1 : (~var_11)));
                            var_25 *= 60;
                            var_26 = -1224257096;
                        }
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            var_27 = (((arr_9 [i_6] [i_7] [i_6] [i_5]) ? -27766 : (arr_29 [i_5] [i_6] [i_7] [i_14])));
                            arr_47 [i_5 + 1] [i_7] = (-(((arr_5 [21] [i_14]) ? -1124206907 : (arr_1 [i_5 - 2]))));
                        }
                        arr_48 [i_14] [14] [i_5] [i_5] [i_6] [1] |= ((4294967289 >> (((arr_2 [i_5 - 2]) - 152))));
                    }
                }
            }
        }
        var_28 |= ((min(1984283827, 30663)));
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 18;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            {
                var_29 &= (var_9 ? ((((((arr_6 [5]) ? 0 : (arr_50 [3] [1])))) ? (max(var_2, var_1)) : -30664)) : ((((min(38942, 1201930266))))));
                var_30 *= (-(!1));
            }
        }
    }
    #pragma endscop
}
