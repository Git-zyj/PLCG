/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242594
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))))) ? (((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (((int) arr_1 [i_0])) : (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_16 = ((/* implicit */signed char) min((((/* implicit */int) arr_0 [(signed char)9] [i_0 + 2])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1428837024U)) ? (2866130272U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113)))))) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 3]))))));
    }
}
