/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2280
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
    var_15 = (-(((((/* implicit */_Bool) (unsigned char)200)) ? ((~(((/* implicit */int) var_10)))) : (max((((/* implicit */int) (signed char)40)), (2147483647))))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) 4294967279U))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_11))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))))));
    var_17 = ((/* implicit */_Bool) max((var_17), (var_3)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [(short)17] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) 0LL))), (min((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))));
                var_18 = ((/* implicit */short) (+(min((((/* implicit */int) ((signed char) 3932160LL))), (arr_5 [i_0] [i_1])))));
                var_19 = ((/* implicit */int) ((unsigned char) 4160749568LL));
            }
        } 
    } 
}
