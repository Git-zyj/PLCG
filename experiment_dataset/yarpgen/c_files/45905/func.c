/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45905
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
    var_18 = ((/* implicit */short) (unsigned short)24576);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_8))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_2 [i_0] [i_1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) max((max((var_5), (((/* implicit */unsigned char) var_13)))), (((/* implicit */unsigned char) var_1))));
    var_21 = ((/* implicit */unsigned long long int) 4294967291U);
}
