/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22185
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_11 [i_2] [i_2] [3] [i_2 - 1] = (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)39829)));
                    var_19 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((-(arr_8 [i_0] [i_1] [i_2]))))))));
                    var_20 += ((/* implicit */unsigned int) (~((~(var_17)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) | (((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_5)) >> (((var_11) - (10955306780454505817ULL))))) : (((((/* implicit */int) var_13)) << (((((((/* implicit */int) var_0)) + (113))) - (7)))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))));
    var_22 = ((/* implicit */signed char) ((_Bool) var_11));
}
