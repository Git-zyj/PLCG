/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217143
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) (-(9223372036854775807LL)));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((var_13) - (((/* implicit */long long int) ((/* implicit */int) var_1))))))) && (((/* implicit */_Bool) var_0))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_3])) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))), (((((-9223372036854775807LL) + (9223372036854775807LL))) >> (((9223372036854775807LL) - (9223372036854775751LL))))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_3 - 1])) % (((/* implicit */int) arr_2 [i_3 + 1])))))));
        var_16 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))) : (var_13)))))))));
    }
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 14; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_3)))) > (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-26)) || (((/* implicit */_Bool) var_9)))))));
        var_17 = ((((((/* implicit */_Bool) arr_2 [i_4])) && (((/* implicit */_Bool) arr_12 [i_4] [i_4])))) ? (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_4] [i_4])) : (((/* implicit */int) var_3))))));
        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) -9223372036854775807LL))));
        arr_16 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_6 [i_4] [i_4] [i_4] [i_4])))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) << (((arr_7 [i_4] [i_4] [i_4] [i_4]) - (7483731219527326411LL))))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)30720)) : (((/* implicit */int) (unsigned short)4088)))))))));
    }
}
