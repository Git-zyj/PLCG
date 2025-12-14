/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224086
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [6LL] [(unsigned char)0] &= ((signed char) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) max(((unsigned char)45), ((unsigned char)29))))));
                    arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (1832495044123549682LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32)))));
                    var_15 = min(((signed char)119), ((signed char)127));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((long long int) var_5)))));
    var_17 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((9223372036854775793LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-99))) : (((var_3) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-50))))))), (-1461300616411030417LL)));
}
