/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28468
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 &= ((/* implicit */unsigned long long int) var_4);
                arr_6 [i_0] [i_1] &= arr_2 [i_1 + 1] [i_1 + 2];
                var_20 = ((/* implicit */_Bool) -6483025847869851049LL);
                var_21 &= ((/* implicit */unsigned short) 6483025847869851054LL);
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (var_8))))))), (((((((/* implicit */_Bool) -6483025847869851049LL)) || (((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4))) : (846668664U)))));
}
