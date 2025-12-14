/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49516
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (max((var_2), (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (((/* implicit */long long int) 927156889U)))), (((/* implicit */long long int) min((4294967292U), (((/* implicit */unsigned int) var_9)))))));
            }
        } 
    } 
    var_14 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-25))))))) ? (((((((((/* implicit */long long int) var_7)) | (-2415673657218187403LL))) + (9223372036854775807LL))) << (((((/* implicit */int) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))))) - (1))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
}
