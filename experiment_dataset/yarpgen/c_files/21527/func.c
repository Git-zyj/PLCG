/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21527
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
    var_13 = ((/* implicit */unsigned char) 0LL);
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) 2147483647))), (-1LL)))) ? (11108493699696121069ULL) : (((/* implicit */unsigned long long int) -1LL)))))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((((/* implicit */int) ((short) 0LL))), (max((((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)45277)))), (((((/* implicit */_Bool) 4148605115U)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) var_2)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) var_9);
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) -4LL))));
                var_17 = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (-26LL))))))), (((signed char) ((7897926475436380620LL) + (15LL))))));
            }
        } 
    } 
}
