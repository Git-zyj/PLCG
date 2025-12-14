/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23841
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                var_10 *= ((/* implicit */int) (((~(18446744073709551590ULL))) != (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                var_11 = ((/* implicit */_Bool) ((unsigned int) arr_7 [i_0 + 1] [i_1]));
                /* LoopSeq 4 */
                for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9))));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 26ULL)) ? (-45297163) : (((/* implicit */int) (unsigned short)43228))))) ? (((/* implicit */int) (short)24236)) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 2274205238U)))))));
                        var_14 *= ((/* implicit */unsigned short) ((int) 22ULL));
                        var_15 *= ((/* implicit */unsigned short) (~(2020762074U)));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_16 *= ((/* implicit */long long int) arr_9 [i_0 + 1] [i_1] [i_2] [(short)2] [i_5]);
                        arr_17 [i_1] = ((/* implicit */unsigned int) ((_Bool) 18446744073709551593ULL));
                        var_17 = ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2] [i_3 + 2])) ? (arr_13 [i_0 + 1] [i_1] [(short)9] [(signed char)0] [i_1] [i_3 - 1] [i_5]) : (arr_5 [i_0 + 1] [i_1] [i_1] [i_2]));
                    }
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2020762062U)))))));
                }
                for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    var_19 *= ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) + (((((/* implicit */long long int) arr_12 [i_2] [0] [i_2] [i_2] [i_2] [i_2] [i_2])) - (arr_10 [i_2] [i_2] [i_1])))));
                    var_20 *= ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) > (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) (unsigned short)0))));
                    var_21 = ((/* implicit */short) ((unsigned int) arr_18 [i_1] [i_0 + 1] [i_1]));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_22 [i_0] [i_1] [i_1] [i_2] [i_7] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))) < (25ULL)));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_22 *= ((/* implicit */signed char) -8875556);
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(arr_24 [i_0] [i_0 + 1] [i_0 + 1] [10U]))))));
                        var_24 *= ((/* implicit */short) var_2);
                        var_25 = ((/* implicit */unsigned int) (_Bool)1);
                        var_26 *= ((/* implicit */int) 4014943152U);
                    }
                    var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_14 [5ULL] [i_1] [i_1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5032)))))) ? (2147483647) : (((/* implicit */int) ((arr_10 [i_2] [i_1] [10ULL]) >= (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
                    var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4220032970U)) ? (615755624U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((((/* implicit */_Bool) 13LL)) || (((/* implicit */_Bool) var_5))))));
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_6)) : (arr_13 [i_0 + 1] [i_1] [i_2] [i_2] [i_1] [i_7] [i_9]))))));
                    }
                    for (short i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_4))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((short) (short)3)))));
                        arr_31 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (var_8) : (((/* implicit */unsigned long long int) var_1))));
                    }
                    for (unsigned int i_11 = 1; i_11 < 10; i_11 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_9)) > (arr_7 [i_2] [i_7])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_0 [2LL])))))));
                        arr_34 [i_1] [i_1] = ((/* implicit */int) var_3);
                        arr_35 [i_0] [i_1] [i_1] [i_7] [i_7] [i_11 + 1] [(short)5] = ((((/* implicit */int) arr_25 [i_0 + 1] [i_1] [i_0] [i_0 + 1] [i_0 + 1])) >= (-10));
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 28964828U)))))));
                        var_35 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_25 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                    }
                }
                for (unsigned char i_12 = 1; i_12 < 10; i_12 += 2) 
                {
                    var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)10861)) : (((/* implicit */int) (_Bool)1)))))));
                    var_37 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775802LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (arr_19 [i_0] [i_1] [i_2] [i_12 - 1])));
                }
            }
            for (short i_13 = 2; i_13 < 8; i_13 += 3) /* same iter space */
            {
                var_38 *= ((/* implicit */int) arr_42 [i_0] [i_0] [0LL] [i_0 + 1]);
                var_39 = ((/* implicit */unsigned int) ((arr_3 [i_1]) - (((/* implicit */unsigned long long int) arr_10 [i_1] [i_0 + 1] [i_13 - 1]))));
            }
            for (short i_14 = 2; i_14 < 8; i_14 += 3) /* same iter space */
            {
                arr_45 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    for (short i_16 = 1; i_16 < 9; i_16 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_2))))));
                            var_41 *= ((/* implicit */_Bool) (((_Bool)1) ? (arr_21 [i_0] [i_1] [i_14 + 2] [i_0 + 1]) : (arr_21 [i_0] [i_15] [i_14 - 2] [i_0 + 1])));
                        }
                    } 
                } 
                arr_50 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)42)) / (((((/* implicit */int) (unsigned char)185)) / (((/* implicit */int) (signed char)-59))))));
            }
            arr_51 [i_1] [i_1] = (~(12794279367593861518ULL));
        }
        var_42 *= ((/* implicit */long long int) (-(arr_1 [i_0] [i_0])));
        var_43 *= ((/* implicit */unsigned short) ((2484732049014488212LL) / (((/* implicit */long long int) 3927834673U))));
        /* LoopNest 3 */
        for (unsigned int i_17 = 1; i_17 < 8; i_17 += 2) 
        {
            for (unsigned char i_18 = 1; i_18 < 10; i_18 += 4) 
            {
                for (int i_19 = 0; i_19 < 11; i_19 += 3) 
                {
                    {
                        var_44 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (2626139679111269474LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                        var_45 *= ((/* implicit */unsigned short) var_7);
                        var_46 *= ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0 + 1] [6LL] [i_0 + 1])) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) var_4))))));
                        var_47 *= ((/* implicit */short) 2147483647);
                        /* LoopSeq 2 */
                        for (unsigned char i_20 = 0; i_20 < 11; i_20 += 1) 
                        {
                            var_48 = ((/* implicit */short) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned char)108))));
                            var_49 = ((/* implicit */unsigned char) ((16902248772699187768ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_20] [7] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5019))) : (283726776524341248LL))))));
                        }
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) -1443868854))));
                            var_51 *= ((/* implicit */unsigned short) (((_Bool)1) ? (arr_13 [i_0 + 1] [i_17 + 3] [i_17] [i_17 + 2] [4U] [i_19] [i_17 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1])))));
                            var_52 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_17 + 2] [i_19])) ? (arr_18 [i_17] [i_17 + 3] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        }
                    }
                } 
            } 
        } 
    }
    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) /* same iter space */
    {
        var_53 = ((/* implicit */unsigned char) ((short) ((short) arr_41 [i_22 + 1])));
        var_54 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_1 [(_Bool)1] [i_22]) : (((/* implicit */unsigned long long int) ((arr_26 [i_22] [(short)4] [i_22] [(short)4] [i_22]) ? (((/* implicit */int) min((var_0), (((/* implicit */short) arr_26 [i_22 + 1] [i_22 + 1] [i_22 + 1] [8U] [i_22 + 1]))))) : (((/* implicit */int) ((unsigned char) var_7))))))));
    }
    var_55 = ((/* implicit */unsigned short) var_7);
    var_56 = ((/* implicit */unsigned short) var_9);
    var_57 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((unsigned char) 4190104560243023221ULL)), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (2020762057U))))))), (var_1)));
}
