/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228883
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
    var_10 ^= ((/* implicit */unsigned short) -1415904247);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) arr_0 [i_1]))));
                    var_12 ^= ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [(_Bool)1]);
                }
            } 
        } 
    } 
}
