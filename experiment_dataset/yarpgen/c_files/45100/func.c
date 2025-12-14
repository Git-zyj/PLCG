/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45100
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
    var_12 = ((/* implicit */unsigned int) (signed char)127);
    var_13 = ((/* implicit */short) -8020688265753267935LL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) arr_6 [i_2] [i_2] [3]);
                    var_15 ^= ((/* implicit */long long int) ((15514950850214570094ULL) << (((2931793223494981522ULL) - (2931793223494981516ULL)))));
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */int) (unsigned char)30);
}
