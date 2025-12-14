/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54690
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
    var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)14433))))) : (((96178385U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))), (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), ((-(((/* implicit */int) (short)-30169)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0 - 1] [i_0] = min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32752))))) - (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 4611686018427387904LL)) : (var_2))))));
        var_20 -= ((/* implicit */unsigned long long int) -4611686018427387892LL);
    }
}
