/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218791
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (5291953121768066820LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) >> (((((/* implicit */int) max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))) - (90)))));
                var_14 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) var_1)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_1)) ? (1325811795193523554ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((5291953121768066820LL) / (-5291953121768066807LL))))))) ? (((((/* implicit */_Bool) (short)2246)) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)168)), ((short)-23782)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165))) <= (var_0)))))) : (((/* implicit */int) (_Bool)1))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))))))) : (max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
}
