/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/399
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
    var_17 = ((/* implicit */unsigned int) var_3);
    var_18 = ((short) ((((((/* implicit */_Bool) (signed char)-1)) && ((_Bool)0))) ? (max((((/* implicit */int) (signed char)(-127 - 1))), (153431300))) : (((/* implicit */int) var_2))));
    var_19 = ((/* implicit */unsigned long long int) var_5);
    var_20 = ((/* implicit */unsigned long long int) (unsigned short)26736);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((signed char) (+(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((int) (-2147483647 - 1)))) ? (max((((/* implicit */int) arr_6 [i_0 - 1])), (2147483647))) : ((~(((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) ((_Bool) (short)-25060)))));
            }
        } 
    } 
}
