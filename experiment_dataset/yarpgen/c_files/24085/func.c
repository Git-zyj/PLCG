/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24085
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
    var_15 = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) : (var_11))), (((/* implicit */unsigned int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) != (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-21)))))) : (((((/* implicit */_Bool) var_4)) ? (441483699U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */long long int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) var_5);
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (var_4)));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_17 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)-1033)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_4 [i_1] [i_1])))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_18 *= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)11))))) >> (((((((/* implicit */_Bool) arr_7 [i_2])) ? (((((/* implicit */_Bool) var_10)) ? (arr_4 [(short)1] [(unsigned char)5]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))))) - (4878257306596460338LL)))));
            arr_8 [i_1] [i_1] &= ((/* implicit */_Bool) (signed char)-6);
            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)18353)))))));
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) max(((+(arr_4 [i_1] [i_2]))), (var_0)));
        }
        var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)19)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111)))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) max(((!(((/* implicit */_Bool) var_2)))), (arr_5 [i_1] [i_1])))), ((~(((/* implicit */int) (short)2535))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_21 ^= ((/* implicit */short) (-(arr_4 [i_3] [i_3])));
        var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1298624261U)) ? (1017742119042861391ULL) : (var_2)))));
        arr_15 [i_3] [(signed char)15] = var_13;
    }
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (1013073839582772137ULL)));
    var_24 = ((/* implicit */int) min(((~(min((var_0), (var_9))))), (((/* implicit */long long int) var_5))));
    var_25 = ((/* implicit */unsigned long long int) var_11);
}
