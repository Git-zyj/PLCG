/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52852
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) arr_4 [i_2 + 3] [i_2 + 1]);
                    var_17 = ((/* implicit */int) (+((~(((((/* implicit */_Bool) 986465452U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (3308501824U)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-1)))) ? (((arr_1 [i_0]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0])))) : ((+(((/* implicit */int) (signed char)-84))))));
        var_19 = ((/* implicit */unsigned short) (signed char)-101);
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_3)))) << ((((-(3955010319U))) - (339956965U)))));
                                var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0] [i_6]))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_3] [i_4] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_9 [i_0] [i_0])))), (((/* implicit */int) arr_6 [i_0] [i_3]))))) ? (7) : ((+(((/* implicit */int) arr_13 [i_4] [i_3] [i_0]))))));
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32451)) ? (max((((/* implicit */unsigned long long int) var_6)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) max((511), (((/* implicit */int) arr_14 [i_7] [i_7]))))) : (max((((/* implicit */unsigned int) arr_27 [i_8] [i_7] [i_7])), (var_9)))));
            var_22 = arr_11 [i_7] [i_7];
        }
        for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 2; i_11 < 15; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        {
                            arr_39 [i_7] [3] [i_10] [i_9] [i_12] = var_1;
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3584)) ? (-1531372753) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_13))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) max((0), (2047909522)))), (((var_4) ? (((/* implicit */unsigned int) arr_15 [i_7] [i_9] [i_10] [i_9] [i_12] [i_12])) : (3955010319U))))))));
                            var_24 = ((/* implicit */_Bool) min((-15), (((/* implicit */int) (short)32767))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_14))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_13 = 3; i_13 < 18; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_30 [i_10] [i_10] [i_13 + 1])) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_45 [i_7] [i_7] [i_7] [7U] [i_7] [i_7] [i_7])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3308501837U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2274744068U))))))))));
                            arr_47 [i_9] [i_13] [i_9] [(unsigned char)5] [i_9] [(unsigned char)5] [(unsigned char)5] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) * (7)));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) min((((arr_30 [i_7] [i_7] [i_13 - 1]) ? (var_14) : (-4902597585745735462LL))), (((/* implicit */long long int) max((arr_43 [i_13 + 1] [i_13 + 1] [i_13] [i_13 + 1] [i_13 + 1]), (((/* implicit */unsigned int) arr_30 [i_13] [i_13] [i_13 - 3]))))))))));
                            var_28 = ((/* implicit */long long int) var_6);
                        }
                    } 
                } 
                var_29 = ((/* implicit */short) (~(-255557229)));
            }
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) min((2276974922U), (((/* implicit */unsigned int) arr_10 [i_7] [i_9] [i_7])))))));
            var_31 = ((/* implicit */signed char) max((3308501844U), (((/* implicit */unsigned int) var_3))));
            /* LoopNest 3 */
            for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        {
                            var_32 -= ((/* implicit */short) (-(((/* implicit */int) (short)-24286))));
                            var_33 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_16 [i_7] [i_17] [i_15] [i_7])), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2))))) % (((/* implicit */int) (short)-20209))))));
                            arr_58 [i_15] [i_9] [i_15] [i_9] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_9] [i_15])) ? (((var_0) ? (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)-1)))) : (((/* implicit */int) var_12)))) : (max((((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_15))))), ((((_Bool)1) ? (((/* implicit */int) arr_30 [(signed char)14] [(signed char)14] [i_16])) : (var_8)))))));
                            var_34 = ((/* implicit */long long int) max((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_22 [i_15]))))), (arr_22 [i_7])));
                            var_35 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) (-(-819970303)))) % ((-(2020223214U))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 3 */
        for (short i_18 = 0; i_18 < 19; i_18 += 2) 
        {
            for (long long int i_19 = 0; i_19 < 19; i_19 += 3) 
            {
                for (signed char i_20 = 0; i_20 < 19; i_20 += 4) 
                {
                    {
                        var_36 = ((/* implicit */short) max((((((((/* implicit */int) arr_54 [i_7] [i_19] [i_20])) + (2147483647))) << (((((((/* implicit */int) arr_54 [i_7] [i_7] [i_7])) + (23794))) - (23))))), (((((((/* implicit */int) arr_54 [i_7] [i_18] [i_19])) + (2147483647))) << (((((((/* implicit */int) arr_54 [i_7] [i_18] [i_7])) + (23785))) - (14)))))));
                        var_37 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_43 [i_7] [i_18] [i_7] [i_7] [i_7])) ? (arr_34 [i_7] [i_18] [i_19] [i_19] [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) == (((/* implicit */int) var_2)))))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-20217)) ? (((/* implicit */int) (short)-23661)) : (((/* implicit */int) (unsigned short)61952)))) < (((/* implicit */int) (short)32762))))))));
                        arr_66 [(unsigned short)14] [i_18] [i_18] [i_18] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1035322402U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61952))) : (-1LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_0)))))))) : (max((((((/* implicit */_Bool) 3308501847U)) ? (((/* implicit */int) arr_31 [i_18] [i_19] [i_19])) : (arr_62 [i_7]))), ((-(4095))))));
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */signed char) var_6);
        /* LoopSeq 1 */
        for (int i_21 = 0; i_21 < 19; i_21 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_22 = 1; i_22 < 17; i_22 += 4) 
            {
                var_39 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (3259644871U)));
                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) - (((arr_59 [i_7]) / (var_14))))))));
            }
            for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
            {
                var_41 *= ((/* implicit */long long int) var_1);
                /* LoopSeq 4 */
                for (int i_24 = 0; i_24 < 19; i_24 += 3) 
                {
                    var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1035322411U)) ? (((/* implicit */int) (signed char)-101)) : (3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)59)) && (((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) arr_78 [i_23] [i_23 + 1] [i_23 + 1] [i_24])) ? (((/* implicit */int) arr_78 [i_23] [i_23 + 1] [i_23 + 1] [i_23 + 1])) : (((/* implicit */int) arr_78 [i_7] [i_23 + 1] [i_23 + 1] [i_24]))))));
                    arr_79 [i_23] [i_21] [i_23] [i_21] = ((/* implicit */signed char) 483851213);
                    arr_80 [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (signed char)-5))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)31)) - (((/* implicit */int) (unsigned char)59))))) : ((-(-4955510949457808505LL)))));
                    var_43 = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) var_5)))) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_23 + 1] [i_23 + 1]))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65521)) / (((/* implicit */int) var_5)))))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_25 = 0; i_25 < 19; i_25 += 2) 
                    {
                        arr_83 [i_7] [i_23] [i_7] [i_7] = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_74 [i_23]))))));
                        var_44 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_73 [i_21]), (((/* implicit */unsigned int) (unsigned char)5))))) || (((/* implicit */_Bool) (unsigned char)52)))) ? (((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_12 [i_23] [4] [i_23]))) : (((/* implicit */unsigned int) min((max((483851213), (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) -7845312891064552099LL)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (signed char)125)))))))));
                        var_45 *= ((/* implicit */long long int) var_8);
                    }
                }
                for (unsigned char i_26 = 0; i_26 < 19; i_26 += 4) /* same iter space */
                {
                    var_46 = ((/* implicit */_Bool) (unsigned short)27958);
                    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) var_7))));
                }
                for (unsigned char i_27 = 0; i_27 < 19; i_27 += 4) /* same iter space */
                {
                    var_48 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_71 [i_23 + 1])) + (130023424U)))) ? ((+(arr_41 [i_23 + 1] [i_23 + 1] [i_23] [2ULL]))) : (((arr_71 [i_23 + 1]) - (arr_41 [i_23 + 1] [i_23 + 1] [i_23] [i_27]))));
                    var_49 *= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned short) (short)-23661))))))))));
                }
                for (unsigned char i_28 = 0; i_28 < 19; i_28 += 4) /* same iter space */
                {
                    var_50 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_11)), (max((((((/* implicit */_Bool) arr_72 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21607))) : (var_14))), (((/* implicit */long long int) (_Bool)1))))));
                    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_23 + 1] [i_23] [i_7])) ? (((/* implicit */int) arr_69 [10LL] [i_21] [i_23 + 1])) : ((+(arr_35 [i_7] [i_7] [i_23 + 1] [i_23] [i_28])))));
                }
                arr_91 [i_23] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((-764674162) + (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_81 [i_23 + 1] [i_23 + 1] [i_21] [i_7]))) : (var_13)))));
                var_52 += ((/* implicit */unsigned int) max((((((/* implicit */int) (short)-1)) % (410886376))), (((((/* implicit */int) var_1)) * (((/* implicit */int) var_4))))));
            }
            for (short i_29 = 1; i_29 < 15; i_29 += 2) 
            {
                var_53 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)29237)) ? (((/* implicit */int) var_4)) : (arr_70 [i_29] [i_29 - 1] [i_29] [i_29 + 4])))));
                var_54 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(var_8)))) ? (((((/* implicit */_Bool) (short)3975)) ? (((/* implicit */int) var_4)) : (67108863))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                var_55 ^= arr_25 [i_29 + 3];
            }
            var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(arr_23 [i_7]))) | (((/* implicit */unsigned int) arr_70 [i_7] [i_21] [i_21] [i_21]))))) ? (((((/* implicit */_Bool) arr_55 [i_21] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7]))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) 1397164688)) : (arr_43 [i_7] [i_7] [i_7] [i_21] [i_21]))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)7586)) ? (var_7) : (((/* implicit */int) arr_37 [i_7] [i_21])))))))));
        }
        /* LoopNest 3 */
        for (long long int i_30 = 0; i_30 < 19; i_30 += 3) 
        {
            for (int i_31 = 0; i_31 < 19; i_31 += 1) 
            {
                for (unsigned char i_32 = 0; i_32 < 19; i_32 += 2) 
                {
                    {
                        var_57 = (-(arr_98 [i_7] [i_30]));
                        arr_101 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_74 [i_32])) / (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */int) (unsigned short)5485)) ^ (((/* implicit */int) arr_74 [i_32]))))));
                        var_58 *= ((/* implicit */unsigned char) arr_9 [i_7] [i_30]);
                    }
                } 
            } 
        } 
    }
    var_59 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 4294967286U)) | (((((/* implicit */_Bool) 3852712410514624850LL)) ? ((-(var_14))) : (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))));
    var_60 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) var_11)))))) == (var_13))))));
    var_61 = ((/* implicit */long long int) (~(var_7)));
}
