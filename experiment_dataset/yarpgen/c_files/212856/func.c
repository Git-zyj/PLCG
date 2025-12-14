/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212856
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_9)))))))) ? (((/* implicit */int) ((_Bool) (-(var_0))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_20 *= ((/* implicit */unsigned long long int) max((arr_0 [4LL] [i_1]), (((/* implicit */long long int) var_15))));
                var_21 = ((/* implicit */short) max((max((-3192561872776298615LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) arr_4 [17] [i_1] [15U]))));
            }
        } 
    } 
}
