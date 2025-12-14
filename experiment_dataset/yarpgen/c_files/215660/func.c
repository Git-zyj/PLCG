/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215660
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
    var_11 = ((/* implicit */unsigned short) ((int) ((_Bool) ((long long int) 0))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = ((long long int) ((((long long int) 1719079950)) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0]))))));
                var_13 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_5))))))) - (((unsigned int) ((unsigned char) arr_0 [i_0])))));
                arr_4 [i_0] = ((/* implicit */int) ((_Bool) ((_Bool) ((unsigned short) 2136186569))));
            }
        } 
    } 
}
