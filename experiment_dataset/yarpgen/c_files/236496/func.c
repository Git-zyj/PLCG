/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236496
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_18))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 926716479)) ? ((+(((/* implicit */int) (unsigned short)65524)))) : (((((/* implicit */_Bool) 926716479)) ? (1683596834) : (-1683596845)))));
                var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((926716488), (926716488)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */int) (signed char)-8)) ^ (-1370337745)))));
            }
        } 
    } 
}
