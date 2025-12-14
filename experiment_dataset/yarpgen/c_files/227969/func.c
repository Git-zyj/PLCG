/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227969
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
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [(_Bool)1] [(_Bool)1] &= ((/* implicit */int) (unsigned short)21315);
                var_11 -= ((/* implicit */unsigned char) 2127681603);
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) max((var_12), (1388490664425874267LL)));
    var_13 |= ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned short) var_8))));
    var_14 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
}
