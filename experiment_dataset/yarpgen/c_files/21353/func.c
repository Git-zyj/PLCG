/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21353
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 &= ((/* implicit */int) min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)30815)), (((0) + (arr_1 [i_0] [i_1]))))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (max((arr_5 [9ULL] [i_1]), (((/* implicit */int) arr_0 [i_0])))))))));
                var_22 *= ((/* implicit */unsigned long long int) 1032192);
                var_23 = ((/* implicit */int) (signed char)-7);
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) 738362865434172875ULL))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) var_18);
}
