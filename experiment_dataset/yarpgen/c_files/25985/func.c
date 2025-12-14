/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25985
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (unsigned char)36)))) / (arr_2 [i_0])));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) ((var_14) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29931))))))));
    }
    var_18 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4071)) || ((_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (3306686603U) : (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))) ^ (var_16)))) : (max((((/* implicit */long long int) 988280699U)), (var_2))))));
    var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((var_3), (988280700U)))), (var_8)));
    var_20 = ((signed char) (-(((/* implicit */int) (signed char)49))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(var_7))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_9)))))))) ? (min((var_8), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((var_13), (var_0)))) != (var_4)))))));
}
