/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196773
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
    var_10 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7))))) * (((((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_7)))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_7)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned long long int) var_0)), (var_4))))) : (max((((/* implicit */unsigned long long int) ((int) var_4))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (var_4)))))));
    var_12 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_2))) % (((/* implicit */int) min((var_0), (var_0))))))) ? (min((((/* implicit */unsigned long long int) ((var_9) || (((/* implicit */_Bool) var_3))))), (max((var_7), (((/* implicit */unsigned long long int) var_3)))))) : (min((min((((/* implicit */unsigned long long int) var_3)), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_3)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_13 = ((((/* implicit */unsigned long long int) (~(var_2)))) > (var_7));
        var_14 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_7));
        arr_3 [i_0] = ((/* implicit */signed char) var_1);
    }
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))) * (min((((/* implicit */unsigned long long int) var_0)), (var_7)))))) ? (max((((/* implicit */unsigned long long int) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) var_6)) ? (var_7) : (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
}
