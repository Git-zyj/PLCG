/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246448
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
    var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_8))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) != (var_1))))))) ? (max((((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_4))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) > (1152921504539738112LL)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))));
    var_21 = ((/* implicit */unsigned char) max((-2036155804824813294LL), (((/* implicit */long long int) ((_Bool) ((_Bool) var_19))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_3 [i_1] [i_1]), (((/* implicit */short) arr_2 [i_0] [i_0] [i_1 - 1]))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (2093167415U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112)))))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                arr_4 [i_1] [i_1] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */int) max((max((arr_2 [i_0] [i_0] [(_Bool)1]), (arr_0 [i_1]))), (arr_0 [i_1])))) == ((-(((/* implicit */int) ((_Bool) var_14)))))));
            }
        } 
    } 
}
