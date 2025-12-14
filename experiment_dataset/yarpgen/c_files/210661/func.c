/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210661
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((((var_7) << (((var_18) - (3887181483U))))), (var_13)))));
        arr_2 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (min((((/* implicit */unsigned long long int) -1931308273)), (4ULL))) : (var_17))), (((/* implicit */unsigned long long int) var_15))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((-923804978739008612LL) % (((/* implicit */long long int) var_11)))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) <= (-923804978739008612LL)))))));
        arr_4 [i_0] = ((max((((((/* implicit */_Bool) 4294967277U)) ? (((/* implicit */unsigned long long int) -923804978739008612LL)) : (var_5))), (((/* implicit */unsigned long long int) var_10)))) & (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))));
    }
    for (long long int i_1 = 2; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_20 &= max((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-29)), (1783894919)))), (min((((/* implicit */unsigned int) var_9)), (var_15))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2147483647)) ? (var_0) : (var_1))) & (((((/* implicit */long long int) 0)) ^ (923804978739008612LL)))))) || (((/* implicit */_Bool) var_14))));
        var_22 *= (+(max((((/* implicit */unsigned long long int) (+(var_0)))), (var_17))));
    }
    for (long long int i_2 = 2; i_2 < 24; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            var_23 = ((/* implicit */signed char) var_11);
            var_24 ^= ((/* implicit */signed char) (+(min((var_15), (((/* implicit */unsigned int) var_6))))));
        }
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)38)) != (((/* implicit */int) ((((/* implicit */unsigned long long int) -923804978739008609LL)) != (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */unsigned long long int) var_1)) : (var_5))))))));
        arr_13 [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) 1256019109)), (15551343657991151107ULL)));
    }
    var_25 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_2)), (var_5)));
}
