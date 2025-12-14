/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213785
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        var_13 *= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)46))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */short) ((min((((/* implicit */int) min(((unsigned char)203), (arr_3 [(short)12] [(short)12])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) var_0)))))) != (((/* implicit */int) (unsigned char)59))));
        arr_5 [0] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)51115)))), (((((/* implicit */_Bool) (+(310745579U)))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1])))) : (((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) arr_3 [10] [i_1])) : (((/* implicit */int) (unsigned char)219))))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [2] [i_1])) : (var_7)))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1]))))), (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)210)))))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1])) - (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (min((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), (3984221724U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76)))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) (signed char)-27))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) (unsigned char)83);
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)35)) / (((/* implicit */int) (short)-17632))));
    }
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) 1344254898))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)45), ((unsigned char)209)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)9128))) * (2147221504LL))) : (((/* implicit */long long int) (+(var_7))))))) ? (((/* implicit */long long int) var_3)) : (((long long int) (short)17627))));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -514126374))));
}
