/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2513
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
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) 286102190)) ? (var_3) : (((/* implicit */unsigned long long int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_1] [(signed char)9] [i_0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) min((-286102190), (((/* implicit */int) arr_1 [i_1]))))), (1576548677U))) / (max((2718418648U), (((/* implicit */unsigned int) (signed char)58))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_1 [i_1])))) * (((/* implicit */int) ((4309045699763606300LL) == (((/* implicit */long long int) 1576548684U)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((signed char) ((unsigned long long int) (unsigned char)105)));
}
