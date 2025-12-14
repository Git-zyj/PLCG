/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192209
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_10))));
    var_13 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 4] [i_1 - 4])) ? (arr_5 [i_1 - 2] [(unsigned char)12]) : (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_1 - 3]))))) : (arr_3 [7U])));
                arr_7 [i_0 - 1] = ((/* implicit */short) arr_5 [i_1] [i_0 + 1]);
                arr_8 [(short)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_5 [i_0 + 1] [i_1]), (((/* implicit */long long int) arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 1]))))) ? (min((var_10), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_1])) : (((/* implicit */int) var_11)))))));
                arr_9 [i_0] [i_0] [(short)8] = ((/* implicit */unsigned int) max(((unsigned char)0), ((unsigned char)215)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_15 ^= ((/* implicit */long long int) ((1758233223U) + (3029526098U)));
        var_16 = ((/* implicit */short) var_3);
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_2])), (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) : (var_10)))));
    }
}
