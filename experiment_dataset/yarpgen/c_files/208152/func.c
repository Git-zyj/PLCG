/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208152
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_11 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_1 [i_0])))) + (2147483647))) << (((((((/* implicit */_Bool) arr_1 [i_0])) ? (2626195860483019821LL) : (((/* implicit */long long int) 922953571U)))) - (2626195860483019821LL)))))) : (((/* implicit */unsigned int) (((((((~(((/* implicit */int) arr_1 [i_0])))) - (2147483647))) + (2147483647))) << (((((((/* implicit */_Bool) arr_1 [i_0])) ? (2626195860483019821LL) : (((/* implicit */long long int) 922953571U)))) - (2626195860483019821LL))))));
        var_12 = ((/* implicit */unsigned char) (((_Bool)1) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-1824752992)))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)-26761))));
        arr_3 [i_0] = ((/* implicit */short) ((arr_2 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
    }
    var_14 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_4))))) - ((+(2626195860483019812LL))))));
}
