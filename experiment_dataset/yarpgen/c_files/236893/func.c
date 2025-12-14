/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236893
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
    var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((signed char) var_4)))))), (((((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) * (((/* implicit */unsigned long long int) ((long long int) var_0)))))));
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) * (min((((/* implicit */unsigned int) (signed char)120)), (718918674U)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)1082)) >> (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) var_2);
                arr_5 [i_1] = ((/* implicit */signed char) var_4);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_0);
}
