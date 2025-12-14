/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35311
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
    var_12 = ((/* implicit */int) ((unsigned long long int) var_2));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (signed char)-17)))))) ? (var_7) : (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_1] &= ((/* implicit */short) (-(1859899543882151924LL)));
                var_14 -= ((/* implicit */int) (signed char)-13);
                arr_7 [i_0] = ((/* implicit */unsigned char) (signed char)-93);
            }
        } 
    } 
}
