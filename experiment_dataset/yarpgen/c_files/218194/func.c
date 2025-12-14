/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218194
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((int) var_14)))));
    var_20 = ((/* implicit */int) 453200357423858583ULL);
    var_21 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */_Bool) -1536965559);
                var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [(unsigned char)11] [i_1]))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((unsigned int) var_7));
}
