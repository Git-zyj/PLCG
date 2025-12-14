/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199057
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
    var_17 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((max((((1788375677234223535ULL) / (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) -424490531546096533LL)))), (((/* implicit */unsigned long long int) min((min((var_7), (((/* implicit */short) var_14)))), (((/* implicit */short) arr_0 [i_0] [i_1])))))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) arr_6 [i_1])), (var_8))) : (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), (arr_6 [i_0])))), (((((/* implicit */_Bool) arr_1 [5U] [5U])) ? (((/* implicit */int) arr_0 [i_0] [(unsigned short)0])) : (((/* implicit */int) (signed char)-34)))))))));
            }
        } 
    } 
}
