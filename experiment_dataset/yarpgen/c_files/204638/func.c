/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204638
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] [i_0 + 4] = ((/* implicit */int) arr_0 [i_0 + 2] [(unsigned char)3]);
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [(signed char)12])) - (((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)9]))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            var_15 = ((/* implicit */short) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_6 [i_1 + 2]))));
            var_16 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_8)))));
            arr_11 [i_1] = ((/* implicit */long long int) arr_6 [i_1]);
        }
        for (int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
            {
                arr_16 [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1 + 3]);
                arr_17 [i_1 + 1] [i_1] [i_1] [(unsigned char)8] = ((/* implicit */long long int) max((((((/* implicit */int) arr_13 [i_1 - 1])) - (((/* implicit */int) arr_10 [i_4 - 2] [i_4 + 1] [i_1 + 1])))), (((((/* implicit */int) (unsigned short)42810)) - (((/* implicit */int) arr_10 [i_4 + 1] [i_4 + 1] [i_1 + 2]))))));
                arr_18 [i_1] = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_15 [i_4 - 2] [i_1 + 2] [i_1 + 1])))), (((((/* implicit */int) arr_15 [i_4 - 2] [i_1 + 3] [i_1 + 1])) >> (((((/* implicit */int) arr_10 [i_4 - 2] [i_3] [i_1 + 3])) - (63)))))));
                arr_19 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(unsigned short)21] [(unsigned short)21] [(signed char)20]))))))))));
            }
            for (long long int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_6 = 4; i_6 < 21; i_6 += 4) 
                {
                    arr_25 [i_1] [i_1 + 1] [(unsigned short)9] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_10 [i_5] [i_5] [i_1 + 2])) - (68)))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1 + 2] [i_1 + 1] [i_1] [i_1]))) == (arr_8 [i_6 - 3] [i_1 + 3] [i_5])));
                }
                var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)20271)), ((unsigned short)40717))))) >= (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 - 1] [(unsigned short)19] [i_1 - 1]))) : (arr_8 [i_1] [i_1] [i_3]))))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (short)6))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_7 [(unsigned short)2]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3])))))) ? (arr_14 [i_5] [i_3] [14LL]) : (((((/* implicit */_Bool) (unsigned short)42823)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_20 [(unsigned short)16]))))))));
            }
            for (long long int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    var_20 ^= ((/* implicit */long long int) arr_10 [i_1] [i_1] [10LL]);
                    var_21 = ((/* implicit */long long int) arr_22 [i_1]);
                }
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    arr_32 [i_1] [i_3] [i_3] [i_7] [i_7] [(signed char)9] = arr_23 [i_1 + 2] [21] [i_1] [i_1 + 2];
                    arr_33 [i_9] [i_1 + 3] [i_7] [i_3] [i_1 + 3] [i_1 + 3] = ((/* implicit */int) ((unsigned short) var_10));
                }
                for (long long int i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
                {
                    arr_36 [i_10] [i_7] [(signed char)2] [i_1] [i_1] = ((/* implicit */unsigned short) min((((long long int) (~(var_5)))), (min((((/* implicit */long long int) arr_12 [i_3] [i_3] [i_10])), (arr_29 [i_1] [i_1 - 1] [i_3] [i_1] [i_1] [i_10])))));
                    var_22 = ((/* implicit */short) min(((_Bool)1), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42803)) ? (-72184325052067906LL) : (-5078294606341955868LL))))))));
                }
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                {
                    arr_40 [i_3] [i_3] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_1 + 1] [i_3] [i_7] [(unsigned short)15])) ? (var_6) : (arr_5 [i_1 + 1])));
                    arr_41 [(short)10] [i_3] [(_Bool)1] [(signed char)8] [(_Bool)1] [i_11] |= var_3;
                    var_23 = ((/* implicit */long long int) arr_39 [i_1] [i_1] [i_1 + 2] [i_1 + 3] [i_1] [(signed char)14]);
                }
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (short)-1))));
                /* LoopSeq 1 */
                for (signed char i_12 = 1; i_12 < 19; i_12 += 3) 
                {
                    arr_45 [i_12] [(short)3] [7LL] [(short)12] = ((signed char) (!(((/* implicit */_Bool) arr_24 [i_12 + 1] [2LL] [i_3] [i_1]))));
                    arr_46 [i_1] [i_12] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_20 [i_12 + 1])) - (((/* implicit */int) arr_20 [i_12 + 2])))) - (((/* implicit */int) ((((/* implicit */int) arr_20 [i_12 + 3])) > (((/* implicit */int) arr_20 [i_12 - 1])))))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_13 = 4; i_13 < 19; i_13 += 3) 
                {
                    arr_51 [(signed char)15] [i_3] [1LL] [i_3] = ((/* implicit */_Bool) (unsigned short)1283);
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_13), (arr_48 [i_13 - 1] [i_7] [i_3] [i_1 + 3] [i_3] [i_1 + 3])))) ? (((((/* implicit */_Bool) -1841439087562224381LL)) ? (((/* implicit */int) arr_38 [i_1 + 1])) : (((/* implicit */int) arr_38 [i_1 - 1])))) : ((+(((/* implicit */int) arr_34 [i_1] [i_7] [i_13]))))));
                    var_26 ^= max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [5LL] [5LL])) && (((/* implicit */_Bool) var_2))))), (((long long int) -8073015490557235026LL)))), (arr_48 [18LL] [i_3] [i_3] [(short)4] [18LL] [(unsigned short)16]));
                    var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) -991979611))) ? (max((((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_1] [1LL]))) : (arr_44 [i_1] [13LL] [i_7] [i_7] [i_13]))), (((/* implicit */long long int) (~(((/* implicit */int) var_10))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)120)))))));
                }
                for (signed char i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    arr_54 [i_14] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_10 [i_1 - 1] [i_7] [i_14])) : (((/* implicit */int) (unsigned short)64655))))));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (short)-1))));
                }
                arr_55 [i_1] [i_3] [(short)4] [i_3] &= ((/* implicit */unsigned short) ((signed char) arr_39 [(short)2] [(signed char)6] [i_3] [i_1] [i_1] [1LL]));
            }
            var_29 = ((/* implicit */signed char) min(((+(((/* implicit */int) ((((/* implicit */int) (short)6)) >= (((/* implicit */int) arr_20 [i_1]))))))), (((/* implicit */int) arr_13 [i_1]))));
        }
        arr_56 [i_1] [i_1] = ((/* implicit */unsigned short) (((-(arr_8 [i_1] [i_1] [i_1]))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_44 [i_1] [i_1 + 2] [7LL] [(_Bool)1] [i_1])) ? (arr_43 [(unsigned short)18] [i_1 - 1] [16LL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24347))))))))));
        arr_57 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((((/* implicit */int) (short)-5374)) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_1] [i_1])) - (21401)))))) ? (((((var_5) + (9223372036854775807LL))) << (((((((/* implicit */int) var_7)) + (68))) - (55))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_53 [(unsigned short)14] [16LL] [(_Bool)1] [0])))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_35 [(unsigned short)21] [i_1])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_1] [i_1 + 1] [i_1] [i_1]))))))))));
        var_30 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (unsigned char)160)) ? (arr_27 [i_1] [i_1] [i_1 + 3]) : (arr_27 [i_1] [i_1] [i_1 + 2]))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 22; i_15 += 4) 
        {
            for (unsigned short i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                {
                    arr_65 [i_15] [i_15] [i_1 + 3] = ((((/* implicit */int) (unsigned char)96)) + (((/* implicit */int) (unsigned short)42810)));
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        for (signed char i_18 = 1; i_18 < 20; i_18 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
                                arr_71 [13] [i_17] [18LL] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */long long int) arr_24 [i_1 + 2] [i_15] [(signed char)5] [i_17])), (var_13))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_15] [1LL] [(unsigned short)15] [i_18])))))))) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned short)14421))) ? (((/* implicit */long long int) arr_35 [i_1 + 2] [i_18 + 2])) : (((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_15]))) + (var_8))))) : (min((((/* implicit */long long int) var_6)), (arr_70 [i_18 + 2] [(short)6] [i_1 + 3] [i_1 + 1] [i_1] [(unsigned short)9])))));
                                arr_72 [i_17] [i_18 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_43 [i_17] [i_16] [i_17]))));
                                arr_73 [i_1] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_1)), (arr_21 [i_18 + 1] [i_15] [i_1 + 2] [i_1])))) ? (((long long int) ((((/* implicit */int) arr_49 [i_1] [i_1] [i_16] [i_16])) | (var_9)))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_69 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_18 + 1]))))), (5257239492246032707LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (signed char i_20 = 2; i_20 < 18; i_20 += 3) 
                        {
                            {
                                arr_79 [i_1] [i_19] [i_16] [i_19] [i_16] [i_16] [i_19] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_34 [i_20 - 2] [i_20 + 3] [i_20 + 4]))))));
                                var_32 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1 - 1] [i_20 + 4]))))) ? (((min((var_8), (((/* implicit */long long int) arr_31 [i_1] [(unsigned short)9] [10] [i_1] [i_1 + 2])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_14 [(unsigned short)10] [(unsigned short)8] [(unsigned short)8]) : (((/* implicit */int) var_7))))))) : (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (unsigned short)21132)) - (21103))))) / (((((/* implicit */_Bool) var_9)) ? (arr_35 [i_1] [i_1]) : (((/* implicit */int) (unsigned short)65518))))))));
                                var_33 ^= ((/* implicit */unsigned char) arr_75 [i_16] [i_15]);
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */long long int) arr_37 [i_16] [i_16] [i_16] [(unsigned short)9] [i_16]);
                }
            } 
        } 
    }
    var_35 = ((/* implicit */short) var_11);
}
