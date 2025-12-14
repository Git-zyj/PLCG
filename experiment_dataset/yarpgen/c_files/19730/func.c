/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19730
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) 6815610109586926600LL);
                arr_5 [11LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_2 [i_0] [i_0]) - (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) min(((-(131760017U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)76))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))));
}
