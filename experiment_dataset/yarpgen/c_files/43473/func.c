/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43473
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (_Bool)1)))))))) ? (min((((/* implicit */long long int) var_12)), (var_6))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [i_1] = ((/* implicit */int) ((long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)80)) : (var_2))))));
                arr_5 [(short)3] |= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(((var_6) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & (var_6)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) var_4);
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_6)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)224)) != (((/* implicit */int) (!((_Bool)1))))))) : (((/* implicit */int) (_Bool)1)))))));
}
