/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50458
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) == (((/* implicit */int) ((var_6) != (arr_5 [i_0] [i_0] [i_1])))))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) % (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_6)))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                arr_8 [i_0] [5LL] [i_1] [i_2] = min(((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_1]))) : (4503599627370495ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [(unsigned short)6]))))), ((-(((/* implicit */int) var_2))))))));
                arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) / ((-(((/* implicit */int) (_Bool)1))))))));
            }
        }
        var_14 = ((/* implicit */long long int) var_11);
        var_15 ^= ((/* implicit */unsigned char) var_9);
    }
    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 3; i_5 < 13; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        {
                            arr_22 [9] [i_4] [i_4] [i_4] [i_3] [i_4] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((arr_0 [i_5]) / (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (((/* implicit */long long int) arr_1 [(short)11] [(short)11]))));
                            arr_23 [i_4] [i_4] [i_5 + 1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)2066))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32745))))) ? (((/* implicit */int) arr_10 [i_4] [(unsigned short)9])) : (((/* implicit */int) var_1))));
        }
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-2058)))))) > (-8170220741040265001LL)));
            arr_26 [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 134217664)) + ((~(18446744073709551600ULL)))));
        }
        for (signed char i_9 = 1; i_9 < 13; i_9 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                var_18 ^= ((/* implicit */int) arr_31 [i_9] [i_9] [(_Bool)1] [i_9 + 1]);
                arr_33 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_30 [i_3] [i_9] [i_10])), ((unsigned char)121)))) ? (min((var_5), (((/* implicit */unsigned int) (unsigned char)148)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))))));
                arr_34 [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_25 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4))) : ((-((-(-2649314077180043145LL)))))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 2; i_11 < 12; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        {
                            arr_39 [i_9] [i_9] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-1), (((/* implicit */int) (unsigned short)10))))) ? (min((((/* implicit */int) max((((/* implicit */unsigned char) var_11)), ((unsigned char)154)))), ((-(((/* implicit */int) (signed char)107)))))) : (((/* implicit */int) var_9))));
                            var_19 = ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) (short)-1))));
                        }
                    } 
                } 
                var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) min(((short)32742), (((/* implicit */short) var_4))))))) : ((((-(925091004))) - ((-(((/* implicit */int) (signed char)-93))))))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_14 = 1; i_14 < 10; i_14 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) (~((~(((1073676288LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43982)))))))));
                    var_22 = ((/* implicit */int) (!((_Bool)1)));
                }
                for (short i_15 = 1; i_15 < 10; i_15 += 3) /* same iter space */
                {
                    arr_48 [i_9] [i_9] = ((/* implicit */unsigned long long int) (-((+(8170220741040264995LL)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_16 = 3; i_16 < 11; i_16 += 1) 
                    {
                        arr_51 [i_3] [(short)0] [i_13] [i_9] [i_15 - 1] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)45200)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)64))));
                        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                        var_24 = ((/* implicit */unsigned short) 1ULL);
                    }
                    for (short i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        var_25 = ((/* implicit */short) min(((-(var_5))), (((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_9))))), ((signed char)95))))));
                        var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))), (((3037975941U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10)))))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (~(var_10))))));
                        arr_54 [i_9] [i_13] [i_3] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)71), ((unsigned char)99))))) != ((((~(18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32758)))))))));
                    }
                    for (unsigned short i_18 = 1; i_18 < 12; i_18 += 1) 
                    {
                        arr_58 [i_18 + 1] [i_9] [i_3] [i_15 + 3] [i_15] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_12 [i_15 + 3])))) ? (((/* implicit */long long int) (+(98304)))) : (((((/* implicit */_Bool) ((4294967267U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98)))))) ? (4383975948612183796LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        arr_59 [i_3] [i_3] [i_9] [i_15 + 2] [i_18] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-114))));
                    }
                }
                for (signed char i_19 = 0; i_19 < 14; i_19 += 3) 
                {
                    var_28 = ((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)240)), ((short)16128)));
                    var_29 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) <= (134217661))))) != (((((/* implicit */_Bool) var_3)) ? (-7317529752965573851LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_19] [i_19] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])))))) : (var_7)));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_42 [i_9 - 1] [i_9 - 1])))) ? (((/* implicit */unsigned long long int) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32756)))))) : (((((/* implicit */_Bool) arr_44 [i_3] [i_9 - 1] [i_13] [i_19])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1302635972)) ? (562941363486720LL) : (9223372036854775798LL)))) : ((+(3911365499262118972ULL)))))));
                }
                var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((unsigned char)78), (((/* implicit */unsigned char) (signed char)-1)))))));
                var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned char)1))));
                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) var_8)), ((unsigned short)65535))), (((/* implicit */unsigned short) (signed char)-32)))))) <= ((+(-7317529752965573861LL))))))));
            }
            for (long long int i_20 = 1; i_20 < 11; i_20 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 2; i_21 < 11; i_21 += 3) 
                {
                    arr_67 [i_3] [i_9 - 1] [i_20] [i_9] [i_21] = ((/* implicit */short) (~(((/* implicit */int) min((arr_65 [i_3] [i_9 + 1] [i_20 + 1]), (((/* implicit */unsigned short) var_9)))))));
                    arr_68 [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) ((arr_66 [i_3] [i_3] [6LL] [i_20 + 2] [i_20 + 2]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)384)))))) > (((/* implicit */int) min((var_8), (((/* implicit */short) var_0))))))))));
                    var_34 += ((/* implicit */unsigned char) ((((arr_44 [i_20 - 1] [i_9 - 1] [i_20 - 1] [i_20]) / (((/* implicit */int) (unsigned short)15)))) != ((-(((/* implicit */int) arr_38 [i_3] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_3]))))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_22 = 1; i_22 < 12; i_22 += 2) 
                {
                    var_35 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_47 [i_3] [(unsigned char)11] [i_22 + 2] [i_3]))))));
                    var_36 &= ((/* implicit */long long int) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32746))) * (14580701470417385027ULL))))) < (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_1)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_9] [i_20 - 1] [i_9]))))))))));
                }
                for (short i_23 = 0; i_23 < 14; i_23 += 4) 
                {
                    var_37 = -4;
                    var_38 = ((/* implicit */short) arr_35 [i_3] [i_9] [(signed char)3] [i_23] [i_23]);
                    var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (var_10))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)125)) * (((/* implicit */int) var_8))))))))))));
                    var_40 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-32762))));
                }
            }
            var_41 = ((/* implicit */unsigned long long int) var_11);
            var_42 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_3] [i_3] [i_3] [i_9] [(unsigned char)2]))))))) << ((((+(1699947515))) - (1699947504)))));
            arr_74 [i_3] [i_9] [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-17477)) + (max((((/* implicit */int) arr_13 [i_9])), (-1304416975)))));
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 14; i_24 += 3) 
            {
                for (unsigned long long int i_25 = 2; i_25 < 12; i_25 += 1) 
                {
                    for (unsigned long long int i_26 = 3; i_26 < 13; i_26 += 2) 
                    {
                        {
                            var_43 += ((/* implicit */signed char) ((min((((/* implicit */int) arr_19 [i_25 + 1] [i_24] [i_25 + 1] [i_3] [i_9 - 1])), ((~(((/* implicit */int) (short)16117)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14336)) && (((/* implicit */_Bool) -518478289)))))));
                            var_44 = ((/* implicit */signed char) min((var_8), (((/* implicit */short) ((((/* implicit */_Bool) (short)-32741)) && (((/* implicit */_Bool) 3680217785U)))))));
                        }
                    } 
                } 
            } 
        }
        var_45 = ((/* implicit */short) (+(((/* implicit */int) (short)-9308))));
    }
    var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) var_9)))) < ((+(((/* implicit */int) (unsigned short)65530)))))))))))));
    var_47 *= ((/* implicit */short) var_0);
}
