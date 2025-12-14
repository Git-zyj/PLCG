/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232261
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) max((arr_3 [i_1] [i_1]), (arr_5 [i_0])))) ^ (7848030256469494833LL)));
                var_16 &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1228275045)) ? (var_12) : (1228275031)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_0);
    var_18 ^= ((/* implicit */int) ((var_10) << (((/* implicit */int) var_4))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) 1228275048))), (((-1228275022) + (((/* implicit */int) (unsigned char)89))))))) - (3656623362U)));
    var_20 *= ((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) -1228275048))));
}
