/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242352
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [6LL] = var_18;
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_1] [10ULL] [i_3] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) % (var_7))));
                        arr_11 [(unsigned char)3] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */unsigned short) max((var_7), (((/* implicit */unsigned long long int) (~(arr_2 [i_1 - 2] [(unsigned char)7] [i_0]))))));
                    }
                    for (unsigned short i_4 = 4; i_4 < 10; i_4 += 4) 
                    {
                        var_20 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)39))))) ? (arr_0 [i_4] [i_4 + 1]) : (((/* implicit */unsigned long long int) max((var_15), (((/* implicit */long long int) var_3))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) != (arr_13 [i_0] [i_4] [i_4] [i_0])))))));
                        var_21 -= ((/* implicit */unsigned char) ((((-899775790919389406LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)39)) * (((/* implicit */int) ((var_6) != (arr_4 [i_4] [i_2] [i_1])))))))));
                        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) max((1959871749), (((/* implicit */int) arr_8 [i_4 + 1] [i_4 - 2] [i_4] [i_4 + 1]))))) >= (((((/* implicit */_Bool) (~(-1109746317654302317LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)49052))))) : (arr_14 [i_0] [4LL] [i_0] [i_4])))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        arr_19 [(unsigned short)16] = ((1109746317654302292LL) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))));
        var_23 *= ((/* implicit */unsigned char) ((533641396593602213LL) <= (((/* implicit */long long int) var_16))));
        var_24 -= ((/* implicit */unsigned char) ((((var_2) - (arr_16 [i_5] [i_5]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    }
    for (long long int i_6 = 2; i_6 < 13; i_6 += 1) 
    {
        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_17 [(unsigned char)0]) >= (((/* implicit */unsigned long long int) arr_21 [i_6])))))) >= (72056494526300160LL)))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_21 [i_6 - 1])) > (11834355525491504006ULL))))));
        /* LoopSeq 1 */
        for (long long int i_7 = 1; i_7 < 10; i_7 += 4) 
        {
            arr_24 [i_7] = ((/* implicit */unsigned long long int) var_15);
            arr_25 [i_6] [i_7] [(unsigned char)12] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_6 - 1])) == (((/* implicit */int) arr_18 [i_6 - 2]))));
            arr_26 [2LL] [i_7] &= 899775790919389402LL;
        }
    }
    for (unsigned long long int i_8 = 3; i_8 < 8; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_9 = 3; i_9 < 9; i_9 += 4) /* same iter space */
        {
            var_26 = ((long long int) ((((/* implicit */_Bool) 548374594)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) : (((((/* implicit */unsigned long long int) 548374596)) - (18446708889337462784ULL)))));
            var_27 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)229))))) >> (((max((((/* implicit */int) var_13)), ((-(((/* implicit */int) (unsigned char)70)))))) - (171)))));
        }
        /* vectorizable */
        for (long long int i_10 = 3; i_10 < 9; i_10 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
            {
                arr_39 [i_8] [i_8] = ((long long int) arr_18 [i_10 - 1]);
                arr_40 [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_8] [i_10 + 2]))));
            }
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 3; i_13 < 9; i_13 += 2) 
                {
                    for (int i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_8 + 1] [i_10] [i_12] [i_8])) ? (arr_38 [i_8] [0LL] [i_12] [i_8]) : (arr_38 [i_13] [i_13] [i_12] [i_8])));
                            var_29 *= ((/* implicit */unsigned char) (+(arr_38 [i_10] [i_10 - 2] [i_8 + 3] [i_14])));
                            arr_49 [i_8] [i_8] [i_8] [i_8] [i_8] [i_13 - 2] [i_14] = ((((/* implicit */int) arr_18 [i_8 - 2])) % (arr_6 [i_8]));
                            var_30 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (-603194496) : (2063137446)))) || (((/* implicit */_Bool) var_18))));
                            arr_50 [i_8] [i_8] [i_12] [i_13] [i_8] = ((/* implicit */unsigned char) 31623246);
                        }
                    } 
                } 
                arr_51 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_19)))))));
                arr_52 [i_8 - 2] [i_8] [i_10 + 2] [i_12] = ((/* implicit */unsigned long long int) arr_1 [i_8] [i_10]);
                arr_53 [i_10] [i_8] [5LL] = ((/* implicit */long long int) ((unsigned long long int) arr_28 [i_8 - 2] [i_10 - 3]));
                arr_54 [i_8] [i_8] [2LL] [(unsigned char)6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_10 + 1] [i_10 - 2] [i_8])) ? (arr_2 [i_10 + 1] [i_10 + 1] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115)))));
            }
            for (unsigned char i_15 = 0; i_15 < 11; i_15 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    arr_60 [i_15] [i_8] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_41 [8ULL] [i_10 - 3] [i_15] [i_16]))))));
                    arr_61 [i_8] [i_10] [i_15] [i_10] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) (unsigned char)28)))));
                    arr_62 [i_15] |= arr_16 [i_16] [i_10];
                    arr_63 [i_8] [2] [i_10] [i_8] = -2147483628;
                }
                arr_64 [i_8 + 1] [i_8 + 1] [i_15] [i_8 + 1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_2 [i_15] [i_10] [i_15]) / (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_8 - 1] [i_8 - 1] [0ULL] [0ULL] [(unsigned char)2] [i_15])))))) | (var_7)));
                /* LoopSeq 1 */
                for (int i_17 = 0; i_17 < 11; i_17 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_18 = 2; i_18 < 9; i_18 += 3) 
                    {
                        arr_70 [i_15] [i_15] [i_15] [(unsigned char)6] [i_18] &= arr_27 [i_10 - 1] [i_10];
                        var_31 ^= ((/* implicit */unsigned long long int) (unsigned short)29833);
                        arr_71 [i_8] [i_10 - 1] [i_15] [i_10] [i_8] = ((/* implicit */unsigned long long int) ((int) arr_9 [i_18 - 1] [i_8] [i_18] [i_18 + 1] [i_8] [i_10]));
                        arr_72 [i_8] [i_8] [i_10] [1LL] [1LL] [i_17] [i_18] = ((/* implicit */unsigned long long int) arr_9 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
                    }
                    arr_73 [5LL] [i_10] [i_8] [i_17] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 2098109939235395485LL)))) ? (2038893151) : (((/* implicit */int) ((unsigned char) arr_4 [i_8] [i_10 + 1] [i_15])))));
                    var_32 -= ((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_28 [i_8 + 2] [i_8 + 2]))));
                }
                arr_74 [i_8] [i_10] [i_10] [i_15] = ((/* implicit */long long int) (+(2038893151)));
            }
            var_33 = arr_3 [2] [i_10 - 2];
            arr_75 [i_8] [i_8] = 2615124229151891183LL;
        }
        /* LoopSeq 1 */
        for (unsigned char i_19 = 1; i_19 < 9; i_19 += 2) 
        {
            var_34 += (unsigned char)210;
            var_35 = ((/* implicit */unsigned short) arr_18 [i_19 + 2]);
            var_36 -= ((/* implicit */unsigned char) max((arr_16 [i_19] [i_8]), (((/* implicit */unsigned long long int) ((long long int) ((int) var_9))))));
        }
        arr_80 [i_8] = ((/* implicit */unsigned char) ((((arr_0 [i_8] [i_8]) * (arr_0 [5] [i_8 - 3]))) >> (((var_11) - (4759578774946839268LL)))));
    }
}
