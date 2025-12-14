/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231248
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
    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) ((14036462924842938518ULL) * (((/* implicit */unsigned long long int) var_8))))) ? (((14583604421997396111ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned long long int) var_4)), (4410281148866613111ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) (+((((!(((/* implicit */_Bool) arr_3 [4] [(short)7] [i_0])))) ? (min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_1 - 2])))) : (5092129731328394040LL)))));
                var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])), (((((/* implicit */_Bool) ((short) 0LL))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min(((short)-13319), ((short)26319))))))));
                arr_4 [i_0] [(short)1] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */short) arr_2 [i_0] [i_0] [i_1])))))) <= ((-(-17LL))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))), (min((var_11), (0LL))))))));
            }
        } 
    } 
}
