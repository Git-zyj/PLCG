/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201004
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
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 3938377820850944591LL)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) ((3938377820850944591LL) == ((-9223372036854775807LL - 1LL))))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) var_0))))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((/* implicit */int) var_14)) - (100))))) : (((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (133)))))));
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0])))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 3; i_2 < 13; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_7 [i_2])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2])))))));
            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_2 - 2])) == (((/* implicit */int) arr_3 [i_2 + 2])))) ? ((~(((/* implicit */int) arr_3 [i_2 - 3])))) : (((((/* implicit */int) arr_3 [i_2 + 3])) - (((/* implicit */int) arr_3 [i_2 - 1]))))));
            arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((var_1), (arr_3 [i_1])))))))));
        }
        for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            arr_12 [i_1] [i_3] = ((/* implicit */unsigned char) (-((+((~(arr_5 [i_3])))))));
            arr_13 [i_1] [7LL] [(unsigned char)4] = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) arr_4 [i_1] [i_3])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) | (arr_5 [i_3])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) (signed char)0))))))))));
            /* LoopSeq 4 */
            for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_11 [i_1]))))), (((unsigned char) var_4)))))));
                arr_16 [i_4] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (((+((-(arr_10 [i_1] [i_3]))))) % (min((((/* implicit */long long int) var_0)), ((-(-3938377820850944587LL)))))));
                var_23 &= ((((-1484286241638225556LL) ^ (((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned char) arr_9 [i_1] [i_1] [i_4])))))))) & (((((/* implicit */_Bool) (signed char)-109)) ? (-6732676068157450087LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-78))))));
                /* LoopNest 2 */
                for (signed char i_5 = 3; i_5 < 14; i_5 += 3) 
                {
                    for (long long int i_6 = 2; i_6 < 14; i_6 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) var_14)))) + (2147483647))) >> (((((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_5)) - (231))))) & (((/* implicit */int) arr_15 [i_1] [i_1] [i_4] [i_4]))))));
                            arr_22 [i_1] [i_4] [i_4] [(unsigned short)15] [i_1] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_21 [i_1] [i_4 + 2] [i_5 - 2] [i_4]))));
                        }
                    } 
                } 
            }
            for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
            {
                var_25 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_20 [i_1] [i_1] [i_3] [i_3] [i_7])) : (((/* implicit */int) arr_9 [(unsigned char)9] [i_3] [i_3]))))));
                var_26 = ((/* implicit */unsigned short) arr_5 [i_7]);
                arr_26 [i_7] [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (((-(((/* implicit */int) var_9)))) >= ((+(((/* implicit */int) arr_20 [i_1] [i_1] [(unsigned short)8] [i_1] [i_1])))))))));
            }
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */long long int) ((unsigned short) (((!(((/* implicit */_Bool) arr_18 [i_8] [i_8])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -3938377820850944591LL))))) : (((/* implicit */int) var_0)))));
                arr_29 [(signed char)7] [i_8] [i_8] = var_5;
            }
            for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */long long int) arr_15 [i_9] [(unsigned char)0] [i_9] [i_9]);
                var_29 ^= ((/* implicit */unsigned short) (-((+(arr_14 [i_3] [i_9])))));
            }
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_10 [(signed char)2] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) var_11))))))))) ? ((~(((((/* implicit */_Bool) -3938377820850944591LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))) : (5031685988069175821LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_3] [i_1] [i_3] [i_1]))) == (var_2)))))));
            arr_33 [i_1] [(unsigned char)3] = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) (unsigned char)85)) ? (arr_24 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) << ((((-((-(((/* implicit */int) var_5)))))) - (239)))));
        }
        /* vectorizable */
        for (signed char i_10 = 1; i_10 < 15; i_10 += 3) 
        {
            var_31 = ((/* implicit */unsigned char) ((arr_24 [i_10 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10])))));
            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))))));
            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)53851)) >= (((/* implicit */int) (signed char)-54)))))));
        }
        arr_36 [i_1] [i_1] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_35 [i_1] [i_1])))) * ((+(((/* implicit */int) var_14))))));
        arr_37 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 9072004336447066562LL)) ? (arr_5 [(unsigned short)12]) : (arr_5 [(unsigned char)14]))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62340))))))))) ? ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_15))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned char)171))) || (((/* implicit */_Bool) ((unsigned char) var_15)))))))));
        arr_38 [i_1] = ((/* implicit */signed char) arr_31 [i_1] [6LL] [6LL]);
    }
    /* LoopNest 2 */
    for (long long int i_11 = 3; i_11 < 12; i_11 += 3) 
    {
        for (unsigned char i_12 = 3; i_12 < 11; i_12 += 4) 
        {
            {
                arr_44 [i_12] [i_11] [i_12] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)62340))))) ? (((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) arr_9 [i_12 - 2] [i_12] [i_11])) : (((/* implicit */int) (unsigned short)62340)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (var_15)))))), (((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_28 [i_12] [10LL] [i_11] [i_12])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_10))))));
                var_34 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [(unsigned char)1] [(unsigned char)1]))))) ? ((+(((/* implicit */int) arr_21 [i_11] [i_12] [(unsigned char)5] [i_12])))) : ((-(((/* implicit */int) arr_32 [i_12])))))));
                arr_45 [i_12] = ((/* implicit */unsigned char) (~((~(arr_41 [i_12 - 1] [i_12] [i_11 - 2])))));
                /* LoopNest 3 */
                for (long long int i_13 = 1; i_13 < 14; i_13 += 2) 
                {
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        for (signed char i_15 = 0; i_15 < 15; i_15 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_23 [7LL] [i_15])) > (((/* implicit */int) arr_49 [i_11] [i_11 + 3]))))))))));
                                var_36 = ((/* implicit */signed char) (((+(((((/* implicit */int) var_10)) - (((/* implicit */int) var_6)))))) + (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
