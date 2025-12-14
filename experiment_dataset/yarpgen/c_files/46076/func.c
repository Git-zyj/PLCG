/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46076
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
    var_20 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), ((unsigned char)88)))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_17))))));
    var_21 *= ((/* implicit */short) ((var_19) ? (((/* implicit */int) ((signed char) var_18))) : (((/* implicit */int) var_2))));
    var_22 = ((/* implicit */unsigned char) var_2);
    var_23 = (+(var_18));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) ((_Bool) var_3));
                var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142))) : (var_11)))), (min((12286960818270246811ULL), (((/* implicit */unsigned long long int) arr_0 [i_1]))))));
            }
        } 
    } 
}
