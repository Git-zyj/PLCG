/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46414
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
    for (signed char i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        var_10 |= ((/* implicit */unsigned long long int) ((short) arr_1 [i_0 + 3] [i_0]));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned char i_3 = 3; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_8 [i_0] [(unsigned char)2] [i_2] [i_1] [i_0] &= ((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) ((unsigned char) (unsigned char)235))) - (206)))));
                        var_11 = ((/* implicit */unsigned int) ((((((var_6) ? (((/* implicit */int) arr_7 [(unsigned short)12] [(unsigned short)12] [(unsigned char)9] [(unsigned short)12] [(unsigned short)12])) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) var_3)))) - (32738)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_12 = ((/* implicit */signed char) ((var_9) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (var_4)))))));
                var_13 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) var_6)));
            }
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                var_14 = ((/* implicit */unsigned char) ((395818395U) * (((/* implicit */unsigned int) ((arr_12 [(unsigned short)8] [i_0 - 4] [i_0 - 4] [i_0 - 4]) ? (((/* implicit */int) arr_15 [i_6])) : (((/* implicit */int) arr_12 [i_0 + 2] [11U] [i_6] [11U])))))));
                arr_16 [i_0] &= ((/* implicit */short) (-(3925904180U)));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    var_15 &= ((/* implicit */unsigned char) ((arr_12 [i_0 - 2] [i_4] [i_0 + 3] [i_7]) ? (((/* implicit */long long int) ((369063116U) | (395818395U)))) : (arr_3 [i_6])));
                    var_16 = arr_9 [i_0 + 1] [i_0 - 4] [i_0 + 1];
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 1; i_8 < 21; i_8 += 1) /* same iter space */
                    {
                        var_17 = ((unsigned char) arr_7 [i_8 - 1] [6U] [i_7] [6U] [6U]);
                        var_18 = ((/* implicit */_Bool) max((var_18), (((_Bool) arr_15 [i_0 - 4]))));
                    }
                    for (unsigned short i_9 = 1; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) ((unsigned int) var_5));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 369063115U)) ? (arr_20 [(signed char)23] [i_4] [i_4] [(_Bool)1] [i_4] [(signed char)5] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7])))))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_22 [(short)3] [i_6] [i_6] [i_4] [i_6] [i_0])))))));
                    }
                }
            }
            arr_25 [i_0] = ((/* implicit */int) arr_2 [i_4] [i_0]);
        }
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            arr_30 [(short)3] = ((/* implicit */unsigned long long int) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))));
            var_21 += ((/* implicit */unsigned int) var_8);
            var_22 &= arr_23 [i_0] [(unsigned short)3] [i_10] [i_0 - 1] [i_10];
            arr_31 [i_0 + 3] [i_0 + 3] [20] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_0 + 2] [i_0 - 2] [(short)1] [i_0 + 1])) & (((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 3] [i_0] [i_0 - 4]))));
        }
        arr_32 [i_0 + 1] = ((/* implicit */_Bool) (+(arr_29 [i_0 + 1] [i_0] [i_0 + 1])));
        var_23 = ((/* implicit */unsigned int) ((unsigned short) arr_3 [i_0 + 2]));
    }
    for (signed char i_11 = 4; i_11 < 15; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            for (signed char i_13 = 2; i_13 < 14; i_13 += 4) 
            {
                {
                    arr_41 [2] [15ULL] [i_13 + 1] [i_13] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_7)) - (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_14 [(unsigned short)11] [(_Bool)1] [i_11] [i_11]))))))));
                    var_24 = ((/* implicit */signed char) max((274876858368ULL), (((/* implicit */unsigned long long int) arr_1 [i_11 + 1] [i_13 - 1]))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((_Bool) arr_33 [i_13])), (arr_23 [i_11] [i_11 - 2] [i_12] [i_13 - 1] [i_13 - 2])))) * (((/* implicit */int) min((((unsigned short) (short)-32756)), (max((((/* implicit */unsigned short) var_7)), ((unsigned short)7496))))))));
                }
            } 
        } 
        arr_42 [i_11] &= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_12 [i_11] [i_11 - 1] [i_11 - 1] [(_Bool)1])) / (((/* implicit */int) min((((/* implicit */signed char) var_8)), (var_3)))))));
        var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_7))))) ? (arr_24 [i_11] [i_11] [i_11] [i_11] [i_11]) : (max((((/* implicit */unsigned long long int) arr_22 [16ULL] [(short)0] [16ULL] [i_11] [i_11] [i_11 - 3])), (arr_6 [i_11] [i_11] [i_11] [i_11]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        /* LoopNest 3 */
        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            for (unsigned int i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                for (short i_16 = 0; i_16 < 16; i_16 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 369063116U)) != (17334146349536630830ULL)));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (arr_39 [i_11] [i_11])))) <= (((/* implicit */int) arr_7 [i_11 - 3] [i_14] [i_11 - 3] [i_16] [i_14]))))) | (((((/* implicit */int) (unsigned short)12)) << (((arr_18 [i_11 + 1]) - (4069664171U)))))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((max((((((/* implicit */int) var_7)) + (((/* implicit */int) var_6)))), (((/* implicit */int) max((var_1), (var_6)))))) * (((/* implicit */int) ((short) var_8))))))));
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)243), ((unsigned char)213)))) >> (((((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (((unsigned long long int) (unsigned char)235)))) - (18446744071674893566ULL)))));
}
