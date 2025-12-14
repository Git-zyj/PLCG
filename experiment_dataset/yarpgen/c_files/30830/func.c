/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30830
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
    var_10 ^= ((/* implicit */signed char) max((min((max((15438308391777024851ULL), (((/* implicit */unsigned long long int) (signed char)-118)))), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((signed char) ((signed char) -1706234498)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) var_0))))));
                var_12 *= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_2 [i_0]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) var_0);
}
