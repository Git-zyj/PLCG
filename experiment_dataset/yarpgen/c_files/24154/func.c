/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24154
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
    var_15 += ((/* implicit */unsigned short) (_Bool)0);
    var_16 = ((/* implicit */unsigned short) var_14);
    var_17 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) ^ (2511667259U)))))));
                arr_6 [i_0] [(_Bool)1] &= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (1622921428))))) : (-1529486909)));
            }
        } 
    } 
    var_19 = var_6;
}
