/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~var_12) ? ((((486624835316728553 ? var_3 : var_1)) << (((~var_18) + 48)))) : var_15));
    var_21 &= (2147483647 ? ((var_18 ? ((-3434360786154366326 ? var_7 : var_11)) : var_0)) : var_18);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = (max((((3434360786154366325 ? 9223372036854775781 : 17960119238392823062))), ((var_2 ? ((3434360786154366325 ? var_19 : 9393622864683833403)) : var_14))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            var_23 += (var_1 + -3434360786154366326);
                            var_24 -= (arr_12 [i_4] [i_4 - 1] [7] [i_4] [i_4 - 3]);
                        }
                        for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_25 += (var_2 != (arr_2 [i_0 + 1]));
                            var_26 += 61718;
                        }
                        var_27 |= 3434360786154366316;
                    }
                    for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_28 = (((var_1 % var_2) < var_2));
                        var_29 = ((!(!9393622864683833379)));
                    }
                    for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_30 = var_18;
                        var_31 = (min((min((min(var_14, var_12)), var_7)), -21077));
                    }
                    for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_32 = (((arr_5 [i_0] [i_0 - 1] [i_2] [i_9]) ? (arr_23 [i_0] [i_0 - 1] [i_8] [i_8] [i_8]) : var_4));
                            var_33 &= ((((max((var_18 % 1), ((64098 ? -231797640 : -3434360786154366326))))) % ((~(max(1437, 9053121209025718194))))));
                            var_34 ^= (max((min(-9223372036854775772, 17960119238392823092)), (((max((arr_24 [0] [0] [i_2]), -5605457422380138442)) | ((min(-3434360786154366326, 65535)))))));
                        }
                        for (int i_10 = 4; i_10 < 20;i_10 += 1)
                        {
                            var_35 -= (min((var_8 != 9393622864683833415), -5605457422380138442));
                            var_36 -= (1834282800175317569 ? -5 : -1757619839);
                        }
                        var_37 = ((((((arr_18 [i_0 - 1] [i_1] [i_2] [i_8 + 1]) << (65534 - 65529)))) ? (~9393622864683833412) : (~var_13)));
                    }

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            var_38 &= ((-((var_5 ? var_4 : 9223372036854775783))));
                            var_39 = (var_11 + 12846287837958693681);
                        }
                        var_40 = (max(((((max(1, 4178595888324910151))) ? (((arr_20 [i_0] [i_1] [i_0] [i_11]) ? var_7 : var_8)) : (arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]))), ((max(var_18, var_19)))));

                        for (int i_13 = 3; i_13 < 19;i_13 += 1)
                        {
                            var_41 += -1448;
                            var_42 = (((arr_0 [i_0 + 1]) - 9393622864683833422));
                            var_43 = (min(-1, (max(var_14, 6757))));
                            var_44 = max(0, (arr_6 [i_0]));
                        }
                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 20;i_14 += 1)
                        {
                            var_45 = var_18;
                            var_46 = var_12;
                        }

                        for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                        {
                            var_47 = ((((((((var_0 ? 1455 : (arr_32 [i_0 - 1] [i_0] [0] [i_0]))) == (var_18 + 64068))))) * (((min(var_16, 34359214080)) >> 10))));
                            var_48 -= ((2147483647 ? ((min(10, 0))) : (max(18446744073709551615, (((var_6 ? var_1 : var_11)))))));
                        }
                        for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
                        {
                            var_49 &= (max((((arr_7 [i_0 + 1]) / (((max(var_7, 255)))))), -1535062249));
                            var_50 = (((35963 != 17570134131142752888) ? (!13221643933042591358) : ((var_2 - (-15 + 63805)))));
                        }
                    }
                }
                var_51 ^= max((-32767 - 1), ((+((var_19 ? (arr_25 [i_0] [3] [i_0] [i_1] [i_0] [i_0]) : 17960119238392823073)))));
            }
        }
    }
    #pragma endscop
}
