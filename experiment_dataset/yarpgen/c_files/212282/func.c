/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212282
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
    var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (var_15)));
    var_20 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_2 [7ULL] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = var_12;
        arr_4 [(unsigned char)11] = ((/* implicit */signed char) arr_0 [i_0 + 1] [i_0 + 1]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_2] [i_1])));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) arr_13 [i_1] [i_1] [i_4]);
                        var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_12) : (arr_10 [i_2])))) ? (arr_6 [(unsigned char)11] [i_4]) : (((var_18) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_13 [i_1] [i_3] [i_4]))))));
                        var_24 = ((/* implicit */long long int) var_4);
                        arr_14 [i_1] [15ULL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_2] [15]))) : (var_12)));
                    }
                } 
            } 
            arr_15 [0ULL] [10ULL] [i_1] = ((/* implicit */_Bool) var_7);
        }
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            var_25 -= ((/* implicit */unsigned long long int) var_15);
            arr_19 [i_5] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_18 [i_5]) : (arr_18 [i_5])));
            var_26 = ((/* implicit */unsigned int) arr_1 [i_1]);
        }
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            var_27 = ((/* implicit */unsigned long long int) var_7);
            arr_22 [i_1] [i_6] [i_6] = ((/* implicit */int) arr_21 [i_1] [i_6] [i_6]);
        }
        arr_23 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_9 [i_1] [(unsigned char)4] [i_1] [i_1]) : (arr_16 [i_1] [i_1] [4])));
        arr_24 [i_1] = arr_13 [(_Bool)1] [i_1] [(_Bool)1];
        var_28 = ((/* implicit */short) var_12);
    }
    for (short i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            for (int i_9 = 1; i_9 < 13; i_9 += 3) 
            {
                {
                    arr_35 [i_7] [i_7] [9ULL] [(unsigned short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_9] [i_7])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [5U] [5U])))));
                    var_29 = var_11;
                    arr_36 [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (var_10)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_9] [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 1])))))));
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) var_1);
        var_31 *= ((/* implicit */short) arr_30 [i_7] [9LL]);
        var_32 = ((/* implicit */signed char) ((var_11) ? (arr_10 [(short)3]) : (((((/* implicit */_Bool) var_4)) ? (arr_26 [i_7] [i_7]) : (((/* implicit */unsigned long long int) arr_8 [i_7]))))));
    }
    for (short i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            for (unsigned short i_12 = 3; i_12 < 14; i_12 += 2) 
            {
                for (signed char i_13 = 3; i_13 < 13; i_13 += 4) 
                {
                    {
                        var_33 = ((/* implicit */int) var_6);
                        var_34 = ((/* implicit */unsigned long long int) arr_5 [10]);
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */long long int) arr_1 [i_10]);
    }
    var_36 = ((/* implicit */unsigned short) var_11);
}
