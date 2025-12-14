/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242266
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_5 [0U] [i_0] [i_0]))));
                    arr_9 [i_0] [(unsigned short)4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((int) var_1)) >> (((((((/* implicit */int) (short)25066)) - (((/* implicit */int) var_14)))) - (25048)))))) ? (((long long int) ((short) var_2))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_2] [i_1]), (((/* implicit */short) var_11))))))));
                    var_21 = ((/* implicit */_Bool) ((short) max((((/* implicit */short) arr_4 [i_1] [i_1])), (((short) arr_3 [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */unsigned short) var_15);
}
