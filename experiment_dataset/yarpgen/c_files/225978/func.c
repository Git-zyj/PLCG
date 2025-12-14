/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225978
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_12 |= min((-1970490884), (((/* implicit */int) (unsigned short)41252)));
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_13 += ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_3 [(short)3] [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])))));
                var_14 = ((/* implicit */int) arr_3 [i_0] [i_0] [i_2]);
            }
            for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) 
            {
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)20935)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned char)182))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_6 [i_3] [8ULL] [i_3 - 2] [i_3 - 1])) : (((/* implicit */int) arr_6 [i_3] [i_3] [i_3 + 1] [i_3 - 2]))))))))));
                arr_12 [15] [i_1] [i_1] [i_3] = min((((unsigned char) arr_5 [(unsigned char)17] [i_1] [i_3] [i_3 - 1])), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (arr_0 [i_1])))) < (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_3 - 2]))))));
                var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_8 [i_3 - 2] [i_3 - 1]), (((/* implicit */unsigned int) arr_3 [i_3 + 1] [i_3 - 2] [i_3 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1] [i_3] [i_3]))) < (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (signed char)-106))))))))) : (((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_0] [i_3])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (max((((/* implicit */unsigned long long int) arr_2 [(signed char)21])), (17398698781173482990ULL)))))));
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((unsigned int) (short)16384)) == (((/* implicit */unsigned int) 847094359))));
                            var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) (signed char)105)) ? (min((arr_0 [i_1]), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) (signed char)-99)))))))) ? ((+(((/* implicit */int) (signed char)-64)))) : ((~(((/* implicit */int) min((var_4), (arr_1 [i_0] [i_0]))))))));
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_14 [i_3 + 1] [i_0] [i_3 + 1] [i_4 + 1] [i_4 + 1])))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                var_20 += ((/* implicit */short) ((_Bool) arr_16 [i_0] [(short)17] [i_1] [i_1] [i_6] [i_6]));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (unsigned char i_8 = 2; i_8 < 21; i_8 += 2) 
                    {
                        {
                            arr_27 [(signed char)11] [i_1] [i_6] [i_1] [i_7] [i_8 + 1] = ((/* implicit */signed char) (+(arr_14 [i_8 + 1] [i_8] [i_8] [i_8] [i_8])));
                            arr_28 [i_0] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)106)))))));
                            var_21 = ((((/* implicit */_Bool) arr_1 [i_8 - 1] [i_8 - 2])) ? (((/* implicit */int) arr_1 [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) arr_25 [i_8 - 2])));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)14952)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))) : (((long long int) -1556970005))));
                    arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)0);
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_9 + 3] [i_9] [i_9] [i_9] [(unsigned short)7] [i_9 - 1])) ? (((/* implicit */int) arr_29 [i_9 + 3] [i_9 + 3] [i_9] [i_9] [i_9] [7LL])) : (((/* implicit */int) arr_29 [i_9 + 3] [10ULL] [i_9] [i_9] [i_9] [5LL]))));
                    var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_9] [i_9 - 1] [i_6])) ? (arr_20 [i_0] [i_9 - 1] [i_6]) : (arr_20 [i_9 + 1] [i_9 + 4] [i_9 + 1])));
                }
                for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    arr_35 [i_0] [i_0] [i_0] [i_0] = (!(arr_33 [i_0] [i_1] [i_1] [i_6] [i_10]));
                    /* LoopSeq 2 */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_6] [i_10] [i_11] [(unsigned short)0])) ? (arr_16 [i_11] [i_10] [17LL] [i_6] [i_1] [i_0]) : (((/* implicit */long long int) var_6))));
                        var_26 ^= ((/* implicit */signed char) arr_36 [i_0] [i_0] [i_1] [i_1] [i_10] [i_11]);
                        var_27 = ((((/* implicit */_Bool) arr_29 [(signed char)7] [i_0] [i_1] [i_6] [i_10] [i_11])) ? (7716543572541759013LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
                        var_28 += ((/* implicit */unsigned short) ((long long int) arr_26 [i_0] [i_1] [i_6] [i_10] [i_11]));
                    }
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) -3804176544224601636LL))) && (((/* implicit */_Bool) ((short) 1970490884)))));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [(signed char)4]))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_10] [i_12])) << (((arr_30 [i_0] [i_10]) - (3631002720815660453ULL)))));
                        var_32 = ((/* implicit */int) ((((/* implicit */long long int) arr_19 [i_12] [(unsigned char)14] [i_6] [i_0])) + (arr_16 [i_0] [i_1] [i_6] [i_6] [i_10] [i_12])));
                    }
                    var_33 = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))) - (1921116347U));
                    var_34 *= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_1]))));
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((unsigned int) arr_20 [i_0] [i_0] [i_0])))));
                }
                for (short i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    var_36 = ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) (signed char)104)))));
                    arr_46 [i_1] [i_1] [i_1] [i_13] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))) : (-1LL)))));
                    arr_47 [i_1] [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) arr_31 [i_1] [i_1]))));
                }
            }
            arr_48 [i_0] = ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) -141683023)), (arr_30 [i_1] [i_1]))))));
        }
        for (short i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            var_37 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 0LL))) ? (((/* implicit */int) (short)29990)) : (201326592)))), (((((/* implicit */_Bool) arr_6 [i_0] [i_14] [i_14] [i_14])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_0] [i_0])))))));
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                for (unsigned int i_16 = 3; i_16 < 19; i_16 += 4) 
                {
                    {
                        arr_59 [i_0] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) 201326579)))))));
                        var_38 = ((((/* implicit */_Bool) (-(-4466341007728235828LL)))) ? (((/* implicit */int) ((short) ((short) 18446744073709551615ULL)))) : (((/* implicit */int) min((arr_36 [i_16 + 3] [i_16 - 1] [i_16 + 2] [i_16 - 1] [i_16 + 1] [i_16 - 1]), (arr_36 [i_16 + 3] [i_16 - 1] [i_16 + 2] [i_16 - 1] [i_16 + 1] [i_16 - 1])))));
                        var_39 = ((short) ((unsigned long long int) arr_42 [i_16 + 1] [i_15]));
                        var_40 = ((/* implicit */short) min((((((/* implicit */int) arr_33 [i_16] [(signed char)14] [i_16 - 3] [i_16 - 1] [i_0])) >> (((arr_0 [i_16 + 3]) - (2373069447U))))), (((/* implicit */int) ((unsigned char) (short)28064)))));
                    }
                } 
            } 
            var_41 *= ((/* implicit */unsigned char) var_6);
            var_42 = ((/* implicit */int) arr_24 [i_14] [i_0] [i_14] [i_0] [i_0]);
            var_43 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_39 [i_0] [i_14] [i_14]), (((/* implicit */long long int) (unsigned char)117))))) ? (max((((/* implicit */unsigned long long int) arr_14 [i_14] [i_14] [i_0] [i_0] [(unsigned char)17])), (arr_41 [i_0] [i_0] [i_0] [i_0] [i_14]))) : (((unsigned long long int) (signed char)-61)))) < (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (arr_19 [i_0] [i_0] [i_0] [i_14]) : (((/* implicit */int) var_4)))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)117)), (var_0)))))))));
        }
        for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 1; i_18 < 21; i_18 += 2) 
            {
                for (unsigned short i_19 = 0; i_19 < 22; i_19 += 3) 
                {
                    {
                        arr_66 [i_18] [(short)0] [i_17] [i_18] = ((/* implicit */short) 201326619);
                        arr_67 [i_0] [i_17] [i_18] [i_18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-10898))));
                    }
                } 
            } 
            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((((/* implicit */_Bool) 12577233700832980008ULL)) && (((/* implicit */_Bool) (signed char)0)))) ? (min((min((((/* implicit */long long int) var_8)), (arr_2 [10]))), (((/* implicit */long long int) arr_40 [i_17])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_34 [i_17] [i_17] [i_17] [i_0] [i_17] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (12577233700832980008ULL)))))))))));
            var_45 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((var_10), (((/* implicit */unsigned long long int) 1921116347U)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_33 [i_17] [i_17] [i_0] [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */long long int) var_3)), ((-9223372036854775807LL - 1LL)))) == (((/* implicit */long long int) ((/* implicit */int) ((short) (-9223372036854775807LL - 1LL))))))))) : (arr_61 [i_0] [i_0] [i_0])));
            var_46 = ((long long int) ((unsigned short) ((((/* implicit */_Bool) arr_53 [i_17] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0]))) : (3804176544224601635LL))));
            /* LoopNest 2 */
            for (short i_20 = 2; i_20 < 21; i_20 += 1) 
            {
                for (unsigned short i_21 = 1; i_21 < 21; i_21 += 3) 
                {
                    {
                        var_47 *= ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) arr_7 [i_20 - 2] [i_20 + 1] [i_21 + 1] [i_21]))), (arr_2 [i_0])));
                        arr_74 [i_0] [i_17] [i_20] [i_21] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1LL) + (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_21] [i_21 + 1] [i_21] [i_21] [i_21 + 1])))))) ? ((+((-(((/* implicit */int) (unsigned char)241)))))) : (((/* implicit */int) arr_1 [8LL] [i_17]))));
                        arr_75 [i_0] [i_0] [i_20] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_38 [i_20 - 1] [i_21 - 1])))));
                        arr_76 [i_20] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_20 - 1])) ? (max((-201326593), (((/* implicit */int) (unsigned char)246)))) : (((/* implicit */int) (unsigned char)255)))));
                    }
                } 
            } 
        }
        for (unsigned short i_22 = 3; i_22 < 19; i_22 += 2) 
        {
            arr_80 [i_0] [i_22 + 3] = ((/* implicit */int) var_3);
            arr_81 [i_0] [i_22] [i_0] = ((/* implicit */signed char) min((((/* implicit */short) arr_52 [i_0])), ((short)18775)));
            var_48 = (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_22]))) : (arr_79 [i_22])))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0]))) + (arr_69 [i_0] [i_22] [i_0])))))));
            var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) ((min((arr_34 [i_22 - 3] [i_22 - 3] [i_22] [i_22] [i_22] [6LL]), (arr_34 [i_22 + 3] [i_22] [i_22] [i_22 + 2] [(signed char)4] [i_22]))) ^ (((/* implicit */long long int) arr_62 [i_0] [i_22 - 2] [i_22] [i_22])))))));
            var_50 |= ((/* implicit */long long int) arr_58 [i_0] [i_22] [i_0] [i_22] [i_22] [i_22]);
        }
        var_51 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */int) (unsigned short)48495)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-7335)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0]))));
    }
    var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((int) -1LL))), (((((/* implicit */_Bool) (unsigned short)17041)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))) : (-3804176544224601616LL)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_0)) : (var_6)))) : (((unsigned long long int) 6652922761467329417LL)))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_7))))))))))));
}
