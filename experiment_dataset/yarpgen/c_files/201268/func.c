/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201268
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
    var_15 = var_9;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 = ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_1])) : (((/* implicit */int) arr_4 [i_0]))))), (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_9))))));
                var_17 = (-(((long long int) arr_4 [i_0 + 1])));
                var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (arr_0 [i_0 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)97)))))) : (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (var_7)))) ? (((int) var_9)) : (((/* implicit */int) min((var_14), (var_14)))))))));
            }
        } 
    } 
}
