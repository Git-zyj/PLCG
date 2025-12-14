/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206211
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
    var_11 = ((/* implicit */unsigned char) ((((max((var_7), (((/* implicit */long long int) var_2)))) + (9223372036854775807LL))) << (((((((/* implicit */int) var_1)) + (20))) - (12)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [i_1 + 2] = ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [(signed char)12])) ? (((((/* implicit */_Bool) 2046472168U)) ? (2248495128U) : (2248495122U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_1]))))) ? (((/* implicit */int) var_8)) : (var_2)))));
                var_12 = ((/* implicit */long long int) 2672704556U);
                var_13 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                arr_5 [i_0 - 1] [5ULL] [i_1] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
            }
        } 
    } 
}
