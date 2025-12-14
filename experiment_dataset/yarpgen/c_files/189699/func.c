/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189699
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
    var_17 = ((/* implicit */unsigned char) 8878828615544037355LL);
    var_18 = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (var_7))), (var_12)))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (274810798080ULL)));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_16))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (arr_4 [i_0] [i_0])))));
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) var_11))), (max((((/* implicit */unsigned long long int) var_1)), (274810798080ULL)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) min(((short)4191), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_11))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) % (var_4)))))));
            }
        } 
    } 
}
