/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197757
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)73)))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) max(((unsigned char)64), (((/* implicit */unsigned char) arr_9 [i_0] [(signed char)0] [i_2])))))), (1411335963)));
                    arr_11 [i_2] [i_1] |= ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) (unsigned short)17947)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (signed char)66)))), (((/* implicit */int) ((_Bool) arr_0 [i_1 - 2])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_20 ^= ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) + (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_7)))))))));
                        arr_15 [i_0] [i_1] [i_0] [(signed char)10] &= ((/* implicit */_Bool) ((unsigned long long int) 4422092079222711658ULL));
                        var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)183)), (min((11861096648909152285ULL), (((/* implicit */unsigned long long int) ((arr_3 [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_3]))))))))));
                    }
                }
                /* vectorizable */
                for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    arr_20 [i_1 - 1] [17ULL] &= ((/* implicit */unsigned long long int) ((long long int) 1518165336U));
                    var_22 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_4] [i_4] [i_1 - 2]))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 78197795638971108ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1 + 2])))) : (((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))))))));
                    var_24 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_4] [i_1] [i_0]))))) | (arr_19 [i_0] [i_1] [i_1 - 2] [i_1]));
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        arr_26 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */_Bool) (short)10650);
                        arr_27 [i_5] = ((unsigned long long int) arr_6 [i_1] [i_1 + 2]);
                        var_25 = ((/* implicit */signed char) (-(18446744073709551615ULL)));
                    }
                    for (signed char i_7 = 3; i_7 < 21; i_7 += 3) 
                    {
                        arr_30 [i_5] [i_5] [i_0] [i_7 - 3] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_12 [i_7] [i_1]))))));
                        arr_31 [i_5] [i_5] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6273587441549761684ULL)) ? (18368546278070580508ULL) : (15064542526869289290ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8191))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 3; i_8 < 24; i_8 += 3) 
                        {
                            var_26 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)253)) >> (((((/* implicit */int) (unsigned short)17285)) - (17267)))));
                            var_27 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? ((+(8815837919833685513ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) var_13)))))));
                            arr_36 [i_5] [i_7 + 3] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) (signed char)-1)) ? (11861096648909152272ULL) : (((/* implicit */unsigned long long int) 4294967295U)));
                            arr_37 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_8] &= ((/* implicit */signed char) (_Bool)1);
                        }
                        arr_38 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_1 + 2])) ? (483230057U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7 + 1] [i_1 + 1])))));
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_11)) : (13529534599088262626ULL)))) ? ((((_Bool)0) ? (arr_13 [i_5] [i_7]) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0)))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_32 [8ULL] [i_1] [i_1 + 1] [i_9] [i_0] [i_5] [i_9]))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183))) : (((((/* implicit */_Bool) (unsigned short)18505)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) : (78197795638971102ULL))))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_10 = 3; i_10 < 24; i_10 += 1) 
                    {
                        arr_45 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_10 - 1] [13U]))));
                        /* LoopSeq 3 */
                        for (int i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)16326)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))))))));
                            arr_48 [i_0] [i_1] [i_0] [i_5] [i_1] [(_Bool)1] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_43 [i_1] [i_1] [i_5] [i_10 - 1] [i_11] [i_1]))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            arr_51 [i_5] [i_5] [i_5] = ((((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */unsigned long long int) 1439004320U)) : (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                            arr_52 [i_5] [i_10] [0U] [0U] [i_5] = ((/* implicit */_Bool) (+(arr_43 [i_10] [2ULL] [i_10] [i_10] [i_10] [i_10 - 1])));
                        }
                        for (unsigned short i_13 = 3; i_13 < 24; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) 2855962975U))));
                            arr_55 [i_5] [i_10 - 3] [i_5] [i_1 - 2] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_10] [i_10 - 2] [(short)24] [i_10 + 1] [i_10 + 1] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1439004321U)));
                            arr_56 [i_0] [i_5] [i_10 - 3] [i_5] = ((/* implicit */signed char) (((~(((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) arr_46 [i_13] [i_13 - 2] [i_10] [i_5] [i_10] [i_5]))));
                        }
                        arr_57 [i_0] [i_1 - 2] [i_5] [i_5] = ((/* implicit */signed char) arr_46 [i_0] [i_0] [i_5] [i_10 - 1] [i_10 - 1] [i_10 - 1]);
                    }
                    arr_58 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19305))) : (-9223372036854775807LL))));
                }
                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(arr_24 [i_0] [i_0] [i_0] [i_0] [(signed char)8]))), (((/* implicit */unsigned long long int) arr_28 [(unsigned char)10] [i_1 - 1]))))) ? ((+(arr_54 [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (unsigned short i_15 = 3; i_15 < 20; i_15 += 4) 
        {
            {
                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (((((((_Bool)0) && (((/* implicit */_Bool) var_16)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 24ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) || (((/* implicit */_Bool) var_10)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    arr_65 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [(unsigned short)1] [i_14] [i_15 + 1] [i_15])) || (((/* implicit */_Bool) (unsigned short)62392))));
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((9007199187632128ULL) & (0ULL)))));
                    var_36 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(18446744073709551608ULL)))) ? (((/* implicit */int) var_9)) : (arr_62 [i_15 + 1] [i_15 + 1]))))));
                }
                for (unsigned int i_17 = 1; i_17 < 20; i_17 += 2) 
                {
                    var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_54 [i_14] [i_15 - 2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_16 [i_17] [(signed char)11] [i_14])))))))))));
                    var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) 3246391976U))));
                    arr_69 [i_14] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_14] [(_Bool)1] [i_14] [i_15] [i_17] [i_17 - 1])) ? (((/* implicit */int) (unsigned short)62392)) : (((/* implicit */int) arr_2 [i_14] [(short)14])))))))) == (min((((/* implicit */int) arr_25 [i_15] [i_15 - 3])), (((1721207466) << (((8ULL) - (8ULL)))))))));
                }
                for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    var_40 |= ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((long long int) arr_1 [i_14]))), (((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_49 [i_18] [i_15] [i_15] [i_14] [i_14])), (2459663568085595418LL)))), ((-(var_14)))))));
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-46)), (((((/* implicit */_Bool) 1981394767106363175ULL)) ? (((/* implicit */int) (short)-21526)) : (((/* implicit */int) (_Bool)0))))))) && (((((/* implicit */_Bool) ((short) (signed char)(-127 - 1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1981394767106363162ULL)) ? (16465349306603188440ULL) : (((/* implicit */unsigned long long int) 2943222016U)))))))));
                    var_42 = ((/* implicit */_Bool) arr_62 [i_14] [i_15 + 2]);
                }
            }
        } 
    } 
}
