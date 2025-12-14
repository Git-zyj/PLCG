/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50856
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
    var_13 = 17LL;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((signed char) -4LL))))) ? (((/* implicit */long long int) arr_2 [i_1])) : (var_3))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned int) var_7)) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) ((long long int) -17LL))) ? ((+(-27LL))) : (-50LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_17 = ((/* implicit */unsigned int) var_11);
    var_18 = ((/* implicit */long long int) var_9);
}
