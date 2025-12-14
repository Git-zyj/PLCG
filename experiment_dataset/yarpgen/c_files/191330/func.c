/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191330
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
    var_20 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned char)133)) || (((/* implicit */_Bool) 0ULL)))));
                var_22 ^= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0])))));
            }
        } 
    } 
}
