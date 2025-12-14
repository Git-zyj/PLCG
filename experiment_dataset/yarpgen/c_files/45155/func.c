/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45155
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_5))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_1] [i_0])))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))))));
                var_20 = ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) / ((((_Bool)1) ? (-2166309005568995520LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-13532))))));
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) (short)-1)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) & (9223372036854775793LL))));
                var_22 = ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (arr_3 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)237))))) : (arr_3 [i_0] [i_1]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_1])))));
            }
        } 
    } 
}
