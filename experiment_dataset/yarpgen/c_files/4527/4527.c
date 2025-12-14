/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (((min((arr_7 [i_0] [i_1] [i_2 + 1] [i_2 - 2]), (arr_4 [i_2 - 3] [4] [i_2 - 2]))) >> ((((((var_4 ? 3325237727 : var_1)) ^ ((969729568 ? 1 : var_12)))) - 3325237707))));
                    arr_9 [i_0] [i_0] [1] [i_1] = (max((arr_8 [i_2] [i_0]), (-2014330936 || var_16)));
                }
            }
        }
    }
    var_18 = var_14;
    var_19 = var_2;

    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_20 = (max(((-(arr_12 [i_3] [i_3]))), (12990 % 16998)));
        arr_13 [i_3] = var_15;
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_21 ^= ((((max(((1 ? 12994 : 26625)), (((!(arr_12 [2] [2]))))))) ? (((var_4 ? (~12994) : var_0))) : 3325237701));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_22 += (((0 ? (arr_17 [i_4] [i_5] [i_6]) : (arr_17 [i_7] [19] [i_4]))));
                        var_23 = ((((min((arr_24 [11]), ((16394 ? 760493401 : var_7))))) ? 969729577 : (max((var_8 >= 14178308686641508783), (~14178308686641508787)))));

                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            var_24 = (min(var_24, (((var_4 & (((min((arr_24 [i_4]), 0)) ? 1533414668 : ((1 | (arr_19 [i_7] [i_7] [i_7]))))))))));
                            var_25 = (arr_15 [i_8 - 1]);
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_32 [i_4] [i_4] = (min(((6575367683971232307 ? 1160447452 : 1)), 52542));
                            var_26 = (min(var_26, 16394));
                            var_27 = (max(var_27, (((~(max(6575367683971232308, ((max(2518097335, 3534473895))))))))));
                            arr_33 [i_9] [i_4] [i_6] [i_4] [i_4] = (2361060473 >= 10186);
                        }
                        arr_34 [i_4] [i_4] [i_7] [i_5] [i_6] [1] &= (arr_21 [i_4]);
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_28 = ((((~(arr_22 [i_6] [i_4] [i_6] [i_6] [i_5] [i_4]))) <= ((((!(arr_19 [i_4] [i_5] [4])))))));
                        var_29 = (min(var_29, 12994));
                        arr_37 [i_4] = ((~(arr_27 [i_4])));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_40 [i_5] [i_5] [i_6] [i_11] [i_5] [i_4] = -16391;
                        var_30 = (arr_17 [i_4] [i_4] [i_4]);
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_31 = var_14;
                        var_32 = (arr_42 [3] [i_5] [3] [i_12]);
                        arr_44 [i_4] = ((-(var_7 || var_14)));
                        arr_45 [i_4] [i_5] [i_4] [i_12] = 3325237728;
                        arr_46 [i_4] [i_5] [3] [i_4] = 3534473895;
                    }
                    arr_47 [16] [i_4] [2] = 3325237727;
                    var_33 = (1 == 2518097335);
                    var_34 ^= 127;
                    var_35 = (max(var_35, (((-16392 ? ((((var_13 ? (arr_31 [i_6] [6] [i_5] [i_4] [i_4] [i_4] [i_4]) : 1)))) : ((~(1 == 3))))))));
                }
            }
        }
    }
    #pragma endscop
}
