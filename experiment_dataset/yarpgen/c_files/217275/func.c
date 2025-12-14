/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217275
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_14 = (-9223372036854775807LL - 1LL);
        var_15 = ((/* implicit */unsigned char) (~(arr_0 [i_0])));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            var_16 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((arr_2 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))) : (arr_2 [i_0]));
            arr_4 [i_1] [i_0] = ((arr_3 [i_1 + 2] [i_0] [i_1 - 2]) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)31))))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)16))))) + (arr_3 [i_0] [i_0] [i_1])));
            var_18 = (~(arr_3 [i_1 - 2] [i_0] [i_1]));
            arr_5 [i_0] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_0 [i_1 - 2]) : (((/* implicit */unsigned long long int) var_10)));
        }
        for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (5ULL) : (((/* implicit */unsigned long long int) arr_7 [(unsigned char)1] [1ULL]))));
            arr_9 [i_0] = ((/* implicit */unsigned long long int) var_6);
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_0 [i_0]))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_2])) % (arr_13 [i_0])));
                        arr_15 [i_0] [i_0] [i_3] [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_0] [(unsigned char)11] [i_3] [i_4]))));
                        arr_16 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(11642743796010567769ULL)))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))) : (9218868437227405312ULL)))));
                    }
                } 
            } 
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 983040ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))) : (0ULL)));
        }
        for (signed char i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
        {
            var_22 = (i_0 % 2 == 0) ? (((/* implicit */long long int) (~(((((/* implicit */int) var_11)) << (((arr_11 [i_0] [i_0] [i_0] [i_0]) - (7865396930111781783ULL)))))))) : (((/* implicit */long long int) (~(((((/* implicit */int) var_11)) << (((((arr_11 [i_0] [i_0] [i_0] [i_0]) - (7865396930111781783ULL))) - (15983309910651301460ULL))))))));
            /* LoopNest 2 */
            for (signed char i_6 = 2; i_6 < 11; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) 983040ULL))))))));
                        var_24 = (unsigned char)180;
                        var_25 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */int) arr_24 [11LL] [i_0] [i_0] [i_0])) + (2147483647))) << (((((arr_25 [i_6] [i_6 + 1] [i_0] [i_6]) + (451915777093876965LL))) - (30LL)))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) arr_24 [11LL] [i_0] [i_0] [i_0])) + (2147483647))) << (((((((((arr_25 [i_6] [i_6 + 1] [i_0] [i_6]) + (451915777093876965LL))) - (30LL))) + (4597381354647072546LL))) - (26LL))))));
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) (signed char)29)))));
                        arr_26 [i_0] [i_0] [i_0] [9LL] [i_0] = ((/* implicit */unsigned long long int) (signed char)-14);
                    }
                } 
            } 
            var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0]))));
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 15409452171667112381ULL))) ? (18446744073709551612ULL) : (arr_11 [(signed char)5] [i_0] [i_0] [i_0])));
        }
        for (signed char i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) arr_24 [i_0] [i_0] [i_0] [i_0])))));
            arr_29 [i_0] [i_0] [i_0] = ((((arr_20 [i_0] [i_0] [i_0]) + (9223372036854775807LL))) >> (((arr_22 [i_0] [i_8] [i_8] [i_0]) - (2668781273608868731LL))));
        }
    }
    var_30 ^= ((/* implicit */long long int) min((var_3), (((/* implicit */unsigned char) max(((signed char)98), ((signed char)111))))));
    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((long long int) var_5)) / (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        for (unsigned long long int i_10 = 3; i_10 < 16; i_10 += 3) 
        {
            {
                var_32 = ((/* implicit */signed char) var_1);
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    arr_38 [11ULL] [16LL] [16LL] = ((/* implicit */long long int) arr_34 [i_10]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_9] [i_10 + 1] [i_10 - 1] [i_10 - 2] [i_10 - 1]))))) == ((((-(((/* implicit */int) (signed char)-1)))) * (((/* implicit */int) (unsigned char)51))))));
                                var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)212)) ? ((-(max((71494644084506624ULL), (((/* implicit */unsigned long long int) (unsigned char)131)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_10])))));
                                var_35 = ((/* implicit */unsigned char) max((arr_32 [i_10]), (((/* implicit */long long int) (-(((/* implicit */int) max(((unsigned char)211), (arr_34 [i_13])))))))));
                                var_36 = ((/* implicit */unsigned long long int) (unsigned char)174);
                                arr_45 [i_9] [i_9] = ((/* implicit */unsigned long long int) (((+(arr_30 [i_10 + 1] [i_10 + 1]))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                            }
                        } 
                    } 
                    arr_46 [i_9] [0LL] [i_9] [i_9] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (-(((/* implicit */int) arr_31 [(signed char)4]))))), (arr_44 [i_9] [i_9] [(unsigned char)8] [i_9] [i_11]))), (((/* implicit */long long int) min((((/* implicit */unsigned char) ((signed char) var_1))), (arr_39 [i_9] [i_10] [i_10] [(unsigned char)15]))))));
                    var_37 = (~(1209854814185485245LL));
                }
                for (long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    arr_49 [i_9] [i_10] = (~(((((/* implicit */_Bool) arr_47 [i_9] [i_10 - 1] [i_10] [i_10 + 2])) ? (arr_47 [(unsigned char)2] [i_10 + 1] [(unsigned char)2] [i_10 + 1]) : (arr_47 [i_9] [i_10 - 2] [i_10] [i_10 + 2]))));
                    var_38 = ((/* implicit */unsigned long long int) ((long long int) (~(-890106843760332602LL))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 2; i_15 < 14; i_15 += 2) 
                    {
                        for (unsigned char i_16 = 3; i_16 < 17; i_16 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_10 + 2] [i_10 + 1] [i_15 + 2] [i_16 + 1] [i_16] [i_16 + 1] [i_16 + 1]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_41 [17ULL] [i_10 - 1] [i_15 - 1] [i_16 - 3]))) * (max((arr_32 [i_16]), (((/* implicit */long long int) (signed char)-65))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)211))))), (-6475527985284533466LL)))) : (arr_37 [i_16] [i_9] [i_9] [i_9]))))));
                                arr_55 [i_16] = ((/* implicit */signed char) (~((~(7387022564088225142ULL)))));
                                var_41 = ((/* implicit */unsigned char) min(((+(0ULL))), (min((((((/* implicit */unsigned long long int) var_10)) + (2925764739873122621ULL))), (((/* implicit */unsigned long long int) ((-2911634863298150426LL) < (-2911634863298150414LL))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_17 = 1; i_17 < 17; i_17 += 3) 
                    {
                        var_42 = ((/* implicit */long long int) arr_33 [i_10 - 2] [i_17 - 1]);
                        /* LoopSeq 1 */
                        for (long long int i_18 = 0; i_18 < 18; i_18 += 2) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)27))));
                            var_44 = ((/* implicit */long long int) ((unsigned char) 12344929930652207ULL));
                        }
                    }
                    for (long long int i_19 = 1; i_19 < 17; i_19 += 2) 
                    {
                        arr_64 [i_10] [i_10] [i_19] [i_19] [i_10] = ((/* implicit */signed char) 7192408172472788049ULL);
                        var_45 = max((var_3), (((/* implicit */unsigned char) min((arr_59 [i_10 - 1] [i_9] [i_10] [i_10] [i_9]), (arr_59 [i_10 - 2] [(unsigned char)13] [i_9] [i_9] [i_9])))));
                        arr_65 [i_9] [i_19] = ((/* implicit */signed char) var_2);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 1) 
                        {
                            arr_68 [i_9] [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)61)) / (((/* implicit */int) arr_52 [i_10 - 3] [i_10 + 2] [i_9] [i_10 - 2] [i_19 - 1] [i_19 + 1]))));
                            var_46 = ((/* implicit */long long int) ((signed char) arr_40 [i_9] [i_9] [i_9] [i_19 - 1]));
                            var_47 = ((/* implicit */unsigned long long int) var_12);
                        }
                        for (unsigned char i_21 = 4; i_21 < 17; i_21 += 2) 
                        {
                            var_48 -= ((/* implicit */long long int) min((arr_42 [i_9] [i_9] [i_9] [i_19] [i_9]), (((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) arr_40 [(unsigned char)5] [(unsigned char)5] [1ULL] [1ULL]))))))));
                            var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)31)) ^ (((/* implicit */int) arr_63 [i_10 + 1] [i_10 + 1] [i_10 + 1])))) & (max(((-(((/* implicit */int) (unsigned char)148)))), (((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (signed char)-17)))))))))));
                            var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) : (15409452171667112381ULL)));
                            arr_71 [i_19] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-38))))) && (((/* implicit */_Bool) 13586294086982841952ULL)))))) * (max((((/* implicit */long long int) ((15409452171667112381ULL) == (arr_43 [i_10] [15LL] [15LL] [i_10] [15LL])))), (min((arr_53 [10ULL] [10ULL]), (arr_53 [i_10] [12LL])))))));
                        }
                    }
                    var_51 = ((/* implicit */unsigned long long int) min((var_51), ((~(max((arr_37 [i_14] [i_10 - 3] [7ULL] [7ULL]), (arr_37 [i_9] [i_10 + 1] [i_9] [i_9])))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_22 = 2; i_22 < 16; i_22 += 3) 
                {
                    var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [i_9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_59 [i_22] [i_22] [i_22 - 2] [i_22 - 2] [i_22 - 2]))));
                    arr_74 [i_9] [(signed char)3] [(signed char)12] = arr_72 [i_9] [i_9] [i_9];
                    var_53 = ((/* implicit */signed char) arr_33 [i_10] [i_10]);
                }
            }
        } 
    } 
    var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2810027828695403227LL)) ? (-6472944473508895760LL) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (14032740381569199723ULL)))) ? (((((/* implicit */_Bool) (unsigned char)138)) ? (var_4) : (var_13))) : (min((((/* implicit */unsigned long long int) var_12)), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)16), (var_8))))))))));
}
