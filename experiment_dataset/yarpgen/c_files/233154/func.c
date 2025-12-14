/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233154
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_10 += (+(5856055085344691602ULL));
                var_11 = ((/* implicit */unsigned long long int) 1008057972);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) min((((int) (!(((/* implicit */_Bool) 22ULL))))), (((/* implicit */int) min((((/* implicit */short) var_7)), (var_6))))));
    var_13 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (2145857170486997978ULL) : (9249569833314089227ULL))));
}
