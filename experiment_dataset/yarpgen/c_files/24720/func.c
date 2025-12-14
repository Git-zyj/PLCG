/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24720
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
    var_14 = ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (((min((3499637000U), (((/* implicit */unsigned int) var_1)))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)15783), (((/* implicit */unsigned short) ((short) (short)9687)))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) var_1)) + (((/* implicit */int) var_2))))))) : (((795330303U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)9696))))))))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (!(((var_11) >= (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
            }
        } 
    } 
    var_17 |= ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_5)))))) ? (((long long int) ((unsigned int) var_8))) : (((long long int) var_4))));
}
