/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191987
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
    var_19 = (!(((/* implicit */_Bool) 18446744073709551603ULL)));
    var_20 &= ((/* implicit */signed char) min((1835008), (((((/* implicit */_Bool) ((((-3357837587938443455LL) + (9223372036854775807LL))) << (((((var_9) + (1963160201372679699LL))) - (43LL)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (var_3))) : (((((/* implicit */int) (_Bool)1)) + (var_5)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
            var_22 -= ((/* implicit */signed char) (+((~(((/* implicit */int) (signed char)-1))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_23 = ((arr_0 [i_2]) ? (var_0) : (((/* implicit */int) arr_0 [i_2])));
            var_24 = ((/* implicit */signed char) ((long long int) arr_4 [i_0] [i_2]));
            arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_0 [i_0]);
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_2])))))));
        }
        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (arr_4 [10ULL] [i_0]))))));
    }
}
