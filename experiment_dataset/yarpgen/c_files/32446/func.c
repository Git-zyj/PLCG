/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32446
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4023098053U)) - (((min((11659109544803813907ULL), (((/* implicit */unsigned long long int) -7160548740565695871LL)))) * (((/* implicit */unsigned long long int) 4023098047U))))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) max((-7160548740565695888LL), (((/* implicit */long long int) var_4)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (4023098064U) : (var_14)))) : (var_7)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 *= ((/* implicit */short) max((min((((/* implicit */unsigned long long int) 271869249U)), (arr_0 [i_0]))), (((arr_1 [i_0]) | (max((((/* implicit */unsigned long long int) var_3)), (var_17)))))));
        var_21 = ((/* implicit */int) (~(((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_16)))) >> (((arr_0 [(signed char)13]) - (7719797885221251950ULL)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) ((int) min((arr_3 [i_1]), (((/* implicit */int) var_12)))));
        var_23 *= ((unsigned char) max((((/* implicit */unsigned long long int) var_3)), ((+(34351349760ULL)))));
        var_24 = ((((/* implicit */_Bool) var_8)) ? (var_13) : (min((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1]))));
        var_25 *= ((/* implicit */unsigned int) (~(((arr_2 [i_1] [i_1]) & (arr_2 [6U] [i_1])))));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_2 [i_1] [i_1]))));
    }
    var_27 = ((/* implicit */int) var_8);
    var_28 *= ((/* implicit */_Bool) var_11);
}
