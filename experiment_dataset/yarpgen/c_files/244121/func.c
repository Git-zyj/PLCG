/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244121
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_7))));
    var_17 = ((((/* implicit */_Bool) var_1)) ? (((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_7)))))))) : (((/* implicit */unsigned long long int) (-((-(var_15)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */unsigned short) arr_2 [i_0]);
                arr_6 [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_1] [4]) & (((/* implicit */unsigned long long int) (~(var_0))))));
                var_19 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((unsigned short) ((min((((/* implicit */unsigned long long int) var_13)), (var_14))) / (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) var_13))))))));
}
