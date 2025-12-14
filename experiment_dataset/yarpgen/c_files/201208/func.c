/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201208
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
    var_19 = (-(((/* implicit */int) var_15)));
    var_20 = ((/* implicit */signed char) var_8);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 267911168)) ? (((/* implicit */long long int) max((arr_2 [i_0] [i_0]), (var_14)))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 267911160)) & (max((var_18), (((/* implicit */long long int) var_0))))))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) 267911168)) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) min((arr_1 [(unsigned short)7]), (arr_1 [i_0]))))))));
        var_21 = ((/* implicit */signed char) ((unsigned short) (~(var_6))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (var_5)))) : (max((arr_1 [i_0]), (((/* implicit */long long int) var_7))))));
        var_22 = ((/* implicit */int) (~((~(var_6)))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [0LL])) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) var_2)) - (((/* implicit */int) var_15))))))) : (((unsigned int) ((signed char) arr_1 [i_0])))));
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)200)))) : ((-(min((19LL), (((/* implicit */long long int) 499078003))))))));
}
