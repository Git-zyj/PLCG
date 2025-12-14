/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218323
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
    var_16 ^= (~((-(((((/* implicit */unsigned long long int) var_12)) + (var_5))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (var_8))) & (((/* implicit */unsigned long long int) (-(arr_4 [i_0]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [(signed char)1] [i_2] [i_0] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_3] [i_4])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) / (max((min((-41316704646911218LL), (((/* implicit */long long int) 0U)))), ((~(arr_7 [i_0])))))));
                                var_18 = ((/* implicit */_Bool) 8239824798103549299ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 8; i_7 += 4) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned short) ((min((((/* implicit */int) ((_Bool) (unsigned char)0))), ((+(((/* implicit */int) var_15)))))) != (((/* implicit */int) ((signed char) arr_6 [i_7 + 3])))));
                    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((max((var_5), (((/* implicit */unsigned long long int) var_1)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7418065285202027418LL)) ? (((/* implicit */int) arr_5 [i_5] [i_7] [i_7])) : (((/* implicit */int) var_2))))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */long long int) min((745659768U), (((/* implicit */unsigned int) (signed char)75))))), (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_4 [i_5]) : (arr_4 [i_5]))))))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (arr_9 [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_9 [i_8] [i_8] [i_8] [(unsigned char)4] [i_8])));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_8]))) : (var_3)))));
    }
    /* vectorizable */
    for (signed char i_9 = 4; i_9 < 20; i_9 += 4) 
    {
        arr_24 [i_9 - 3] = ((var_8) - (((/* implicit */unsigned long long int) var_7)));
        var_24 = ((/* implicit */_Bool) ((arr_22 [i_9] [i_9]) ^ (((/* implicit */unsigned long long int) ((var_2) ? (3444531052494305287LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_9]))))))));
        var_25 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_7)) : (var_8)))));
        arr_25 [i_9] = ((/* implicit */int) arr_22 [i_9 - 1] [i_9]);
    }
}
