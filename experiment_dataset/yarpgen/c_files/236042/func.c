/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236042
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
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((((/* implicit */int) (short)29648)), (max((((/* implicit */int) (short)8192)), ((+(((/* implicit */int) (unsigned char)214)))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((int) ((unsigned short) var_15))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (var_14)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_18)), (var_17)))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15)))))) % (((/* implicit */int) var_18))));
}
