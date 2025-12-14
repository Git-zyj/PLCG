/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223186
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)26445)) ? (((/* implicit */int) max(((short)-26436), ((short)-26445)))) : (((/* implicit */int) var_2))));
        arr_3 [i_0] [i_0] = max((var_7), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_4))))))));
    }
    var_13 = ((/* implicit */unsigned long long int) (!((!(((((/* implicit */_Bool) 3216732840U)) && (var_1)))))));
    var_14 = ((/* implicit */_Bool) (-(var_6)));
    var_15 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */signed char) var_1)), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7)))) : (((var_1) ? (((/* implicit */unsigned int) var_12)) : (1078234485U))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
