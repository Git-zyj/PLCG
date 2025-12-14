/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20192
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
    var_13 = ((/* implicit */short) ((long long int) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */int) (short)26495))))));
    var_14 ^= var_6;
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) >= (((/* implicit */int) ((signed char) (short)-18540))))))));
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) var_3)))))));
                var_16 = ((/* implicit */unsigned short) min((((long long int) arr_0 [i_0 - 3])), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) * (((/* implicit */int) (short)-18540)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11))))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))))))));
}
