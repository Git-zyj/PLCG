/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222389
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 = ((arr_0 [i_0 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((var_13), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]))))))));
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2]))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(var_15))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? ((((!(((/* implicit */_Bool) -1682134940)))) ? (max((var_13), (((/* implicit */unsigned int) -1682134940)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1682134954)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))))));
    var_23 -= ((/* implicit */unsigned char) 1682134951);
    var_24 = ((/* implicit */long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))))) != (((/* implicit */int) (short)32748))));
}
