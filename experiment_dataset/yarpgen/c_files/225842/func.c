/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225842
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_0])) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_9))))))) : (2639686056U)));
                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                var_13 = ((/* implicit */_Bool) arr_3 [i_0]);
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) && ((!(((/* implicit */_Bool) var_11)))))) || (min((var_5), ((!(((/* implicit */_Bool) var_9))))))));
    var_15 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2))) - (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) var_8))));
}
