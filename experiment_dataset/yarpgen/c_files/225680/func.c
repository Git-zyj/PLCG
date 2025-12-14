/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225680
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
    var_18 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [(_Bool)1]), (arr_0 [i_0 - 1])))) ? (((/* implicit */long long int) min((((/* implicit */int) var_12)), (((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [i_0 + 1] [i_0]))))))) : (min((((((/* implicit */_Bool) var_13)) ? (-6696562256107213118LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))))), (((/* implicit */long long int) arr_0 [i_0 - 2]))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) var_11))));
                    /* LoopSeq 3 */
                    for (short i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        arr_12 [(_Bool)1] [(short)4] [i_2 - 2] [i_3] [i_4] [i_2 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [5LL] [i_2 - 1] [i_3] [i_4 + 1])) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) arr_7 [(signed char)2]))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)30)));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_6 [i_0 + 1] [i_1] [i_3] [i_0 + 1]))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_16 [12] [12] [(unsigned short)10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_5])) && (((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3] [i_5])))) ? (((/* implicit */int) (signed char)-30)) : (((((/* implicit */int) (signed char)29)) / (((/* implicit */int) var_7))))));
                        var_21 = ((/* implicit */signed char) arr_14 [i_0] [i_1] [(short)7] [i_3] [i_5]);
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (67108863) : (((/* implicit */int) arr_11 [i_0 - 2] [(short)1] [i_2 + 1] [i_3] [i_6])))) / (((/* implicit */int) arr_14 [i_0 + 1] [i_1] [i_2] [i_3] [i_6])))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_14 [i_0] [i_0] [i_2 + 1] [i_3] [i_6]))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_0 - 2]))));
                    }
                    var_24 = -171488358;
                    var_25 = ((/* implicit */unsigned char) var_11);
                }
                var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_4 [i_0 + 1])), (arr_17 [i_0])));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 - 2])) ? (((/* implicit */int) (unsigned short)10193)) : (((/* implicit */int) arr_10 [i_2 + 1]))))) ? (((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? (((/* implicit */int) arr_10 [i_2 + 1])) : (((/* implicit */int) arr_10 [i_2 - 2])))) : ((~(((/* implicit */int) arr_10 [i_2 + 1]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */int) ((unsigned long long int) arr_14 [i_0] [(unsigned short)2] [i_0 + 1] [i_2 - 2] [i_2]));
                    var_29 = (~(((/* implicit */int) (unsigned short)10201)));
                }
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10201)) ? (((/* implicit */int) var_14)) : (((arr_19 [i_0] [i_2] [i_8]) + (((/* implicit */int) var_9))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_2] [i_8])) : (((/* implicit */int) (unsigned short)55334))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 3; i_9 < 13; i_9 += 2) 
                    {
                        var_31 = ((/* implicit */short) min((var_31), (arr_11 [(signed char)1] [i_1] [i_2 - 1] [i_8] [i_9 - 3])));
                        arr_28 [i_0] [i_8] [i_9] [i_8] [(unsigned short)2] [i_1] = 12;
                        arr_29 [i_0] [i_9] = ((/* implicit */signed char) max((((/* implicit */int) min((arr_18 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0 - 2]), (((/* implicit */unsigned short) var_15))))), (((((/* implicit */int) min(((unsigned short)10381), ((unsigned short)10386)))) >> (((((((/* implicit */_Bool) 576460752302899200ULL)) ? (((/* implicit */int) (short)-2873)) : (((/* implicit */int) (short)4094)))) + (2889)))))));
                        var_32 = ((/* implicit */short) ((((/* implicit */int) var_6)) < (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_1] [i_0 + 1] [i_9 - 1])) : (((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_0 - 1] [i_9 + 2]))))));
                    }
                    var_33 = ((/* implicit */unsigned long long int) var_6);
                    var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2 - 1] [i_2 - 2] [i_2 + 1] [i_2] [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 1] [i_2 - 2] [i_0 - 1] [(short)4] [i_1]))) : (((arr_25 [i_1] [(unsigned short)7] [i_1] [i_1] [i_1]) * (((/* implicit */unsigned int) var_5)))))))));
                }
            }
            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0 + 1] [i_1])) ? (((long long int) ((signed char) arr_6 [i_0] [i_0 - 1] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_9 [i_0 + 1] [(signed char)8] [(_Bool)1] [i_0 - 1]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_10 = 1; i_10 < 12; i_10 += 2) 
            {
                var_36 = ((/* implicit */unsigned char) arr_31 [i_10] [i_0 - 1]);
                var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)53951))));
                var_38 &= ((/* implicit */short) ((int) var_15));
                var_39 = ((/* implicit */unsigned short) (~(var_4)));
            }
            for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                var_40 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)6878), ((unsigned short)56424))))))), (max((min((var_10), (((/* implicit */int) var_12)))), (((/* implicit */int) var_13))))));
                var_41 = ((signed char) min((((/* implicit */int) arr_23 [i_0 - 2] [i_11] [i_11] [i_11])), ((-(((/* implicit */int) (signed char)-31))))));
                var_42 = ((/* implicit */long long int) (-((((((-(((/* implicit */int) var_15)))) + (2147483647))) >> (((((((/* implicit */_Bool) (short)30057)) ? (((/* implicit */int) arr_4 [i_11])) : (((/* implicit */int) (short)-18)))) - (8947)))))));
                var_43 = ((/* implicit */long long int) ((_Bool) arr_27 [i_11]));
            }
        }
        for (short i_12 = 0; i_12 < 15; i_12 += 2) 
        {
            /* LoopSeq 4 */
            for (int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                var_44 *= ((/* implicit */int) var_17);
                var_45 = ((/* implicit */unsigned short) -779058971);
            }
            for (signed char i_14 = 0; i_14 < 15; i_14 += 2) 
            {
                arr_44 [i_12] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                var_46 &= ((/* implicit */long long int) 18446744073709551615ULL);
                /* LoopSeq 3 */
                for (signed char i_15 = 0; i_15 < 15; i_15 += 1) 
                {
                    arr_47 [i_0] [i_0] [i_12] [i_14] [5] = ((/* implicit */signed char) min((min((arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_14]), (arr_8 [i_0 - 1] [i_0] [i_0 - 2] [i_0 + 1] [(_Bool)1]))), (((/* implicit */unsigned short) arr_7 [i_14]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 3) 
                    {
                        var_47 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) arr_45 [i_0 + 1] [i_12] [i_14] [i_15] [i_16])) : (((/* implicit */int) arr_45 [i_0 - 1] [i_12] [i_14] [i_14] [i_16])))));
                        var_48 = ((/* implicit */signed char) var_3);
                        var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) (_Bool)1))));
                        var_50 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_48 [i_0 - 2] [i_0 - 2] [0LL] [i_16]), (arr_48 [i_0 - 1] [i_0 - 1] [i_15] [i_15]))))));
                        var_51 = ((/* implicit */signed char) ((short) (signed char)48));
                    }
                }
                /* vectorizable */
                for (long long int i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    var_52 &= ((/* implicit */int) var_12);
                    var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (arr_50 [i_0] [i_0 - 1] [i_14] [i_12]) : (((/* implicit */int) arr_14 [i_0 - 2] [i_12] [i_14] [i_14] [i_0 - 1]))));
                }
                for (unsigned short i_18 = 0; i_18 < 15; i_18 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 3) 
                    {
                        var_54 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_43 [i_0 + 1])) ? (((/* implicit */int) arr_14 [i_0 - 1] [i_0] [(_Bool)1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2])))));
                        var_55 = ((/* implicit */int) var_7);
                        arr_58 [i_0] [i_0] [i_19] [i_18] [i_14] = (!(((/* implicit */_Bool) ((signed char) arr_42 [i_0 + 1] [i_14] [i_12] [i_18]))));
                    }
                    for (short i_20 = 0; i_20 < 15; i_20 += 2) 
                    {
                        var_56 = arr_49 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_12] [i_14] [i_18] [(signed char)4];
                        var_57 = ((/* implicit */short) 1384977972U);
                        arr_61 [(short)11] [(short)11] [(short)8] [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) ((arr_17 [i_0 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_51 [i_0 + 1] [i_12] [i_14] [i_12] [i_20]))))));
                        arr_62 [i_0 + 1] [i_12] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) (short)1865)) ? (((/* implicit */int) (signed char)0)) : (arr_30 [i_0] [i_14] [i_14] [(short)3]))), (((/* implicit */int) ((unsigned short) arr_55 [i_0] [i_12] [i_14] [7LL]))))), (((/* implicit */int) (short)504))));
                    }
                    arr_63 [i_14] [i_14] [i_14] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_0 - 1] [i_0] [i_14] [i_18] [i_0 - 1] [i_18] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_0 - 1]))))) ? (((/* implicit */int) ((short) arr_24 [i_0 - 2]))) : (((((/* implicit */_Bool) arr_24 [i_0 - 2])) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) var_1)))));
                    arr_64 [i_14] |= ((/* implicit */signed char) arr_32 [i_18] [i_18] [i_18] [i_18]);
                    var_58 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_18 [i_0 - 1] [i_12] [i_12] [i_14] [i_18]), (arr_18 [i_0 + 1] [i_0 + 1] [i_12] [i_14] [(signed char)10])))) && (((/* implicit */_Bool) ((((long long int) var_1)) | (((/* implicit */long long int) (~(arr_25 [(signed char)14] [(signed char)14] [(signed char)14] [i_18] [i_18])))))))));
                }
            }
            /* vectorizable */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                arr_69 [i_0] [i_12] [i_21] |= ((/* implicit */long long int) var_14);
                var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_52 [i_0 - 1] [i_12] [i_21] [i_12] [i_12])) ? (((/* implicit */int) arr_13 [i_0] [10] [i_21])) : (((/* implicit */int) (signed char)20))));
            }
            for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 2) 
            {
                var_60 = ((/* implicit */int) (signed char)6);
                /* LoopSeq 3 */
                for (int i_23 = 0; i_23 < 15; i_23 += 2) /* same iter space */
                {
                    var_61 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) min(((short)5704), (((/* implicit */short) (_Bool)1))))))) - (((((/* implicit */_Bool) (unsigned short)56424)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_8 [i_0] [i_12] [i_22] [i_23] [i_23]))))));
                    var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_41 [i_23] [i_0 - 2] [i_22] [i_0 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 3809656018U)))) : (((unsigned int) (short)9))));
                    var_63 = (((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)127))) : (((long long int) arr_35 [i_0])))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)43783)) >= (((/* implicit */int) var_17))))) == (((((/* implicit */int) (unsigned short)21765)) * (((/* implicit */int) var_14)))))))));
                    var_64 = ((/* implicit */short) min((var_64), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (short)30057)) ? (((((/* implicit */unsigned long long int) arr_25 [i_22] [i_22] [i_22] [i_12] [i_22])) + (917809925067565316ULL))) : (((/* implicit */unsigned long long int) ((arr_49 [i_0] [i_0] [i_22] [i_22] [i_0] [i_0 + 1] [i_22]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))))));
                }
                /* vectorizable */
                for (int i_24 = 0; i_24 < 15; i_24 += 2) /* same iter space */
                {
                    var_65 = ((/* implicit */_Bool) max((var_65), (((/* implicit */_Bool) ((short) arr_54 [(unsigned char)4] [i_12] [i_12] [(short)11] [i_12])))));
                    var_66 = ((/* implicit */short) ((signed char) arr_52 [i_22] [i_22] [3] [i_22] [i_0 - 2]));
                    var_67 = ((/* implicit */int) arr_42 [i_0] [i_24] [(signed char)13] [2]);
                }
                for (int i_25 = 0; i_25 < 15; i_25 += 2) /* same iter space */
                {
                    var_68 = ((/* implicit */signed char) max((var_68), (((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_0 - 1]))))), (arr_10 [i_0 - 2]))))));
                    var_69 = ((/* implicit */unsigned long long int) max((var_69), (((/* implicit */unsigned long long int) arr_66 [i_0 + 1] [i_25] [i_25] [i_25]))));
                    var_70 = min((((/* implicit */unsigned short) arr_37 [i_0 - 2] [i_12])), (((unsigned short) (short)-664)));
                    arr_81 [i_0] [(signed char)8] [i_0 - 1] [(unsigned short)12] |= arr_38 [i_12] [i_12];
                }
                arr_82 [i_0] [i_0 + 1] [i_22] [i_12] |= ((/* implicit */_Bool) (+((-(((/* implicit */int) ((_Bool) var_0)))))));
                /* LoopSeq 1 */
                for (long long int i_26 = 0; i_26 < 15; i_26 += 1) 
                {
                    var_71 = ((/* implicit */int) min((var_71), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55335))) : (arr_25 [i_22] [(short)4] [i_0 + 1] [i_26] [(_Bool)1])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), ((unsigned short)43778)))) : (((/* implicit */int) ((short) arr_25 [i_0] [i_12] [i_0 - 2] [i_26] [i_26])))))));
                    /* LoopSeq 1 */
                    for (int i_27 = 0; i_27 < 15; i_27 += 2) 
                    {
                        var_72 = ((/* implicit */signed char) arr_65 [i_0 + 1] [i_12] [i_22] [i_26]);
                        var_73 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : ((~(((((/* implicit */_Bool) var_9)) ? (arr_35 [i_27]) : (((/* implicit */int) arr_65 [i_0] [i_0 + 1] [i_0] [i_0]))))))));
                    }
                }
            }
            var_74 = ((/* implicit */short) ((unsigned char) arr_57 [i_0] [i_12] [i_12] [i_12] [i_12]));
            /* LoopNest 2 */
            for (short i_28 = 0; i_28 < 15; i_28 += 4) 
            {
                for (short i_29 = 0; i_29 < 15; i_29 += 3) 
                {
                    {
                        var_75 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)145)) % (((var_1) ? (((/* implicit */int) ((signed char) arr_26 [i_28]))) : (((/* implicit */int) min((arr_53 [i_0] [i_29] [i_12] [i_29] [i_12] [i_29]), (((/* implicit */signed char) var_8)))))))));
                        var_76 = ((/* implicit */int) (unsigned short)43771);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_30 = 0; i_30 < 15; i_30 += 2) 
                        {
                            var_77 |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (short)16368)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_89 [i_0]))) : (17528934148641986299ULL))));
                            var_78 = ((/* implicit */signed char) max((var_78), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_0 - 1] [i_12] [i_29] [i_30])) ? (((/* implicit */int) arr_48 [i_0] [i_12] [i_30] [i_29])) : (((/* implicit */int) arr_48 [(short)10] [i_12] [i_12] [i_12])))))));
                            var_79 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_52 [7ULL] [i_12] [i_12] [i_12] [i_12]))) / (arr_21 [i_0 - 2] [i_28] [i_29])));
                            var_80 = ((/* implicit */long long int) ((_Bool) 128341827));
                            var_81 &= ((/* implicit */unsigned char) (-(arr_91 [i_12] [i_28] [i_0 + 1] [i_30])));
                        }
                        var_82 = ((/* implicit */unsigned short) (signed char)-120);
                        var_83 = arr_6 [i_28] [i_28] [3] [i_28];
                    }
                } 
            } 
        }
    }
    var_84 = ((/* implicit */unsigned short) min((var_5), (var_5)));
}
