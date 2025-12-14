/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197575
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
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) && (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (376100536U))))) ? (((((/* implicit */_Bool) min((1802224339446466801ULL), (((/* implicit */unsigned long long int) var_1))))) ? (((-7078201103837437495LL) - (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) var_8))))))), (min((max((((/* implicit */long long int) var_5)), (9223372036854775803LL))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_7)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] = var_8;
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_11)) << (((((/* implicit */int) var_12)) - (32359))))) + (((/* implicit */int) var_1))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_5)))))));
        }
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_18 = ((/* implicit */long long int) max((((var_7) ? (((/* implicit */int) min((var_4), (var_5)))) : (((((/* implicit */int) var_7)) / (((/* implicit */int) var_5)))))), (((((/* implicit */int) var_4)) ^ ((+(((/* implicit */int) var_3))))))));
            arr_11 [i_0] [i_0] [i_0] |= ((/* implicit */signed char) var_0);
        }
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            arr_16 [i_3] = ((/* implicit */unsigned int) var_11);
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)60788))))) == ((~(((((/* implicit */int) var_11)) & (((/* implicit */int) var_11))))))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) 2173726496U))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)31))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((var_1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) + (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_3)))))))))))));
            var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_9)) + (((/* implicit */int) var_6))))));
        }
        var_23 |= var_3;
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    {
                        arr_28 [i_6] [i_6] [i_4] [i_4] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-119)) == (((/* implicit */int) var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))));
                        arr_29 [i_6] [(unsigned short)23] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3046211770542223252LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4748))) : (2125438163133050114LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (var_10)));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_0))));
                        arr_30 [i_6] [i_6] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 4137729440346360679ULL)))) && (((/* implicit */_Bool) var_3))));
                    }
                } 
            } 
            var_26 -= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) - (var_10))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))))));
        }
        for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) > (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_3)))))))));
            var_28 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_12)))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
            var_29 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (unsigned short)40724)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))));
        }
        arr_33 [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
        arr_34 [i_4] = (!(((/* implicit */_Bool) (signed char)-22)));
        var_30 = ((/* implicit */signed char) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    }
    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
    {
        arr_38 [i_9] = ((/* implicit */long long int) min(((((!((_Bool)0))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)65535)))))), (((/* implicit */int) var_8))));
        /* LoopSeq 1 */
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            arr_41 [i_9] = ((/* implicit */unsigned short) (((-(((((/* implicit */int) var_5)) | (((/* implicit */int) var_12)))))) <= (((/* implicit */int) var_6))));
            arr_42 [i_10] [i_10] [i_9] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (signed char)28)), (((9223372036854775803LL) << (((((/* implicit */int) (unsigned short)52128)) - (52128)))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                {
                    arr_47 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) var_8);
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_31 *= ((/* implicit */signed char) max((32767U), (((/* implicit */unsigned int) (signed char)9))));
                        arr_52 [i_13] [i_13] [i_12] [i_12] [i_13] [i_9] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-8364229447651981838LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2234761099761597235LL)))));
                    }
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)31)))), (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((2508901712U) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((var_2) > (var_2))))))) : ((((_Bool)1) ? (((/* implicit */long long int) 1368710929U)) : (var_10)))));
                        /* LoopSeq 2 */
                        for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            var_33 |= ((/* implicit */_Bool) (~(((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)8443))))));
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 25; i_16 += 4) 
                        {
                            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) * ((+(((/* implicit */int) (signed char)-5)))))))));
                            arr_61 [i_16] [i_16] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (1986624484U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (min((-1LL), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (signed char)-118)))) ? (((/* implicit */int) ((3046211770542223252LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) var_1)))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_17 = 0; i_17 < 25; i_17 += 2) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((((/* implicit */_Bool) (unsigned short)4748)) && (((/* implicit */_Bool) 4503530907893760ULL))))));
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)25836)) - (((((/* implicit */int) (unsigned short)21177)) + (((/* implicit */int) var_3))))));
                            var_38 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (1002997202U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))))))));
                            arr_64 [8U] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((-8198351041419698909LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_8)) - (52253)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))));
                        }
                        arr_65 [11ULL] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)32594)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))) << (((((((/* implicit */long long int) ((/* implicit */int) var_1))) | (-1822635424427986622LL))) + (1822635424427986644LL)))))) | (min((((/* implicit */long long int) var_13)), (var_2)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 0; i_18 < 25; i_18 += 3) 
                        {
                            arr_69 [i_9] [i_9] [i_12] [i_14] [i_18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
                            var_39 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (max((((/* implicit */unsigned short) ((((/* implicit */int) var_8)) < (((/* implicit */int) (signed char)-98))))), (max((((/* implicit */unsigned short) var_7)), (var_0)))))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 25; i_19 += 2) 
                        {
                            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((18446744073709551610ULL), (((/* implicit */unsigned long long int) 4294967290U))))) ? ((((~(((/* implicit */int) var_4)))) & (((((/* implicit */int) (signed char)94)) | (((/* implicit */int) var_1)))))) : (min((((/* implicit */int) var_1)), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_5))))))));
                            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((((/* implicit */_Bool) 2782458351063549249ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))) <= ((((_Bool)0) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))))) : ((-(((/* implicit */int) min((var_3), (((/* implicit */signed char) var_13)))))))));
                        }
                    }
                }
            } 
        } 
    }
    var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) var_6))));
    var_43 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((((/* implicit */_Bool) var_9)) && (var_13)))))), (((((/* implicit */_Bool) max((var_5), (((/* implicit */signed char) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32930))) % (var_2)))))));
}
