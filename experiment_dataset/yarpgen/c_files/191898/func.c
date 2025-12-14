/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191898
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
    var_19 |= ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) var_17)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [10LL] [i_1] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_0 [(signed char)0]))))))));
                var_20 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((int) min((((/* implicit */long long int) var_5)), (arr_1 [(short)10] [i_1 + 2]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) >= (var_1)))))))));
            }
        } 
    } 
}
