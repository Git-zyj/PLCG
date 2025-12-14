/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196325
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
    var_20 = ((/* implicit */int) var_12);
    var_21 = ((/* implicit */unsigned int) ((long long int) 2229188420U));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_0 [i_0]))));
        var_23 = arr_3 [(unsigned char)3];
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_24 = ((/* implicit */unsigned char) ((unsigned long long int) arr_1 [i_1]));
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((2229188414U) + (arr_7 [i_1 + 2]))));
                var_25 = ((/* implicit */unsigned long long int) ((((arr_3 [i_1 + 2]) + (9223372036854775807LL))) >> (((var_1) - (1786116517U)))));
                var_26 = ((/* implicit */signed char) (-(2229188440U)));
            }
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_27 = ((/* implicit */unsigned int) arr_8 [i_1]);
                    arr_18 [i_2] [0] &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65534)) ? (2065778857U) : (2229188420U)));
                    var_28 = ((/* implicit */short) ((long long int) (-(2065778867U))));
                }
                var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 + 2]))) == (((((/* implicit */_Bool) 2229188433U)) ? (2229188420U) : (arr_0 [i_2])))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */signed char) 2065778867U);
                arr_22 [i_6] [i_1] [i_1 + 2] = ((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1] [i_1]);
            }
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
            {
                arr_25 [i_1] [i_1 - 1] [i_2] [i_7] = ((/* implicit */short) 108086391056891904LL);
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 1; i_9 < 10; i_9 += 1) 
                    {
                        var_31 -= ((/* implicit */short) ((2065778876U) >> (((/* implicit */int) var_9))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(4294967295U)))) ^ (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)14297)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)31))));
                        arr_30 [i_1] [(_Bool)1] [i_1] [i_9] [(unsigned char)0] [i_1] = ((/* implicit */unsigned int) arr_6 [(_Bool)1] [i_1 + 1] [i_1]);
                        var_34 &= ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)77)) < (arr_29 [4ULL] [i_2] [i_2] [(_Bool)0] [i_9]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 2]))) : (2229188420U)));
                    }
                    arr_31 [i_1 + 1] [i_2] [i_7] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1 + 2])) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_19 [i_1 + 2] [i_1] [i_7] [i_8]))));
                }
                arr_32 [i_7] [i_1] [i_7] = ((/* implicit */unsigned short) var_19);
                var_35 = ((/* implicit */signed char) ((int) -6825195453922962645LL));
                var_36 |= ((/* implicit */unsigned char) (-(2229188415U)));
            }
            var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (-(((/* implicit */int) ((7603088441762943750ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))))));
        }
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            arr_36 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_21 [i_1 + 1] [(_Bool)1] [i_10] [i_1])) ? (((/* implicit */int) (short)-27354)) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1]))))));
            var_38 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1 - 1] [9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(signed char)0] [i_1 - 1] [4U]))) : (55865257U)));
            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1 + 2] [i_1 - 1] [i_1 + 1])) || (((/* implicit */_Bool) (-(arr_3 [i_1]))))));
            /* LoopSeq 2 */
            for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                arr_40 [2LL] [i_1] [(unsigned char)1] [9ULL] = ((/* implicit */unsigned int) ((_Bool) ((long long int) 2229188428U)));
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_27 [i_1] [(unsigned char)7] [i_1 + 2] [i_11] [i_1])));
                var_41 = ((/* implicit */int) max((var_41), ((+(((/* implicit */int) (signed char)74))))));
            }
            for (unsigned short i_12 = 2; i_12 < 10; i_12 += 1) 
            {
                var_42 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_37 [i_1 + 1] [i_12 + 1] [(unsigned short)1] [i_12]))));
                /* LoopSeq 2 */
                for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    arr_46 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_10] [i_13]))) : (2065778860U)))) || (((/* implicit */_Bool) 2065778851U))));
                    var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55532)) ^ (((/* implicit */int) var_10))))) ? (arr_27 [i_1] [i_1] [i_12] [i_13] [i_13]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 15666694557888647199ULL)) ? (2065778856U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_10] [i_10] [i_13] [i_10]))))))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_44 = ((/* implicit */unsigned char) arr_15 [i_1 - 1] [i_12 - 1] [i_12 - 1]);
                    var_45 &= ((/* implicit */_Bool) ((unsigned int) arr_11 [6LL] [6LL] [6LL] [6LL]));
                }
                arr_49 [(signed char)6] [i_10] [(signed char)6] |= ((/* implicit */unsigned int) (-(arr_3 [i_1])));
                var_46 = ((/* implicit */short) (+(((/* implicit */int) var_0))));
            }
        }
        for (unsigned char i_15 = 2; i_15 < 7; i_15 += 2) 
        {
            var_47 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_50 [i_1] [i_1] [i_15 + 2]))));
            arr_52 [i_1] [i_15] [i_15 - 2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 15666694557888647199ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_14))))));
        }
        var_48 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_33 [i_1]))))) != (var_7)));
        var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) 2229188419U)) : (17856551107121253185ULL))))));
    }
    var_50 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)42741)))));
}
