/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204244
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) (_Bool)1)));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_12);
                var_18 = ((/* implicit */unsigned int) var_15);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_12);
}
