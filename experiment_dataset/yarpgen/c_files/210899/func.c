/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210899
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
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_10)));
    var_19 = min((var_9), (min((((/* implicit */long long int) min((var_7), (((/* implicit */signed char) var_4))))), (max((((/* implicit */long long int) var_6)), (-2305843009213693952LL))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-13);
        var_20 = ((/* implicit */long long int) (signed char)-123);
        var_21 *= ((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [(_Bool)1]);
    }
    var_22 = ((/* implicit */_Bool) 2305843009213693951LL);
}
