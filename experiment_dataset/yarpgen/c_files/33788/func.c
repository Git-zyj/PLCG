/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33788
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
    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_2)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_16 *= ((/* implicit */unsigned short) ((int) ((unsigned short) max((1116892707587883008LL), (((/* implicit */long long int) arr_0 [i_1]))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((long long int) arr_0 [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) -1116892707587882996LL)))))))) ? (arr_1 [i_1 + 1] [(unsigned short)6]) : ((-(((((/* implicit */int) var_5)) + (arr_1 [(signed char)14] [i_1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_14))));
}
