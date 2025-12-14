/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42252
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_0))))) == (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (signed char)-112)))))))) - (((/* implicit */int) arr_2 [i_1]))));
                var_12 *= ((/* implicit */unsigned char) arr_1 [i_0]);
            }
        } 
    } 
    var_13 += ((/* implicit */unsigned char) ((unsigned long long int) (~(max((var_5), (((/* implicit */int) var_4)))))));
    var_14 = ((/* implicit */unsigned char) max(((signed char)(-127 - 1)), ((signed char)111)));
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) min((var_4), (((/* implicit */signed char) ((var_5) <= (((/* implicit */int) var_1))))))))));
}
