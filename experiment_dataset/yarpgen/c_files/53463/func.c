/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53463
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_9 [i_1] [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((var_7), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) min((var_17), (arr_4 [i_0] [i_1 + 1] [(unsigned short)2])))) : ((((~(((/* implicit */int) (signed char)(-127 - 1))))) | (((/* implicit */int) arr_7 [i_0]))))));
                        var_18 += ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((var_2) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (arr_8 [(_Bool)1] [(_Bool)1] [i_0])));
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    arr_18 [i_5] [i_5] [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_7))))), (max((arr_14 [i_5] [i_6]), (((/* implicit */unsigned char) var_12))))));
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) arr_15 [i_7] [(signed char)12] [i_5] [i_4]);
                        var_21 = ((/* implicit */signed char) ((int) min((min((((/* implicit */int) (signed char)-102)), (1073741823))), (((((/* implicit */_Bool) arr_10 [(signed char)12])) ? (((/* implicit */int) var_13)) : (2147483647))))));
                        var_22 = ((((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) arr_16 [i_4] [i_5] [i_6] [i_5]))))) / (((/* implicit */int) ((((/* implicit */int) arr_16 [i_5] [i_5] [i_6] [i_5])) < (((/* implicit */int) arr_11 [i_4]))))));
                        var_23 += ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)65504)) ? (536346624) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (signed char)12))));
                        var_24 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-5))))))), (-8192)));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((var_10) + (2147483647))) >> ((((~(((/* implicit */int) (signed char)15)))) + (25)))));
                        arr_24 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_14))));
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            var_25 = (~(((/* implicit */int) arr_13 [i_9] [i_6] [i_5])));
                            var_26 = (!(((/* implicit */_Bool) arr_22 [4LL] [i_5] [i_6] [i_8] [i_9] [i_6])));
                            arr_27 [i_4] [i_5] [i_5] [i_4] [i_9] = var_7;
                        }
                        for (signed char i_10 = 2; i_10 < 16; i_10 += 2) 
                        {
                            var_27 = ((/* implicit */_Bool) var_15);
                            arr_30 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */int) (signed char)-1);
                            arr_31 [i_6] [(_Bool)1] [i_5] [i_8] [i_10] [i_4] = ((/* implicit */unsigned char) arr_22 [i_10 + 2] [i_8] [i_6] [i_6] [i_5] [i_4]);
                        }
                        for (unsigned char i_11 = 3; i_11 < 15; i_11 += 3) 
                        {
                            arr_35 [i_5] [(signed char)15] [i_6] [i_6] [i_6] [i_8] [i_11 + 2] = ((/* implicit */_Bool) arr_22 [i_11] [i_8] [i_5] [i_6] [i_5] [i_4]);
                            arr_36 [i_4] [i_5] [14] [i_4] [i_4] = ((/* implicit */_Bool) var_0);
                            var_28 = ((/* implicit */signed char) var_16);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 17; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 2; i_13 < 14; i_13 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */int) var_8);
                                arr_43 [i_5] [i_5] [i_6] [i_12 - 1] [(signed char)10] [i_13 + 1] [(unsigned short)10] = ((/* implicit */int) arr_21 [i_4] [i_5] [i_6] [i_6] [i_13 - 2]);
                                arr_44 [i_4] [i_4] [i_5] [i_6] [i_12 - 2] [i_12] |= ((_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)));
                                arr_45 [i_5] [i_5] [i_6] [i_12] = ((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)1920)) * (-1))), (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))));
                                arr_46 [i_12] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_25 [i_4] [i_5] [i_6] [i_13 + 2] [i_13]) & (((/* implicit */long long int) (-2147483647 - 1))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
                        {
                            var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_6] [i_6] [i_6] [i_14])) ? (var_10) : (((/* implicit */int) arr_39 [i_4] [i_5] [i_6] [i_14]))));
                            arr_53 [i_4] [i_5] [i_6] [i_5] [i_15] = ((/* implicit */unsigned char) arr_10 [i_15]);
                            arr_54 [i_5] [i_5] [i_6] [i_4] [i_15] [i_6] = ((/* implicit */signed char) (!(arr_41 [i_5] [i_5] [i_6] [i_5] [i_15])));
                        }
                        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) /* same iter space */
                        {
                            arr_58 [i_4] [i_4] [i_5] [i_5] [i_14] [i_16] [i_16] = ((/* implicit */long long int) min((((/* implicit */int) var_4)), ((~(arr_15 [i_4] [i_5] [i_6] [i_16])))));
                            arr_59 [i_6] [i_5] [i_6] [i_14] [i_16] |= (signed char)1;
                            arr_60 [i_4] [i_5] [i_5] [(signed char)10] [i_16] [i_16] = (unsigned char)9;
                        }
                        arr_61 [i_14] [i_5] [i_6] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (2097151)))) ? (((/* implicit */int) arr_39 [i_4] [i_5] [i_5] [i_14])) : (((((/* implicit */_Bool) arr_39 [i_4] [i_6] [i_5] [i_14])) ? (((/* implicit */int) arr_39 [i_4] [(unsigned char)13] [i_5] [i_14])) : (((/* implicit */int) arr_39 [i_4] [i_5] [i_6] [i_14]))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        arr_66 [i_5] [i_5] [i_6] [i_17] = ((/* implicit */signed char) var_1);
                        var_31 = -536346633;
                        var_32 ^= ((/* implicit */signed char) ((min(((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_4] [i_5] [i_6] [i_17])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_12))))))) * (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_6] [i_6] [i_5] [i_6] [i_6])))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_18 = 1; i_18 < 17; i_18 += 2) 
                    {
                        arr_69 [i_18 - 1] [i_6] [i_5] [i_4] [i_4] = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) min((var_13), (((/* implicit */signed char) (_Bool)1))))))));
                        arr_70 [i_4] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) max(((unsigned char)45), (((/* implicit */unsigned char) (signed char)-92))))) << (((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) arr_17 [i_4] [i_5] [i_6] [i_18 - 1])))))))), (7328279519165305352LL)));
                    }
                }
                for (signed char i_19 = 3; i_19 < 16; i_19 += 4) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_20 = 1; i_20 < 15; i_20 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) var_13)) ? (-1) : (var_11)))))));
                        var_34 += ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                        /* LoopSeq 1 */
                        for (long long int i_21 = 1; i_21 < 17; i_21 += 4) 
                        {
                            var_35 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-938716404)))), (min((((((/* implicit */long long int) ((/* implicit */int) arr_75 [i_4] [i_21]))) ^ (-5067424211230212498LL))), (((/* implicit */long long int) min((((/* implicit */int) var_5)), (var_3))))))));
                            var_36 ^= arr_38 [i_4] [i_5] [i_4] [i_4] [i_20] [i_21 + 1];
                        }
                    }
                    for (signed char i_22 = 1; i_22 < 15; i_22 += 4) /* same iter space */
                    {
                        var_37 *= ((/* implicit */_Bool) ((min((var_10), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) var_4)))))) ^ (((/* implicit */int) arr_65 [i_22 + 1]))));
                        var_38 += min((((/* implicit */int) min(((signed char)16), ((signed char)(-127 - 1))))), (536346633));
                    }
                    for (signed char i_23 = 1; i_23 < 15; i_23 += 4) /* same iter space */
                    {
                        arr_85 [i_4] [i_5] [i_5] [i_23 + 2] = ((((((/* implicit */int) arr_51 [i_5] [i_4] [i_5] [i_4])) == (((/* implicit */int) arr_62 [i_19 - 2] [i_23 - 1] [(signed char)1] [i_23 + 2])))) ? (((/* implicit */int) (unsigned short)13736)) : (((/* implicit */int) var_7)));
                        arr_86 [i_4] [i_5] [i_5] [i_23] = ((/* implicit */unsigned char) min((((/* implicit */signed char) arr_33 [i_19 + 2] [(unsigned short)6] [i_5] [i_19] [i_19 - 2])), (min(((signed char)127), ((signed char)7)))));
                    }
                    /* vectorizable */
                    for (int i_24 = 1; i_24 < 14; i_24 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            var_39 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_19 - 3] [i_5] [i_19 - 3])) ? (var_0) : (((/* implicit */int) arr_40 [i_19 - 1] [i_5] [i_19 - 2]))));
                            arr_91 [i_4] [i_5] = ((signed char) -6448052355330986441LL);
                            var_40 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_14 [i_5] [i_5])) != (arr_74 [i_4])))) / (((/* implicit */int) var_13))));
                            arr_92 [i_5] [i_25] = (i_5 % 2 == zero) ? (((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) arr_68 [i_5] [i_5])) + (47))))) : (((((/* implicit */int) (signed char)127)) << (((((((/* implicit */int) arr_68 [i_5] [i_5])) + (47))) - (63)))));
                        }
                        for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                        {
                            var_41 = ((/* implicit */int) ((var_0) <= ((~(((/* implicit */int) arr_42 [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                            arr_96 [i_4] [i_4] [i_5] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) var_9);
                        }
                        /* LoopSeq 3 */
                        for (int i_27 = 0; i_27 < 18; i_27 += 3) 
                        {
                            arr_99 [i_5] [i_5] [i_5] [(_Bool)1] [i_5] [i_5] = (-(9223372036854775807LL));
                            arr_100 [i_4] [i_5] [i_19] [i_24 + 3] [i_24] [i_27] = ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
                            var_42 *= ((/* implicit */_Bool) ((((long long int) arr_38 [i_4] [i_5] [i_4] [i_24 + 4] [i_27] [i_27])) / (((/* implicit */long long int) var_6))));
                            var_43 = ((/* implicit */int) arr_51 [i_5] [i_19 + 1] [i_19 + 1] [i_27]);
                            var_44 ^= ((/* implicit */signed char) arr_25 [(signed char)12] [i_24 + 4] [i_4] [i_5] [i_4]);
                        }
                        for (signed char i_28 = 2; i_28 < 15; i_28 += 1) 
                        {
                            arr_104 [i_28 - 1] [i_28] [i_28] [i_5] [i_28 + 1] [i_28 + 3] [i_28] = ((/* implicit */_Bool) var_8);
                            var_45 = ((_Bool) ((((/* implicit */int) (signed char)120)) / (((/* implicit */int) arr_13 [i_5] [i_19 - 2] [i_28]))));
                        }
                        for (unsigned short i_29 = 0; i_29 < 18; i_29 += 4) 
                        {
                            arr_109 [i_29] [i_29] [i_5] [i_5] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_5] [i_4] [i_19 - 2] [i_24] [i_24])) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) var_4))))) : ((~(((/* implicit */int) arr_39 [i_24 + 1] [i_19] [i_5] [i_4]))))));
                            arr_110 [i_5] [i_5] [11LL] [i_19 + 1] [i_24 + 2] [i_24 + 4] [i_29] = ((/* implicit */int) arr_82 [i_5] [i_19] [i_19] [i_19 - 1]);
                        }
                        arr_111 [i_4] [i_5] [i_5] [i_19] = (_Bool)1;
                    }
                    /* LoopNest 2 */
                    for (signed char i_30 = 1; i_30 < 16; i_30 += 1) 
                    {
                        for (int i_31 = 0; i_31 < 18; i_31 += 4) 
                        {
                            {
                                var_46 *= ((/* implicit */_Bool) arr_63 [i_4] [i_30] [i_31]);
                                arr_118 [i_5] [i_31] = ((/* implicit */unsigned short) min((min((var_1), (((/* implicit */long long int) arr_62 [i_30] [i_30 - 1] [i_30] [i_30 + 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */int) arr_62 [i_30 + 1] [i_30] [i_30 - 1] [i_30 + 2])))))));
                                arr_119 [i_5] = ((_Bool) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (min((126), (((/* implicit */int) (signed char)15)))) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_32 = 3; i_32 < 17; i_32 += 1) 
                    {
                        for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
                        {
                            {
                                arr_125 [i_32 + 1] [i_5] [i_5] [i_4] = ((/* implicit */signed char) arr_112 [i_4] [i_5] [i_4] [i_32] [i_33 - 1] [i_33]);
                                var_47 += ((signed char) ((long long int) var_16));
                            }
                        } 
                    } 
                }
                for (signed char i_34 = 0; i_34 < 18; i_34 += 4) 
                {
                    arr_129 [i_5] [i_5] [i_34] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)120))));
                    var_48 = min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775778LL))) + (51LL)))))), (min((max((var_8), (-1LL))), (((/* implicit */long long int) var_7)))));
                    var_49 -= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                }
                var_50 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_64 [i_4] [i_5])) ? (((/* implicit */int) arr_64 [i_5] [i_5])) : (((/* implicit */int) (signed char)96)))), ((~(((/* implicit */int) var_17))))));
                /* LoopNest 3 */
                for (signed char i_35 = 0; i_35 < 18; i_35 += 2) 
                {
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                    {
                        for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                        {
                            {
                                var_51 = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) arr_16 [i_4] [i_5] [i_35] [i_36])))) ^ (var_11)))));
                                arr_137 [i_4] [i_5] [i_36] [i_36] [i_5] [i_37] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (var_3) : (((/* implicit */int) arr_122 [i_37] [i_37] [i_37] [(unsigned short)12] [i_37] [i_37] [i_37])))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_117 [i_5] [i_36])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_5))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (476847686))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_38 = 4; i_38 < 11; i_38 += 4) 
    {
        var_52 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (arr_67 [i_38]))), (((/* implicit */long long int) arr_90 [i_38 + 1] [i_38] [i_38] [i_38] [i_38]))));
        var_53 += ((/* implicit */unsigned char) ((-5067424211230212498LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)118)) : (var_6))))));
        arr_140 [i_38 - 2] |= (+(((/* implicit */int) arr_50 [i_38] [i_38] [i_38])));
    }
    var_54 = ((/* implicit */int) var_16);
}
