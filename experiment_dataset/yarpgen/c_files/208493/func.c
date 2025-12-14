/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208493
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)33383)) : (((/* implicit */int) var_12))))) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)16)) >= (((/* implicit */int) var_4))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_6 [(unsigned short)6] [(unsigned short)14] = ((/* implicit */short) ((int) ((_Bool) var_14)));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36752))) - (1386448560U))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_1]))));
    }
    var_16 = ((/* implicit */_Bool) min((((signed char) ((unsigned short) (unsigned short)10))), (var_9)));
}
