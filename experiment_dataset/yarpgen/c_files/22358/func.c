/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22358
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
    var_13 = min((((/* implicit */unsigned int) min(((+(((/* implicit */int) var_5)))), ((-(((/* implicit */int) (unsigned short)27809))))))), (var_6));
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_12))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (36020000925941760LL))) : (var_10))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_3);
        arr_4 [i_0] [i_0] |= ((/* implicit */signed char) (((~(((var_4) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27786))))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
    }
    var_15 &= ((max((((((/* implicit */_Bool) var_10)) ? (36020000925941760LL) : (var_9))), (((/* implicit */long long int) (~(((/* implicit */int) var_5))))))) > (((/* implicit */long long int) (~(((unsigned int) (short)(-32767 - 1)))))));
    var_16 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)59800)), (max((((/* implicit */int) ((((/* implicit */_Bool) (signed char)101)) || (((/* implicit */_Bool) var_11))))), ((~(((/* implicit */int) var_7))))))));
}
