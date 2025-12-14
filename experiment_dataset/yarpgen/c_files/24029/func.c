/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24029
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
    var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (2112802439) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) : (max((var_14), (var_7)))))) && (((/* implicit */_Bool) (signed char)25))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) 0U)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) (signed char)21))))) == (((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_2 [(signed char)5])) ? (12166951755271488714ULL) : (((/* implicit */unsigned long long int) 1116218013U))))))));
                    var_18 = ((((((/* implicit */unsigned int) max((arr_4 [i_0] [i_1] [i_1] [7]), (((/* implicit */int) (short)28250))))) + (((((/* implicit */_Bool) 1611758340U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11579))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */short) ((var_5) ? (arr_7 [i_2] [i_1] [i_2] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) var_0))));
                        var_20 = ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)53957)) << (((((/* implicit */int) (signed char)-25)) + (32)))))) : (arr_7 [i_2] [i_1] [i_1] [i_2] [i_3] [i_3]));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            arr_15 [i_0] [(_Bool)1] [i_2] [i_2] = ((((/* implicit */_Bool) var_14)) ? (var_7) : (3246185737U));
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_3 [i_0] [i_2] [i_4]))));
                            var_23 = ((/* implicit */unsigned short) 1305573002);
                            var_24 += ((/* implicit */signed char) var_0);
                            var_25 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]);
                            arr_19 [i_2] [i_4] [i_4] [i_2] [7U] [i_2] = ((/* implicit */unsigned int) ((var_7) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_6] [i_4] [i_2] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (short)-64)))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) var_4);
                            var_27 = ((/* implicit */long long int) var_14);
                        }
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_8] [i_8] [1] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18947))) : (arr_6 [i_0] [i_4] [i_2]))))));
                            var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)63))));
                        }
                        for (long long int i_9 = 1; i_9 < 9; i_9 += 2) 
                        {
                            arr_26 [2U] [i_9 + 1] [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_1 [i_2] [i_9 + 1])));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_6 [i_1] [i_4] [3ULL]) : (arr_6 [i_1] [i_2] [i_4])));
                        }
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4])) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_2] [i_4] [i_4] [0])));
                    }
                    for (short i_10 = 2; i_10 < 10; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned short) 1073741823U);
                        var_33 = ((/* implicit */signed char) (unsigned char)39);
                    }
                    for (int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_11] [i_2] [i_1] [(short)6] [i_0])) ? (12166951755271488714ULL) : (((/* implicit */unsigned long long int) 511U))))) ? (max((var_10), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_11] [i_1] [i_2])))) != (((((/* implicit */_Bool) arr_27 [i_0] [7U] [i_11] [i_11])) ? (((/* implicit */int) (short)18947)) : (var_8))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0] [i_11])) ? (((/* implicit */int) arr_25 [2] [i_1] [0U] [0U] [2])) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_2] [i_11] [i_11]))))) ? (arr_1 [i_11] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103)))))));
                        arr_32 [i_0] [i_0] [i_2] [i_2] = max((((/* implicit */unsigned int) (unsigned short)0)), (arr_5 [i_0] [i_1] [i_2] [i_1]));
                        var_35 = ((/* implicit */unsigned int) ((signed char) var_2));
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((690241428U), (((/* implicit */unsigned int) var_13)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) var_7)) ? (107429964130106794LL) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (short)-3675)))));
                    }
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((unsigned int) var_12)))) ? ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54831))) : (18302628885633695744ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3759979570U)) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2]))))))));
                }
                for (unsigned int i_12 = 2; i_12 < 10; i_12 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned char) arr_11 [i_14]);
                                arr_40 [i_0] [i_14] [i_12] [i_13] [i_14] = ((/* implicit */int) ((((((/* implicit */int) ((1839229150U) > (3714624044U)))) > ((~(0))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_21 [i_12 - 1] [i_0] [0] [i_13] [i_12] [0U])), (((unsigned int) var_13))))) : (((((/* implicit */_Bool) arr_3 [i_14] [i_12 + 1] [i_0])) ? ((~(arr_29 [i_14]))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_14])))))));
                                var_39 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 63852966U)), (807199767403203966ULL)))) ? ((~(((((/* implicit */unsigned long long int) var_0)) + (12166951755271488709ULL))))) : (((/* implicit */unsigned long long int) ((((arr_37 [i_12 - 1] [i_13] [i_14] [i_14] [i_12 - 1] [1U]) + (9223372036854775807LL))) >> (((arr_37 [i_12 + 1] [i_12 - 1] [i_14] [i_14] [i_14] [(unsigned char)8]) + (7653502465355499799LL)))))));
                                arr_41 [i_14] [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] &= ((/* implicit */short) ((signed char) ((unsigned short) arr_39 [i_0] [i_12] [i_14] [i_13] [i_0] [i_12])));
                                arr_42 [i_0] [i_1] [i_12] [i_14] [i_14] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((int) arr_16 [i_0] [i_0] [i_12] [i_0] [0U]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (arr_6 [i_0] [i_1] [i_12])))) ? (((((/* implicit */_Bool) arr_5 [7LL] [i_12] [(unsigned char)2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2455738146U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((((/* implicit */_Bool) (unsigned short)10705)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10703))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */signed char) (unsigned short)53954);
                }
                for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    var_41 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_14)) : (((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [(unsigned char)3] [i_0] [i_0] [(_Bool)0]))))))) << (((((((/* implicit */_Bool) arr_27 [i_15] [i_15] [i_1] [i_0])) ? (((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_27 [(unsigned short)1] [i_1] [i_1] [i_1])))) - (202)))));
                    var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) % (((((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)14776)) : (arr_46 [(unsigned short)0] [i_1] [i_15] [3LL])))))) >= (((((/* implicit */_Bool) 8ULL)) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_15])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54831)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-64)))))))));
                }
                for (signed char i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    var_43 = ((/* implicit */short) var_0);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 4) 
                        {
                            var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_18] [i_0]))) : (var_12))))));
                            var_45 = ((/* implicit */int) ((signed char) arr_18 [i_0] [i_0] [9] [i_0] [i_0] [i_0] [i_0]));
                            var_46 = ((/* implicit */int) max((var_46), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_53 [i_16] [i_17] [i_18])) : (((/* implicit */int) arr_53 [i_0] [i_1] [i_16]))))));
                            var_47 = ((/* implicit */_Bool) ((unsigned int) var_8));
                        }
                        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_16] [i_16] [i_16] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [10LL] [i_1] [i_16] [4LL] [i_17]))) : (arr_37 [i_0] [(_Bool)1] [i_1] [i_1] [i_16] [i_17])));
                        var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) var_6))));
                        var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)54806))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) -1186068558)) : (3759979588U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_16] [i_17] [i_17])))));
                    }
                    /* vectorizable */
                    for (signed char i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        var_51 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_16] [i_19]))) | (((unsigned int) 1664233989))));
                        var_52 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (var_6) : (arr_30 [i_16] [i_1] [i_16] [i_19]))) ^ (((/* implicit */unsigned int) ((var_5) ? (-1502197065) : (-1502197080))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_20 = 0; i_20 < 11; i_20 += 3) 
                        {
                            arr_58 [8] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */unsigned long long int) 534987726U)) : (18446744073709551608ULL)));
                            var_53 = ((/* implicit */unsigned long long int) arr_12 [(unsigned char)1] [i_1] [i_1] [i_1] [i_1]);
                            var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [1U] [(unsigned short)8]))))) ? (((/* implicit */unsigned int) arr_35 [i_0] [i_1] [i_16] [i_19])) : (var_0)));
                        }
                        var_55 = ((((/* implicit */_Bool) arr_8 [i_1] [i_16] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) 9840122826171990317ULL)) ? (var_0) : (4294967295U))));
                        var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) (_Bool)1)) : (1166846266)))) ? (((((/* implicit */_Bool) 6879118734121984004ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_16] [i_16] [(signed char)2] [i_16] [i_19])))))));
                    }
                    /* vectorizable */
                    for (long long int i_21 = 0; i_21 < 11; i_21 += 4) 
                    {
                        var_57 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_16] [i_21]))) : (var_7)));
                        /* LoopSeq 3 */
                        for (unsigned int i_22 = 0; i_22 < 11; i_22 += 1) 
                        {
                            var_58 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) 1502197057)) * (arr_24 [3U] [i_21] [i_1] [i_1] [i_1] [i_0])));
                            var_59 = ((/* implicit */unsigned short) var_6);
                        }
                        for (int i_23 = 0; i_23 < 11; i_23 += 4) 
                        {
                            var_60 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_1))));
                            var_61 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (((((/* implicit */_Bool) 4294967295U)) ? (3051239913U) : (((/* implicit */unsigned int) -655573313))))));
                        }
                        for (unsigned int i_24 = 0; i_24 < 11; i_24 += 4) 
                        {
                            var_62 = ((/* implicit */unsigned char) var_14);
                            var_63 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (arr_44 [i_16] [i_16] [i_16]) : (((/* implicit */long long int) 1502197065))));
                        }
                        /* LoopSeq 2 */
                        for (int i_25 = 4; i_25 < 8; i_25 += 1) 
                        {
                            var_64 = ((/* implicit */unsigned char) var_0);
                            var_65 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((2614571403U) >> (((((/* implicit */int) arr_59 [i_0] [i_1] [i_16] [i_21])) - (12656))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4))))));
                        }
                        for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 4) 
                        {
                            arr_75 [i_0] [i_1] [i_16] [i_21] [i_26] = ((/* implicit */unsigned short) arr_35 [4] [i_1] [i_21] [i_21]);
                            var_66 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_16] [i_16] [i_21] [i_16] [i_26])))))) < (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_67 [i_0] [1] [i_16] [i_21] [8]) : (((/* implicit */unsigned int) arr_46 [i_0] [i_16] [i_0] [i_26])))));
                        }
                        var_67 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (arr_68 [i_0] [i_1] [i_1] [i_0] [i_1]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 625307071U)) >= (arr_6 [i_0] [i_1] [i_16]))))));
                    }
                    var_68 = ((/* implicit */long long int) var_13);
                }
            }
        } 
    } 
}
