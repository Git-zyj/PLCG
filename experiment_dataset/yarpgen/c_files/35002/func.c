/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35002
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) arr_3 [i_1]);
                var_20 = var_15;
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_16);
    var_22 = 1462842220984489235ULL;
    var_23 &= ((/* implicit */unsigned short) var_4);
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) min((18446744073709551594ULL), (16983901852725062380ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_5)))))) : (max((1462842220984489235ULL), (((/* implicit */unsigned long long int) var_12)))))))))));
}
