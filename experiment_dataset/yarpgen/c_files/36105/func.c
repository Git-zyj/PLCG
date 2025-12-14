/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36105
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((((/* implicit */_Bool) var_15)) ? (var_5) : (var_8))), (((/* implicit */unsigned long long int) (~(393139413)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 393139413)) ? (393139413) : (((/* implicit */int) (short)25983))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_17)));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 2733527026U)) == (arr_1 [i_0])))) - ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_20 = ((/* implicit */unsigned int) arr_2 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) 387593127U)) ? (arr_16 [i_5] [i_5] [i_4] [i_3] [i_2] [i_1]) : (var_8))) | (((/* implicit */unsigned long long int) var_11)))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_7))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) ((short) (unsigned short)255)))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */long long int) arr_18 [i_1] [i_2] [i_2] [i_1] [i_2]);
        }
        for (short i_6 = 3; i_6 < 21; i_6 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_1] [(short)4])))))));
            var_26 -= ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_6 + 2] [i_6 + 2])))));
        }
        for (short i_7 = 3; i_7 < 21; i_7 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */_Bool) ((long long int) 393139413));
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_14 [i_7] [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7] [i_1]) : (((/* implicit */int) var_7))));
            arr_25 [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7 + 1])) == (((/* implicit */int) arr_13 [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1]))));
        }
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_1] [(unsigned short)2] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) arr_7 [i_1])))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) arr_26 [i_8]);
        /* LoopSeq 3 */
        for (short i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            var_31 = ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)1805), (arr_22 [i_8] [i_9] [i_9]))))) % (min((var_5), (((/* implicit */unsigned long long int) arr_28 [i_8] [i_8])))))));
            var_32 = min((arr_17 [i_8] [i_9] [i_8] [i_8] [i_8]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_13))))));
            /* LoopSeq 1 */
            for (long long int i_10 = 3; i_10 < 22; i_10 += 1) 
            {
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_27 [i_8] [i_10 - 3])))) ? ((-((-(((/* implicit */int) var_0)))))) : (((/* implicit */int) ((_Bool) arr_11 [i_10 + 1] [i_10 - 3])))));
                var_34 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)25983)) || (((/* implicit */_Bool) (unsigned short)255)))))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-22216))))), (9007199254740992ULL)))));
            }
            arr_34 [i_8] = ((/* implicit */short) (~(((/* implicit */int) min((((short) arr_21 [i_8] [i_9] [i_8])), ((short)25983))))));
            /* LoopSeq 2 */
            for (unsigned int i_11 = 1; i_11 < 21; i_11 += 4) 
            {
                var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_8]))));
                arr_39 [i_8] [i_9] [i_11] = ((/* implicit */unsigned short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -393139414))));
                var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned short) ((arr_35 [i_11 - 1] [i_8] [i_8] [i_8]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4600)))))), (var_12))))));
                var_37 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)255))));
                /* LoopSeq 4 */
                for (unsigned int i_12 = 2; i_12 < 22; i_12 += 2) 
                {
                    var_38 = ((/* implicit */unsigned long long int) arr_13 [i_11 + 2] [i_9] [i_11 - 1] [i_12]);
                    var_39 = (unsigned short)0;
                    var_40 = ((/* implicit */unsigned long long int) var_1);
                }
                for (long long int i_13 = 1; i_13 < 20; i_13 += 1) 
                {
                    var_41 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) > (arr_12 [i_13] [i_13 + 2] [i_13 - 1] [i_13 + 3]))), (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_8] [i_8]))) == (var_17)))));
                    arr_47 [i_8] [i_8] [i_11 + 2] [i_13] [i_11] [i_13 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_30 [i_11 + 2] [i_11] [i_13 + 1]), (((/* implicit */unsigned int) (unsigned short)18802))))) ? (arr_30 [i_11 + 2] [i_11 - 1] [i_13 + 2]) : ((-(arr_30 [i_11 + 1] [i_13 + 3] [i_13 + 1])))));
                    var_42 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_8] [i_9] [i_13])))))) % (max((14156837323518178119ULL), (max((arr_46 [i_8] [i_9] [i_9] [i_13]), (arr_16 [i_9] [i_9] [i_11] [i_13] [i_8] [i_13])))))));
                    var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2346558639U)) ? (((/* implicit */int) (unsigned short)1805)) : (((/* implicit */int) (unsigned short)60935))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8]))) : ((~(arr_36 [i_8] [i_9] [i_9]))))))))));
                    var_44 = ((/* implicit */int) ((unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (arr_35 [i_13] [i_8] [i_8] [i_8]))));
                }
                for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    arr_51 [i_8] [i_9] [i_8] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1805))) / (max((((/* implicit */long long int) var_14)), (9223372036854775807LL)))))));
                    var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((long long int) (-((-(((/* implicit */int) (unsigned short)10222))))))))));
                    var_46 = ((/* implicit */unsigned int) (unsigned short)10222);
                    var_47 = ((/* implicit */unsigned short) min((max((262016ULL), (((/* implicit */unsigned long long int) arr_26 [i_11 + 2])))), (((/* implicit */unsigned long long int) ((int) arr_17 [i_9] [i_11 - 1] [i_14] [i_14] [i_14])))));
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        arr_55 [i_8] [i_15] [i_14] [i_14] [i_11] [i_9] [i_8] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_11] [i_11 + 2] [i_11 + 2] [i_11])) && (((/* implicit */_Bool) ((unsigned short) 2091846363)))))), ((+(max((((/* implicit */unsigned int) var_15)), (arr_20 [i_9] [i_11])))))));
                        arr_56 [i_8] [i_9] [i_8] [i_15] = ((/* implicit */long long int) ((_Bool) ((-1397879989) == (((/* implicit */int) var_14)))));
                    }
                }
                for (int i_16 = 1; i_16 < 22; i_16 += 3) 
                {
                    var_48 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_57 [i_8] [i_8] [i_11 + 1])))), (((((/* implicit */_Bool) arr_57 [i_8] [i_8] [i_9])) || (((/* implicit */_Bool) arr_57 [i_8] [i_8] [i_11]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_17 = 1; i_17 < 19; i_17 += 3) 
                    {
                        var_49 = ((/* implicit */int) (+(3102630893U)));
                        var_50 = ((/* implicit */int) (-(arr_46 [i_8] [i_8] [i_8] [i_8])));
                        var_51 = ((/* implicit */unsigned short) min((var_51), (((unsigned short) arr_60 [i_9] [i_9] [i_9] [i_17 + 2] [i_17 + 2] [i_9] [i_17]))));
                    }
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                    {
                        var_52 = ((/* implicit */short) max(((unsigned short)0), ((unsigned short)60935)));
                        var_53 = ((/* implicit */unsigned short) (+((+(var_17)))));
                        var_54 = ((/* implicit */short) (+(((unsigned long long int) arr_26 [i_11]))));
                        var_55 ^= ((/* implicit */unsigned long long int) (-(((long long int) (_Bool)1))));
                    }
                    var_56 = ((/* implicit */unsigned int) arr_46 [i_8] [i_8] [i_8] [i_8]);
                    var_57 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_11 + 2] [i_8] [i_16 + 1])) >> (((((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (arr_11 [i_8] [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 3771816460U)))) : (arr_42 [i_8] [i_9] [i_11] [i_11] [i_16] [i_16]))) - (23041U)))));
                }
            }
            /* vectorizable */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_58 |= ((/* implicit */short) arr_11 [i_9] [i_19]);
                var_59 = ((/* implicit */int) var_6);
                var_60 = ((/* implicit */int) ((-478405186) > (((/* implicit */int) (short)-1))));
                var_61 ^= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (arr_66 [i_8] [i_9] [i_19] [i_19]));
                arr_67 [i_19] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8] [i_9] [i_19]))) > (arr_52 [i_8] [i_9] [i_9] [i_9] [i_8] [i_19] [i_19])));
            }
        }
        for (unsigned short i_20 = 0; i_20 < 23; i_20 += 1) /* same iter space */
        {
            var_62 = ((/* implicit */_Bool) var_15);
            /* LoopSeq 4 */
            for (unsigned int i_21 = 2; i_21 < 20; i_21 += 2) 
            {
                /* LoopNest 2 */
                for (short i_22 = 0; i_22 < 23; i_22 += 3) 
                {
                    for (int i_23 = 1; i_23 < 22; i_23 += 3) 
                    {
                        {
                            var_63 = (-(((/* implicit */int) (signed char)127)));
                            arr_79 [i_8] [i_20] [i_21] [i_8] [i_23] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_75 [i_8] [i_8] [i_22] [i_23])) ? (-4035017873433986949LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10222))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_8] [i_8] [i_8])) ? (((/* implicit */int) (unsigned short)0)) : (-782234901))))))), (((min((((/* implicit */unsigned long long int) 2147483647)), (arr_41 [i_8] [i_20] [i_21] [i_21 + 3] [i_22] [i_23]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)(-127 - 1))), ((short)-4324)))))))));
                            arr_80 [i_8] [i_20] [i_23 - 1] = (-(18446744073709289600ULL));
                            var_64 = ((/* implicit */unsigned int) min((var_64), (((/* implicit */unsigned int) (-9223372036854775807LL - 1LL)))));
                            var_65 ^= ((/* implicit */unsigned short) (_Bool)0);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_24 = 0; i_24 < 23; i_24 += 2) 
                {
                    var_66 = ((/* implicit */_Bool) var_17);
                    var_67 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((2016458820), (((/* implicit */int) (unsigned short)1071))))) ? (max((((/* implicit */unsigned int) (unsigned short)55313)), (arr_27 [i_8] [i_20]))) : (((/* implicit */unsigned int) (-(-393139414)))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) ^ (arr_81 [i_8] [i_8]))))));
                    var_68 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= ((~(max((8113875387003501846ULL), (0ULL)))))));
                    var_69 = ((/* implicit */unsigned int) min((var_69), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_50 [i_8] [i_20] [i_21] [i_21] [i_24])) ? (arr_16 [i_8] [i_20] [i_21] [i_24] [i_24] [i_24]) : (var_10))) ^ (arr_43 [i_21] [i_20]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))))));
                }
                for (short i_25 = 0; i_25 < 23; i_25 += 1) 
                {
                    var_70 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60936)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((signed char) arr_77 [i_8] [i_20] [i_21 + 1] [i_20] [i_8])), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3635))) == (var_4)))))))) : (arr_43 [i_8] [i_21 - 2])));
                    var_71 = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) ((short) arr_11 [i_21 + 3] [i_20])))) & ((~(arr_44 [i_8] [i_25] [i_8] [i_8] [i_25] [i_8])))))));
                }
            }
            for (short i_26 = 0; i_26 < 23; i_26 += 4) 
            {
                var_72 = ((/* implicit */long long int) min((var_72), (((/* implicit */long long int) var_0))));
                var_73 = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_20] [i_26]))))), ((~(-2701601076281495858LL)))))));
            }
            /* vectorizable */
            for (int i_27 = 0; i_27 < 23; i_27 += 1) 
            {
                arr_91 [i_8] [i_8] [i_27] = (!(((/* implicit */_Bool) (~(var_17)))));
                var_74 = ((/* implicit */unsigned long long int) min((var_74), (((((/* implicit */unsigned long long int) arr_14 [i_8] [i_20] [i_20] [i_27] [i_27] [i_27])) / (((unsigned long long int) var_14))))));
                var_75 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) ^ (var_5)));
                var_76 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) arr_28 [i_8] [i_8])) : (arr_62 [i_8] [i_20])));
            }
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 23; i_29 += 3) 
                {
                    for (short i_30 = 1; i_30 < 22; i_30 += 3) 
                    {
                        {
                            var_77 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1348753362))));
                            var_78 = -1635281488;
                        }
                    } 
                } 
                var_79 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((arr_85 [i_8] [(signed char)2] [i_28]), (arr_85 [i_28] [6] [i_8]))))) ^ (((long long int) var_3))));
            }
            arr_99 [i_8] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) arr_44 [i_8] [i_8] [i_8] [i_20] [i_20] [i_20])), (arr_86 [i_8] [i_20])))))) ? (min((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)9199)) ? (arr_11 [i_20] [i_8]) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_7)), (var_8))) > (var_5))))));
        }
        for (unsigned short i_31 = 0; i_31 < 23; i_31 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_32 = 2; i_32 < 20; i_32 += 3) 
            {
                var_80 ^= ((/* implicit */long long int) ((unsigned long long int) arr_19 [i_8] [(short)4] [i_32] [i_31] [i_8]));
                /* LoopNest 2 */
                for (signed char i_33 = 0; i_33 < 23; i_33 += 2) 
                {
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        {
                            var_81 *= ((/* implicit */_Bool) arr_106 [i_8] [i_31] [i_32] [i_34] [i_34]);
                            arr_108 [i_32] [i_34] [i_34] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
                        }
                    } 
                } 
            }
            var_82 = ((/* implicit */unsigned short) min((var_82), (((/* implicit */unsigned short) max(((+(393139413))), ((~(((/* implicit */int) arr_38 [i_31] [(signed char)8] [i_31])))))))));
            arr_109 [i_8] [i_31] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (arr_42 [i_8] [i_31] [i_31] [i_31] [i_8] [i_31]))))));
            var_83 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
            var_84 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_8] [i_31] [i_31] [i_8] [i_31]))) | (-971098278636947600LL))), (((/* implicit */long long int) ((int) arr_93 [i_8] [i_31])))))) | (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_70 [i_31] [i_8] [i_8])) | (((/* implicit */int) (short)(-32767 - 1)))))) ^ (var_8)))));
        }
    }
    for (unsigned long long int i_35 = 0; i_35 < 23; i_35 += 3) /* same iter space */
    {
        var_85 = (-(max((arr_42 [i_35] [i_35] [i_35] [i_35] [i_35] [i_35]), (((unsigned int) (_Bool)1)))));
        var_86 = ((/* implicit */unsigned short) min((var_86), (((/* implicit */unsigned short) arr_16 [i_35] [i_35] [i_35] [i_35] [i_35] [i_35]))));
    }
    var_87 = (!(((/* implicit */_Bool) (-((-(((/* implicit */int) var_0))))))));
}
