/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205791
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
    var_17 = (!(((/* implicit */_Bool) var_14)));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_3))));
    var_19 = ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) 957459235U)) ? (13251043454058266433ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (min((((/* implicit */unsigned long long int) var_16)), (var_2)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 &= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (unsigned short)511)), (var_9))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [12U])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)65025))))) : (min((3337508060U), (((/* implicit */unsigned int) -162814664)))))))));
                var_21 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
            }
        } 
    } 
}
