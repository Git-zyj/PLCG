/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232939
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2064150067292382825ULL)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34932)) || (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) (unsigned short)3)) ? (4769133740752665368ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46))))))) : (max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (3355366194U) : (((/* implicit */unsigned int) var_6)))))))));
                var_12 = ((/* implicit */unsigned int) min(((((~((-9223372036854775807LL - 1LL)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) var_9)) : (1391156117)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), (arr_2 [18] [18])))) ? (((/* implicit */int) (unsigned short)23575)) : (((/* implicit */int) ((signed char) arr_0 [i_0]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_10);
}
