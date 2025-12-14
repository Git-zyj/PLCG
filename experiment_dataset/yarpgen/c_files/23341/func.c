/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23341
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((var_3) * (((/* implicit */unsigned long long int) 5U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_1])) != (((/* implicit */int) var_4))))))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-125), ((signed char)127))))) : (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_2))))) ? (min((((/* implicit */long long int) 4294967295U)), (-8777995744104683116LL))) : (((((/* implicit */_Bool) 4294967295U)) ? (-5706701769343849885LL) : (((/* implicit */long long int) 1054061475U))))))));
                var_12 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                var_13 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) (unsigned char)224)), (((var_8) * (0U)))))));
                arr_4 [(signed char)5] = ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (((((/* implicit */long long int) (~(1503811138U)))) % (((long long int) var_9)))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_6);
}
