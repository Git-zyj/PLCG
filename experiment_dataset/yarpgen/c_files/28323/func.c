/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28323
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
    var_18 = ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0))))), (11009682695829106901ULL))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7))) : (var_7)));
    var_20 = ((/* implicit */_Bool) ((short) ((_Bool) var_1)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (arr_5 [i_0 - 1] [(short)12])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0])) && (((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0]))))) : (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0])) ? (arr_5 [i_0 + 1] [i_0]) : (arr_5 [i_0 + 2] [i_0 - 1]))))))));
                var_22 = arr_5 [i_0] [i_0];
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_13);
}
