/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190122
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_5 [i_0] [i_1] [i_1])))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (21ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))))))));
            var_19 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)12]))))))));
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    var_20 = ((/* implicit */short) var_14);
                    arr_11 [i_1] [i_1] = ((((/* implicit */_Bool) var_13)) ? (arr_7 [i_1] [i_1] [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_17))));
                }
                for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 3) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) * (arr_10 [i_0] [i_1] [i_2] [i_1])));
                    var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))));
                    var_23 = ((unsigned int) var_3);
                }
                var_24 = ((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_2]);
            }
            for (unsigned char i_5 = 2; i_5 < 12; i_5 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-28315))))))))));
            }
            for (unsigned char i_6 = 2; i_6 < 12; i_6 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_19 [i_6] [i_1] [i_6 - 2] [i_0])) : (((/* implicit */int) var_17)))) & (((/* implicit */int) var_7)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_6] [i_6] [i_6]);
                            arr_27 [i_1] = ((/* implicit */unsigned char) arr_5 [i_1] [i_1] [i_1]);
                            arr_28 [i_1] = ((((/* implicit */_Bool) (unsigned char)62)) && (((/* implicit */_Bool) (unsigned char)250)));
                            arr_29 [i_8] [i_7] [i_1] [i_1] [i_0] = ((unsigned long long int) (_Bool)1);
                        }
                    } 
                } 
            }
            for (unsigned char i_9 = 2; i_9 < 12; i_9 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (short i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    arr_36 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) var_1));
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_10])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_25 [i_0] [(short)4] [i_9] [i_9] [i_9] [i_9] [i_9]))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) /* same iter space */
                    {
                        var_31 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_16)) == (((/* implicit */int) var_11))))) * (((/* implicit */int) ((unsigned short) var_8)))));
                        var_32 = ((/* implicit */long long int) var_12);
                        var_33 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-2044)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) : (2397954525U)));
                    }
                    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned short) ((unsigned char) arr_23 [i_9] [i_9 + 1] [i_9] [i_9 + 1] [i_9]));
                        arr_43 [i_1] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_1] [i_1] [i_1] [i_11] [i_13]))) ? (((/* implicit */int) ((unsigned char) arr_10 [i_1] [i_9] [i_11] [i_1]))) : (((/* implicit */int) arr_24 [i_1] [(_Bool)1] [i_11] [i_11] [i_9 + 2]))));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_9 - 2] [i_9 - 2] [7ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_13] [i_11] [i_9] [i_0]))) : (((unsigned long long int) var_7))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */signed char) var_15);
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)7)) | (((/* implicit */int) (unsigned short)19998))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 3; i_15 < 11; i_15 += 2) 
                    {
                        var_38 -= ((/* implicit */_Bool) ((unsigned char) (unsigned short)61621));
                        var_39 = ((/* implicit */unsigned short) ((short) arr_49 [i_0] [i_1] [i_9] [i_11] [(_Bool)1]));
                        var_40 *= ((/* implicit */short) arr_17 [i_0] [(unsigned char)6]);
                        var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) var_5))));
                        arr_50 [i_0] [i_1] [i_0] [i_0] [(unsigned short)13] [i_0] = ((((/* implicit */_Bool) arr_31 [i_15 + 2] [i_9 + 2] [i_9 - 1])) ? (arr_31 [i_15 + 3] [i_9 + 1] [i_9 + 2]) : (arr_31 [i_15 - 1] [i_9 - 1] [i_9 + 2]));
                    }
                }
                for (unsigned int i_16 = 0; i_16 < 15; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 15; i_17 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_23 [i_0] [5LL] [i_9] [i_16] [i_17]))) ? (((long long int) arr_41 [i_0] [i_1] [i_1] [i_1] [i_16] [i_17])) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_14)))))))));
                        var_43 -= ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) 4776967401221277192ULL)) ? (((/* implicit */unsigned long long int) 2397954542U)) : (2773254534250181747ULL))));
                    }
                    arr_56 [i_1] [i_16] = ((/* implicit */int) ((unsigned char) (unsigned char)7));
                }
                for (long long int i_18 = 0; i_18 < 15; i_18 += 4) 
                {
                    var_44 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                    arr_59 [i_18] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65523)) ? (2773254534250181738ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12)))));
                    arr_60 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_0] [(_Bool)1] [4ULL] [4ULL] [i_0]))));
                }
                var_45 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_9 + 1] [i_9] [i_9 - 2])) ? (((/* implicit */int) arr_53 [i_9 - 1] [i_9 + 1] [i_9 + 1])) : (((/* implicit */int) arr_53 [i_9 - 2] [i_9] [i_9 + 2]))));
                var_46 = ((/* implicit */unsigned int) ((12712744684608140968ULL) > (arr_52 [i_9 + 1] [i_0] [i_0] [i_0])));
            }
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            arr_63 [i_19] [i_19] = arr_38 [i_19] [i_0] [(unsigned char)2] [i_19] [i_0] [i_19];
            var_47 *= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_3 [i_0] [i_0] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
            var_48 = ((/* implicit */unsigned char) ((short) var_16));
            var_49 = ((/* implicit */unsigned long long int) min((var_49), (((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (var_15))))));
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
        {
            var_50 |= ((/* implicit */unsigned long long int) ((unsigned char) arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_20]));
            arr_66 [i_0] = ((/* implicit */unsigned char) var_1);
            var_51 ^= ((/* implicit */short) var_4);
        }
        var_52 -= ((((/* implicit */_Bool) (short)-2044)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (18446744073709551615ULL));
        /* LoopSeq 1 */
        for (unsigned char i_21 = 1; i_21 < 13; i_21 += 3) 
        {
            var_53 ^= ((/* implicit */short) var_8);
            arr_69 [i_0] [i_21 + 1] = ((/* implicit */unsigned char) ((short) arr_24 [i_0] [i_0] [i_0] [i_21 + 2] [i_21]));
            var_54 ^= ((/* implicit */unsigned long long int) ((arr_65 [i_21] [i_0] [i_0]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_68 [i_0] [i_21] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_22 = 2; i_22 < 21; i_22 += 2) 
    {
        var_55 ^= (((!(((/* implicit */_Bool) -1386207947268505585LL)))) ? (arr_70 [i_22 + 1]) : (((/* implicit */long long int) ((int) -1386207947268505603LL))));
        arr_72 [i_22 - 2] [i_22] = (-(((/* implicit */int) var_7)));
    }
    for (unsigned char i_23 = 0; i_23 < 11; i_23 += 1) 
    {
        var_56 = ((/* implicit */long long int) max((var_56), (((/* implicit */long long int) arr_55 [i_23] [i_23] [i_23] [i_23]))));
        var_57 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_34 [i_23] [2LL] [i_23] [(unsigned short)12]) : (((/* implicit */unsigned long long int) var_6))))))) ? (((((/* implicit */_Bool) arr_45 [(unsigned char)6] [(unsigned char)6] [i_23] [i_23] [i_23] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_23]))) : (((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_23] [i_23] [i_23]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_8 [(unsigned short)6] [(unsigned short)6])) : (((/* implicit */int) arr_71 [i_23])))) : (((/* implicit */int) var_5)))))));
    }
    /* vectorizable */
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        var_58 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_75 [(unsigned char)0])) : (((/* implicit */int) var_16))));
        var_59 = arr_76 [i_24] [i_24];
        var_60 = ((/* implicit */short) ((((/* implicit */int) arr_75 [i_24])) / (((/* implicit */int) var_0))));
        arr_78 [i_24] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) (_Bool)1)))));
    }
    var_61 &= ((/* implicit */signed char) var_16);
}
