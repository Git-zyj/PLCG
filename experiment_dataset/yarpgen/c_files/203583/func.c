/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203583
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
    var_11 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_2 [i_1]))))) : (min((201838263U), (((/* implicit */unsigned int) arr_6 [(unsigned short)4]))))))));
                arr_7 [i_0] [10LL] [i_1] = ((/* implicit */unsigned long long int) ((short) arr_1 [i_0 - 1] [i_1 + 2]));
                var_13 = ((((/* implicit */_Bool) (~(max((-7405193086040250662LL), (8913690282768676990LL)))))) ? (min((arr_1 [i_1 - 2] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
            }
        } 
    } 
}
