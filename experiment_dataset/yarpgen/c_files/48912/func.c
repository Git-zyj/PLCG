/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48912
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
    var_17 = ((/* implicit */int) ((unsigned int) var_9));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) - (var_8)));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1]))))) || (((/* implicit */_Bool) arr_3 [i_1]))));
                var_19 -= ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) (unsigned char)161)))));
            }
        } 
    } 
    var_20 &= (+(((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (unsigned char)103)))));
}
