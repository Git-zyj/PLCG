/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244382
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
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 -= ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0 + 1]));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((int) (+(((/* implicit */int) arr_0 [i_0])))))) - (((((/* implicit */_Bool) ((int) arr_4 [i_0] [i_0 - 1]))) ? (max((arr_3 [i_0] [i_0] [i_1]), (arr_2 [i_1] [i_0]))) : (((unsigned int) arr_2 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_16)) * (((/* implicit */int) var_9)))) : (((/* implicit */int) ((signed char) var_13))))));
    var_22 = ((unsigned char) var_3);
}
