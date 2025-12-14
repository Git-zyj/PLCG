/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48011
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((((var_9) + (9223372036854775807LL))) >> (((var_1) - (3262447135U)))))))) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_0)))) ? ((+(var_3))) : (((/* implicit */long long int) var_0))))));
    var_11 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_1 [i_0])), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -767173548))))), (min((var_1), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
    }
    var_14 = ((/* implicit */unsigned short) max((var_3), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3)))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_1)) ? (var_8) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? ((-(1728945842))) : (((/* implicit */int) ((_Bool) max((var_2), (((/* implicit */long long int) var_6))))))));
}
