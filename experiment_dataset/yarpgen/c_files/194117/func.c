/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194117
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4 + 1] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_4 [i_0] [i_2]);
                                var_11 += ((/* implicit */long long int) min(((unsigned short)16080), ((unsigned short)49461)));
                                arr_13 [2LL] [i_1] [2LL] [12U] [i_0] = arr_2 [i_0] [i_3];
                                var_12 = ((/* implicit */unsigned short) arr_3 [i_0] [i_1 + 3] [i_2]);
                                var_13 ^= ((/* implicit */unsigned char) arr_5 [0]);
                            }
                        } 
                    } 
                } 
                arr_14 [4ULL] [4ULL] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) min((var_4), (((/* implicit */short) (_Bool)1))))))) >> ((((~(arr_8 [i_0] [i_0] [i_0] [i_0]))) + (6781295686259752251LL)))));
                var_14 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) arr_3 [i_1] [i_0] [i_0])) : (((((/* implicit */int) var_7)) | (((/* implicit */int) var_1))))))) <= (((((/* implicit */_Bool) arr_11 [i_1] [9U] [i_1 - 1])) ? (arr_11 [i_1] [i_1 - 1] [i_1 - 1]) : (arr_11 [i_1] [i_1 + 1] [i_1 - 1]))));
                /* LoopSeq 2 */
                for (int i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    arr_18 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)16083)) | (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) (unsigned short)49461)) ? (arr_8 [i_0] [i_0] [i_5 - 2] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_0]))))) - (6781295686259752189LL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned char) arr_8 [i_6] [i_6] [i_1] [i_1]);
                                arr_24 [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned short) arr_15 [i_0] [i_1] [i_6])), (arr_6 [i_1 + 2] [i_5 + 1] [i_1 + 1] [i_1 + 2])));
                            }
                        } 
                    } 
                    arr_25 [i_0] = ((/* implicit */unsigned short) (-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    var_16 ^= ((/* implicit */long long int) min((((/* implicit */int) var_5)), (min((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)49455)))), (((((/* implicit */int) arr_15 [6] [i_1] [i_1])) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((arr_23 [i_0] [i_0] [i_8] [(_Bool)1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_19 [9LL] [i_1] [i_1] [i_0]))));
                        arr_31 [i_8] [(short)12] [(short)12] [i_0] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_0] [i_1] [(unsigned short)6]))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_18 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [2LL] [i_1] [2LL] [2ULL]))) : (arr_5 [i_1]))) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)12] [(unsigned short)12] [(unsigned short)11] [i_10])) ? (((/* implicit */int) arr_19 [i_0] [(signed char)6] [i_8] [(short)2])) : (((/* implicit */int) arr_23 [i_0] [i_1 + 3] [i_8] [i_1 + 3]))))) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_1 + 1] [i_10])) : (((((/* implicit */_Bool) arr_5 [i_10])) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_8] [i_0] [i_10])) : (((/* implicit */int) arr_26 [i_0])))))))));
                        arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) arr_29 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2])), (arr_8 [i_0] [i_0] [i_1 + 2] [2LL]))), (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
                        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)16109))));
                        arr_35 [i_0] [i_0] [i_1 + 2] [12ULL] [i_10] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_20 [i_8] [i_8] [i_1] [i_0])))) : (((/* implicit */int) arr_32 [i_10] [(_Bool)1] [i_0] [i_1 - 1] [i_1 - 1]))))), (arr_17 [i_0] [i_1] [i_0] [i_10])));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) arr_5 [(unsigned char)13]);
                        var_21 += ((/* implicit */signed char) ((((/* implicit */int) arr_21 [12ULL] [i_1 - 1] [i_1 + 2] [i_11])) / (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_29 [i_11] [i_11] [i_8] [i_1] [i_0])) : (((/* implicit */int) var_1))))));
                        arr_39 [i_0] [10U] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16093)) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_8] [i_11])) : (((/* implicit */int) (unsigned short)16085))));
                        arr_40 [i_0] = ((/* implicit */long long int) ((arr_37 [i_0] [i_1 + 2] [i_0]) & (arr_37 [i_0] [i_1 + 3] [i_0])));
                        var_22 += ((/* implicit */_Bool) (unsigned short)16092);
                    }
                }
                arr_41 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_29 [i_1 + 3] [10] [10] [i_1 + 1] [i_1 + 2]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_12 = 3; i_12 < 19; i_12 += 2) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 3; i_14 < 19; i_14 += 4) 
            {
                {
                    arr_52 [i_12] [i_13] = ((/* implicit */unsigned char) arr_42 [i_12]);
                    var_23 = ((/* implicit */short) min((max((arr_44 [i_12]), (((/* implicit */int) var_2)))), (((((/* implicit */int) var_6)) & (arr_44 [i_12])))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)22269)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_9)) ? (-1594676317) : (((/* implicit */int) var_7))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))));
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (min((min((6182305951852495518ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
}
