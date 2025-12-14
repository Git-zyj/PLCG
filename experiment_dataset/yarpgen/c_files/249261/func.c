/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249261
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
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) max((((((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) ^ (((/* implicit */int) arr_3 [i_0])))) & (((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned char)93)))))), (max((((var_9) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_7)))), ((+(((/* implicit */int) arr_3 [i_0]))))))));
                arr_5 [0LL] [i_0] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_0 [i_0 + 3]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) (+(min((((/* implicit */int) (unsigned char)86)), ((+(((/* implicit */int) (signed char)88))))))));
}
