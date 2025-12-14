/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19984
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
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) 268434432)), (4294967295U))) : (max((((/* implicit */unsigned int) var_8)), (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (-268434432)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)162)) || (((/* implicit */_Bool) var_0)))))) : (max((((/* implicit */long long int) 268434448)), (var_0))))));
    var_12 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)2438))) : (0LL)))) ? (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) (unsigned short)19303))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))))))));
                    var_14 -= ((/* implicit */long long int) 0ULL);
                }
            } 
        } 
    } 
}
