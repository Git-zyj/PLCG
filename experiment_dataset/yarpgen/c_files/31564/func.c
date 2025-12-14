/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31564
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
    var_12 |= ((/* implicit */signed char) ((int) var_9));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(unsigned char)9] = arr_3 [i_1] [i_1];
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((_Bool) 1407824617))) : (((((/* implicit */_Bool) 1407824625)) ? (-1407824618) : (-4194304))))) > (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)248)) > (-1407824610))))))));
                var_13 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))));
                var_14 = (unsigned char)8;
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (-((~(((int) var_8)))))))));
    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1407824617)) ? (((/* implicit */int) (short)31822)) : (((/* implicit */int) var_3))));
}
