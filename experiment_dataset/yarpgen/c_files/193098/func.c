/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193098
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_20 = max((max((arr_0 [i_0]), (((/* implicit */unsigned short) var_19)))), (arr_1 [i_0]));
        var_21 = (((-((+(var_4))))) <= (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_1 [i_0])) & (var_9))), (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) (short)20146)))))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_9) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_23 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) < (var_0)));
        var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) * (1340732082U)))))) : (((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (2954235214U) : (824818297U))))))));
    }
    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) min((1340732102U), ((~(2954235214U))))))));
}
