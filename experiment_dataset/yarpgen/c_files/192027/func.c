/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192027
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((7981074575647628606ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)124), (var_3)))))))) ? ((~(1073741824U))) : (min((((/* implicit */unsigned int) var_3)), (((1329568190U) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                var_12 = ((6063961236303766785ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))));
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (-(((unsigned long long int) arr_2 [i_0 - 1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) var_5)))))), (2192720095U)));
}
