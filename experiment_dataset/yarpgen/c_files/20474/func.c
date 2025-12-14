/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20474
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_1 + 1] [i_0] [i_0] = (-(((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (arr_1 [i_1 + 1] [i_1 + 1]) : (arr_1 [i_1 + 1] [i_1 + 1]))));
                arr_7 [i_0] [i_0] = var_12;
                arr_8 [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0]))) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) (!((_Bool)1))))))));
                arr_9 [i_0] = ((((/* implicit */_Bool) (+(12343813409325165527ULL)))) ? (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) (-((((_Bool)0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
    var_17 = ((/* implicit */_Bool) var_8);
}
