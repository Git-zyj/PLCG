/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200093
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
    var_18 = var_2;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */signed char) var_16);
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_1 [i_0])))) ? (max((((/* implicit */unsigned int) var_14)), (arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) 1721179187))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_20 ^= (-(((/* implicit */int) arr_4 [i_1] [i_1])));
        var_21 ^= ((/* implicit */unsigned short) 4294967283U);
    }
    var_22 |= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) (~(((/* implicit */int) var_17))))));
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_17)) ? (((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (var_3))) | (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_17)))) : (576460752303423487ULL))))))));
}
