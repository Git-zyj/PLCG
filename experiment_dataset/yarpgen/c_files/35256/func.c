/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35256
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */int) var_5))));
    var_20 = ((/* implicit */signed char) ((((((var_8) + (9223372036854775807LL))) << (((var_18) - (1374345479))))) == (((/* implicit */long long int) var_11))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((unsigned long long int) arr_3 [i_1] [i_0] [i_0])) != (((/* implicit */unsigned long long int) max((arr_3 [i_0] [i_1] [i_0]), (((((/* implicit */int) var_3)) % (((/* implicit */int) (unsigned short)46634)))))))));
                arr_4 [i_0] = ((/* implicit */_Bool) max((arr_0 [i_0]), (((((/* implicit */int) (unsigned char)201)) * (((/* implicit */int) var_5))))));
            }
        } 
    } 
}
