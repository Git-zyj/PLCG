/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231570
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
    for (long long int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max((2765263822U), (((/* implicit */unsigned int) (unsigned short)3508)))))));
                var_17 = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) 3421974794379433058LL)) > (var_1)))));
                var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) 5470091248752259142ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)16566))) - (arr_0 [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57194)))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_7);
    var_20 = ((/* implicit */long long int) var_11);
}
