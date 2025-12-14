/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242801
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
    var_15 &= ((/* implicit */long long int) ((unsigned char) var_9));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81))) : (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)81))) - (var_0))) << (((((/* implicit */int) (unsigned char)81)) - (81)))))));
                var_16 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) var_13)), (9223372036854775807LL))), (((/* implicit */long long int) (+(arr_1 [(unsigned char)10]))))));
            }
        } 
    } 
    var_17 = var_0;
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)53162)), (((unsigned int) (+((-9223372036854775807LL - 1LL))))))))));
}
