/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20904
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 ^= ((/* implicit */unsigned char) (~(min((min((var_5), (var_8))), (((/* implicit */int) arr_1 [i_1 - 1]))))));
                var_19 &= ((/* implicit */int) (-(min((3207431535781510507LL), (((/* implicit */long long int) 0U))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_17)), (4294967295U)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (unsigned short)28348)))) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37187)))))))) >= ((-(min((((/* implicit */unsigned int) var_11)), (4294967275U)))))));
}
