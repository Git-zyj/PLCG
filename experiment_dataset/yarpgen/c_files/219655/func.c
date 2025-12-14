/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219655
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
    var_10 = ((/* implicit */int) var_9);
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned char)255))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) : (min((((/* implicit */long long int) var_4)), ((-9223372036854775807LL - 1LL))))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((+(((/* implicit */int) (unsigned short)31335)))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))));
                var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))))))), (((long long int) arr_1 [i_0]))));
                var_14 = (+(((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_1])))) : (-9223372036854775783LL))));
                arr_5 [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 8279827723225738977LL))))));
            }
        } 
    } 
}
