/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202289
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
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))), (((((/* implicit */_Bool) 12782887866850310440ULL)) ? (12782887866850310426ULL) : (12782887866850310440ULL)))));
    var_16 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (signed char)-100)), (var_0))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((var_13) != (var_13)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            arr_6 [19] = ((/* implicit */unsigned long long int) arr_0 [(short)9]);
        }
        var_18 |= ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((((/* implicit */int) arr_5 [i_0])) & (((/* implicit */int) arr_5 [i_0])))));
        var_19 = ((/* implicit */long long int) arr_4 [(signed char)11] [i_0] [21]);
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */int) arr_5 [i_2]);
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_2]))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_0 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)766)))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_7 [i_3] [i_3]))));
    }
}
