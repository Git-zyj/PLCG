/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198645
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
    var_11 *= ((/* implicit */short) max((var_6), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)25955)) : (var_7))), (-8))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_12 = ((((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0] [i_1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 7)) != (var_9))))));
                var_13 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) 710261535U)), (7272298204327082475ULL))), (max((((/* implicit */unsigned long long int) var_0)), (arr_1 [i_0] [i_1])))));
            }
        } 
    } 
}
