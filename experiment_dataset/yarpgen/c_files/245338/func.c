/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245338
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
    var_20 = ((/* implicit */unsigned short) var_18);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (-((~(((unsigned long long int) (-2147483647 - 1)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1 - 1])) * (((/* implicit */int) arr_3 [i_1 - 1]))));
                    var_22 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 2])) | (((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 2]))));
                }
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_1 [i_1 - 1])))) || (((/* implicit */_Bool) ((int) var_15)))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_4] [i_4 + 1] = ((/* implicit */_Bool) arr_9 [(unsigned short)7] [i_1 - 2] [i_4 + 1]);
                                arr_19 [i_5] [i_4] [i_1] [i_1 - 1] [i_1] [i_1 - 2] [i_0] &= ((/* implicit */signed char) (-((+(((/* implicit */int) ((((/* implicit */_Bool) 1905020840U)) && (((/* implicit */_Bool) arr_0 [i_5])))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) min((((arr_15 [i_1] [i_1 - 1] [(signed char)2] [i_3] [i_0] [i_3] [i_3]) | (arr_15 [i_3] [i_1 - 1] [i_1] [i_1] [i_3] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((signed char) max((var_10), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 - 1] [i_3]))))))));
                    arr_21 [i_3] [(unsigned short)7] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_16 [i_3] [i_1 - 2] [i_1 - 1] [i_0] [i_0] [i_0] [i_1 - 2])))) <= (((long long int) arr_17 [i_0] [i_0] [i_1 - 1] [i_1] [i_0] [i_3]))));
                    arr_22 [i_3] [i_1] [i_3] = ((/* implicit */int) arr_17 [i_0] [i_0] [i_1 + 1] [i_1] [i_1 - 2] [i_3]);
                }
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 8386119622640432353ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_8) : (var_4)))));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)58)) == (-1525234148))) ? (((/* implicit */int) ((unsigned char) var_4))) : ((-(((/* implicit */int) (unsigned short)65535))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_25 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_15)) + (((/* implicit */int) var_11)))))));
                                arr_33 [(short)9] [i_1] [i_8] [i_8] [i_9] = ((_Bool) (~(arr_13 [i_8] [i_9] [i_1 - 1] [i_8])));
                                var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) ((unsigned short) 737184109))) ? (((((/* implicit */_Bool) var_7)) ? (1646379560217267426ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_6] [i_8 + 1])) / (((/* implicit */int) (_Bool)1)))))))));
                                arr_34 [i_8] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8] = ((/* implicit */unsigned char) arr_26 [i_1 - 1] [i_8 + 1] [i_8 + 1] [i_0] [i_0] [i_8 - 1]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */_Bool) var_13);
                }
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                {
                    arr_37 [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((var_9) ? (((/* implicit */unsigned long long int) 98767420)) : (var_8))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_11 = 1; i_11 < 10; i_11 += 3) 
                    {
                        var_28 &= ((/* implicit */unsigned char) (((!(var_11))) && ((!(((/* implicit */_Bool) arr_24 [i_0] [i_11 + 1] [i_1 - 2]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            var_29 = (~(((((/* implicit */_Bool) (unsigned short)49676)) ? (arr_29 [i_12]) : (arr_15 [i_1] [i_1 + 1] [i_10] [i_10] [i_11 + 2] [i_11 - 1] [i_12]))));
                            var_30 = (~(((/* implicit */int) arr_40 [i_10])));
                        }
                        arr_46 [i_11 + 2] [i_11 - 1] [i_11] [i_11] = ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26109)) ? (((/* implicit */int) arr_24 [i_1 + 1] [i_1 + 1] [i_11 - 1])) : (((/* implicit */int) var_6)))))));
                    }
                    for (int i_13 = 1; i_13 < 11; i_13 += 2) 
                    {
                        var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_26 [i_0] [i_1] [i_1 - 1] [i_1 - 1] [i_10] [i_13 - 1])))) ? (var_17) : (((int) var_8))));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((_Bool) (~(var_3)))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_33 = ((/* implicit */signed char) ((long long int) 18446744073709551615ULL));
                            arr_56 [i_0] [i_1 + 1] [i_10] [i_14] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned long long int) 662919609952840432LL))))) ? (((((/* implicit */_Bool) (unsigned short)3072)) ? (17485721021929822590ULL) : (((/* implicit */unsigned long long int) 2010664207)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))))));
                        }
                        /* vectorizable */
                        for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                        {
                            arr_59 [i_0] [i_1 - 1] [i_10] [i_14] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_0] [i_16] [i_10] [i_14] [i_14])) || (((/* implicit */_Bool) arr_31 [i_16] [i_16] [i_14] [i_1 - 2] [i_0]))));
                            var_34 = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned short)44935))))));
                            var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0)))));
                        }
                        for (unsigned int i_17 = 3; i_17 < 11; i_17 += 3) 
                        {
                            arr_63 [i_0] [i_0] [i_0] [i_14] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_50 [4ULL] [i_14] [i_10] [i_14] [i_17]) ? (((/* implicit */int) arr_57 [i_10])) : (((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_23 [i_0] [i_0] [i_0] [i_0]))) << (((((((/* implicit */_Bool) var_10)) ? (arr_30 [i_0] [i_10] [i_14] [i_17 - 3]) : (((/* implicit */unsigned int) var_17)))) - (2964892819U))))) : (((arr_47 [i_1 - 2] [i_1] [i_17 - 1] [i_14] [i_17]) ? (((((/* implicit */unsigned long long int) var_2)) * (0ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_18)))))))));
                            var_36 = var_16;
                            arr_64 [i_10] [(signed char)11] [i_10] [(unsigned char)8] [i_17] [i_14] [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_53 [i_17 - 1] [i_1 - 1] [i_10] [i_14])) && (((/* implicit */_Bool) var_1)))) ? ((-(var_17))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_1 + 1] [i_17 - 2] [i_17 + 1] [i_17 - 2])))))));
                        }
                        arr_65 [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12)))))))))) * (min((((/* implicit */unsigned long long int) (unsigned short)65408)), (16ULL)))));
                    }
                    /* vectorizable */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        var_37 *= ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 8169862030308933672ULL)))));
                        arr_68 [i_10] [i_1 + 1] [(_Bool)1] [i_18] [i_0] [i_0] = ((arr_52 [i_1]) << (((((/* implicit */int) var_5)) - (67))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)109))))) : (var_3)));
                    }
                }
                var_39 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) arr_26 [i_1 + 1] [i_1 + 1] [i_0] [i_1 - 1] [i_1] [i_0]))))));
                var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (((unsigned int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) ^ (var_2)))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_7 [i_0] [i_0] [i_0] [i_0])))) ? (arr_35 [i_1 - 1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_17)))))))));
            }
        } 
    } 
    var_41 = ((/* implicit */short) var_7);
    var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((_Bool) var_4))) : ((~(((/* implicit */int) (_Bool)0))))))) ? ((~((-(var_19))))) : (((/* implicit */unsigned long long int) var_2))));
}
