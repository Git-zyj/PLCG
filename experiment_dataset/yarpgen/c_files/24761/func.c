/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24761
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
    var_15 = ((/* implicit */_Bool) max(((~((~(((/* implicit */int) (unsigned char)40)))))), (((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) var_7))), (var_9))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (var_5)))), (arr_2 [i_2 - 4] [i_1])));
                    var_16 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)40))))), (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))) : (var_6))), (((/* implicit */unsigned int) min((var_8), (((/* implicit */short) (unsigned char)205)))))))));
                    var_17 *= var_5;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_6)), (var_3))), (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_11)))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)51)), (965075717604268993ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
