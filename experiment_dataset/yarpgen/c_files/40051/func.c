/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40051
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 -= ((((/* implicit */_Bool) (~((~(var_15)))))) ? (((/* implicit */int) (unsigned short)1897)) : (var_4));
                arr_5 [i_0] [(unsigned char)8] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)1897)), (601097102861189836ULL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (min((23U), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (1149302953)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63638)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))))))));
    var_19 = ((/* implicit */unsigned char) var_13);
    var_20 = ((/* implicit */unsigned long long int) var_2);
}
