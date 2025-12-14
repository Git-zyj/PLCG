/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209175
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
    var_13 ^= ((/* implicit */_Bool) min((((((((/* implicit */int) var_10)) != (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4249128935502449646LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) | (var_12))))), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_0] [i_0 + 1])))));
                var_15 = ((/* implicit */unsigned int) ((((((unsigned int) var_10)) <= (((/* implicit */unsigned int) ((int) 4249128935502449646LL))))) ? (((arr_3 [i_1]) ? (((((/* implicit */unsigned long long int) arr_0 [i_0])) - (11267421377487894555ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (var_10))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))))));
            }
        } 
    } 
    var_16 = var_3;
    var_17 += ((/* implicit */unsigned int) max((((((/* implicit */int) var_9)) - (((((/* implicit */int) (signed char)127)) >> (((/* implicit */int) var_5)))))), (((/* implicit */int) max((max((((/* implicit */signed char) var_4)), (var_11))), (var_10))))));
    var_18 |= ((/* implicit */unsigned char) var_8);
}
