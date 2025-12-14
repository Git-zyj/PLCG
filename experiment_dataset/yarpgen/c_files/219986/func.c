/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219986
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) var_1);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1]);
                var_18 = ((/* implicit */long long int) (_Bool)1);
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((signed char) (_Bool)1))))) : (((((unsigned int) arr_2 [i_0])) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_0);
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned short) (unsigned short)19001))))) : (((/* implicit */int) var_13))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10))))) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (var_5))))))) > (var_8)));
    var_22 = ((/* implicit */_Bool) min((((long long int) (unsigned short)48894)), (((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)61953)))), (var_3))))));
    var_23 = (+((-(((((/* implicit */unsigned long long int) var_7)) - (12220573502319321568ULL))))));
}
