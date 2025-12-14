/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23681
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
    var_20 = ((/* implicit */int) min((2882757939U), (142056590U)));
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((+(var_19))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2882757946U)) || (((/* implicit */_Bool) var_17))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) >> (((((((arr_0 [7]) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) 1412209364U)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) (signed char)(-127 - 1))))) + (61))))) - (38357LL)))));
                arr_5 [0ULL] |= ((/* implicit */_Bool) (-((~(var_10)))));
            }
        } 
    } 
}
