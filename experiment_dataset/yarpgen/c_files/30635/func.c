/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30635
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
    var_10 -= var_0;
    var_11 = ((/* implicit */unsigned short) var_4);
    var_12 = (!(((((/* implicit */int) min((var_4), (((/* implicit */short) var_7))))) <= ((~(var_0))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 &= min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) 1270592757U)) ? (2147483647) : (((/* implicit */int) (short)-13993))))));
    }
}
