/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210434
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
    var_17 ^= ((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_10) - (3565197167U)))));
    var_18 |= ((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)56428)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_3 [i_1]))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) var_3);
                var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 17984915259677407509ULL)) ? (((/* implicit */int) (unsigned short)56428)) : (((/* implicit */int) (unsigned char)225))))));
                var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) ((unsigned char) (unsigned char)37))) : (-1439022834)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-6287))))) : (((/* implicit */int) (unsigned short)9107))));
            }
        } 
    } 
}
