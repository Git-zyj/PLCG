/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197356
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
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_13))))), (((((/* implicit */unsigned int) var_5)) * (var_8)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max(((+(((/* implicit */int) (signed char)-47)))), (((((((/* implicit */int) (signed char)-103)) + (2147483647))) >> (((((/* implicit */int) (short)-21315)) + (21325))))))))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max((min((var_5), (((/* implicit */int) (short)21284)))), (-525452209)));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */_Bool) -1772496308)) || (((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) var_13)))));
}
