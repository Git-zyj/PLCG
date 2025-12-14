/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21868
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
    var_17 = ((/* implicit */int) max((max((min((var_1), (var_10))), (((/* implicit */unsigned long long int) ((short) (_Bool)1))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)88))))) - (var_15)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) -180255140)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)31))))) : (((6000993796202028899ULL) / (((/* implicit */unsigned long long int) 4294967295U))))))));
                var_19 &= ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [(signed char)16])))) - (((((/* implicit */_Bool) 1944830863U)) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) >= (((/* implicit */int) (unsigned char)173))));
            }
        } 
    } 
}
