/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223119
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
    var_11 = ((/* implicit */unsigned long long int) max((min((min((var_10), (((/* implicit */long long int) var_4)))), (-8109957431792431610LL))), (var_3)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 *= ((/* implicit */unsigned long long int) 12LL);
                var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((((/* implicit */_Bool) (unsigned char)226)) ? (arr_2 [i_1 + 3] [i_1 + 3] [(unsigned char)6]) : (18446744073709551615ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))) | (-423975118626533425LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113)))));
                var_14 *= ((/* implicit */long long int) ((0ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [(unsigned char)5]), (-7574447999573549459LL)))) ? (arr_3 [i_0 + 2] [i_1 + 4]) : ((~(9223372036854775807LL))))))));
                var_15 = ((/* implicit */long long int) (unsigned char)112);
            }
        } 
    } 
    var_16 = var_6;
    var_17 = ((/* implicit */long long int) ((var_2) < (min((var_2), (((/* implicit */long long int) var_6))))));
}
