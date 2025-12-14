/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31158
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
    var_11 = (unsigned char)247;
    var_12 = ((/* implicit */unsigned short) ((_Bool) 3760025393U));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (signed char)41)), (min((var_5), (var_4)))))));
                var_14 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (5267857460672090577LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)24)))))) ? (((((/* implicit */int) (unsigned char)10)) % (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (2050953693) : (((/* implicit */int) (unsigned char)29))))))), (min((((unsigned int) 3760025393U)), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)126)), (var_3)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_2);
}
