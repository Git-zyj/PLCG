/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196719
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
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_12 = var_9;
        var_13 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))), (max((var_10), (var_10)))))), (((((/* implicit */long long int) var_10)) & (min((((/* implicit */long long int) (signed char)112)), (3436774260290437053LL)))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 2]))))) > ((-(((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    var_15 -= ((((/* implicit */int) var_6)) >> (((var_10) - (2218521448U))));
    var_16 = ((/* implicit */long long int) max((var_16), (min((((/* implicit */long long int) (~(((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15))) : (-8480711701568237870LL))) : (((long long int) var_2))))))));
}
