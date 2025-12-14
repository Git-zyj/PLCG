/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4913
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
    var_17 = ((/* implicit */unsigned short) ((var_5) % (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_16)))) <= (var_9))))));
    var_18 = var_16;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((min((min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))), (((/* implicit */int) arr_2 [i_0] [i_1 - 1])))) | (min((((/* implicit */int) arr_2 [i_0] [i_1 - 1])), (arr_3 [i_1] [i_0])))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) & (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 2831150283U)) ? (6587289597051395576ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_16))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2831150280U)) ? (819587013096714225ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))));
                var_20 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((arr_0 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_1] [(_Bool)1]) < (((/* implicit */int) arr_4 [i_0])))))))));
            }
        } 
    } 
}
