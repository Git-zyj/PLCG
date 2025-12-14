/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204048
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
    var_16 -= var_14;
    var_17 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) ((_Bool) (unsigned char)127))), ((+(((/* implicit */int) (signed char)37)))))) == (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((min((0LL), (((/* implicit */long long int) (unsigned short)37992)))) >> (((/* implicit */int) max((min((var_10), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) min((arr_0 [i_0 + 3] [i_0 + 3]), ((_Bool)1)))))))));
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)37992))));
            }
        } 
    } 
    var_20 = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-62)))), (((/* implicit */int) var_14))))));
}
