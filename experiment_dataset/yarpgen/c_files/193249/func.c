/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193249
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))) : (arr_0 [(unsigned char)7])));
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (max((arr_1 [i_0]), (arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_0))));
            arr_4 [10] [10] |= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (max((((/* implicit */long long int) arr_2 [12U] [12U])), (var_1))) : (((/* implicit */long long int) arr_2 [4LL] [i_1])))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_2] [i_3 + 3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3 + 3])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1] [i_2] [i_1]))))) : (((unsigned long long int) max((arr_2 [i_1] [i_1]), (((/* implicit */int) var_12)))))));
                            var_17 = ((/* implicit */signed char) max((((int) (_Bool)1)), (((/* implicit */int) (short)21108))));
                            arr_12 [i_4] [(unsigned short)6] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)1655))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) arr_5 [i_3 + 1] [i_1] [i_2] [i_3])) & (5290913805126891774LL)))));
                            arr_13 [i_0] [i_1] [i_0] [i_0] [9U] = ((/* implicit */unsigned short) (signed char)127);
                        }
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_17 [(short)14] [i_0] [i_1] [i_1] [i_3] [i_3] [i_5] = ((/* implicit */int) (+(17915134U)));
                            arr_18 [i_0] [i_1] [(unsigned short)12] [i_1] = ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (unsigned short)23649)))))) ? (((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [(signed char)8] [(signed char)8] [i_3 - 2] [i_3])) ? (-887058432) : (((/* implicit */int) (signed char)-91))))) >= (max((arr_1 [i_0]), (1793299239192118602LL))))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            var_18 = -5290913805126891775LL;
                            arr_21 [i_0] [i_0] [i_1] [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_4)), (max((arr_16 [i_3 + 2] [i_3 - 2] [i_3] [i_3 - 1] [i_3 + 3]), (arr_16 [i_3 - 1] [i_3 - 2] [i_3] [i_3 + 3] [i_3 - 2])))));
                            arr_22 [i_0] [i_0] [(_Bool)1] [15LL] [(unsigned short)7] [i_0] [i_1] = ((/* implicit */unsigned int) arr_1 [i_3 + 3]);
                            arr_23 [i_6] [i_1] [(short)17] [i_3] [(_Bool)1] [i_0] [(short)17] = ((/* implicit */_Bool) ((unsigned int) min((-5290913805126891775LL), (arr_20 [i_3 - 2] [i_1] [i_3 - 2]))));
                            var_19 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) max(((signed char)3), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1] [i_2] [i_1])))) : (((/* implicit */int) (unsigned short)47347)))));
                        }
                        arr_24 [i_1] [i_3] [i_2] [i_1] [4] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)53339))) ^ (1793299239192118602LL))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)3)), (3567983165716334056LL)))) ? (((((/* implicit */_Bool) var_13)) ? (arr_9 [i_3 + 2] [i_3 + 3] [i_3 + 2] [i_3] [i_1]) : (arr_9 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_1]))) : (((/* implicit */unsigned int) ((int) var_4)))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (signed char)38))));
            arr_25 [i_0] [i_0] [i_1] = max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-127)), ((unsigned short)11648)))) : ((-(((/* implicit */int) var_9)))))), (((/* implicit */int) var_5)));
        }
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) 10423719566282341573ULL))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        arr_33 [i_7] [i_7] [i_7 + 1] [i_7] [4LL] = (~(((/* implicit */int) arr_7 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1])));
                        var_23 *= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)11648))));
                        var_24 = ((/* implicit */short) 1386159358U);
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) arr_27 [3U] [i_7] [i_8]);
                            arr_38 [(short)17] [i_7] [i_7] [i_7] [i_7] [11] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [i_8] [i_10] [i_11 + 2]))))) ? (((/* implicit */long long int) ((int) (_Bool)0))) : (((long long int) (signed char)3))));
                            var_26 *= ((/* implicit */long long int) ((arr_34 [16LL] [i_8] [i_10] [12U]) <= (arr_20 [i_7 + 1] [(unsigned char)8] [i_11 + 2])));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 - 1])) ? ((-(((/* implicit */int) (short)-23267)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)128)) || ((_Bool)1))))));
                        }
                        for (unsigned short i_12 = 1; i_12 < 14; i_12 += 3) 
                        {
                            var_28 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_31 [i_0] [i_7] [16ULL])) ? (var_11) : (((/* implicit */int) (unsigned short)18189)))) / (arr_28 [4LL] [i_7 - 1] [4LL])));
                            arr_42 [i_7] [16LL] [i_8] [(signed char)12] [i_7 + 1] [(_Bool)1] [i_10] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12197))) * (((long long int) (short)-5559)));
                        }
                        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3933567885421208685LL)) ? (((/* implicit */long long int) 3816474670U)) : (8895451991517750347LL)));
                            var_30 = ((/* implicit */unsigned short) (-(var_11)));
                            arr_47 [i_7] [10LL] [i_8] [10LL] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) 2147483647))) ? (((/* implicit */unsigned long long int) arr_46 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1] [i_10])) : (var_6)));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59727))) ^ (arr_6 [i_0] [i_7] [i_8] [i_7 - 1])));
                        }
                        for (long long int i_14 = 0; i_14 < 18; i_14 += 3) 
                        {
                            var_32 = ((/* implicit */_Bool) arr_43 [i_0] [i_7] [i_7] [i_10] [(_Bool)1]);
                            var_33 -= ((/* implicit */long long int) (unsigned short)55914);
                            arr_50 [i_7] [i_14] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) (+(((/* implicit */int) (signed char)15))));
                        }
                        arr_51 [i_7] [15U] [i_8] [i_10] [(short)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_7 + 1] [i_7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_37 [13U] [13U] [i_7])) : (((/* implicit */int) ((var_13) > (var_13)))))))));
                        arr_54 [i_15] [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (max((((/* implicit */unsigned long long int) (signed char)127)), (((((/* implicit */_Bool) arr_6 [11U] [6U] [i_8] [i_15])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
                    {
                        arr_57 [i_0] [i_7] [6LL] [i_0] = -5290913805126891769LL;
                        arr_58 [9ULL] [(short)11] [i_7] [i_16] [i_0] = ((/* implicit */unsigned short) max((var_11), (min((((arr_28 [i_7] [(unsigned short)6] [i_8]) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) arr_26 [5LL] [5LL])))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_17 = 2; i_17 < 10; i_17 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_18 = 3; i_18 < 10; i_18 += 3) 
        {
            arr_64 [8U] [i_18] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [(unsigned short)2] [i_17 + 1] [i_18 - 2]))));
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) arr_8 [i_17 + 1] [i_18] [i_17 - 2] [10ULL] [(_Bool)1]))));
            arr_65 [i_17 - 2] = ((/* implicit */unsigned int) ((arr_53 [12] [i_18 - 2] [i_17 - 2] [i_17] [1U]) ^ (((/* implicit */unsigned long long int) (~(arr_5 [i_17] [(unsigned char)9] [i_18] [i_18]))))));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_5 [i_17 - 1] [i_17 - 1] [i_18 - 2] [i_18])) + (((((/* implicit */_Bool) arr_20 [i_17 - 2] [6LL] [i_17])) ? (-5977475076240916158LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
        }
        var_37 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) var_12))));
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)15)) : (arr_46 [10U] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))) || (((/* implicit */_Bool) arr_9 [10] [i_17 - 2] [i_17 + 2] [i_17 + 1] [10]))));
        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)31911)) <= (((/* implicit */int) arr_59 [i_17 - 2])))))));
    }
    /* LoopNest 2 */
    for (int i_19 = 1; i_19 < 14; i_19 += 3) 
    {
        for (signed char i_20 = 3; i_20 < 16; i_20 += 3) 
        {
            {
                var_40 = ((/* implicit */unsigned int) arr_36 [1U] [i_20] [i_19] [i_20] [i_19]);
                var_41 = ((/* implicit */unsigned int) -2031767166896359501LL);
                arr_71 [i_19 + 3] [(_Bool)1] [i_20] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (134217727ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (min((((/* implicit */long long int) arr_66 [i_19])), ((-9223372036854775807LL - 1LL)))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_36 [i_20 - 1] [i_20] [i_20 - 1] [i_20] [i_19 - 1]))))));
            }
        } 
    } 
    var_42 &= ((/* implicit */unsigned int) var_6);
}
