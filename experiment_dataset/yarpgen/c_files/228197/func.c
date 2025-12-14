/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228197
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
    var_17 = ((/* implicit */unsigned long long int) var_13);
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)31744)) ? (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)9714))) + (11820735657219086685ULL)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_13)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_11))) : (658871532U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(max((-4457108799198444935LL), (((/* implicit */long long int) var_13))))));
                var_19 -= ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) != (var_0))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)31744))) | (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13162))) <= (((((/* implicit */_Bool) var_15)) ? (var_11) : (var_13))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2402701243U)))) ? (((((/* implicit */_Bool) 480U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31744))) : (3U))) : (12582912U))));
            }
        } 
    } 
}
