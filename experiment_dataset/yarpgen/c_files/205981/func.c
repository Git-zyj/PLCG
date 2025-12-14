/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205981
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2]))))), (max((var_2), (((/* implicit */long long int) arr_0 [i_0] [i_0 + 2]))))));
                var_16 ^= ((/* implicit */short) (+(min((((/* implicit */int) arr_1 [i_0 + 3] [i_1 + 1])), (((((/* implicit */int) (unsigned short)46211)) % (((/* implicit */int) (unsigned char)128))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (var_2) : (((/* implicit */long long int) (-((+(4294967277U))))))));
}
