/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39458
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned char)133)), (3153910512U)));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((arr_0 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 3]))) : (arr_0 [9ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 + 1])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_3);
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (4294967295U))))));
    var_19 = ((/* implicit */signed char) var_14);
}
