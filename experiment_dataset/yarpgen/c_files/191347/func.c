/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191347
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
    var_16 = max((9223372036854775796LL), (((/* implicit */long long int) (unsigned char)247)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = (unsigned char)24;
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) <= (776818783242437865LL))))) * (var_5))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) / (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_3 [i_0]))))))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) max((8796093022192LL), (((/* implicit */long long int) (unsigned char)116))));
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_1] [i_1]) == (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (min((((/* implicit */long long int) (unsigned char)0)), (var_15)))))) || (((/* implicit */_Bool) min((8551194901961411907LL), (var_2))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)234)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)249)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_2] [i_3 + 2] [i_4])) : (((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) 776818783242437876LL)))))))) >= ((-(-2656806518845299404LL)))));
                        var_21 |= ((/* implicit */unsigned char) (-(((((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_3] [i_4] [i_5]))) / (var_5))) * ((+(-8796093022163LL)))))));
                        var_22 = ((/* implicit */unsigned char) (-(max((arr_16 [i_2] [i_3 - 2] [i_4] [i_4] [i_5] [i_5]), (var_2)))));
                    }
                    var_23 += ((/* implicit */unsigned char) var_11);
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2656806518845299389LL)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)234))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (unsigned char i_7 = 1; i_7 < 15; i_7 += 1) 
            {
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((min((min((((/* implicit */long long int) (unsigned char)248)), (var_6))), (max((((/* implicit */long long int) var_8)), (var_13))))) + (4514806340500306446LL)))));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min((min((((8796093022192LL) >> (((-8570451218009416367LL) + (8570451218009416393LL))))), (((1LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))))))), ((+(var_3))))))));
                }
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 1; i_11 < 17; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            {
                                arr_39 [i_8] [i_9] [i_10] [i_11 - 1] [i_12] = min((((/* implicit */long long int) (unsigned char)141)), (max((((13LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))))), (var_15))));
                                var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_33 [i_11 + 1])), (((((/* implicit */_Bool) 5541003392453452375LL)) ? (arr_38 [i_8] [i_8] [i_10] [i_8] [i_12]) : (var_6)))))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)238))))), (min((-2656806518845299404LL), (-776818783242437866LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246)))));
                                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (arr_34 [i_11 - 1] [i_11 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))) + (((long long int) var_9)))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned char) ((max((2196875771904LL), (arr_37 [(unsigned char)0] [(unsigned char)0] [i_10] [i_9] [13LL]))) >> (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (unsigned char)31))))), (((((/* implicit */_Bool) (unsigned char)7)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 2; i_14 < 17; i_14 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((var_15) % (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_9]))))), (min((((/* implicit */long long int) (unsigned char)3)), (var_13))))))));
                                var_31 = min((arr_43 [i_10]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_14] [i_14] [0LL] [i_14 - 2]))))));
                                var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (5277255091891879166LL) : (arr_38 [i_14] [i_14] [i_14 + 1] [10LL] [i_14 + 2])))) ? (((((/* implicit */_Bool) arr_42 [i_14 + 1] [i_8] [i_14 + 2] [i_8] [i_14 + 1])) ? (arr_38 [i_14 + 1] [(unsigned char)11] [i_14 - 2] [i_14 - 1] [i_14 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_14] [i_8] [i_14 + 2] [i_8] [i_14 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))));
                            }
                        } 
                    } 
                    arr_44 [i_8] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((var_4) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)185)))))))), (((((/* implicit */_Bool) arr_35 [i_8])) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)1))))) : (max((5897580184607415203LL), (var_12)))))));
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) (unsigned char)69))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_16 = 0; i_16 < 19; i_16 += 3) /* same iter space */
            {
                var_34 = ((unsigned char) 3308886466440171425LL);
                /* LoopSeq 3 */
                for (long long int i_17 = 0; i_17 < 19; i_17 += 3) 
                {
                    var_35 += ((/* implicit */long long int) (+(((/* implicit */int) arr_36 [i_16] [i_16] [i_16] [i_16] [i_16]))));
                    arr_53 [i_8] [i_15] [i_8] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_5))));
                }
                for (long long int i_18 = 0; i_18 < 19; i_18 += 3) 
                {
                    var_36 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -2426438375721388585LL)) ? (var_15) : (var_0))) / (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    arr_57 [i_8] [i_15] [i_8] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)229)))) << (((arr_3 [i_8]) - (6959295550256867941LL)))));
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (((var_14) / (var_5))))))));
                }
                for (unsigned char i_19 = 0; i_19 < 19; i_19 += 1) 
                {
                    var_38 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))) > (var_4)));
                    var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (arr_37 [i_8] [i_15] [i_16] [i_16] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8] [i_15] [i_8] [i_19]))))))));
                    var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) (+(((/* implicit */int) arr_56 [i_8] [i_15] [i_15] [i_19])))))));
                    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_58 [i_19] [i_16] [8LL] [i_8])))))));
                    arr_62 [i_16] [i_16] [i_16] [i_19] [i_16] [i_8] = ((/* implicit */long long int) ((unsigned char) arr_3 [(unsigned char)21]));
                }
                var_42 = ((long long int) (~(var_3)));
                var_43 = ((((arr_2 [i_8] [i_15]) >= (arr_38 [i_8] [i_8] [i_15] [i_16] [i_16]))) ? (arr_59 [i_8] [i_8] [i_15] [(unsigned char)0] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
                arr_63 [i_8] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8] [i_8] [(unsigned char)18] [i_8]))) - (((((-776818783242437866LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)53)) - (53)))))));
            }
            for (long long int i_20 = 0; i_20 < 19; i_20 += 3) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned char) (((+(((long long int) arr_47 [i_15] [i_8] [i_8])))) >> (((((long long int) ((((/* implicit */_Bool) arr_33 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_20] [i_20] [i_20]))) : (var_10)))) - (107LL)))));
                /* LoopSeq 1 */
                for (long long int i_21 = 0; i_21 < 19; i_21 += 1) 
                {
                    arr_69 [i_8] [i_15] [i_8] [i_20] [i_20] [i_21] = ((/* implicit */unsigned char) ((min((36028792723996672LL), (67108832LL))) / (var_0)));
                    arr_70 [i_8] = ((unsigned char) 0LL);
                }
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 19; i_22 += 4) 
                {
                    for (long long int i_23 = 0; i_23 < 19; i_23 += 4) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)26)) && (((/* implicit */_Bool) (unsigned char)255))));
                            arr_77 [i_15] [i_8] [i_23] = (+(((long long int) var_3)));
                            arr_78 [i_8] [i_15] [i_23] = var_1;
                            var_46 -= ((/* implicit */unsigned char) ((var_3) ^ (var_6)));
                        }
                    } 
                } 
            }
            for (long long int i_24 = 0; i_24 < 19; i_24 += 3) /* same iter space */
            {
                var_47 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)76))))), (var_5))) ^ (((((/* implicit */_Bool) min((var_8), (arr_73 [i_8] [i_8] [i_15] [2LL] [i_24])))) ? (var_3) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57))) : (var_14)))))));
                var_48 = min((((min((var_11), (var_6))) - (((var_13) / (var_5))))), (((((/* implicit */_Bool) var_8)) ? (arr_41 [i_24] [i_15] [i_15] [i_8]) : (var_4))));
            }
            var_49 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) >> (((((/* implicit */int) arr_56 [i_8] [i_8] [18LL] [i_8])) - (95)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_56 [i_8] [i_8] [i_8] [i_8])))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (36028792723996684LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)35)))))));
            var_50 = ((/* implicit */long long int) min((var_50), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_8] [i_8] [i_8] [i_15] [i_15])) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)4))))) : (((((/* implicit */_Bool) (unsigned char)146)) ? (var_15) : (var_3)))))) ? (((((/* implicit */long long int) ((((/* implicit */int) arr_27 [0LL])) << (((((/* implicit */int) var_1)) - (185)))))) + (((var_5) & (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_8] [i_8] [i_8] [i_15] [(unsigned char)2]))))))) : ((((-(1LL))) - (((/* implicit */long long int) ((/* implicit */int) max((arr_55 [i_8] [i_8] [i_8] [4LL] [(unsigned char)2] [i_8]), (var_9)))))))))));
            arr_81 [i_8] [i_15] [i_8] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_5 [i_8])) ? (272730423296LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8]))))));
        }
        for (unsigned char i_25 = 0; i_25 < 19; i_25 += 3) /* same iter space */
        {
            arr_84 [i_8] [i_25] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (8LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((var_11) + (5522687137859046770LL)))))) : (max((var_6), (var_0))));
            var_51 = ((((/* implicit */_Bool) ((unsigned char) (unsigned char)181))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_68 [i_8] [(unsigned char)14] [i_8] [i_8]))))) : (var_12));
            var_52 = ((((/* implicit */_Bool) ((var_0) + (((((/* implicit */_Bool) arr_65 [i_8] [(unsigned char)12])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (140737484161024LL)))))) ? (var_15) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_25])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_4)))) ? (min((-6807753311274872030LL), (((/* implicit */long long int) arr_71 [(unsigned char)14] [i_8] [i_8] [i_25])))) : (((6807753311274872017LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))))))));
        }
        var_53 += ((/* implicit */long long int) (unsigned char)0);
        /* LoopNest 2 */
        for (unsigned char i_26 = 0; i_26 < 19; i_26 += 3) 
        {
            for (unsigned char i_27 = 0; i_27 < 19; i_27 += 2) 
            {
                {
                    var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) + (var_6))))));
                    arr_90 [i_8] [i_26] [i_8] = ((/* implicit */unsigned char) ((9223372036854775779LL) <= (var_6)));
                    var_55 |= ((/* implicit */unsigned char) ((long long int) min((((/* implicit */int) (unsigned char)242)), (((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (unsigned char)26)))))));
                }
            } 
        } 
    }
    var_56 = ((/* implicit */unsigned char) (~(var_6)));
    /* LoopSeq 1 */
    for (long long int i_28 = 4; i_28 < 15; i_28 += 4) 
    {
        arr_93 [i_28] = max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))) | (9007199254740992LL))), (min(((~(var_3))), (var_4))));
        var_57 = min((((/* implicit */long long int) arr_64 [i_28])), (((((/* implicit */_Bool) var_10)) ? (var_6) : (((((/* implicit */_Bool) 1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))) : (-7459079618449021911LL))))));
    }
}
