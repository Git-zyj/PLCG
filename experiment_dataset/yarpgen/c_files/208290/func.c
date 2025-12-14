/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208290
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
    var_12 = ((((/* implicit */_Bool) 9502267369868316204ULL)) ? (((long long int) -8127668547803427836LL)) : (((/* implicit */long long int) (~(((unsigned int) var_1))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((9502267369868316185ULL) & (((/* implicit */unsigned long long int) -7868456376486514522LL))))) ? (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) 2503724439U)), (423997743091204398LL)))))) : (min((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_2 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min(((+(arr_2 [i_0 - 2] [i_0 - 2]))), (arr_2 [i_0 + 1] [i_0 + 1])));
    }
}
