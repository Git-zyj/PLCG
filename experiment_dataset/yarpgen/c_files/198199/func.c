/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198199
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) min((((4294967295U) << (((((/* implicit */int) (unsigned char)255)) - (233))))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_0])), (arr_0 [i_0]))))));
        var_14 = ((/* implicit */_Bool) var_5);
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_16 = ((/* implicit */long long int) max((((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1]))))) + (arr_1 [i_0]))), (((/* implicit */int) arr_3 [i_0]))));
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_1] [i_0] [i_3 - 1])) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (_Bool)1))));
                    var_18 = ((/* implicit */unsigned short) ((((arr_7 [i_3 + 1] [i_0] [i_0] [0LL]) - (((/* implicit */int) (unsigned char)99)))) ^ (((/* implicit */int) arr_3 [i_0]))));
                    arr_11 [(short)6] [i_1] [i_0] [i_3 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                }
                for (unsigned char i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */short) (unsigned short)2831);
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0] [(unsigned char)8] [i_4 - 1])) > (((/* implicit */int) arr_6 [i_0] [(unsigned short)8] [(unsigned short)8]))))), (var_12))))));
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
                    arr_16 [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned short)62704)) == (2113929216))))));
                    arr_17 [i_0] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0]);
                }
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) /* same iter space */
                {
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_8 [i_5 - 1] [i_5 + 1] [4LL])) : ((~(((/* implicit */int) (unsigned char)221))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [i_0]))));
                }
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (min((arr_19 [i_0] [8] [i_2] [i_2] [(short)6]), (arr_7 [i_2] [8ULL] [8ULL] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) var_4)))))))));
            }
            for (short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_12))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [0] [i_1] [i_1] [i_1])) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (arr_1 [i_0])));
                arr_24 [i_0] [(unsigned short)2] [i_1] [i_0] = (!(((/* implicit */_Bool) (unsigned short)29531)));
                var_26 = ((/* implicit */unsigned long long int) min((((arr_22 [i_0] [i_1] [i_6] [i_6]) && (((/* implicit */_Bool) (unsigned short)2831)))), (((arr_22 [i_0] [i_1] [i_6] [i_0]) || (arr_22 [i_0] [i_0] [i_0] [i_0])))));
            }
            for (short i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */int) var_8);
                arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    var_28 += ((/* implicit */_Bool) ((arr_7 [i_0] [(unsigned char)8] [i_8] [(unsigned char)8]) % (arr_7 [i_8] [i_8] [i_8] [i_0])));
                    arr_30 [i_0] [i_7] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_25 [i_0]);
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) + (((/* implicit */int) arr_21 [i_0] [i_1] [i_7] [i_7] [i_8])))) ^ (((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_8] [i_8])))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    var_30 *= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_6 [i_0] [i_7] [i_0])) % (((/* implicit */int) arr_6 [i_9] [i_7] [i_9])))));
                    arr_34 [5LL] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) var_0);
                }
                for (int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    var_31 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((-1419453474) + (2147483647))) >> (((arr_25 [i_0]) - (370619566U)))))) : (((/* implicit */_Bool) ((((-1419453474) + (2147483647))) >> (((((arr_25 [i_0]) - (370619566U))) - (133522808U))))));
                    arr_38 [i_0] [i_1] [i_7] = ((/* implicit */unsigned short) max((arr_5 [i_0] [i_0]), (((arr_35 [i_0] [i_1]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (17U))))))));
                }
                arr_39 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (arr_7 [i_0] [i_0] [i_0] [i_7])));
                arr_40 [i_0] [i_1] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_20 [i_0] [i_0])), (arr_14 [i_0] [i_0] [i_1] [i_7])))) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_7])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])))))) & (((/* implicit */int) arr_33 [i_0] [(_Bool)1] [i_7] [i_1] [i_1] [i_0]))));
            }
            var_32 = ((/* implicit */long long int) ((_Bool) max((arr_20 [i_0] [i_0]), (arr_20 [i_0] [i_0]))));
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            arr_45 [i_0] = ((/* implicit */long long int) ((((var_11) % (((/* implicit */unsigned int) arr_1 [i_0])))) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_11] [i_11] [i_0] [i_0] [i_0]))) ^ (arr_9 [i_0] [i_0] [i_11] [i_0])))));
            arr_46 [i_0] [i_0] = ((/* implicit */_Bool) arr_18 [i_11] [i_0] [i_0]);
        }
    }
    for (long long int i_12 = 0; i_12 < 10; i_12 += 3) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_12] [(_Bool)1] [(_Bool)1] [i_12]))) / (((unsigned long long int) ((((/* implicit */int) (unsigned char)73)) % (((/* implicit */int) (short)6144)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 4; i_13 < 8; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            var_34 -= ((/* implicit */unsigned long long int) arr_26 [i_13 + 1] [i_14 - 1]);
                            var_35 = ((/* implicit */unsigned char) arr_58 [i_16] [i_15] [i_13] [i_13] [i_12]);
                        }
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) arr_26 [i_12] [i_13]))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 10; i_17 += 2) /* same iter space */
                    {
                        arr_65 [i_12] [i_12] [i_12] [0U] [i_12] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_25 [i_17])) ? (((/* implicit */unsigned int) arr_13 [i_13 - 1] [i_14 + 1] [i_14 + 1] [i_13] [i_14])) : (arr_25 [i_13])))));
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) arr_22 [i_12] [i_13 - 4] [i_14 + 1] [(unsigned char)9]))));
                        var_38 = ((/* implicit */unsigned long long int) arr_21 [i_12] [i_12] [(_Bool)1] [i_14] [4]);
                        var_39 = ((/* implicit */unsigned char) (unsigned short)62713);
                    }
                    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned int) arr_64 [i_18] [i_18] [i_14 + 1] [i_12] [i_12]);
                        var_41 += ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_18 [i_14 + 1] [i_12] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_18 [i_14 + 1] [i_14 + 1] [i_12]))));
                        var_42 = ((/* implicit */unsigned int) var_10);
                    }
                    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 2) /* same iter space */
                    {
                        arr_72 [(unsigned short)4] [i_13] [i_13 - 2] [i_13 - 3] [3LL] [i_13] = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_67 [i_13 - 2] [i_14 - 1] [i_14] [4])) || (((/* implicit */_Bool) arr_67 [i_13 + 2] [i_14 - 1] [i_14 - 1] [1]))))), (arr_67 [i_13 + 2] [i_14 + 1] [i_14 + 1] [i_14])));
                        arr_73 [i_12] [i_12] [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)20464), (((/* implicit */unsigned short) (short)-16091))))) & (((/* implicit */int) (unsigned short)56030))));
                        arr_74 [i_12] [i_14] [i_14] [i_14] [i_12] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_53 [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_13 + 2])) ? (arr_53 [i_13 - 4] [i_13 - 4] [2] [i_13 - 2]) : (((/* implicit */int) arr_2 [i_13]))))));
                        var_43 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)45056))));
                    }
                    arr_75 [5LL] [i_13] [i_12] [i_12] = ((/* implicit */_Bool) ((((arr_32 [4U] [i_14 - 1] [i_14 + 1] [(unsigned char)2]) + (arr_56 [i_13 - 2] [i_13 - 3] [i_13 + 1] [i_14 + 1] [i_14 - 1] [i_14 - 1]))) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20479)) || (((/* implicit */_Bool) arr_56 [i_13 - 2] [i_13 - 4] [i_13 + 2] [i_14 - 1] [i_14 - 1] [i_14 + 1])))))));
                    arr_76 [i_12] [i_13] [i_14] = ((/* implicit */_Bool) arr_26 [i_13 - 4] [i_13 - 4]);
                    arr_77 [(unsigned char)8] [i_14] [(unsigned char)8] [(unsigned char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)19)) <= (((/* implicit */int) (unsigned char)47))));
                    var_44 = ((/* implicit */long long int) max((((arr_56 [i_13] [i_13 + 2] [i_13] [i_13] [i_13 + 1] [i_13]) & (arr_56 [i_13] [i_13 - 3] [i_13 + 2] [i_13] [i_13 + 2] [i_13]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_70 [i_14 - 1] [8] [i_13 - 1] [i_14 - 1] [i_14 + 1])) || (((/* implicit */_Bool) (-(arr_52 [i_12] [i_13])))))))));
                }
            } 
        } 
        var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_42 [i_12] [i_12]), (arr_42 [i_12] [i_12])))) && (((/* implicit */_Bool) arr_42 [i_12] [i_12]))));
    }
    for (long long int i_20 = 0; i_20 < 10; i_20 += 3) /* same iter space */
    {
        var_46 ^= ((/* implicit */_Bool) arr_50 [i_20]);
        var_47 = ((/* implicit */_Bool) max((-6782866567493634667LL), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) == (var_6))))));
        var_48 = ((/* implicit */unsigned char) max((arr_59 [i_20] [i_20] [i_20] [0] [0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [i_20] [8ULL] [8ULL] [i_20])) : (arr_41 [i_20]))))));
    }
    var_49 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((4064184023U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (max((((/* implicit */unsigned long long int) (unsigned char)209)), (18446744073709551613ULL))))));
    var_50 &= ((/* implicit */signed char) ((int) var_9));
    var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((0LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_9))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)20)))))))) : (max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (var_8)))), ((((_Bool)0) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)34))))))));
}
