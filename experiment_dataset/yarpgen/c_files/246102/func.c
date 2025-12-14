/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246102
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
    var_15 -= ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (short)-3731)), (var_0))), (((/* implicit */unsigned int) var_14))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) arr_2 [(signed char)10] [i_0] [i_0])), (min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)64266)))));
                    var_16 = ((/* implicit */unsigned int) (~((((-(4680529236443514688LL))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) max((var_7), (var_5)))) < (((/* implicit */int) ((short) var_12))))) ? (max((4468512080782510485ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)8376)), (var_2)))))) : (min((((/* implicit */unsigned long long int) min((var_7), (var_5)))), (var_6)))));
}
