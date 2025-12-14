/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231108
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) (-(((((/* implicit */int) var_14)) + (arr_4 [i_0])))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (+(1659118447U)));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((var_18) & (((/* implicit */long long int) ((/* implicit */int) var_11))))) : ((-(var_1)))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (var_3)))))) : (((long long int) ((unsigned short) var_14)))));
}
