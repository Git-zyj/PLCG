/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244610
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((var_11), (((/* implicit */long long int) ((max((var_16), (((/* implicit */long long int) var_8)))) <= (var_10)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) max((var_19), (min((-1099585416), ((-(134184960)))))));
                var_20 = ((/* implicit */unsigned int) arr_0 [i_0]);
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : ((-((-(536870912))))));
}
