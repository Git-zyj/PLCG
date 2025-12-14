/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47436
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)15872))))), (((((/* implicit */_Bool) ((unsigned long long int) (signed char)-67))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((var_14) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
        var_16 = ((/* implicit */int) min((var_16), (((int) ((((/* implicit */_Bool) (unsigned short)1198)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)30135))))) : ((+(var_10))))))));
        arr_4 [i_0] = ((/* implicit */signed char) var_7);
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))));
    }
    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
}
