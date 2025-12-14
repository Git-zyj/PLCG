/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208389
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
    var_20 = min((((/* implicit */long long int) (short)3091)), (var_0));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) max((((/* implicit */int) var_14)), (((((/* implicit */int) arr_2 [i_0] [i_0])) & (((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))))));
        var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_17)) + (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_11))) - (-8314475346706041604LL))))), (var_0)));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_5)))))) - (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) max((var_7), (((/* implicit */short) arr_0 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (short)32758)))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_1] [i_1 + 1])), (8314475346706041603LL)))) % ((~(8232141206283456872ULL))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [(signed char)3])) & (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])))))));
    }
    var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25591)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((5514999707436382551LL) | (((/* implicit */long long int) ((/* implicit */int) min((var_18), (((/* implicit */short) (signed char)90))))))))));
}
