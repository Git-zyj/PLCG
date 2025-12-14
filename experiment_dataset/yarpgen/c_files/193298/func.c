/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193298
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) var_11);
                arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 64136966U))) ? (var_13) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (max((var_1), (((/* implicit */unsigned int) arr_1 [i_1])))) : (((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */unsigned int) -1210216225)) : (var_1)))))));
                var_19 = ((/* implicit */signed char) var_13);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_14))));
    var_21 *= ((/* implicit */unsigned int) (unsigned char)142);
}
