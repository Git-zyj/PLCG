/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211199
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
    var_18 = ((/* implicit */long long int) (((-(((((/* implicit */int) var_8)) - (var_10))))) > (((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [11LL] [9ULL] = arr_2 [(unsigned short)5] [i_1] [i_0];
                var_19 = ((/* implicit */signed char) arr_2 [i_0] [i_0] [i_0]);
                arr_5 [i_1] [i_0] = min((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((short) var_2)))));
        arr_9 [i_2] = ((((/* implicit */_Bool) arr_8 [i_2])) && (((/* implicit */_Bool) var_14)));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12))));
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (signed char)-19)))));
                        var_23 *= ((/* implicit */signed char) ((short) ((((/* implicit */int) var_9)) * (((/* implicit */int) (_Bool)1)))));
                        arr_20 [i_6] [i_4] [i_4] [i_3] [i_2] = ((/* implicit */unsigned char) ((arr_19 [i_2] [i_2] [(signed char)4] [i_5] [i_6 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_6 - 2] [i_6 - 2] [i_6] [i_6]))) : (arr_10 [i_2])));
                    }
                    arr_21 [i_2] [i_2] [i_3] [i_4] [6U] = ((/* implicit */long long int) var_3);
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_5])) | (((/* implicit */int) ((unsigned char) arr_17 [i_2] [i_4] [i_4] [i_5]))))))));
                }
                var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)51))))) ? (((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_3] [i_4] [i_2])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_15 [i_4] [9U])))))));
                /* LoopSeq 3 */
                for (short i_7 = 2; i_7 < 10; i_7 += 1) 
                {
                    var_26 += ((/* implicit */_Bool) ((unsigned long long int) var_5));
                    var_27 = ((/* implicit */unsigned char) var_3);
                }
                for (int i_8 = 1; i_8 < 8; i_8 += 1) 
                {
                    arr_27 [i_4] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8] [(short)2])) + (((/* implicit */int) var_3))));
                    arr_28 [i_8] = ((((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])) - (arr_13 [i_3] [i_4]))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))));
                    var_28 = ((/* implicit */unsigned short) -9223372036854775794LL);
                    arr_29 [i_2] [i_3] [i_4] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_8 + 1] [i_8 + 1])) + (((/* implicit */int) arr_16 [i_4] [i_3] [i_8 + 2] [i_8 + 2]))));
                }
                for (short i_9 = 1; i_9 < 9; i_9 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_10 = 4; i_10 < 9; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (-(arr_22 [i_2] [i_3] [i_4] [0LL] [i_10]))))));
                        var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_9] [i_9] [i_9] [i_3] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-9223372036854775802LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10 + 2] [i_10 - 1] [i_10] [i_10 + 2] [i_10]))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_4] [7ULL]))) : (arr_10 [i_10]))));
                    }
                    for (short i_11 = 1; i_11 < 7; i_11 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned char) (~(arr_26 [i_2] [i_3] [i_11 - 1] [i_9 - 1])));
                        var_32 = ((/* implicit */long long int) (-(((arr_13 [i_2] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                        arr_36 [i_11 + 4] [i_2] [i_9] [i_2] [i_9] [i_2] [i_2] = (-(258834490));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        var_33 *= ((/* implicit */_Bool) ((unsigned char) arr_35 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_2] [i_9 + 1]));
                        var_34 += ((/* implicit */unsigned short) var_11);
                        var_35 = ((/* implicit */unsigned int) ((arr_23 [i_2] [i_3] [i_4] [i_3]) ? (((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_23 [i_3] [4LL] [i_9 + 1] [i_12]))));
                    }
                    arr_41 [i_9] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_9 - 1] [i_9 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_2] [i_9] [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 + 1]))) : (arr_26 [i_4] [i_4] [i_9 + 2] [i_9 + 1])));
                    var_36 = ((/* implicit */short) arr_23 [i_2] [i_9 + 1] [i_9 + 1] [i_9]);
                }
            }
            /* LoopNest 2 */
            for (short i_13 = 3; i_13 < 10; i_13 += 4) 
            {
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    {
                        var_37 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_40 [i_2] [i_14] [i_2] [i_14] [i_14] [i_13] [i_14])) & (((/* implicit */int) var_17)))));
                        arr_46 [i_14] [i_14] [i_13] [i_2] [i_3] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_14] [i_3] [i_13])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16))));
                    }
                } 
            } 
        }
        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                var_38 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (258834485)));
                var_39 = ((/* implicit */unsigned char) arr_34 [i_2] [i_2] [i_15] [i_15] [i_15] [i_16]);
            }
            arr_52 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)3268))));
        }
        arr_53 [i_2] = ((/* implicit */unsigned char) (+(arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
    }
    var_40 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))), (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)140)) < (300002831))))) : (((((unsigned long long int) var_4)) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_17))))))))));
}
