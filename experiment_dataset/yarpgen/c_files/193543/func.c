/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193543
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_11 ^= ((/* implicit */unsigned long long int) ((short) ((long long int) ((_Bool) var_2))));
                var_12 = ((/* implicit */int) ((unsigned long long int) ((long long int) ((unsigned char) arr_2 [i_0]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((int) ((_Bool) ((unsigned int) -8022596718732424402LL))));
    var_14 = ((unsigned long long int) ((unsigned int) ((unsigned int) var_10)));
    var_15 = ((/* implicit */short) ((unsigned long long int) ((unsigned char) ((unsigned char) var_4))));
}
