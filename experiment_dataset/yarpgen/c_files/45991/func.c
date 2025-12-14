/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45991
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_9))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */short) max((-2026868245), (((/* implicit */int) (unsigned char)224))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) ((arr_3 [i_0 - 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (((2026868245) - (((/* implicit */int) (unsigned short)52860)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) var_1))))))) >= (((/* implicit */int) var_0)))))));
            }
        } 
    } 
}
