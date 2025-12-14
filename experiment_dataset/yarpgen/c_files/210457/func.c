/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210457
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
    var_14 = ((/* implicit */int) var_11);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((0ULL) & (((/* implicit */unsigned long long int) (-2147483647 - 1))))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (1329191441444145758ULL) : (1329191441444145749ULL)))));
        arr_3 [i_0] = ((/* implicit */int) var_2);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (438040356U))) ? (min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) ((438040356U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))))) <= (18446744073709551615ULL)));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_9 [(_Bool)1] = ((/* implicit */_Bool) arr_1 [(signed char)6] [(signed char)6]);
        var_15 = ((/* implicit */signed char) 1638404189U);
    }
    var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7024))) : (17117552632265405854ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) var_5))));
}
