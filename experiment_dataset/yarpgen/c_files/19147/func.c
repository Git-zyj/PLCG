/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19147
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 *= ((/* implicit */unsigned short) var_10);
        var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)16259)) && (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-23643)) && (((/* implicit */_Bool) -7443409930775618729LL))))))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (((+((~(var_5))))) == (((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_11)), (var_8))), (((/* implicit */unsigned int) min((var_4), (((/* implicit */short) (_Bool)0)))))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((-4123880334217800285LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_18 |= ((/* implicit */short) var_2);
}
