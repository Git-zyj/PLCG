/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243843
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
    var_14 = ((/* implicit */short) (-(var_0)));
    var_15 = ((/* implicit */signed char) var_2);
    var_16 -= ((/* implicit */short) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((+(((/* implicit */int) (signed char)-11)))) : (((/* implicit */int) ((short) var_7))))), ((+(((/* implicit */int) var_12))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((short) ((var_2) << (((((/* implicit */int) (unsigned short)1886)) - (1880))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */short) var_6);
                }
            } 
        } 
    } 
}
