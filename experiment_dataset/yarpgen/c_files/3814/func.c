/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3814
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-9223372036854775807LL - 1LL)))));
        arr_2 [i_0] = ((/* implicit */short) ((_Bool) arr_1 [i_0] [i_0]));
    }
    var_15 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 7; i_2 += 1) /* same iter space */
        {
            arr_8 [i_1] [i_1] [(unsigned short)6] |= ((/* implicit */unsigned char) ((var_10) / (((/* implicit */int) arr_0 [i_2 + 3] [i_2 + 2]))));
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((arr_7 [i_2 - 1] [i_2 - 1]) | (((/* implicit */int) (_Bool)0)))))));
        }
        for (unsigned short i_3 = 1; i_3 < 7; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_3 - 1])) ? (((/* implicit */int) ((_Bool) var_7))) : (((((/* implicit */_Bool) 3807220587U)) ? (arr_7 [i_4] [i_3]) : (((/* implicit */int) (unsigned char)134))))));
                var_18 ^= ((/* implicit */_Bool) ((arr_9 [i_3 + 3] [i_3 + 1] [i_3 + 2]) - (arr_9 [i_3 + 2] [i_3 - 1] [i_3 + 1])));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (-(((var_13) ? (arr_13 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
            }
            var_20 = ((/* implicit */_Bool) 12563054691133834100ULL);
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)63557)))) % (((/* implicit */int) (unsigned char)255)))))));
        }
        /* LoopSeq 4 */
        for (int i_5 = 3; i_5 < 8; i_5 += 2) 
        {
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_5]))) | (arr_16 [i_5 + 1] [i_1])))))));
            var_23 = ((/* implicit */unsigned short) (((_Bool)1) ? (8436365218093594128LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
            var_24 *= ((/* implicit */unsigned short) (unsigned char)82);
            arr_18 [i_1] [i_1] = ((/* implicit */short) arr_7 [i_1] [i_5 - 3]);
            var_25 = ((/* implicit */unsigned char) ((arr_6 [i_5 + 1] [i_5 + 2]) >= (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 + 1] [i_5 + 1] [i_5 - 1])))));
        }
        for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_3))));
            arr_22 [i_1] [i_1] = ((-7568990187404915032LL) <= (906421976086144087LL));
            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (-7568990187404915032LL) : (((/* implicit */long long int) arr_21 [i_6] [i_1]))));
        }
        for (signed char i_7 = 2; i_7 < 8; i_7 += 1) 
        {
            var_28 ^= ((/* implicit */int) 8436365218093594126LL);
            arr_25 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7 - 1] [i_7 - 2]))) * (var_0)));
        }
        for (short i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (+(1990846857U))))));
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -1465180451010362174LL))) ? (((10758267427678956555ULL) & (((/* implicit */unsigned long long int) 0LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1]))))))));
        }
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
    {
        arr_32 [i_9] &= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) / (((3479818927576233295LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9] [i_9]))))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4147)))));
        var_31 += ((/* implicit */unsigned short) (-((((+(arr_30 [i_9]))) + (((/* implicit */unsigned long long int) ((2147475456) + (((/* implicit */int) (unsigned char)57)))))))));
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 8436365218093594128LL)) ? (min((((var_6) ^ (((/* implicit */unsigned long long int) -1465180451010362174LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8436365218093594129LL)) ? (1465180451010362173LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10)))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 487746687U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)57)))), ((+(((/* implicit */int) arr_1 [i_9] [i_9]))))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
    {
        var_33 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)0)))) + (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_10]))) : (12059614U)))));
        /* LoopSeq 4 */
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_12 = 2; i_12 < 20; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    {
                        arr_42 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 1465180451010362183LL))) ? (((/* implicit */int) ((arr_39 [i_11] [i_11] [i_10]) || (((/* implicit */_Bool) arr_0 [i_10] [i_10]))))) : (((/* implicit */int) arr_1 [i_10] [i_10]))));
                        var_34 = ((/* implicit */short) (~(((/* implicit */int) arr_36 [i_12 - 1] [i_12 - 1] [i_12 - 2]))));
                        arr_43 [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) != (((((/* implicit */_Bool) -1465180451010362174LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_0))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            var_35 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (2974772907153051334LL)))));
                            var_36 -= ((/* implicit */unsigned char) (unsigned short)22871);
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)93))) > (arr_35 [i_13])));
                        }
                        for (unsigned short i_15 = 0; i_15 < 22; i_15 += 2) 
                        {
                            arr_52 [i_15] [i_13] [i_11] [i_11] [i_11] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) 601890319U)) ? (((((/* implicit */_Bool) 1465180451010362183LL)) ? (-1465180451010362175LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51531))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            arr_53 [i_10] [i_10] = ((/* implicit */signed char) -2974772907153051325LL);
                        }
                        for (signed char i_16 = 0; i_16 < 22; i_16 += 3) 
                        {
                            var_38 *= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)209))));
                            var_39 = (unsigned char)41;
                        }
                    }
                } 
            } 
            arr_56 [i_10] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_50 [i_10] [i_10] [i_10] [i_11] [i_11] [i_11]) ? (7736040667458876510ULL) : (((/* implicit */unsigned long long int) arr_51 [i_10] [i_10] [i_11] [i_11])))))));
            var_40 ^= ((/* implicit */int) var_6);
        }
        for (unsigned char i_17 = 0; i_17 < 22; i_17 += 2) /* same iter space */
        {
            var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) | ((-(var_6))))))));
            var_42 *= ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) > (((2015742913U) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        }
        for (unsigned char i_18 = 0; i_18 < 22; i_18 += 2) /* same iter space */
        {
            var_43 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)241))));
            arr_61 [i_18] = ((/* implicit */_Bool) arr_0 [i_10] [i_10]);
        }
        for (unsigned int i_19 = 0; i_19 < 22; i_19 += 1) 
        {
            var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_60 [i_10] [i_10])))))));
            arr_65 [(_Bool)1] [i_10] [(_Bool)1] &= ((/* implicit */signed char) ((unsigned char) (unsigned short)65523));
            var_45 = ((/* implicit */_Bool) var_8);
            arr_66 [i_19] = ((/* implicit */long long int) (_Bool)1);
        }
        arr_67 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1901957970U)) ? (arr_46 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (273783465019941936ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))) - (2974772907153051358LL))))));
    }
    for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 3) /* same iter space */
    {
        var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (var_6))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2169918136502600423LL)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((-2169918136502600424LL) & (((/* implicit */long long int) -1)))) : (((arr_46 [i_20] [i_20] [i_20] [i_20]) >> (((2169918136502600424LL) - (2169918136502600411LL)))))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 3) 
        {
            arr_72 [i_21] [i_21] [i_20] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)46672)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (7736040667458876513ULL))) * (min((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) (signed char)-4)), (8879515318333159548ULL)))))));
            var_47 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_62 [i_20] [i_21] [i_21]))) > (-2974772907153051349LL)))), (((unsigned int) var_13))));
            arr_73 [i_20] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_34 [i_20])) ? (var_11) : (((/* implicit */int) (unsigned char)168)))));
        }
        arr_74 [i_20] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29321)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29321))) : (18446744073709551615ULL))))));
    }
    var_48 = (!(((/* implicit */_Bool) var_2)));
}
