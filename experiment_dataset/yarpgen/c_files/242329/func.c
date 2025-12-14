/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242329
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (_Bool)1))));
    var_12 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((((/* implicit */int) min((max((((/* implicit */short) (_Bool)1)), (arr_1 [(unsigned short)9]))), (((short) arr_3 [i_1] [i_1]))))), (((((/* implicit */_Bool) min(((signed char)15), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))))))))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_3)))) ? (((((((/* implicit */int) arr_3 [i_0] [i_0])) / (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) var_0))));
                var_15 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8503)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8503))) : (0U)))));
            }
        } 
    } 
}
