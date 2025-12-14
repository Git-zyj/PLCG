/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48977
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
    for (long long int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1762843365236523868LL)) ? (min((((/* implicit */unsigned long long int) (unsigned char)0)), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_8), (var_3)))))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4))) >> (((max((7353396289921406827ULL), (((/* implicit */unsigned long long int) 5511822381525992907LL)))) - (7353396289921406822ULL)))))) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_0])))) : (18446744073709551615ULL));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_7 [i_1] = ((((max((((/* implicit */unsigned int) var_8)), (arr_1 [20]))) ^ (((arr_1 [22U]) + (1455013415U))))) + (((((((/* implicit */_Bool) (unsigned char)13)) ? (arr_1 [(signed char)14]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-6615))))))));
        var_12 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_1 [8LL])), (var_9))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_0 [0U])))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_1 [10ULL])), (max(((+(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2002031631)) / (798110382601231027LL))))))));
        var_13 = ((/* implicit */signed char) arr_5 [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_14 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)232)), (max((6503744285773277220ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 209054169)))))))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_2 [i_2]))))));
    }
    var_15 = max((798110382601231007LL), (((/* implicit */long long int) 2985537014U)));
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_4 = 2; i_4 < 10; i_4 += 3) /* same iter space */
        {
            var_16 *= ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) > (var_5))) ? (var_10) : (((/* implicit */unsigned long long int) arr_10 [i_4 + 2] [i_4 - 1])));
            arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [11LL])) ? (((((/* implicit */int) (signed char)81)) + (((/* implicit */int) (unsigned char)179)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 2985537018U)) >= (1ULL))))));
            var_17 = (unsigned char)243;
        }
        /* vectorizable */
        for (signed char i_5 = 2; i_5 < 10; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_6 = 2; i_6 < 10; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) (unsigned char)0))))))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))) - (((((/* implicit */_Bool) 2154514586U)) ? (2154514593U) : (arr_1 [i_3])))));
                            arr_27 [(unsigned char)3] [(unsigned char)3] [i_6] [i_6 - 2] [i_3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) -283562764)) : (arr_2 [i_3])))));
                            var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 3425051649U)) ? (((/* implicit */long long int) 1421855250U)) : (-8663939660768397017LL)))));
                            arr_28 [i_8] [i_3] [i_3] [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) -283562775)) ? (13361397961896170137ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                        }
                        arr_29 [i_3] [i_5] [i_5] [i_6] [i_3] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_19 [i_3] [i_3] [i_3])) - (((/* implicit */int) (short)-16858))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */int) (+(arr_14 [i_3])));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5 + 1])) ? (939524096ULL) : (((/* implicit */unsigned long long int) var_0))));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                var_23 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-20698))));
                var_24 -= (+((-(var_9))));
                arr_32 [i_3] [i_3] = ((/* implicit */short) (~(arr_25 [i_3] [i_5 + 1] [i_9] [i_3] [i_5] [i_9] [i_5 + 1])));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            arr_41 [i_3] [i_5] [i_5 - 2] [i_9] [i_9] [i_3] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) -7263183695502704063LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27299))) : (8090153501998751569LL)));
                            var_25 = ((/* implicit */unsigned long long int) var_0);
                            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 82116855U))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        {
                            var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_5] [i_5 + 2] [i_5 + 2] [i_5])) ? (((arr_2 [20ULL]) - (arr_30 [i_3] [i_3] [0U]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                            var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */int) var_8)) - ((+(((/* implicit */int) (short)-23796))))))));
                        }
                    } 
                } 
                arr_49 [i_3] [i_12] [i_5] [i_3] = ((/* implicit */unsigned int) var_5);
            }
        }
        arr_50 [i_3] [i_3] = (i_3 % 2 == zero) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_40 [i_3] [i_3] [i_3] [i_3])) + (47)))))) ? (max((var_10), (var_10))) : (arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))), (((((/* implicit */unsigned long long int) var_7)) + (min((((/* implicit */unsigned long long int) var_6)), (var_9)))))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((((/* implicit */int) arr_40 [i_3] [i_3] [i_3] [i_3])) + (47))) + (46)))))) ? (max((var_10), (var_10))) : (arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))), (((((/* implicit */unsigned long long int) var_7)) + (min((((/* implicit */unsigned long long int) var_6)), (var_9))))))));
    }
}
