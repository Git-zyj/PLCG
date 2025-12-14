/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35694
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_11 += ((/* implicit */unsigned short) var_0);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_12 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)6353))));
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_10))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 3; i_4 < 17; i_4 += 2) /* same iter space */
                        {
                            arr_14 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_2 [i_3 - 1] [i_4 + 1]), (arr_2 [i_3 + 3] [i_4 + 1])))), (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) arr_1 [i_4 - 1] [i_4 - 2])) : (((/* implicit */int) arr_2 [i_3 - 1] [i_4 - 2]))))));
                            arr_15 [i_2] [i_1] [i_2] [i_3 - 1] [(unsigned short)17] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (+(3152645447U))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)140)) != (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_8 [i_2] [(_Bool)1] [(unsigned char)9] [i_4])) : (((/* implicit */int) (unsigned char)139))))))) : (((((/* implicit */int) (unsigned char)110)) % (((/* implicit */int) (short)3122))))));
                        }
                        for (unsigned short i_5 = 3; i_5 < 17; i_5 += 2) /* same iter space */
                        {
                            arr_19 [i_2] [10U] [10U] [i_2] = ((/* implicit */long long int) ((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                            arr_20 [i_5] [i_5] [i_5] [(_Bool)1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)6358))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_17 [i_2])), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (3152645448U))))))));
                        }
                        for (unsigned short i_6 = 3; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_3) ? (7ULL) : (var_9))), (((((/* implicit */_Bool) 9ULL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-14739)) : (((/* implicit */int) (short)12644))))) ? (((((/* implicit */_Bool) 0ULL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_5)))))))) : (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) arr_0 [(short)15]))))))));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (short)14742))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_3])) != (((/* implicit */int) ((short) arr_5 [i_0]))))) ? (max((((unsigned long long int) arr_1 [(_Bool)1] [i_6])), (((((/* implicit */_Bool) (signed char)127)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 18446744073709551595ULL)))))))));
                        }
                        for (unsigned short i_7 = 3; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((_Bool) min((var_5), (((/* implicit */unsigned short) (signed char)-92))))))));
                            var_18 = var_6;
                            var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((short) var_10))) ? (min((arr_9 [i_2] [i_2] [i_2] [i_2] [i_0]), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41066))) <= (414765370U)))))))));
                            arr_26 [10ULL] [i_1] [(short)11] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) (signed char)-92))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [15LL] [i_1] [i_2] [i_3] [i_7] [13LL])) ? (arr_12 [i_0]) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -508086774)) || (((/* implicit */_Bool) (unsigned short)43781))))) : (((((/* implicit */_Bool) arr_21 [i_7 + 1] [(short)17] [i_1])) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_1 [i_0] [i_7]))))))));
                            arr_27 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_8)))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (6275652151788609876ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-123)) || (((/* implicit */_Bool) (unsigned char)100)))))) : (max((2U), (((/* implicit */unsigned int) (unsigned char)99))))))));
                        }
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max(((unsigned char)7), (var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)59156)) | (((/* implicit */int) arr_18 [i_0] [16LL] [i_0] [i_0] [i_0]))))) : (((2994026378U) << (((/* implicit */int) (_Bool)0)))))), (((/* implicit */unsigned int) (short)(-32767 - 1)))));
    }
    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((9223372036854775804LL) < (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [(unsigned char)6] [13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)6] [i_8]))) : (7832497086615271380ULL))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)6353))))))))))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (var_7)))) ? (((((/* implicit */_Bool) arr_0 [i_8])) ? (arr_7 [i_8] [i_8] [i_8] [i_8]) : (arr_7 [i_8] [i_8] [i_8] [i_8]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1))))))))));
        var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(6182560750305775921ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (3482807133U)))))) : (arr_22 [i_8] [i_8] [i_8] [i_8] [i_8])));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((signed char) var_9)))));
    }
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
    {
        var_25 += ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -5416813186590796253LL)) & (2899216522564849828ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)6353), ((unsigned short)59183))))) : (((1946296962U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))))))) & ((~(((unsigned int) arr_10 [i_9] [i_9] [i_9] [i_9] [i_9])))));
        arr_34 [i_9] = ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) arr_16 [i_9] [4ULL] [i_9])))));
        var_26 -= ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) 26U)), (10614246987094280235ULL))))), (((/* implicit */unsigned long long int) (unsigned short)59994))));
    }
    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (+(-3338350566836138545LL))))));
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                for (short i_13 = 2; i_13 < 16; i_13 += 4) 
                {
                    {
                        arr_45 [i_10] = (+(((/* implicit */int) ((short) (+(((/* implicit */int) (unsigned short)59183)))))));
                        arr_46 [(short)9] [(unsigned short)5] [i_11] [i_10] [9ULL] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (13365432016982899302ULL) : (arr_11 [i_13] [i_13 - 2] [i_13] [i_13 - 1] [i_13] [i_13 - 2] [i_13]))));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (short i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            var_28 += ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
            /* LoopSeq 2 */
            for (unsigned short i_15 = 3; i_15 < 15; i_15 += 1) 
            {
                var_29 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4688815596995389046LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3455))) : (arr_5 [i_14]))))))), (((((/* implicit */_Bool) arr_33 [i_10])) ? (((/* implicit */int) ((short) (unsigned short)59163))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)26910));
                            arr_55 [i_10] [i_14] [i_15] [i_14] [i_17] = ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_18 = 0; i_18 < 18; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 16; i_19 += 4) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        {
                            var_31 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (_Bool)1))));
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned char) 8353042777908261332ULL)))));
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 4688815596995389045LL)) ? (arr_11 [i_20] [i_19] [i_18] [i_14] [(short)2] [i_14] [(_Bool)1]) : (((/* implicit */unsigned long long int) arr_22 [i_10] [10ULL] [i_18] [(short)12] [i_19]))))))));
                        }
                    } 
                } 
                var_34 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) (short)-32755)))));
            }
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_67 [i_10] [(signed char)0] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -219111742)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10])))))) ? (var_8) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32736)))))));
            var_35 -= ((/* implicit */int) ((unsigned char) (unsigned short)51424));
        }
        for (int i_22 = 0; i_22 < 18; i_22 += 3) 
        {
            var_36 = ((/* implicit */unsigned short) arr_60 [i_10] [i_10] [i_10] [i_22] [i_10] [i_22]);
            /* LoopNest 2 */
            for (unsigned long long int i_23 = 3; i_23 < 14; i_23 += 4) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    {
                        var_37 = ((/* implicit */long long int) max((max((-1), (((/* implicit */int) var_0)))), (((/* implicit */int) arr_31 [i_24] [i_23]))));
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_28 [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((long long int) (unsigned char)251)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_23 - 3] [i_23 + 4])))))))))));
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (-3538468628570327240LL)))) ? (((((/* implicit */_Bool) arr_71 [9U] [i_23 + 4] [i_23 + 2] [i_24])) ? (arr_71 [i_10] [i_23 + 4] [i_23 - 2] [i_24]) : (441223326U))) : (max((((/* implicit */unsigned int) (unsigned short)14400)), (arr_71 [15LL] [i_23 + 3] [i_23 + 4] [i_23]))))))));
                    }
                } 
            } 
            arr_74 [i_10] [i_22] = (~(((/* implicit */int) var_10)));
        }
        /* LoopSeq 2 */
        for (long long int i_25 = 1; i_25 < 17; i_25 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4111437845832117466LL)))))) & (max((((/* implicit */unsigned long long int) ((var_3) ? (arr_69 [i_25]) : (211512953U)))), (min((var_7), (((/* implicit */unsigned long long int) (_Bool)1)))))))))));
            var_41 |= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) min((var_8), (((/* implicit */int) var_0))))) + ((+(441223326U)))))) : (5416813186590796245LL)));
        }
        for (long long int i_26 = 1; i_26 < 17; i_26 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_27 = 1; i_27 < 14; i_27 += 3) 
            {
                for (unsigned int i_28 = 0; i_28 < 18; i_28 += 3) 
                {
                    for (unsigned char i_29 = 1; i_29 < 16; i_29 += 1) 
                    {
                        {
                            var_42 += ((/* implicit */unsigned int) ((((((((/* implicit */int) var_10)) / (((/* implicit */int) var_10)))) / (((/* implicit */int) ((unsigned short) (unsigned char)174))))) * (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) -490029740))))))));
                            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) (((+(((/* implicit */int) var_10)))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)157))) == (arr_53 [(_Bool)1] [i_29 + 2] [i_28] [i_28] [i_27 + 4] [i_10])))))))));
                            arr_89 [i_29 - 1] [i_26] [(short)8] [i_26] [(short)8] = ((unsigned short) ((((/* implicit */_Bool) max((-3), (((/* implicit */int) (short)32764))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_0)))) : (((/* implicit */int) min((((/* implicit */short) var_0)), (var_4))))));
                        }
                    } 
                } 
            } 
            var_44 &= ((/* implicit */long long int) ((unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (-29LL) : (((/* implicit */long long int) 3853743975U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_2))))))));
            var_45 = ((/* implicit */long long int) (+(((/* implicit */int) (short)3195))));
            arr_90 [i_26] = ((((/* implicit */_Bool) 3482807108U)) ? (((/* implicit */int) ((((/* implicit */int) ((short) var_3))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (max((((/* implicit */int) var_2)), (490029740))));
        }
    }
    var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) min((441223326U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((-1232251994), (((/* implicit */int) var_5)))))))))))));
}
