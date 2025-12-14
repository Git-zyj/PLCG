/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32425
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
    var_13 = max((var_11), (((/* implicit */long long int) (~(((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [1] = ((/* implicit */unsigned char) arr_5 [i_0]);
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (signed char)-109))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_12)), (var_5)))))) ? (min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) 0U)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) == (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_5)))))) >= (((/* implicit */int) var_10))));
}
