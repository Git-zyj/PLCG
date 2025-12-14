/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221974
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
    var_18 = ((/* implicit */signed char) var_14);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) -1)))));
                var_20 -= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max((var_1), (131008)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)-17))))) : (-1192924288353815404LL))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((long long int) (~(((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1]))))))));
            }
        } 
    } 
}
