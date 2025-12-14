/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239390
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
    var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
    var_20 = var_18;
    /* LoopSeq 4 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        var_21 = (!(((/* implicit */_Bool) var_10)));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((4294967295U), (((/* implicit */unsigned int) (short)-1))))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 3])) : (((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) 4294967274U))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (((((/* implicit */_Bool) 380144920)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211)))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((arr_1 [i_0] [i_0 + 3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [9ULL] [i_0 + 2]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) <= (arr_0 [i_1])));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_1] [i_1]));
        arr_6 [i_1] = var_2;
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_24 -= ((/* implicit */short) var_13);
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_4]))));
                    arr_17 [i_5] [i_5] [i_4] [i_5] = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (unsigned char)37)))));
                    var_26 *= ((/* implicit */_Bool) (((+(((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_5] [i_3] [i_3])))) / (((/* implicit */int) var_4))));
                }
                for (unsigned char i_6 = 3; i_6 < 20; i_6 += 4) 
                {
                    var_27 = ((/* implicit */_Bool) (unsigned short)44325);
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned char) arr_20 [i_6 + 2] [i_6 + 1] [i_6 - 1] [i_6 - 1]);
                        arr_22 [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_2] [i_6 - 1]))));
                    }
                    arr_23 [(unsigned char)12] [(unsigned char)12] [i_4] [i_4] = ((/* implicit */int) ((_Bool) ((unsigned short) (signed char)120)));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_29 ^= ((/* implicit */long long int) ((int) (signed char)-43));
                    var_30 *= ((/* implicit */_Bool) var_17);
                    var_31 = arr_15 [i_2] [i_4];
                }
                arr_26 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_4]))));
                arr_27 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_1)))));
                arr_28 [i_4] = arr_7 [i_2];
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_32 ^= (~(((/* implicit */int) var_9)));
                var_33 *= ((/* implicit */unsigned short) ((unsigned long long int) -6199827714474692008LL));
                arr_31 [(signed char)20] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3] [(_Bool)1]))))), (((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_9])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [11ULL] [i_9])))))));
                var_34 = (~(18446744073709551615ULL));
            }
            for (int i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                {
                    arr_37 [i_11] [i_3] [i_10] [i_11] = (short)-22102;
                    var_35 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))) / (arr_11 [i_2]))));
                    var_36 *= ((/* implicit */unsigned int) (~((-(arr_11 [i_2])))));
                    arr_38 [i_11] [i_10] = ((/* implicit */short) arr_15 [i_2] [i_11]);
                }
                for (signed char i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
                {
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_9 [i_3])))) ? (max((arr_9 [i_10]), (arr_9 [i_2]))) : (((((/* implicit */_Bool) arr_9 [i_12])) ? (arr_9 [(short)21]) : (arr_9 [i_2])))));
                    var_38 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) arr_8 [i_12])) ? (arr_8 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-7)))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_39 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) ((unsigned char) arr_42 [i_2] [i_3] [i_10])))), ((-(2016)))));
                    arr_45 [i_2] [i_2] [i_10] [(_Bool)1] [i_13] = ((/* implicit */unsigned char) ((-3354555695317573092LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    arr_46 [i_2] [i_2] [8LL] [i_10] [8LL] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_3] [i_3] [i_13])) ? (412225410) : (((/* implicit */int) arr_41 [i_13] [(unsigned char)16] [i_13] [i_13] [6ULL]))))) ? (((/* implicit */int) max(((signed char)43), (arr_42 [i_2] [i_10] [i_13])))) : (((/* implicit */int) min((arr_41 [i_2] [18ULL] [i_3] [18ULL] [(unsigned char)16]), (((/* implicit */unsigned short) var_16))))))), (((((_Bool) arr_11 [i_10])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_33 [i_13] [(unsigned char)4] [i_3] [i_2])), ((unsigned short)8108)))) : ((-(((/* implicit */int) var_15)))))));
                }
                var_40 *= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_36 [i_3] [i_2] [(short)14] [(unsigned char)5]), (arr_36 [i_2] [i_3] [(_Bool)1] [i_2])))) ? (((unsigned long long int) var_7)) : (max((((/* implicit */unsigned long long int) arr_36 [(unsigned char)0] [i_3] [i_10] [2ULL])), (13397888829275355034ULL)))));
                var_41 = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_2] [i_3]))) * (arr_14 [i_2] [i_3] [(unsigned char)10])))));
                /* LoopNest 2 */
                for (unsigned short i_14 = 1; i_14 < 21; i_14 += 1) 
                {
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        {
                            var_42 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_7 [i_14 - 1]))))) : (max((arr_44 [i_2] [i_10] [i_10] [i_14 + 1] [i_2] [i_2]), (arr_44 [i_2] [i_2] [i_2] [i_14 - 1] [(unsigned short)12] [i_3])))));
                            var_43 = ((/* implicit */signed char) ((unsigned char) 2438060466U));
                        }
                    } 
                } 
                var_44 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_12 [i_2] [i_3] [i_10]), ((+(((/* implicit */int) arr_49 [i_10] [(signed char)4] [(signed char)8]))))))) ? (((int) ((1502839070) > (((/* implicit */int) arr_18 [i_2]))))) : (((/* implicit */int) ((unsigned char) arr_34 [i_2] [(signed char)1] [(unsigned short)7] [i_10])))));
            }
        }
        for (signed char i_16 = 1; i_16 < 21; i_16 += 1) 
        {
            arr_58 [i_2] [i_16] [i_16] = ((/* implicit */unsigned char) ((unsigned short) (signed char)61));
            /* LoopSeq 2 */
            for (signed char i_17 = 3; i_17 < 21; i_17 += 2) 
            {
                var_45 = ((/* implicit */signed char) min((((unsigned short) arr_41 [i_17] [i_17] [i_17] [i_17] [i_16])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)210)))))));
                var_46 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [(unsigned char)13] [i_16] [i_16] [13U] [13U]))));
                arr_61 [i_16] [i_16] [i_17] = ((/* implicit */long long int) (+(((/* implicit */int) arr_48 [i_2] [i_2] [i_2] [i_17]))));
            }
            for (signed char i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 22; i_19 += 4) 
                {
                    for (short i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned int) max((max((arr_50 [(signed char)8] [(signed char)8] [(signed char)8] [i_18] [i_19] [i_20]), ((-(((/* implicit */int) (unsigned char)190)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) (short)1))))) ^ ((~(((/* implicit */int) var_17))))))));
                            var_48 -= ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) arr_16 [i_2] [i_16] [i_16] [i_18] [i_19] [i_20]))), ((~(((/* implicit */int) arr_16 [i_2] [i_16] [i_16 + 1] [i_18] [i_19] [i_20]))))));
                            arr_68 [i_2] [i_2] [i_2] [i_19] [i_2] [i_2] [i_16] = ((/* implicit */unsigned char) ((short) -1339711936));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (int i_22 = 1; i_22 < 19; i_22 += 1) 
                    {
                        {
                            arr_73 [i_16] [i_21] [i_16] [i_21] [i_22] [(unsigned short)10] [i_21] = ((/* implicit */unsigned long long int) arr_71 [i_2] [i_2] [19] [i_21] [i_22 + 2]);
                            var_49 ^= ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)207))))));
                            var_50 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_13))));
                            var_51 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_22 + 1] [i_16] [i_2])) * (((/* implicit */int) (signed char)86))))) ? (((((/* implicit */_Bool) arr_48 [i_18] [i_16] [(unsigned char)4] [(unsigned char)15])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned short)15222))))) ? (((/* implicit */unsigned long long int) arr_30 [i_2] [(_Bool)1] [i_18])) : ((-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_44 [i_16] [i_21] [(signed char)3] [i_21] [i_22] [i_21])) : (2501555005786752415ULL)))))));
                            arr_74 [i_2] [i_16] [i_18] [i_21] [i_22 - 1] = ((/* implicit */unsigned char) -1464446320);
                        }
                    } 
                } 
                var_52 = ((/* implicit */signed char) 3174351365U);
                var_53 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_2] [(signed char)0] [i_18])) ? (((/* implicit */int) arr_67 [i_2] [i_16] [(signed char)17])) : (((/* implicit */int) var_14))))), (((unsigned long long int) arr_39 [i_16]))))));
            }
            /* LoopSeq 2 */
            for (unsigned char i_23 = 0; i_23 < 22; i_23 += 4) 
            {
                arr_78 [i_23] [i_16 + 1] [i_23] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_11 [i_23]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)29379)) && (((/* implicit */_Bool) (signed char)25)))))));
                arr_79 [(_Bool)1] [i_2] [i_16] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_25 [i_16 - 1] [i_16 - 1] [i_16] [(unsigned char)21] [i_16 - 1] [i_16 + 1])) * (((/* implicit */int) arr_25 [i_16 + 1] [i_16] [i_16 + 1] [i_16] [i_16 - 1] [i_16 + 1])))), (((/* implicit */int) (unsigned char)0))));
                var_54 = var_2;
            }
            for (unsigned char i_24 = 3; i_24 < 19; i_24 += 1) 
            {
                var_55 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) arr_59 [i_24 + 3] [i_16 + 1] [i_16 + 1])) ? (min((((/* implicit */unsigned long long int) var_2)), (var_6))) : (14654814801210918431ULL)))));
                arr_82 [i_2] [4] [i_16] [i_2] = ((/* implicit */_Bool) (short)32741);
            }
            var_56 = ((/* implicit */unsigned char) var_16);
        }
        arr_83 [i_2] [i_2] = ((/* implicit */short) 10ULL);
        /* LoopSeq 3 */
        for (unsigned char i_25 = 0; i_25 < 22; i_25 += 2) /* same iter space */
        {
            arr_86 [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)44873))), (var_1)));
            var_57 ^= ((/* implicit */_Bool) max((arr_67 [i_2] [i_2] [(signed char)16]), (arr_43 [17U] [i_25] [i_25] [(signed char)10] [1] [i_2])));
        }
        for (unsigned char i_26 = 0; i_26 < 22; i_26 += 2) /* same iter space */
        {
            arr_90 [i_2] [i_26] |= ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_5)))));
            var_58 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) min((var_10), (-5665661444413539593LL)))) || (((/* implicit */_Bool) ((unsigned char) (signed char)97)))))));
            arr_91 [i_2] [i_26] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) ((unsigned char) (short)26426))))), (((/* implicit */int) arr_29 [i_26] [i_2] [i_2]))));
            /* LoopSeq 1 */
            for (unsigned char i_27 = 0; i_27 < 22; i_27 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_28 = 3; i_28 < 21; i_28 += 3) 
                {
                    var_59 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(var_6))), (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) : (18159220344149151549ULL)))))) ? ((~(14733960701621993727ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned char) var_1)))))));
                    var_60 = ((/* implicit */signed char) ((unsigned char) ((short) max((((/* implicit */unsigned short) (signed char)-127)), ((unsigned short)53728)))));
                    var_61 -= ((/* implicit */unsigned short) arr_30 [i_28 - 2] [i_27] [i_26]);
                }
                for (unsigned long long int i_29 = 1; i_29 < 21; i_29 += 3) 
                {
                    var_62 = ((/* implicit */int) ((unsigned char) var_3));
                    var_63 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_67 [i_2] [i_26] [i_29]))))) ? (((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) -742452831)), (var_1))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_14)))))))));
                    var_64 = ((/* implicit */unsigned char) 469762048);
                }
                var_65 |= ((/* implicit */unsigned char) ((unsigned int) var_16));
            }
        }
        for (unsigned char i_30 = 0; i_30 < 22; i_30 += 2) /* same iter space */
        {
            var_66 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_102 [i_30] [i_30] [i_30])) ? (((/* implicit */int) (unsigned short)48973)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), ((unsigned short)15)))))), ((+(((/* implicit */int) ((_Bool) arr_21 [i_2] [(unsigned short)0] [i_30] [(_Bool)1] [i_30])))))));
            var_67 = ((/* implicit */_Bool) ((signed char) var_4));
        }
    }
    for (unsigned char i_31 = 0; i_31 < 11; i_31 += 1) 
    {
        var_68 = ((/* implicit */short) ((unsigned char) (+(((((/* implicit */int) arr_53 [i_31] [(_Bool)1] [(signed char)12] [i_31] [i_31])) & (((/* implicit */int) arr_33 [(signed char)9] [i_31] [i_31] [(unsigned char)20])))))));
        var_69 = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15231))) : (((((/* implicit */_Bool) arr_71 [i_31] [i_31] [(_Bool)1] [2ULL] [i_31])) ? (arr_44 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)125)))))))));
        var_70 = ((/* implicit */int) ((unsigned char) (unsigned char)148));
        var_71 *= ((/* implicit */unsigned short) (-((-(((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_10)))))));
    }
    var_72 = ((/* implicit */unsigned short) max((0ULL), (((/* implicit */unsigned long long int) ((short) var_7)))));
    var_73 = ((/* implicit */short) ((((/* implicit */int) var_4)) | (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) (unsigned char)245))))));
}
