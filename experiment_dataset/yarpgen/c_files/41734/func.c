/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41734
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
    var_15 -= ((/* implicit */long long int) (((-((-(((/* implicit */int) (unsigned short)0)))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1307104332)) ? (((/* implicit */int) var_6)) : (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_11)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_4)) : (var_2)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((max((((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_0))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [15LL])))))))))));
    }
    for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        arr_8 [i_1] [(unsigned char)12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)59252)), (var_12)))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(3460820234U)))))))));
        arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) max((arr_2 [i_1] [(unsigned short)2]), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [(_Bool)1])) == (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_5)))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_0 [i_1 - 1]))));
    }
}
