/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202290
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
    var_12 |= ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((max((((/* implicit */short) (signed char)(-127 - 1))), ((short)-21764))), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(signed char)0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)255))))))));
                arr_6 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-112))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) 2147483627)) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (4192256U) : (((/* implicit */unsigned int) -1540825674)))) : (((/* implicit */unsigned int) (+((-(558194440)))))))))));
            }
        } 
    } 
}
