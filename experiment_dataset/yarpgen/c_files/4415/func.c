/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4415
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
    var_19 = ((/* implicit */int) max((var_19), (((max((((/* implicit */int) (!(((/* implicit */_Bool) 3304990128U))))), ((-(((/* implicit */int) var_9)))))) << ((+(((var_14) / (var_14)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_0))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) (~(var_10)))))))));
        var_21 -= (+(((unsigned int) (signed char)-72)));
    }
    for (int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), ((((+(arr_1 [i_1]))) / (((/* implicit */unsigned int) ((1073217536) & (((/* implicit */int) (short)-9932)))))))));
        var_23 &= ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
        var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((signed char) var_12)), (arr_2 [(unsigned short)2]))))));
    }
}
