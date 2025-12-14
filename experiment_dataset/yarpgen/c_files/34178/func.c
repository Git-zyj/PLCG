/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34178
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))) : (0LL))) - (((/* implicit */long long int) ((var_5) - (var_2))))))) ? ((+(((/* implicit */int) ((var_3) >= (var_15)))))) : ((-(((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = arr_0 [i_0];
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_4 [0LL]))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) 65535U)) ? (((/* implicit */long long int) 1653662925U)) : (-1LL))))), (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (var_13))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_6)))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
}
