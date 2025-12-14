/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_4 ? (-2147483647 - 1) : ((max(1, 7)))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = (((min((max(var_2, 1)), (arr_0 [i_0 + 1]))) >> (((max((((1951325266 < (arr_1 [i_0])))), var_2)) - 12166689052605851903))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 = arr_7 [i_2] [i_1];
                        var_20 = (arr_5 [i_1]);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_14 [i_4] = (arr_13 [i_4]);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            arr_26 [i_5] [i_5] [i_6] [i_7 + 1] [i_7 + 3] [i_8] = (!164);
                            var_21 = ((((max((arr_11 [i_7 + 1]), (arr_11 [i_7 + 2])))) ? ((((max(247, (arr_23 [i_5] [i_5] [i_5] [i_7 + 2] [i_5])))) ? (arr_19 [i_7 + 2]) : -1050245603)) : (~1)));
                            var_22 = ((-(max((((arr_19 [i_8]) | 255)), (!25)))));
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_23 += 2147483647;
                            var_24 = (max(((114 ? 152 : 31)), (((arr_28 [i_7 - 1] [i_5] [i_6] [i_5]) ? (arr_28 [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_5]) : (arr_28 [i_7 + 3] [i_5] [i_7 + 3] [i_5])))));
                        }
                        for (int i_10 = 2; i_10 < 11;i_10 += 1)
                        {
                            var_25 = (arr_15 [i_5] [i_10]);
                            var_26 = (max((min(((var_15 ? 42 : var_10)), ((var_4 << (var_2 - 12166689052605851902))))), var_17));
                            var_27 *= (min((arr_23 [i_10] [i_7 + 3] [i_10] [i_5] [i_10]), var_0));
                            var_28 = ((1497995073859757602 * (((~(min(1152921504606715904, 152)))))));
                            var_29 = ((((~(arr_18 [i_5] [i_10] [i_10 - 1] [i_5]))) > ((8079079719228685209 ? (arr_18 [i_5] [i_10 + 1] [i_10 + 1] [i_5]) : (arr_18 [i_5] [i_10] [i_10 + 2] [i_5])))));
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_37 [i_4] [i_5] [i_6] [i_6] [i_7 + 1] [i_5] [i_11] = (((((61623 ? 254 : (arr_36 [i_4] [i_5] [i_5] [i_5] [i_7 + 1] [i_5] [i_4])))) ? ((1233071192 ? 29246 : 18446744073709551615)) : 112));
                            var_30 = (min(var_10, 240));
                            var_31 = ((!(!-8079079719228685226)));
                        }
                        arr_38 [i_4] [9] [i_5] [i_4] [i_4] [i_7] = ((((((-(arr_28 [i_4] [8] [8] [i_5]))) > (((arr_13 [i_4]) ? (arr_34 [i_4] [i_5]) : 230))))));
                        var_32 ^= (((((arr_13 [i_7 + 2]) ^ (arr_13 [i_5]))) <= (((arr_36 [10] [i_5] [i_6] [i_7 + 1] [i_5] [6] [i_7 + 1]) ? (arr_13 [i_4]) : (arr_20 [1] [i_7 + 1] [i_6] [i_5] [1])))));
                        var_33 = 80;
                    }
                }
            }
        }
    }
    var_34 = (max(((((var_17 ? 224 : var_14)) | var_15)), var_15));
    var_35 = var_12;
    #pragma endscop
}
