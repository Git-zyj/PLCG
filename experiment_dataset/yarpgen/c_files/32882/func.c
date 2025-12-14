/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32882
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) var_1)), (17462869976295700428ULL))) : (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)8192)), (8380416U)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)3962))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)248)) + (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (17462869976295700423ULL))) : (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57344))) : (17462869976295700428ULL)))));
        var_12 = ((/* implicit */short) var_6);
        arr_2 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_2)))));
    }
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_7))));
    var_14 = ((/* implicit */unsigned int) var_4);
}
