/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4175
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
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_1 [i_0]))));
        var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)-25954)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((((_Bool)1) && (((/* implicit */_Bool) (short)3)))))))) : (max(((((_Bool)1) ? (327681999742525235ULL) : (((/* implicit */unsigned long long int) 3926144431356778341LL)))), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)0)))))));
    }
    var_15 = ((/* implicit */short) max((var_15), (var_4)));
}
