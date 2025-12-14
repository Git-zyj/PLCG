/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192491
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [5] [5])) : (-1406652814)))) ? (((arr_1 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) : (((((/* implicit */_Bool) 8549150948342742806ULL)) ? (var_1) : (((/* implicit */unsigned long long int) -1406652814)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-1406652814), (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2] [i_1]))))) : ((~(-1406652814))))))));
                    arr_11 [i_0] [i_1] [i_1] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) min(((signed char)123), ((signed char)-123)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_2 - 1] [i_2 - 3])))))));
                }
            } 
        } 
    } 
    var_12 += ((/* implicit */int) min((((((/* implicit */_Bool) min((0LL), (9223372036854775807LL)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)-124)), (1704579214)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (short)28265))))))))));
}
