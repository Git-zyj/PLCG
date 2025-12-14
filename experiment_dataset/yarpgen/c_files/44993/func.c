/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44993
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? ((~(((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210)))));
                var_11 = max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_3 [i_1] [i_0])), (25U)))), (((((/* implicit */_Bool) (unsigned char)200)) ? (min((-9223372036854775786LL), (((/* implicit */long long int) (unsigned short)12011)))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))));
                var_12 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (max((((((/* implicit */_Bool) -9223372036854775799LL)) ? (((/* implicit */long long int) var_8)) : (-3614360512912189925LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 5842247353493093515LL)) ? (2744728588U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) : (-9223372036854775782LL));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_5);
}
