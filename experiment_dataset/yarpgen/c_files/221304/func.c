/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221304
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
    var_13 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) var_4);
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (var_10)))), ((~(arr_1 [i_1])))))) ? (min((((((/* implicit */_Bool) var_10)) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) min(((signed char)-78), (((/* implicit */signed char) (_Bool)1))))))) : (((/* implicit */long long int) (-(1518623345U))))));
            }
        } 
    } 
}
