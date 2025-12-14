/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37573
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
    var_16 += ((/* implicit */unsigned char) min((((/* implicit */int) ((-7716895987980683195LL) == (((/* implicit */long long int) ((/* implicit */int) (short)11174)))))), ((-(((((/* implicit */_Bool) (short)11203)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) var_2))))))));
    var_17 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_18 = ((((/* implicit */int) ((unsigned char) 499067053U))) << (((((/* implicit */int) arr_1 [i_0 - 1])) - (32238))));
            var_19 = (((!(((/* implicit */_Bool) 20U)))) ? (((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) (_Bool)1)));
            arr_4 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((((/* implicit */int) arr_3 [i_0])) - (667)))))) : (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_0])) - (667))) - (15391))))));
            var_20 = ((/* implicit */signed char) (((((_Bool)1) ? (-4898272781438508632LL) : (((/* implicit */long long int) 1180116282U)))) / (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))));
        }
        for (unsigned int i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
            {
                arr_11 [i_0] [i_2 + 1] [i_0] [(_Bool)1] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-71)) * (((/* implicit */int) (unsigned short)2681))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27728))) : (((2497511593U) * (652924935U))))))));
                arr_12 [i_3] [i_0] [i_0 + 2] = ((/* implicit */short) 3913995949U);
                var_22 *= ((/* implicit */signed char) ((_Bool) arr_10 [i_0 - 1] [i_0 - 1]));
            }
            for (long long int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_11))));
                var_24 = (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) < (3792199598391952538LL)))));
                var_25 = ((/* implicit */short) var_9);
            }
            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)4903))));
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [8LL] [i_5])))))));
                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((4898272781438508634LL) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_2])))))) ? (((((/* implicit */unsigned long long int) var_9)) | (arr_5 [i_0]))) : (((/* implicit */unsigned long long int) -5979890486929059298LL))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_7 = 1; i_7 < 20; i_7 += 1) 
                {
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)196))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_13 [i_2 + 1] [i_2])))))));
                    arr_23 [i_0] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)252)) ? ((((_Bool)1) ? (11877929978346322776ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (0ULL)));
                    var_30 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (11877929978346322776ULL)))) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_0 + 1])) : (((/* implicit */int) arr_17 [i_2 + 1] [i_7 + 2]))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 4; i_8 < 22; i_8 += 3) 
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17168582043005418358ULL)))) ? (((/* implicit */unsigned long long int) -329583112)) : (((((/* implicit */_Bool) arr_14 [i_8])) ? (((/* implicit */unsigned long long int) 3970455947U)) : (18446744073709551615ULL)))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (unsigned short)23532)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (short)-31173)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(short)1] [i_8]))) : (12920282032631312816ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_2] [i_0 - 1])) ? (((/* implicit */int) (unsigned short)34148)) : (((/* implicit */int) var_1))))))))));
                        var_33 = ((/* implicit */short) (unsigned char)236);
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (unsigned short)34128))));
                        arr_26 [i_0] [(signed char)6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_8] [i_0] [i_0] [i_0]))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_7 + 3] [20])) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (_Bool)1)))))));
                        var_36 = ((/* implicit */unsigned int) ((unsigned long long int) 3525270334U));
                    }
                    for (unsigned int i_10 = 3; i_10 < 23; i_10 += 3) 
                    {
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34107)) ? (((/* implicit */int) arr_14 [i_7 - 1])) : (((/* implicit */int) (unsigned short)31403))))) ? ((+(((/* implicit */int) var_10)))) : ((~(((/* implicit */int) (unsigned char)242)))))))));
                        var_38 = ((/* implicit */unsigned long long int) ((((_Bool) (unsigned char)197)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)34132))));
                        var_39 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)148))))) >= (((/* implicit */int) (unsigned short)17143))));
                    }
                    arr_31 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4211780877U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137)))));
                }
                for (short i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) arr_24 [i_2 - 1] [(unsigned short)16] [i_6] [i_11] [(short)4] [i_6] [i_6]))));
                    var_41 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) -5374779996101382484LL))) ? (((((/* implicit */_Bool) (unsigned short)34121)) ? (((/* implicit */int) (unsigned short)7224)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_28 [i_0 + 1] [i_2] [i_6] [i_6] [i_11] [(unsigned char)14] [i_11])) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) (signed char)-116))))));
                }
                for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    arr_36 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) (short)-32539)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6129058804782617961LL)))));
                    arr_37 [(short)6] [i_6] [(short)6] &= ((/* implicit */unsigned short) 8042951686430397348ULL);
                    arr_38 [i_0] [i_0] [i_12] = ((/* implicit */_Bool) 5414466512303139975ULL);
                    arr_39 [i_2 + 1] [i_2] [i_2] [i_0] = ((_Bool) 8042951686430397343ULL);
                }
                var_42 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6] [i_6])) ? (((/* implicit */int) arr_16 [i_0 - 1] [i_6])) : (((/* implicit */int) (unsigned short)17149))));
                var_43 &= ((/* implicit */short) ((signed char) ((((/* implicit */int) (unsigned char)113)) / (((/* implicit */int) (short)30128)))));
            }
            for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                var_44 = ((/* implicit */unsigned int) min((var_44), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) (short)32767))))) - (((((/* implicit */_Bool) 327852008U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58161)) - (-238008352)))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3898868012U)))) : (var_4)));
            }
            var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) (+(((((/* implicit */int) var_14)) << (((((/* implicit */int) arr_3 [16])) - (645))))))))));
        }
        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            var_47 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_22 [i_14] [i_0] [11LL])) == (((/* implicit */int) (unsigned short)48378)))))));
            /* LoopSeq 3 */
            for (signed char i_15 = 2; i_15 < 23; i_15 += 4) /* same iter space */
            {
                arr_48 [i_0] [i_14] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (short)-22503)) : (((/* implicit */int) (short)32539))));
                var_48 = ((/* implicit */unsigned long long int) ((arr_17 [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1]))));
            }
            for (signed char i_16 = 2; i_16 < 23; i_16 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (short i_17 = 3; i_17 < 22; i_17 += 1) 
                {
                    arr_54 [i_0] [i_0] [i_16 - 1] [i_17 + 1] = ((/* implicit */unsigned char) ((unsigned long long int) 1806604571));
                    var_49 *= ((/* implicit */unsigned short) 8647062157409934490ULL);
                }
                for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
                {
                    arr_58 [i_0] [i_0] [i_16 + 1] [i_18] = ((((/* implicit */unsigned long long int) 8197381123125701749LL)) / (8647062157409934490ULL));
                    arr_59 [i_0] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58312)) ? (((8197381123125701749LL) / (23952148728278886LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 8197381123125701749LL)) ? (((/* implicit */int) arr_43 [i_0 + 2] [i_0] [i_18])) : (((/* implicit */int) (unsigned char)85)))))));
                    arr_60 [i_0] [i_0 + 1] [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0 - 1] [i_0] [i_18]))) / (((unsigned int) (signed char)-72))));
                    /* LoopSeq 2 */
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 1) 
                    {
                        arr_63 [(short)15] [i_0] [i_16 + 1] [i_16 + 1] [i_18] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_29 [3U] [i_14] [i_14] [11U] [i_14]))));
                        arr_64 [i_0] [i_0] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) arr_53 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 - 1])) : ((~(((/* implicit */int) (_Bool)1))))));
                        var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) arr_33 [i_0 + 2] [i_0 + 1] [i_0] [i_16] [i_16 - 1] [i_18]))));
                        var_51 = ((/* implicit */unsigned char) ((short) -1806604571));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_68 [i_0] = ((/* implicit */unsigned int) ((((23952148728278886LL) == (((/* implicit */long long int) arr_15 [i_0] [i_14] [i_16] [i_18])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 698996135U))))) : ((((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_16 [i_18] [i_20]))))));
                        arr_69 [i_0] [i_0 + 1] [i_16] [i_16 - 1] [i_20] [i_0] [i_18] = ((/* implicit */short) (((-(((/* implicit */int) (unsigned short)58311)))) >= (((/* implicit */int) var_12))));
                        arr_70 [i_0 + 1] [i_0] = ((/* implicit */long long int) ((1806604560) / ((+(((/* implicit */int) arr_53 [i_0] [i_14] [i_16] [21LL] [(_Bool)1]))))));
                        var_52 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_46 [(signed char)18] [i_16] [16LL])))));
                        var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)27948))))))))));
                    }
                    var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_67 [i_0] [i_0 + 1])) ? (arr_67 [i_0] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65525)))));
                }
                for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 3) /* same iter space */
                {
                    var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) ((unsigned long long int) (+(-1806604571)))))));
                    arr_73 [(unsigned short)13] [i_14] [(signed char)7] [i_0] = ((/* implicit */int) ((unsigned short) (unsigned char)201));
                    arr_74 [i_0] [(_Bool)1] [i_16] [i_0] [(signed char)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0 + 1] [i_14] [i_0 + 1] [i_16] [i_21])) ? (arr_25 [i_0] [(unsigned short)3] [(short)21] [i_0 + 1] [(unsigned short)3]) : (arr_25 [i_21] [i_16] [i_16 - 1] [i_14] [i_0])));
                }
                for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 3) /* same iter space */
                {
                    var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [(short)1] [(short)1])) / (((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_20 [i_14] [i_14] [i_0] [i_14]))))));
                    var_57 = ((/* implicit */signed char) ((unsigned short) arr_56 [i_16 - 1] [i_16] [i_16 - 1] [i_22]));
                }
                arr_78 [(unsigned char)5] [i_14] [i_0] = ((/* implicit */unsigned long long int) 9223372036854775804LL);
            }
            for (signed char i_23 = 2; i_23 < 23; i_23 += 4) /* same iter space */
            {
                var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (829033000U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11)))))) ? (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))) : (((/* implicit */int) ((unsigned short) (_Bool)1))))))));
                arr_81 [i_0] [i_14] [i_0] = (((((_Bool)1) ? (arr_19 [i_14] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13728))))) << (((((/* implicit */int) ((short) 111016897U))) + (1106))));
            }
            /* LoopNest 2 */
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
            {
                for (long long int i_25 = 0; i_25 < 24; i_25 += 3) 
                {
                    {
                        var_59 = ((/* implicit */unsigned char) ((((-358368320) + (2147483647))) >> (((/* implicit */int) var_8))));
                        /* LoopSeq 2 */
                        for (long long int i_26 = 2; i_26 < 23; i_26 += 3) 
                        {
                            var_60 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (signed char)-122))));
                            var_61 = ((/* implicit */short) min((var_61), (((/* implicit */short) (!((!((_Bool)0))))))));
                        }
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_75 [i_0 - 1] [i_14] [i_14] [i_24] [i_25] [(unsigned char)13])) : (((/* implicit */int) arr_90 [i_0] [i_0] [i_14] [i_24 - 1] [i_25] [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))));
                            var_63 = ((/* implicit */signed char) 17538849632808899135ULL);
                        }
                    }
                } 
            } 
        }
        arr_96 [i_0] = ((/* implicit */unsigned char) (short)28151);
    }
}
