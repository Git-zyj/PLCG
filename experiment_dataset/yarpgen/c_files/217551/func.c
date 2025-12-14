/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217551
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
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0 - 3]))) ? (((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_3))) % (((((/* implicit */_Bool) 548849442U)) ? (((/* implicit */unsigned long long int) var_13)) : (var_3))))) : (((/* implicit */unsigned long long int) 548849442U))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((short) 12730893747088960789ULL)))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((arr_2 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))))) + (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))))));
    }
    var_21 = ((/* implicit */int) 12730893747088960789ULL);
    var_22 = ((/* implicit */int) (-(var_12)));
}
