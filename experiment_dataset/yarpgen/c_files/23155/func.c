/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23155
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((unsigned short)57768), (((/* implicit */unsigned short) var_6))))), (((((/* implicit */_Bool) (unsigned short)25285)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? ((-(1974442230))) : (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (-((~(((/* implicit */int) var_3)))));
                var_13 = ((/* implicit */unsigned int) min((var_13), ((-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7768))) - (1973487092U)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_10);
}
