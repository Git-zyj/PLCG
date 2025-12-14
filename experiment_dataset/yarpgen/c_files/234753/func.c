/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234753
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
    var_15 = ((/* implicit */_Bool) min(((-((~(((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) (short)158)) == (((/* implicit */int) (short)178))))) : ((~(((/* implicit */int) arr_5 [i_1]))))))));
                var_17 = ((/* implicit */_Bool) ((var_1) << ((((((~(((/* implicit */int) (unsigned char)93)))) + (109))) - (15)))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */short) -8359378779638002714LL);
                var_18 = ((/* implicit */short) max((min((var_2), (((/* implicit */unsigned int) arr_5 [i_0])))), (((/* implicit */unsigned int) max((((/* implicit */int) (short)163)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (short)-170)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_8);
    var_20 = var_4;
}
