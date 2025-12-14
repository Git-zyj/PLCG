/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (556 + 1);
        var_19 = (max(var_19, (arr_0 [i_0])));
        arr_2 [i_0] = var_9;
        var_20 = ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_3))) ? (arr_0 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_21 = -11852;
        arr_5 [i_1] = (25167 + var_7);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    var_22 = 42;

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_23 = ((-((((((arr_7 [i_1] [i_1 + 1]) ? 17410 : 32767))) ? 240 : 32767))));
                            arr_17 [i_1 - 2] [15] [i_3] [i_3] [i_1 - 2] = (((((arr_10 [i_3] [i_4] [9] [i_2] [i_3]) ? (max((arr_10 [i_3] [i_3] [i_3] [i_3] [i_5]), (arr_16 [i_1] [i_2] [i_3] [i_4] [i_3]))) : var_3)) + (((var_3 + (var_3 + 32767))))));
                            arr_18 [i_1 - 3] [i_3] [i_3] [i_3] [i_1 - 3] = (((((255 + 32753) ? ((var_12 + (arr_1 [i_3]))) : (((max(11852, 1)))))) + ((((arr_13 [i_3] [i_3 - 1]) + (arr_13 [i_3] [i_5]))))));
                        }
                        var_24 += ((-((23625 ? 11851 : -32767))));
                        var_25 &= (min(-32767, (arr_14 [i_1] [0] [i_1] [i_1] [0] [i_1 + 1])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_3] [i_3] = var_5;
                        arr_22 [i_1 - 3] [i_3] [i_1 - 3] [i_6] = ((-37 ? ((19132 ? (arr_15 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1]) : (arr_20 [i_1] [i_2] [i_3 - 1] [i_1] [i_2] [5]))) : 21));
                        arr_23 [i_1] [i_2] [i_3] = (((~var_12) ? (arr_0 [i_1]) : (arr_10 [i_3] [i_3] [i_3] [i_3] [i_3])));
                        var_26 = ((42 ? 9223372036854775807 : 58688));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_27 = var_3;
                        var_28 = (i_3 % 2 == zero) ? (((((~((46404 ? 9121169792385381238 : 219)))) + (((((min(25391, 114))) << (((arr_9 [i_3] [i_1 - 3] [i_3]) - 12)))))))) : (((((~((46404 ? 9121169792385381238 : 219)))) + (((((min(25391, 114))) << (((((arr_9 [i_3] [i_1 - 3] [i_3]) - 12)) - 84))))))));
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_29 = (((arr_25 [i_1] [i_2] [i_2] [i_1] [i_3 + 2] [i_8]) + (arr_1 [i_1])));
                        arr_31 [i_1] [i_2] [i_2] [i_3] [i_3 + 1] [i_3] = (arr_20 [i_1] [5] [i_3] [i_8] [i_2] [i_8]);
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_30 = (min(var_30, (((arr_30 [i_9] [i_2] [i_2] [i_2]) + (arr_3 [i_1])))));
                        arr_35 [0] [0] [i_9] |= ((var_15 + (((((min(37, 12268))) + (~var_5))))));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        arr_40 [i_3] [i_3] [i_2] [i_3] [i_3 - 1] [i_10] = ((var_12 ? ((((var_3 + var_13) ? ((max(var_2, var_4))) : -2962))) : ((4294967285 + ((var_9 + (arr_27 [i_1] [i_2])))))));
                        var_31 = (arr_33 [i_1] [i_1 + 1] [i_3] [i_1 - 2] [i_1] [i_1 - 3]);
                        var_32 = (((40145 + 1) ? 218 : (!49332)));
                        arr_41 [i_1 + 1] [i_2] [i_2] [i_10] [13] [i_3] = (max(2147483647, 1));
                        var_33 = (((((var_15 + (((9 ? 14 : 198)))))) ? (((~var_6) + var_10)) : var_1));
                    }
                    arr_42 [i_3] [i_2] [i_2] = (((((arr_11 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1]) + var_6)) + ((var_15 + (arr_19 [i_1] [1] [i_1] [i_1] [i_3] [i_3 + 2])))));
                }
            }
        }
        arr_43 [i_1] = (((-(arr_0 [i_1 - 3]))));
        var_34 &= (((((-32760 ? 2754 : 4294967295))) ? (4294967271 + 32767) : (arr_24 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        arr_46 [i_11] [i_11] = (((!var_6) ? 62782 : (arr_12 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
        arr_47 [i_11] = -var_8;
    }
    var_35 = (min(var_35, ((min((((((var_14 ? var_3 : var_7))) ? var_14 : (2754 + -6155494836723663988))), (((((min(1, 1))) + var_1))))))));
    var_36 = (min((min(((var_15 ? var_2 : 3)), (var_14 + var_13))), var_14));
    #pragma endscop
}
