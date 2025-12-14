/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22763
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) <= (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_12)))))) * (((((/* implicit */_Bool) arr_1 [(signed char)10])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32303))) : (var_14)))))));
                var_18 = min((((/* implicit */short) ((signed char) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (min(((short)-32295), ((short)32303))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_14);
            }
        } 
    } 
    var_19 = ((/* implicit */int) (~(((unsigned long long int) ((var_8) <= (((/* implicit */unsigned long long int) var_10)))))));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (max((var_10), (((/* implicit */unsigned int) min(((short)-31041), ((short)-31030)))))) : (max(((-(var_0))), (var_0))))))));
}
