/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205883
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)234)), (var_13)))) ? (min((var_3), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1])))) : (((/* implicit */unsigned long long int) max((arr_0 [i_0 - 1]), (((/* implicit */long long int) var_7)))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63)))))) < (((4166058284U) >> (((((/* implicit */int) (signed char)-50)) + (64)))))));
            }
        } 
    } 
    var_16 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (var_10) : (var_3))) - (((/* implicit */unsigned long long int) max((4166058284U), (((/* implicit */unsigned int) var_8))))))))));
    var_17 = ((/* implicit */unsigned short) var_10);
}
