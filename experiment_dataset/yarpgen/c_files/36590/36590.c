/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = 6982915507112816797;
                arr_6 [i_0] [i_0] &= (arr_5 [i_0] [i_0]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_1] [i_0] [i_0] [i_1] = (((max(var_11, var_9)) <= (max((arr_5 [i_0 + 1] [i_1]), (arr_8 [i_2] [i_2] [i_1])))));
                    arr_10 [i_1] [i_2] = var_16;

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_14 [i_1] = var_4;
                        var_19 = (arr_1 [i_0]);
                        var_20 = (min(var_4, ((((min(9223372036854775794, -1)) > ((-9223372036854775795 ? 9223372036854775794 : (arr_4 [i_0]))))))));
                    }
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 7;i_5 += 1)
                        {
                            var_21 = (((!((9223372036854775773 < (arr_3 [i_0]))))));
                            var_22 = (max((min((arr_15 [i_5 - 1] [2] [i_1 - 1] [2]), (arr_16 [i_4 - 1] [i_1] [i_4 - 1] [i_4]))), (arr_8 [i_1] [i_2] [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, (arr_11 [i_0] [i_1] [i_1] [i_1 + 1] [i_1] [i_4 - 3])));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] = ((~(((max(255, -9223372036854775794))))));
                            var_24 = ((min(var_13, (arr_5 [i_0] [i_1]))));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_25 = (~177);
                            arr_25 [i_7] [i_4] [i_7] [i_1] [i_0] |= (~var_0);
                        }
                        var_26 = 177;
                        arr_26 [i_0] [i_1] [i_2] [i_2] = (((-(arr_7 [i_0 - 1] [i_1] [i_2]))));
                        arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = max(((((arr_12 [7] [7] [7] [i_4]) ? var_6 : (arr_22 [6] [i_1] [6])))), ((((53455 <= (arr_20 [i_2] [i_2] [i_2] [i_1] [i_1] [i_1]))) ? ((var_6 ? 10 : 5135400141129651889)) : (~var_8))));
                        arr_28 [i_1] = (arr_4 [i_0]);
                    }
                    arr_29 [i_1] [i_2] = (arr_3 [i_0]);
                }
                arr_30 [i_0] [i_1] = ((var_12 ? (max((arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]), ((-10857 ? var_5 : 9223372036854775794)))) : ((-(max(255, (arr_19 [i_1] [i_1] [i_1] [i_0])))))));
            }
        }
    }

    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {
        var_27 ^= (max(((var_5 ? (arr_31 [i_8 + 2]) : 3758095774346660029)), -123));

        for (int i_9 = 4; i_9 < 18;i_9 += 1)
        {
            arr_36 [i_8] [i_8] = ((((((arr_32 [i_9 + 2]) ? (((-6489839510778342599 && (arr_34 [i_8])))) : (arr_34 [i_8])))) ? 5184716668298880604 : ((min(146, (96 & 53455))))));
            var_28 = (!var_17);
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            arr_40 [i_10] |= (((var_5 ? (arr_37 [i_8 + 2] [i_8 + 3] [i_8 + 3]) : (arr_39 [i_8] [i_10] [i_8 + 3]))));
            var_29 = arr_37 [i_8] [i_8] [i_10];
            arr_41 [i_10] [i_10] &= (min((-1905101767686299009 > 7), ((45556 << ((((((var_4 ? var_14 : var_5)) + 3055144121154899374)) - 14))))));

            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                arr_46 [i_11] [i_10] [i_11] [i_8] = (((max((min(var_4, 1313571098)), 253)) >> (!var_10)));
                arr_47 [i_11] [i_11] [i_11] [i_8] = -55;
                arr_48 [i_11] = ((!(((max(20, -237144040))))));
            }
            var_30 = ((+((((1757108714 / 255) < -11035)))));
        }
    }
    #pragma endscop
}
