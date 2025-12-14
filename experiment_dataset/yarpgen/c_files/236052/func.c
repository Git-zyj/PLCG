/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236052
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
    var_13 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((int) (signed char)88))) ? (((-316988445) + (((/* implicit */int) (unsigned char)20)))) : ((+(((/* implicit */int) var_0)))))), (((/* implicit */int) (unsigned char)223))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */short) (~(max(((~(var_9))), (((/* implicit */unsigned long long int) arr_2 [i_1]))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (~(arr_4 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)26))))) : (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned int) 0)) : (4294967285U)))))) < (6892152322156884910ULL)));
    var_16 = ((((/* implicit */_Bool) (((((~(((/* implicit */int) var_5)))) + (2147483647))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (var_1))) - (10898819559766367471ULL)))))) ? (((/* implicit */int) var_5)) : (var_2));
}
