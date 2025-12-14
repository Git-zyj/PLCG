/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203599
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8543813160874905868LL)) ? (((((((/* implicit */unsigned long long int) var_11)) < (6864905344201615805ULL))) ? (max((((/* implicit */long long int) var_7)), (-4557648410293525589LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 0ULL)))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)209)), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (unsigned short)8626))))));
                var_15 += ((/* implicit */unsigned char) ((unsigned int) 8947049891157115249ULL));
            }
        } 
    } 
}
