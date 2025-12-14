/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223482
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
    var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_5)) & (((/* implicit */int) var_5)))), (((/* implicit */int) var_0))))) ? (min((var_4), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 + 3] [(signed char)13])) & (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) (~(1919783853U)))) : (((unsigned long long int) 4313242053087342595ULL)));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -889094945)), ((~(arr_1 [i_1 - 1])))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-6581122303825127213LL), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 3]))) : (1125899905794048LL)))))) ? ((+(4313242053087342595ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5289969801934665057LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
            }
        } 
    } 
}
