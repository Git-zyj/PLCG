/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24664
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
    var_12 -= ((/* implicit */unsigned char) var_0);
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) var_2)), (1845139062337535002ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21305)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((-127554583) + (2147483647))) << (((((((((/* implicit */_Bool) (unsigned short)20766)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) + (1826193012606574725LL))) - (16LL)))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) (+(max((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_3 [i_0])))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_0]))))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */int) var_1);
}
