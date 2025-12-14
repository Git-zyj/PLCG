/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239151
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((short) var_3)))));
    var_15 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)237))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)32768), (var_3)))) & (((/* implicit */int) var_3)))))));
    var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) (short)966)) - (962)))))) | (((var_6) ^ (((/* implicit */long long int) var_13))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (((1152921504606846976LL) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))))));
                var_18 |= (-(-8382834961488345235LL));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (unsigned short)18055);
}
