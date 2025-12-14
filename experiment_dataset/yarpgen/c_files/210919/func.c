/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210919
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
    var_14 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = ((unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_1 - 2])) : (var_8)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) * (arr_1 [i_0 + 1])))));
                var_16 = ((/* implicit */long long int) var_6);
                var_17 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((0ULL), (var_12)))) ? ((~(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) == (((/* implicit */int) var_13)))))))))));
                var_18 = ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_9);
    var_20 += ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) 0LL))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_2)) : (8ULL))))) : (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1052562073)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1ULL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
}
