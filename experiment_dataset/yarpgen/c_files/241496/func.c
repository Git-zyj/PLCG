/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241496
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= ((-(min((((/* implicit */unsigned int) var_7)), (var_9)))))));
    var_15 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (unsigned short)7855)))), ((~(min((var_8), (var_8)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((((/* implicit */int) ((signed char) arr_0 [i_0]))) & (((/* implicit */int) (unsigned short)34949)));
        arr_2 [4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)47434)) : (var_8)));
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */int) (short)31)) != (((/* implicit */int) arr_3 [i_1] [i_1])))) ? (((/* implicit */int) ((9223372036854775803LL) > (((/* implicit */long long int) ((/* implicit */int) var_5)))))) : ((-(((/* implicit */int) arr_4 [i_1] [i_1]))))))) % (var_12)));
        var_18 ^= ((/* implicit */long long int) (signed char)62);
        arr_5 [i_1] = ((/* implicit */unsigned char) max(((~(((var_13) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)8] [(unsigned short)8]))))))), (((/* implicit */unsigned int) min(((unsigned short)42297), (((/* implicit */unsigned short) arr_3 [i_1 + 1] [i_1 + 2])))))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 16; i_2 += 2) 
    {
        arr_8 [i_2] [i_2 - 1] = ((/* implicit */int) var_4);
        arr_9 [i_2] = ((/* implicit */unsigned short) ((1LL) | (((/* implicit */long long int) var_0))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_3 = 3; i_3 < 14; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) (~(((int) var_5))));
        arr_12 [i_3] = ((/* implicit */unsigned short) (short)-5731);
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */int) var_13);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)35952)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) var_8)))) : (var_12))))));
        var_22 = ((/* implicit */long long int) ((signed char) max((arr_14 [i_4]), (arr_14 [i_4]))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
    {
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned char) (unsigned short)53259);
        /* LoopSeq 1 */
        for (short i_6 = 3; i_6 < 9; i_6 += 1) 
        {
            var_23 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)23239))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                arr_24 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (4111999666692367481ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 3])))));
                var_24 ^= ((/* implicit */unsigned int) (+(var_1)));
                var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) (unsigned char)107)) : (var_8)))));
            }
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                var_26 = ((/* implicit */short) arr_10 [i_6 - 2] [i_8]);
                var_27 = ((/* implicit */short) var_13);
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (short)15274)))))));
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_6)) ? (-103470031133219007LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43187)))))))));
                var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-886194018)))) ? ((+(var_13))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)127)) ? (var_1) : (((/* implicit */int) arr_22 [5U] [i_6] [5U] [5U])))))));
            }
            for (signed char i_9 = 1; i_9 < 11; i_9 += 2) 
            {
                var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1])) ? (((/* implicit */int) arr_26 [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9])) : (((/* implicit */int) arr_26 [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9]))));
                var_32 = var_7;
            }
        }
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
    {
        arr_34 [i_10] [i_10] = ((/* implicit */unsigned int) arr_29 [(short)10]);
        var_33 += 4294967292U;
        var_34 = ((/* implicit */short) ((((((/* implicit */int) arr_27 [i_10] [i_10] [i_10])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)17297)) - (17274)))));
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            arr_39 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_11] [i_11] [0] [i_10])) ? (var_8) : (((/* implicit */int) (unsigned short)42297))));
            arr_40 [i_10] [i_10] [i_10] = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)145)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned int) 98127885)));
            arr_41 [i_10] [(unsigned short)9] [(unsigned short)9] = ((/* implicit */unsigned char) ((var_13) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29090)))));
        }
    }
}
