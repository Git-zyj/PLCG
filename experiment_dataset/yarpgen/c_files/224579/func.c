/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224579
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
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -907707244)) ? (2294577958U) : (((/* implicit */unsigned int) 907707243))));
                var_19 = ((/* implicit */int) max((max(((+(4305195215399802500ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -907707238)) ? (524256U) : (((/* implicit */unsigned int) -907707244))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1])) ? (((-907707243) / (-907707243))) : ((-(((/* implicit */int) (signed char)-60)))))))));
                var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                var_21 = ((/* implicit */unsigned int) min((var_21), ((~(((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) == (arr_5 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) : (arr_0 [0ULL])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) (short)-28148);
    var_23 = max((((((/* implicit */_Bool) 907707243)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))))), (9223372036854775808ULL));
}
