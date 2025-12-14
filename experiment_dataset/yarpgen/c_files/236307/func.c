/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236307
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
    var_16 = max((var_4), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)125))))))))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (((-(((/* implicit */int) var_15)))) <= (((/* implicit */int) ((signed char) var_13))))))));
    var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)64))))) ? (((((/* implicit */_Bool) var_1)) ? (var_2) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_13))))))) ? (((375777386436617850LL) - (5499765690419762746LL))) : (((/* implicit */long long int) (-(((((/* implicit */int) (signed char)-78)) ^ (((/* implicit */int) var_10)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) arr_1 [i_0 - 4]);
                arr_6 [i_0 + 3] [i_0 + 3] [i_0] = ((/* implicit */long long int) var_1);
                var_20 = max((((/* implicit */long long int) (signed char)-125)), (-6189099376806041957LL));
            }
        } 
    } 
}
