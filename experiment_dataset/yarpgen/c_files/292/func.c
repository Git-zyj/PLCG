/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/292
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)106)))))));
        var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */int) (unsigned short)65530)) >= (((/* implicit */int) (unsigned short)65535))))), (arr_1 [i_0] [i_0])));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(signed char)0] [i_0]))))) ? (var_9) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_15))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-42)) > (((/* implicit */int) (short)-11352))))))))));
    }
    var_22 = ((/* implicit */signed char) (unsigned char)78);
}
