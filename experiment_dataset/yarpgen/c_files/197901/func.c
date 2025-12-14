/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197901
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 *= ((/* implicit */unsigned int) (short)3);
    var_19 = ((/* implicit */unsigned short) 34359738367ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_0]));
                        var_21 *= arr_2 [i_2];
                        var_22 += (~(var_15));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (arr_8 [i_0] [i_0] [i_4 + 2] [i_4 + 2]) : (((/* implicit */unsigned long long int) 0U))));
                                var_23 *= ((/* implicit */signed char) (+(var_11)));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        arr_20 [(short)5] [i_0] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                        var_24 = (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_6])));
                        var_25 &= ((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_10)))) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_0] [(short)6]))));
                    }
                    for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_26 *= (~(((unsigned int) var_11)));
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 2; i_9 < 6; i_9 += 4) 
                        {
                            var_28 += ((/* implicit */short) arr_11 [i_2] [i_2] [i_2] [i_2]);
                            var_29 &= ((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-3)))))));
                        }
                        arr_29 [i_0] [i_1] [i_1] [i_1] = arr_0 [i_0];
                        var_31 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_8] [i_8])) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                    }
                    for (unsigned int i_10 = 1; i_10 < 9; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (unsigned char)0))));
                        var_33 = ((unsigned long long int) arr_24 [i_0] [i_0] [i_10 + 1] [i_0]);
                        arr_32 [i_0] [9ULL] [i_2] [i_10] = ((/* implicit */unsigned short) var_13);
                    }
                    arr_33 [i_0] = ((/* implicit */unsigned long long int) var_2);
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) var_0))));
                                arr_40 [i_0] [i_1] [i_0] [i_11] [i_12] [6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [i_0]))));
                                var_35 = ((/* implicit */unsigned short) var_15);
                            }
                        } 
                    } 
                }
                for (int i_13 = 2; i_13 < 9; i_13 += 2) /* same iter space */
                {
                    arr_43 [i_0] [i_1] [i_13] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        for (long long int i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_0] [i_1] [i_13 - 1] [i_14] [i_15]))))), (((((/* implicit */_Bool) var_13)) ? (arr_23 [i_0] [i_1] [i_0] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                                arr_51 [(short)6] [i_1] [i_0] [i_0] [(unsigned char)2] [i_15] [i_14] = ((/* implicit */int) var_4);
                                var_37 = 2282555592U;
                                var_38 = ((/* implicit */unsigned int) (((~(arr_0 [i_0]))) > (((/* implicit */unsigned long long int) (+(9223372036854775805LL))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_16 = 2; i_16 < 9; i_16 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_16 - 2] [i_16 - 1] [i_16 + 1])) ? (((/* implicit */int) var_16)) : ((-(((/* implicit */int) (short)-13))))));
                    var_40 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
                }
                for (short i_17 = 4; i_17 < 6; i_17 += 3) 
                {
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))), ((~((~(19ULL))))))))));
                    var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) var_3))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        for (signed char i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            {
                                var_43 = ((/* implicit */_Bool) var_13);
                                var_44 = ((/* implicit */signed char) arr_34 [(short)3] [i_18] [i_17 + 4] [i_1] [5LL]);
                            }
                        } 
                    } 
                    arr_64 [i_0] [i_0] = ((/* implicit */short) max((var_6), (((/* implicit */unsigned long long int) (!(var_8))))));
                }
                /* LoopNest 3 */
                for (unsigned int i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 4) 
                    {
                        for (short i_22 = 0; i_22 < 10; i_22 += 4) 
                        {
                            {
                                var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) (short)0))))), (-8930091374384543968LL))))));
                                var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) arr_21 [i_22] [i_21] [i_20] [i_1] [i_0] [i_0]))));
                                var_47 = ((/* implicit */int) (+((-(arr_31 [i_0] [i_1] [i_1] [i_1] [i_22] [0U])))));
                            }
                        } 
                    } 
                } 
                var_48 *= (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)1206))))));
                /* LoopNest 2 */
                for (unsigned int i_23 = 0; i_23 < 10; i_23 += 1) 
                {
                    for (unsigned int i_24 = 0; i_24 < 10; i_24 += 1) 
                    {
                        {
                            var_49 = (~((-(var_4))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_25 = 0; i_25 < 10; i_25 += 2) 
                            {
                                var_50 += ((/* implicit */int) (unsigned char)0);
                                var_51 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-20911))));
                                var_52 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_1] [i_1] [i_23]))) > (arr_47 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                            for (unsigned long long int i_26 = 1; i_26 < 7; i_26 += 4) 
                            {
                                var_53 *= ((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((signed char) max((((/* implicit */int) var_2)), (var_7)))))));
                                arr_84 [i_0] [4ULL] [i_23] [i_0] [i_26 + 2] [i_26] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((int) (short)-1))) & (var_12)))));
                                var_54 += ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */unsigned long long int) arr_72 [i_0] [i_1] [2U] [i_24] [i_26] [(signed char)7])) : (var_4)))));
                            }
                            for (short i_27 = 0; i_27 < 10; i_27 += 1) 
                            {
                                arr_87 [i_0] [i_1] [i_0] [i_23] [i_27] [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) (short)20886)) ? (max((1339201807U), (((/* implicit */unsigned int) (short)24)))) : (0U)));
                                var_55 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_8)), (max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 7037080243162784971ULL)) || ((_Bool)1)))), (arr_52 [i_0])))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_56 &= ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (max((max((var_12), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_5))))));
}
