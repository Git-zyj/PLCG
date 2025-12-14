/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192755
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
    var_12 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_2 [(unsigned char)16] = ((/* implicit */unsigned short) var_4);
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_6)) >= (0ULL)))), (max((var_2), (arr_1 [11]))))))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4424252461894715370LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
        var_14 -= ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (18446744073709551607ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
        {
            var_15 ^= ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */long long int) 268435455U)) : (1493251598401274488LL))) - (max((((/* implicit */long long int) var_11)), (arr_4 [i_0] [i_0] [i_0])))))));
            var_16 = ((/* implicit */unsigned short) arr_4 [i_0] [19LL] [i_1]);
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            var_17 -= ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) var_10))))))));
            arr_9 [i_2] = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) 3303043169U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (18446744073709551612ULL))), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_9))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (0LL)))))) ? ((-(min((arr_5 [i_0] [i_2]), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 23; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 3; i_4 < 23; i_4 += 4) 
            {
                var_19 *= arr_5 [i_0] [i_0];
                /* LoopSeq 3 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_14 [i_0] [(_Bool)1] [i_0 - 1]))));
                    var_21 = ((/* implicit */unsigned long long int) var_5);
                    arr_19 [i_5] [i_5] [8] [(unsigned short)2] [i_3] [i_0] = ((/* implicit */long long int) ((_Bool) arr_6 [i_5] [i_3 - 1]));
                }
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(_Bool)1] [i_3] [i_4 - 3]))) | (4026531852U)));
                    var_23 = ((/* implicit */unsigned char) (unsigned short)39605);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_24 = ((arr_16 [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 - 1]))) : (arr_18 [i_4] [i_4 - 2] [i_4]));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 3; i_8 < 23; i_8 += 2) 
                    {
                        var_25 = arr_27 [i_0] [(unsigned short)23] [i_4] [i_8] [i_8] [i_3];
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) (-(var_6)))) ? ((-(arr_4 [i_0] [i_3] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                    }
                    arr_29 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (arr_14 [i_0] [i_0 + 2] [i_3 - 2]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) % (((/* implicit */int) var_1)))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4026531841U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5813989228712116975ULL)));
                        var_28 += ((/* implicit */long long int) arr_28 [i_0] [i_0] [17U] [i_0] [i_0]);
                    }
                    for (unsigned short i_10 = 2; i_10 < 21; i_10 += 4) 
                    {
                        var_29 *= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 12632754844997434641ULL)) ? (1023ULL) : (1026ULL))));
                        var_30 ^= ((/* implicit */unsigned short) (-((-(((/* implicit */int) (short)-27058))))));
                    }
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_31 = arr_7 [i_7] [i_0] [i_7];
                        var_32 = ((/* implicit */unsigned long long int) var_6);
                    }
                    for (unsigned short i_12 = 1; i_12 < 23; i_12 += 3) 
                    {
                        var_33 = ((unsigned short) (~(((/* implicit */int) (unsigned short)40385))));
                        var_34 = ((/* implicit */unsigned char) ((arr_7 [i_7] [i_12 - 1] [(unsigned short)20]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0 - 1]))) : (((((/* implicit */_Bool) 12365492632679963064ULL)) ? (var_4) : (4026531837U)))));
                        var_35 = ((/* implicit */long long int) var_2);
                        var_36 = ((/* implicit */unsigned long long int) var_2);
                    }
                    arr_41 [i_0] [i_7] [i_3] [i_7] = ((/* implicit */short) (+(arr_35 [i_4] [i_3] [(unsigned short)19] [i_7] [i_0 + 2])));
                }
                /* LoopSeq 2 */
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_3])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)5])) : (((/* implicit */int) ((unsigned char) (signed char)61)))));
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) (unsigned short)58876))))));
                        arr_48 [i_0] [8LL] [(unsigned short)19] [i_0] [i_0] = var_3;
                    }
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        var_39 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [(unsigned short)20]))));
                        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) var_5))));
                    }
                    for (long long int i_16 = 1; i_16 < 23; i_16 += 4) 
                    {
                        var_41 *= ((/* implicit */signed char) ((unsigned long long int) arr_26 [i_0] [i_13]));
                        arr_53 [(unsigned short)23] [i_16] [(unsigned short)13] [i_13] [i_16] = ((/* implicit */unsigned char) 3680481558U);
                        var_42 += ((/* implicit */unsigned int) (((!((_Bool)1))) ? (arr_42 [i_4] [i_3] [(_Bool)1] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)41880)) != (((/* implicit */int) arr_24 [i_0] [i_3] [19U] [(unsigned short)0] [9LL] [i_16]))))))));
                    }
                    var_43 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_10))))) ? ((-(((/* implicit */int) (unsigned short)19893)))) : (((/* implicit */int) (unsigned short)53900))));
                }
                for (unsigned short i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    var_44 = ((/* implicit */long long int) arr_50 [i_4] [21LL]);
                    var_45 ^= ((/* implicit */_Bool) ((unsigned long long int) (signed char)97));
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_59 [i_0] [(unsigned short)15] [i_18] [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                        arr_60 [i_18] [i_3] [i_4] [(unsigned short)10] [(unsigned short)17] [i_18] = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) arr_42 [(unsigned short)9] [i_3] [i_4] [i_3])))));
                        arr_61 [(_Bool)1] [i_18] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0 + 2] [i_18] [i_17] [i_17] [i_18])) ? (arr_52 [i_4 - 2] [i_18] [i_4 - 1] [i_4 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35569)))));
                        var_46 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_52 [i_0] [i_17] [i_17] [i_18]))))));
                        var_47 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 + 2]))));
                    }
                    arr_62 [i_0] [i_17] [i_4] [(unsigned short)11] = ((((((/* implicit */_Bool) arr_15 [i_0])) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                {
                    var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_19] [i_19])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) : (arr_18 [i_3] [3LL] [i_3 + 1])));
                    /* LoopSeq 2 */
                    for (unsigned char i_20 = 0; i_20 < 24; i_20 += 4) 
                    {
                        var_49 = ((/* implicit */unsigned short) ((unsigned int) var_5));
                        var_50 = ((/* implicit */unsigned short) max((var_50), (arr_17 [(unsigned short)1] [i_0])));
                        var_51 = ((/* implicit */unsigned long long int) min((var_51), ((+((-(var_8)))))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 4) 
                    {
                        var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_3 - 1] [i_3] [i_3] [i_21] [i_3 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))));
                        arr_71 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) var_11);
                        arr_72 [i_0] [i_0] [(unsigned short)16] [i_0] [19U] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
                    }
                }
                for (unsigned short i_22 = 0; i_22 < 24; i_22 += 4) 
                {
                    var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) ((_Bool) (+(var_8)))))));
                    var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_0] [i_4 - 1] [i_4] [(short)2] [3U]))) >= (arr_6 [i_22] [i_3 - 1]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_23 = 2; i_23 < 21; i_23 += 2) 
                    {
                        var_55 += ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_11)))));
                        var_56 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        arr_83 [i_24] [i_3] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        arr_84 [(_Bool)1] [i_24] [i_24] [i_22] [(_Bool)0] [i_24] [i_0] = ((/* implicit */unsigned int) var_6);
                    }
                    var_57 = ((/* implicit */unsigned short) (-(2735369698U)));
                }
                var_58 = ((/* implicit */unsigned short) max((var_58), (((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (var_5))))))));
            }
            arr_85 [11LL] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)61))));
        }
    }
    var_59 = ((/* implicit */long long int) var_9);
    var_60 = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
}
