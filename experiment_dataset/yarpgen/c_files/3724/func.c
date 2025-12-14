/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3724
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_7)), (var_10)))) ? (((/* implicit */int) min((var_0), ((unsigned char)44)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)33031)) : (((/* implicit */int) (unsigned char)197))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) var_0))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))) : (var_12)));
    var_17 = (unsigned short)35635;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                var_18 = ((/* implicit */unsigned short) (-(min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)67))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    for (unsigned char i_4 = 2; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_8)))))) ? ((+(((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_3] [i_2]))))))));
                            var_20 = ((/* implicit */long long int) (~((+(var_12)))));
                            var_21 *= min(((unsigned char)193), ((unsigned char)199));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) min((var_22), (var_9)));
            }
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                var_23 = ((/* implicit */int) ((min((((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) (unsigned short)13227)))) < (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)96)) << (((/* implicit */int) (unsigned short)0)))))));
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [(signed char)3] [i_0] [i_1] [i_1] [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_5])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_5])) : (((/* implicit */int) arr_11 [i_0] [3U] [i_0] [i_1] [i_0] [i_1] [i_5]))))));
                var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (((((/* implicit */_Bool) (-(var_12)))) ? (min((((/* implicit */unsigned int) var_14)), (4U))) : (var_2))));
            }
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_7 = 3; i_7 < 13; i_7 += 2) 
            {
                arr_24 [i_6] [i_7] [i_7] = ((/* implicit */signed char) ((unsigned int) ((var_2) >= (var_12))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        {
                            arr_30 [i_0] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */short) var_3);
                            var_25 = ((/* implicit */int) (~(-1370545376991226069LL)));
                            arr_31 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11)))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_10 = 2; i_10 < 11; i_10 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_10 + 1] [i_10 - 2] [i_10 + 2]))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    for (long long int i_12 = 1; i_12 < 12; i_12 += 1) 
                    {
                        {
                            var_27 = (i_6 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6] [(unsigned char)7]))))) << ((-(((/* implicit */int) arr_21 [i_10] [i_10] [i_6]))))))) : (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6] [(unsigned char)7]))))) << ((((-(((/* implicit */int) arr_21 [i_10] [i_10] [i_6])))) + (87))))));
                            var_28 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                            var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) arr_10 [(signed char)1] [i_12] [(signed char)1] [i_12 + 1] [i_12 - 1] [(signed char)1])) ? (((/* implicit */int) arr_26 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 1] [(unsigned char)0])) : (((/* implicit */int) var_3))))));
                            var_30 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [2U] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned char)4]))) : (var_12))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned char) var_12);
                var_32 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_0] [i_10 + 3] [i_10] [i_10 + 3] [i_10 + 1] [i_10 + 3])) ? (((/* implicit */int) arr_27 [i_0] [i_10 + 3] [i_10] [i_10 + 2] [i_10 + 2] [i_10 - 2])) : (((/* implicit */int) arr_10 [i_0] [i_6] [(short)4] [(signed char)11] [i_10 - 2] [i_6]))));
            }
            for (unsigned short i_13 = 2; i_13 < 11; i_13 += 1) /* same iter space */
            {
                arr_41 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */_Bool) var_12);
                /* LoopSeq 3 */
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    arr_44 [i_6] [i_14] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) | (((((/* implicit */_Bool) arr_40 [i_6] [i_6] [i_6] [i_6])) ? (arr_9 [i_0] [i_6] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_13] [i_14])))))));
                    arr_45 [i_0] [(unsigned short)2] &= ((/* implicit */int) (-(3490985073U)));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32766))) : (2627655210U)))) ? (((/* implicit */int) arr_40 [i_0] [i_13 + 3] [i_13] [i_6])) : (((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) (unsigned short)8249)) : (((/* implicit */int) (unsigned short)65535))))));
                    arr_48 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) var_7);
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        arr_52 [i_0] [i_13 - 2] [i_13] [i_0] [i_6] = ((/* implicit */unsigned short) ((arr_36 [i_16] [i_13 + 3] [i_13 - 1] [i_13 + 3] [i_13 + 3]) / (((/* implicit */int) var_3))));
                        var_34 = ((/* implicit */long long int) ((arr_43 [(_Bool)1]) + (((((/* implicit */_Bool) (unsigned short)14)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66)))))));
                    }
                }
                for (unsigned short i_17 = 3; i_17 < 13; i_17 += 2) 
                {
                    var_35 = (!(((/* implicit */_Bool) (unsigned short)52309)));
                    var_36 -= ((/* implicit */unsigned short) 2321438695948992865LL);
                }
                arr_55 [i_0] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)14))))) : (((/* implicit */int) arr_15 [i_13 - 1] [i_6] [i_0]))));
                arr_56 [i_6] [i_6] [i_6] [10LL] = ((/* implicit */unsigned char) ((signed char) (signed char)-69));
                arr_57 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)30))));
            }
            arr_58 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((short) var_14));
        }
        arr_59 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) | (((-903738854955119740LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4551)))))));
    }
    for (short i_18 = 0; i_18 < 11; i_18 += 1) 
    {
        var_37 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)212)))))));
        /* LoopSeq 2 */
        for (long long int i_19 = 0; i_19 < 11; i_19 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_20 = 0; i_20 < 11; i_20 += 1) 
            {
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_18] [i_18] [i_19] [i_19] [i_20] [i_20]))));
                arr_70 [i_19] [i_19] [i_20] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)48920)) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) (unsigned char)76))))), (((((/* implicit */_Bool) min((arr_54 [i_18] [i_19] [i_19] [i_19] [i_20] [i_19]), (((/* implicit */long long int) var_4))))) ? (min((((/* implicit */unsigned int) var_10)), (4053531574U))) : ((-(var_8)))))));
            }
            var_39 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)1847)) : (((/* implicit */int) arr_35 [i_18] [(unsigned short)2] [(unsigned short)2] [i_19] [i_19])))))));
        }
        for (unsigned short i_21 = 0; i_21 < 11; i_21 += 1) 
        {
            arr_74 [i_18] [i_21] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned short) ((unsigned short) (unsigned short)10566)))), (min((((281474976710654LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (unsigned short)61001))))));
            var_40 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)255));
            arr_75 [i_21] = ((/* implicit */int) ((unsigned int) (unsigned char)39));
            var_41 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_71 [i_18])) > (((((/* implicit */_Bool) (signed char)-69)) ? (arr_23 [i_18] [i_18] [i_21] [(signed char)11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))) & (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_7)), ((unsigned char)166)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_38 [i_18] [i_21] [i_21] [i_21] [i_18] [i_21])) : (((/* implicit */int) (unsigned short)60977))))) : (max((arr_34 [i_18] [i_18] [i_18] [i_18]), (((/* implicit */unsigned int) (signed char)62))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_22 = 1; i_22 < 9; i_22 += 2) 
        {
            arr_78 [i_22] = ((/* implicit */_Bool) var_3);
            arr_79 [i_22] [i_22] = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
        }
        for (unsigned short i_23 = 3; i_23 < 8; i_23 += 4) 
        {
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_67 [i_23] [10U] [i_23 - 1]), (var_0)))) ? (-366493154) : (((((/* implicit */_Bool) 3694148804U)) ? (((/* implicit */int) (unsigned short)18637)) : (2107746099)))))) : (((((/* implicit */_Bool) var_4)) ? ((~(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))));
            arr_83 [i_23] [i_18] = ((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)18626)) + (((/* implicit */int) arr_27 [i_18] [i_23 - 3] [i_23] [i_23] [i_23 - 2] [i_23])))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)103)), ((unsigned char)128))))));
            arr_84 [8LL] [i_23 + 2] = ((((/* implicit */int) arr_26 [i_18] [i_18] [i_18] [i_18] [(signed char)4])) % (((/* implicit */int) var_5)));
        }
    }
}
