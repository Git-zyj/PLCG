/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24160
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
    var_11 = min((((/* implicit */int) var_10)), (max((((/* implicit */int) ((var_3) < (2657034287U)))), (var_9))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) ((unsigned int) ((arr_2 [i_0 + 2]) ? (min((((/* implicit */unsigned long long int) 2657034287U)), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_0]))))));
                arr_5 [i_0] [(unsigned short)8] [i_1] = ((/* implicit */unsigned short) 1637933007U);
                var_13 = ((/* implicit */int) min((var_13), ((-(((/* implicit */int) (unsigned short)38844))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)38861)));
}
