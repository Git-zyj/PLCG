/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222703
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
    var_11 += ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) var_0);
                var_13 -= ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
                arr_5 [i_0] [i_1] = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10864831004492151173ULL));
            }
        } 
    } 
}
