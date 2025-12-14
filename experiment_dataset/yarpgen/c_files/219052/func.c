/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219052
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [10LL] [i_1] [i_1]))));
                arr_6 [i_0] [12U] &= ((/* implicit */unsigned short) ((min((arr_1 [2] [i_0]), (arr_1 [i_0] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [9LL] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [(_Bool)1] [(_Bool)1] [(_Bool)1]), (arr_2 [i_1] [(short)13] [i_0]))))) : (((((/* implicit */_Bool) var_2)) ? (((arr_1 [i_0] [i_0]) ^ (var_6))) : (arr_1 [i_0] [i_1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_4)) + (8261)))))) ? (-306210587) : ((+(((/* implicit */int) (unsigned short)54846))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)45315))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (var_5)));
}
