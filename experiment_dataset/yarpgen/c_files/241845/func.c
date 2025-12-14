/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241845
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
    var_20 = ((/* implicit */unsigned short) var_14);
    var_21 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_22 *= min((min(((unsigned short)1176), (((/* implicit */unsigned short) (unsigned char)50)))), ((unsigned short)65535));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (_Bool)0);
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (unsigned short)6956))));
                var_24 *= ((/* implicit */int) min((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)46340))), ((unsigned short)60959)));
            }
        } 
    } 
    var_25 *= ((/* implicit */short) 527382225);
}
