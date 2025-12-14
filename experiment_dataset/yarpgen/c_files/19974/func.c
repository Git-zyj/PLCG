/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19974
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
    var_17 |= ((/* implicit */int) ((unsigned short) 0U));
    var_18 *= ((/* implicit */int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */int) var_1)) / (-897781132))) : (((((/* implicit */_Bool) 30U)) ? (((/* implicit */int) (unsigned short)13476)) : (((/* implicit */int) (signed char)-32)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) arr_8 [i_2 - 1] [i_2 + 1]);
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_4 [(unsigned short)6]))))) < (((((/* implicit */_Bool) arr_4 [(signed char)8])) ? (arr_4 [14U]) : (((/* implicit */int) arr_8 [i_2 + 1] [i_0 + 1])))))))));
                    arr_10 [i_0] [14] [i_2] = ((((/* implicit */_Bool) arr_6 [17ULL] [17ULL] [i_1 + 3] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-39)) | (-989525981)))) : (((((/* implicit */_Bool) var_0)) ? (((unsigned long long int) 178845783)) : (((/* implicit */unsigned long long int) ((var_15) % (((/* implicit */int) arr_6 [i_0] [(unsigned short)10] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
}
