/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235509
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) var_0);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) -384121813))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) arr_5 [24] [i_0] [i_1]);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                arr_10 [i_0] [i_1] [15U] = ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (unsigned short)42902)) : (((/* implicit */int) (unsigned short)42916)));
                var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))));
                var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 26472860)) ? (-734809850) : (((/* implicit */int) (signed char)102))))));
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((int) (signed char)-121)) > (((/* implicit */int) (signed char)-113))));
            }
            arr_12 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)22634)) / (-1689428938)));
            var_18 = ((/* implicit */unsigned char) ((26472860) >> (((((/* implicit */int) (unsigned short)42916)) - (42906)))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (unsigned short)42901))));
                var_20 *= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)122))));
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_20 [i_0] [i_3 - 1] [i_5] [i_5 - 1] &= ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (unsigned char)85)));
                var_21 = ((/* implicit */unsigned int) ((unsigned char) arr_16 [i_0] [i_0] [i_5]));
            }
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(3662205924U)))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((arr_9 [14] [i_3]) / (((/* implicit */int) arr_4 [i_3] [i_3] [i_3 - 1]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (15936935915414475938ULL) : (((/* implicit */unsigned long long int) 2147483639)))))));
                            arr_30 [11ULL] [i_3] [11ULL] [i_7] [(unsigned char)17] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_2))))));
                        }
                    } 
                } 
                arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) (~(9223372036854775807LL)));
            }
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (unsigned short)31441))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 4; i_9 < 24; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
                        {
                            arr_42 [i_0] [i_3 - 1] [i_9 - 1] [i_10] [i_10] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)42902));
                            arr_43 [i_0] [i_0] [i_9] [(unsigned short)8] [i_11] = ((/* implicit */unsigned short) (+(3522290864U)));
                            arr_44 [i_0] [i_0] [(unsigned char)5] [i_0] [i_0] [i_0] = ((-955501202) - (26472880));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_34 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) : (((((/* implicit */_Bool) 6186027899362887860ULL)) ? (arr_35 [i_0] [i_3 + 1] [i_9] [i_10] [i_0]) : (((/* implicit */unsigned long long int) 2147483647)))))))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
                        {
                            var_26 += ((int) ((1046398285) / ((-2147483647 - 1))));
                            arr_47 [i_0] [2ULL] [i_9 - 3] [i_10] [i_12] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)54))));
                        }
                        arr_48 [i_0] [i_3] [i_9] [(unsigned char)13] = ((((/* implicit */_Bool) arr_45 [i_10] [i_9] [(unsigned char)14] [i_3 + 1] [i_0])) ? (((/* implicit */int) arr_8 [i_10] [i_0] [i_0])) : (-95812092));
                        arr_49 [i_3 + 1] [i_3 + 1] = ((/* implicit */signed char) ((((12018093553175045920ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)103)))))) : (arr_14 [i_3 + 1] [24U] [i_9 - 4])));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_5))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) & (var_13))) : (((/* implicit */unsigned long long int) arr_38 [i_0] [i_0] [i_0] [i_3] [i_3 - 1])))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                arr_53 [i_3] [13U] [4LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_41 [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) (signed char)120))));
                /* LoopSeq 1 */
                for (int i_14 = 0; i_14 < 25; i_14 += 4) 
                {
                    var_28 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_14] [i_3])))))) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_39 [i_0] [i_0] [(_Bool)1] [i_13] [i_14])))));
                    var_29 = ((((/* implicit */_Bool) arr_16 [i_3] [i_0] [i_3 - 1])) ? ((-(((/* implicit */int) (short)-27824)))) : (((/* implicit */int) arr_6 [i_3 + 1] [i_3 - 1] [i_0])));
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_40 [i_0] [i_0]))));
                }
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((14174852243681510181ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [7U] [i_3] [16]))))) ? (-1689428908) : (((/* implicit */int) arr_51 [i_3 - 1] [i_3 - 1] [i_3 + 1])))))));
            }
            for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
            {
                arr_59 [i_0] [i_0] [19U] [(_Bool)1] = arr_17 [i_0] [i_0] [i_0] [i_0];
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (~(((/* implicit */int) var_6)))))));
                            var_33 = ((/* implicit */int) (unsigned short)22611);
                            var_34 *= ((/* implicit */unsigned short) -808564213);
                            var_35 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)245))))) ? ((~(4294967295U))) : (((/* implicit */unsigned int) arr_52 [i_16] [(unsigned short)1] [i_3 - 1] [i_0])));
                        }
                    } 
                } 
            }
            for (unsigned int i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                var_36 *= ((/* implicit */signed char) 18446744073709551615ULL);
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 25; i_19 += 3) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_73 [i_18] [10] [i_18] [10] [i_20] = ((/* implicit */unsigned int) var_5);
                            arr_74 [i_18] [i_3] [i_18] [i_19] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)84)) ? (((((/* implicit */_Bool) var_6)) ? (808564213) : (((/* implicit */int) var_12)))) : (1085163112)));
                            var_37 *= ((/* implicit */unsigned int) var_5);
                            var_38 = ((/* implicit */int) min((var_38), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)178))))) - (((/* implicit */int) (unsigned char)178))))));
                            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */_Bool) (+(2147483639)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22611))))))));
                        }
                    } 
                } 
                var_40 ^= ((/* implicit */unsigned short) arr_29 [16U]);
                var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_3 + 1] [i_3] [i_3] [i_3 + 1])))))));
            }
            var_42 *= ((/* implicit */_Bool) (~(arr_72 [i_3 - 1] [(signed char)12] [(signed char)24] [i_3 - 1] [(unsigned char)16])));
        }
        /* LoopSeq 2 */
        for (unsigned char i_21 = 0; i_21 < 25; i_21 += 2) 
        {
            arr_78 [i_21] = ((/* implicit */unsigned long long int) (+(var_10)));
            arr_79 [(unsigned char)7] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 616180242)) ? (8993890111622273998ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253)))));
            arr_80 [i_21] [i_21] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)78)) : (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)22627))))));
        }
        for (unsigned char i_22 = 0; i_22 < 25; i_22 += 4) 
        {
            arr_85 [(unsigned short)19] [i_22] = (+(2104786333U));
            arr_86 [(signed char)16] [i_22] = ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_45 [i_0] [i_0] [i_22] [(short)15] [(short)15])))) ? (((597532227) << (((arr_56 [i_0] [i_22] [21] [i_22]) - (13953838215963040783ULL))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_24 [i_0])) : (((/* implicit */int) (unsigned char)2)))));
            var_43 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65526))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (arr_13 [i_22] [i_0])));
        }
    }
    for (unsigned char i_23 = 0; i_23 < 12; i_23 += 3) 
    {
        arr_89 [i_23] [i_23] = ((/* implicit */int) (unsigned short)16199);
        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) (((~(((1214386870) & (arr_81 [i_23] [i_23] [i_23]))))) / (((/* implicit */int) arr_76 [i_23])))))));
    }
    var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_12)), ((unsigned char)54)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned short) 2147483624)))))) ? (((max((var_9), (var_9))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (var_1))))) : (((/* implicit */int) ((((((/* implicit */int) (unsigned short)65526)) + (var_14))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)65526)) >= (((/* implicit */int) var_6))))))))));
}
