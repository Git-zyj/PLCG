/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219802
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
    var_10 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (!((_Bool)1)));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-39))))), (((max((((/* implicit */unsigned int) (_Bool)1)), (var_9))) + (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (338774000))))))));
                var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551608ULL)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) (_Bool)1)))))));
                var_13 |= max((((unsigned int) ((((/* implicit */_Bool) (unsigned short)2285)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)255))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))));
            }
        } 
    } 
    var_14 ^= ((/* implicit */_Bool) var_0);
}
