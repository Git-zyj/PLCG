/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230543
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
    var_14 = ((min((((/* implicit */long long int) (short)29053)), ((-9223372036854775807LL - 1LL)))) / (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)29053)) ? (2444299346U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))), (5393509678785327377LL))));
    var_15 = ((/* implicit */_Bool) (unsigned short)65535);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [1U] [i_1] = min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47645)) ? (3477281193U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47645)))))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((long long int) arr_3 [i_0] [i_1] [i_1]))) >= (arr_2 [i_1])))));
                var_16 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0 + 1])) : (438868974))));
            }
        } 
    } 
}
