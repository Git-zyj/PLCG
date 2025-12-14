/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52711
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
    var_17 = ((/* implicit */short) (~(((unsigned int) min((824212443), (var_0))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [8LL] |= ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))))) & (arr_2 [i_2] [i_1] [i_0]))), (max((((/* implicit */unsigned long long int) ((int) arr_3 [(unsigned char)8] [i_1]))), (min((((/* implicit */unsigned long long int) var_5)), (0ULL)))))));
                    var_18 = ((/* implicit */unsigned char) (~(max((7426924175411889368ULL), (((/* implicit */unsigned long long int) var_10))))));
                }
            } 
        } 
    } 
}
