/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195878
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) (((-(arr_1 [(signed char)13]))) / ((-(min((((/* implicit */int) (unsigned char)66)), (arr_3 [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1275350418)) * (var_7)))) ? (((((/* implicit */int) var_16)) << (((((/* implicit */int) (unsigned short)59049)) - (59032))))) : ((~(((/* implicit */int) (signed char)87))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((1275350437) & (309616077)))) | (((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))));
    var_20 = ((/* implicit */unsigned char) (short)-2286);
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_13)), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)28603))))), (var_14)))));
}
