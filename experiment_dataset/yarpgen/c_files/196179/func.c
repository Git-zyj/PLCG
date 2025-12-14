/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196179
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
    var_17 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (max((((18354378619546700167ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) var_12)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_18 += ((/* implicit */_Bool) max((((((((/* implicit */_Bool) arr_1 [2ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (782331985792213320ULL))) ^ (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_0])))))), (((/* implicit */unsigned long long int) (~(max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) : (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (signed char)-8)) : (((((/* implicit */_Bool) ((((((/* implicit */int) var_13)) + (2147483647))) >> (((-1604258802) + (1604258809)))))) ? (max((var_10), (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) > (var_5))))))));
    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_4)))))))));
}
