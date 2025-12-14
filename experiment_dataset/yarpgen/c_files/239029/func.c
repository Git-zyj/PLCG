/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239029
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [4LL] [i_1]);
                var_14 ^= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) 2398664501059215658ULL);
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((15257000522354303091ULL), (3189743551355248525ULL))) : (((/* implicit */unsigned long long int) var_6)))))));
    var_17 -= ((/* implicit */short) var_10);
    var_18 |= ((/* implicit */unsigned short) var_6);
}
