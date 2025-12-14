/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (min(var_15, (((((min(-4194304, 217))) ? (max((arr_0 [i_0]), var_3)) : (max((arr_0 [3]), 65535)))))));

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] = max(((((max((arr_3 [12] [i_0] [i_1]), 31))) || (((2045122269 ? 39 : (arr_1 [i_1 - 1] [i_0])))))), (((arr_3 [i_1 + 1] [i_0] [i_1]) || (arr_3 [i_1 - 1] [i_0] [i_1]))));
            var_16 = ((((((~var_7) ? 186 : (~var_12)))) ? (((arr_1 [i_0] [i_0]) ? var_14 : (arr_1 [i_1 - 1] [i_0]))) : (arr_1 [i_1 + 1] [i_1 + 1])));
            var_17 = (min(((((max(217, (arr_3 [1] [i_0] [1])))) ? (arr_5 [i_1]) : (arr_4 [i_0]))), ((((min((arr_2 [i_0] [i_1 + 1]), (arr_0 [1])))) ? (max(191, (arr_5 [i_0]))) : 217))));
            var_18 = (min(var_18, var_13));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_19 = 4064;
                            var_20 = 219;
                            var_21 = ((((((((var_8 ? var_7 : -1331983166))) ? (arr_11 [i_1 + 1] [i_3]) : (max(var_5, (arr_2 [i_0] [i_3])))))) < (arr_5 [i_0])));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            arr_18 [i_0] = (max(((var_14 ? (arr_3 [i_5 + 1] [i_0] [i_5 + 1]) : (arr_3 [i_5 + 1] [i_0] [i_5 + 1]))), ((max(18446744073709551615, 219)))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_22 = -65535;

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_26 [i_8] [i_0] [i_6] [i_6] [i_0] [1] = 60;
                            var_23 = (max(((max(24, 233))), (max(((var_11 ? (arr_3 [i_0] [i_0] [i_7]) : var_5)), (((var_13 ? var_7 : (arr_19 [i_8] [i_0] [i_0] [i_0]))))))));
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_24 = (max(var_24, (((!(~var_10))))));
                            var_25 = (max(var_25, (arr_24 [10] [12] [i_6] [i_6] [i_6])));
                        }
                        var_26 = (arr_16 [i_0] [i_0]);
                        var_27 ^= 25;
                        var_28 = (max(var_28, ((min(var_2, (min((((arr_25 [i_7] [i_6] [i_7]) ? var_12 : var_6)), (max(0, 231)))))))));
                    }
                }
            }
        }
        var_29 = (min(var_29, (((((min(4054, 4064))) ? (max(((max((arr_20 [1]), var_1))), (((arr_7 [i_0] [i_0] [i_0]) ? (arr_25 [0] [6] [0]) : 18446744073709551615)))) : ((((-4064 == (arr_2 [i_0] [i_0]))))))))));
    }
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        var_30 = (min(var_30, (((~(arr_29 [10]))))));
        arr_31 [i_10] [i_10] = (((((max(var_13, var_13))) ? (arr_30 [i_10 - 1]) : ((var_5 ? var_1 : (arr_30 [i_10]))))));
        var_31 = (((((13 ? 38615 : (arr_29 [i_10])))) ? var_0 : (max(((((arr_30 [i_10]) ? var_0 : 1073741824))), (min(127, 2462193885630609944))))));
        arr_32 [i_10] = ((max(((var_11 ? var_4 : (arr_29 [i_10]))), (arr_30 [i_10 - 1]))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    var_32 = ((-((((arr_36 [14] [i_10] [i_12]) != (arr_34 [i_10]))))));
                    var_33 += (min(var_13, ((~(max((arr_34 [i_10]), var_5))))));

                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        var_34 = ((-(218 > 1)));
                        var_35 = (((max((arr_37 [i_11 + 1] [i_11 - 1] [i_11] [i_12] [i_12]), var_9)) != (max(1, var_1))));
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_36 = ((+(max((var_11 % var_2), (min((arr_34 [i_10]), (arr_38 [i_10 - 1] [4] [i_12] [i_14])))))));
                        var_37 &= 62696;
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        arr_47 [i_15] [i_11 - 1] [i_10] [i_15] = var_3;
                        var_38 = (max(var_38, (((0 ? (var_8 >= var_6) : ((-7077 ? 5601343145443496276 : -2886)))))));
                        arr_48 [i_10] = max((((!((!(arr_44 [i_10 - 1] [i_11] [i_12] [i_12] [i_15])))))), (((arr_39 [i_10] [i_10]) ? (!var_5) : (arr_39 [i_15] [i_10]))));
                        var_39 = ((((var_9 || (var_11 | 3490423581))) ? (-9223372036854775807 - 1) : (((((((arr_46 [i_10] [i_11] [i_11] [i_12] [i_10] [i_15]) ? 40994 : var_6))) ? 25 : (max(var_3, var_9)))))));
                    }
                    for (int i_16 = 1; i_16 < 14;i_16 += 1)
                    {
                        arr_51 [i_10] [i_11 + 1] [7] [i_12] [i_10] [i_10] = (arr_44 [i_16] [1] [i_12] [i_11] [i_10 - 1]);
                        var_40 = (max((max(1, 2886)), (arr_49 [i_10 - 1] [i_11 + 1])));
                        var_41 = (min(var_41, ((min(((max((arr_49 [i_11 + 1] [i_11 - 1]), (arr_49 [i_11 - 1] [i_11 + 1])))), (max((!2886), (arr_36 [i_11] [i_12] [i_16]))))))));
                        var_42 *= ((((max((min(2147483647, (arr_36 [i_10] [i_12] [i_12]))), var_14))) ? (((~6399) ? (arr_44 [i_10] [i_10] [i_10 - 1] [i_10] [i_10]) : (!589162006319199794))) : ((((((36 ? 3751685386198712057 : 32757))) || var_13)))));
                    }
                }
            }
        }
    }

    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        var_43 = (max((arr_53 [i_17]), (arr_52 [i_17])));
        arr_54 [i_17] [i_17] = 210;
    }
    var_44 = (max((max(((var_14 ? var_11 : var_0)), 231)), ((-(max(216, var_8))))));
    var_45 = (max((!var_8), -var_12));
    var_46 = var_0;
    #pragma endscop
}
