/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48511
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_7))) == (((/* implicit */long long int) (+(var_3)))))))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((max((((/* implicit */long long int) arr_3 [i_0] [i_1 + 1])), (9223372036854775807LL))) / (((((/* implicit */_Bool) ((var_11) | (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44872)))))) : (((arr_1 [(short)12]) % (4766753932736854929LL))))))))));
                var_14 = ((/* implicit */long long int) (short)32767);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) var_4)) ? (4294967295U) : (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_2)))))))) - (((long long int) max((((/* implicit */long long int) var_8)), (var_7))))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((var_3) + (194387927U))))));
}
