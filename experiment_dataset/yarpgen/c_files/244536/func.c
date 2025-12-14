/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244536
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */int) ((var_14) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))));
                var_18 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */long long int) 16777184)) : ((-9223372036854775807LL - 1LL)))));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned short) var_14);
    var_20 = ((/* implicit */unsigned short) var_8);
}
