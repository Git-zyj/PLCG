/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37819
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (var_2)))), ((~(arr_1 [i_0])))))));
        var_10 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)34092)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (signed char)-101)))) == ((~(((/* implicit */int) (unsigned char)254))))));
    }
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((min((((/* implicit */unsigned int) var_3)), (var_4))) - (53434U)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((var_7) != (((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (var_4)))))))));
    var_12 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0))));
    var_13 = ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) (-(((/* implicit */int) min((var_5), (var_5)))))))));
}
