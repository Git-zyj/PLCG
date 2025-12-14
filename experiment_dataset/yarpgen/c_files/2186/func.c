/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2186
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
    var_14 += ((/* implicit */unsigned int) ((int) -1027704983));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)38656))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */long long int) (-(var_3)))) ^ (((long long int) var_6)))));
    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((-1027704983) - (((/* implicit */int) (_Bool)1)))) : (max((max((((/* implicit */int) var_7)), (var_9))), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_5)))))))));
}
