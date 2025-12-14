/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239646
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
    var_13 = var_0;
    var_14 *= ((/* implicit */int) ((unsigned long long int) ((var_11) == (((/* implicit */long long int) var_5)))));
    var_15 &= ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 8U)), (min((1070573960262745255ULL), (((/* implicit */unsigned long long int) 4294967288U))))));
                arr_5 [i_1] [i_1] [(short)7] = ((/* implicit */_Bool) arr_1 [i_0]);
                var_16 ^= ((/* implicit */short) ((((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [19LL]) <= (((/* implicit */long long int) var_12)))))) : (var_5))) << (((((unsigned int) var_7)) - (99U)))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) -836951785)), (((((/* implicit */_Bool) (unsigned short)32213)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11215))) : (var_5))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4675835566158899368LL))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) -4675835566158899369LL);
}
