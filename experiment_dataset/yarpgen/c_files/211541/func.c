/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211541
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (((unsigned long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_16)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((unsigned short) var_7)))));
        var_19 -= ((/* implicit */_Bool) ((int) ((unsigned short) (unsigned short)57098)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            var_20 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_1 + 1]))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((9ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_2 [i_1 + 4]))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */long long int) (-(((((/* implicit */int) var_12)) / (((/* implicit */int) var_14))))));
                            arr_15 [i_2] [6] [i_1 + 2] [i_3] [6] [6] [i_2] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) var_8)))));
                        }
                    } 
                } 
                var_23 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_1 + 2])) >= (((/* implicit */int) arr_6 [(signed char)4] [i_1 + 2] [i_2]))));
                var_24 += ((/* implicit */signed char) ((((/* implicit */int) arr_6 [2] [i_1] [8ULL])) >= (((var_1) % (((/* implicit */int) var_8))))));
            }
        }
    }
    for (short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (signed char i_7 = 2; i_7 < 12; i_7 += 1) 
            {
                for (signed char i_8 = 2; i_8 < 12; i_8 += 1) 
                {
                    {
                        arr_27 [(unsigned short)10] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_3 [i_8 + 1] [i_7 - 1]), ((_Bool)1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (-906899222) : (((/* implicit */int) arr_0 [i_5] [i_5]))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
                        var_25 += ((/* implicit */unsigned int) min((((/* implicit */int) arr_17 [i_5] [i_5])), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned short)48340)) ? (((/* implicit */int) arr_17 [i_6] [i_6])) : (arr_14 [i_5] [i_5] [i_5] [(short)0] [i_5])))))));
                        var_26 += ((/* implicit */_Bool) min(((~(arr_14 [i_8 + 1] [6LL] [i_7 + 1] [6LL] [i_7 + 1]))), (((((/* implicit */_Bool) arr_14 [i_8 - 2] [6] [i_7 + 1] [6] [i_7 + 1])) ? (arr_14 [i_8 - 2] [(short)2] [i_7 - 2] [(short)2] [i_7 - 2]) : (arr_14 [i_8 + 1] [(signed char)4] [i_7 + 1] [(signed char)4] [i_7 + 1])))));
                    }
                } 
            } 
        } 
        var_27 *= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((((/* implicit */int) arr_4 [(signed char)8])) < (((/* implicit */int) (signed char)81))))))) < (max(((-(arr_9 [(short)12] [i_5] [i_5] [(short)12]))), (((/* implicit */int) ((short) (signed char)-60)))))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_16 [i_5])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))) ? (((arr_13 [i_5] [i_5] [10U] [i_5] [i_5]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (18446744073709551614ULL))))))));
    }
    var_29 |= ((/* implicit */short) max(((-((+(((/* implicit */int) var_9)))))), (((((/* implicit */int) var_3)) + ((~(((/* implicit */int) (short)32767))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 3) 
    {
        for (unsigned short i_10 = 4; i_10 < 22; i_10 += 2) 
        {
            for (signed char i_11 = 1; i_11 < 22; i_11 += 4) 
            {
                {
                    var_30 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) var_15)) * (((/* implicit */int) var_2)))) == (((/* implicit */int) max(((unsigned char)89), (var_14))))))) & (max((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))), (max((((/* implicit */int) arr_30 [i_9])), (arr_35 [i_10] [i_9])))))));
                    var_31 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_33 [i_9])) % (arr_35 [i_9] [i_10 - 3])));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_12 = 3; i_12 < 6; i_12 += 4) 
    {
        for (short i_13 = 4; i_13 < 7; i_13 += 4) 
        {
            for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                {
                    arr_46 [i_12] [i_12] [i_13] [i_12] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_13])) : (((((/* implicit */int) arr_10 [i_12] [i_12] [i_13] [i_12])) | (((/* implicit */int) arr_7 [i_13])))))) % ((+((+(((/* implicit */int) var_3))))))));
                    /* LoopNest 2 */
                    for (short i_15 = 2; i_15 < 6; i_15 += 3) 
                    {
                        for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
                        {
                            {
                                var_32 *= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)42429))));
                                var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (1891403950U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_14] [i_13] [i_13] [i_12]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_10 [i_12] [i_12] [i_13] [i_12]))))))))) ? (((/* implicit */unsigned long long int) (-(max((var_1), (((/* implicit */int) arr_10 [i_12] [i_13] [i_13] [i_15]))))))) : (max((((((/* implicit */_Bool) arr_11 [i_13] [i_13 + 3] [i_14] [i_15 - 2] [i_13])) ? (arr_22 [i_13] [i_14] [i_13 - 1] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) var_14))))));
                                var_34 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_26 [i_13 - 4] [i_14] [i_15]))) > (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255)))))))), (((((arr_14 [(signed char)0] [(signed char)0] [0] [i_13] [i_16]) + (2147483647))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_50 [i_12] [i_12] [i_12] [i_12 + 1] [i_12])) : (((/* implicit */int) (unsigned short)8458)))) - (5514)))))));
                                var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_6 [i_13] [i_13] [i_14])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)42432)))) : (((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) (!(var_9))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
