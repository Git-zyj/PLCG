/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207052
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
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((-(var_1))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) ((unsigned short) arr_1 [(short)5]));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            arr_5 [i_0 + 2] [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 8384512))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                var_15 = arr_0 [i_1];
                /* LoopNest 2 */
                for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
                {
                    for (unsigned short i_4 = 2; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_16 *= ((/* implicit */signed char) arr_6 [i_4]);
                            var_17 ^= ((/* implicit */unsigned long long int) ((((var_4) + (2147483647))) >> ((-(((((/* implicit */int) var_8)) / (((/* implicit */int) var_3))))))));
                            var_18 = ((/* implicit */int) arr_4 [i_0]);
                            var_19 = ((/* implicit */unsigned short) (signed char)-116);
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) (+(arr_2 [(unsigned short)11])));
            }
            var_21 = ((/* implicit */unsigned short) arr_3 [i_1]);
        }
    }
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(var_1))))));
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_13 [i_5]), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned char)8]))))));
        var_24 = ((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned char) arr_13 [i_5]))), (((unsigned int) arr_12 [i_5]))));
    }
    for (int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        var_25 |= max((((/* implicit */unsigned long long int) arr_14 [(signed char)12])), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [i_6]))) % (var_6))), (arr_16 [i_6]))));
        var_26 = ((/* implicit */signed char) var_9);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            var_27 = ((/* implicit */unsigned short) max((var_27), (var_3)));
            var_28 = ((/* implicit */unsigned short) arr_14 [i_6]);
            var_29 = ((/* implicit */unsigned short) arr_15 [i_6] [i_6]);
            /* LoopSeq 1 */
            for (long long int i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                var_30 = ((/* implicit */long long int) ((arr_18 [i_6] [i_7] [22LL]) >> ((((-(-3133015901054100154LL))) - (3133015901054100137LL)))));
                arr_21 [(unsigned char)23] [(unsigned char)23] [i_6] [i_8] = arr_16 [i_6];
                var_31 = arr_18 [i_6] [i_8 + 2] [i_6];
                var_32 |= ((/* implicit */unsigned short) arr_14 [16U]);
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_8] [i_6])) / (((/* implicit */int) arr_24 [i_7] [i_8 - 1] [i_8 - 1] [i_8 + 2] [i_8 + 2] [i_8 + 1]))));
                            arr_28 [i_6] [i_6] [i_6] [i_6] [i_9] [i_10] = (i_6 % 2 == 0) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_6])) : (((/* implicit */int) arr_14 [i_6])))) >> (((((((/* implicit */_Bool) arr_20 [i_6] [i_7])) ? (arr_18 [i_6] [i_6] [i_8]) : (0ULL))) - (3078349628568713585ULL)))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_6])) : (((/* implicit */int) arr_14 [i_6])))) >> (((((((((/* implicit */_Bool) arr_20 [i_6] [i_7])) ? (arr_18 [i_6] [i_6] [i_8]) : (0ULL))) - (3078349628568713585ULL))) - (5420767569301398504ULL))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    var_34 -= ((/* implicit */short) arr_32 [i_6] [22ULL] [i_11] [i_6]);
                    var_35 = var_1;
                    arr_34 [i_6] [7] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_6] [i_6] [i_6] [i_6])) ? (arr_25 [23LL] [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */int) arr_31 [i_6] [i_11] [i_7] [i_6]))));
                }
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        {
                            var_36 *= ((/* implicit */unsigned char) (_Bool)1);
                            var_37 = ((/* implicit */unsigned long long int) var_3);
                        }
                    } 
                } 
            }
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
    {
        for (long long int i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            {
                var_38 = 608239044U;
                arr_43 [13LL] [i_16] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [(unsigned short)6] [i_16] [(unsigned short)6] [i_15] [i_16] [i_15]))));
                arr_44 [i_16] [i_16] = ((/* implicit */unsigned long long int) ((unsigned short) arr_35 [i_15] [i_15] [6LL] [i_15] [i_15]));
            }
        } 
    } 
}
