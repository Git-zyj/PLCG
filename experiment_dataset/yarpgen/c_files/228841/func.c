/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228841
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) != (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (var_5)))), (var_0))))));
    var_16 = ((/* implicit */long long int) var_10);
    var_17 |= var_13;
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(unsigned char)9] [(unsigned char)9] [i_0 + 3] = ((/* implicit */short) ((signed char) ((short) arr_2 [i_0 - 4] [i_0 + 4])));
                arr_7 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) (unsigned short)20907)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) max((var_6), (((/* implicit */short) (unsigned char)62))))) ? (((/* implicit */long long int) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) : (((long long int) var_8))))));
                arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (~(arr_2 [i_0 + 2] [i_0 + 2])));
            }
        } 
    } 
}
