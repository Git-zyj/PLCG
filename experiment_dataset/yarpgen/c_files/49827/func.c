/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49827
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = max((((/* implicit */unsigned long long int) ((short) arr_1 [i_0] [i_0 + 1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-7646070917366973293LL)))) ? (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))) : (min((var_5), (((/* implicit */unsigned long long int) var_2)))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0 - 2])), (max((-7646070917366973297LL), (527971447448092980LL)))))), (min(((-(arr_1 [i_0] [(short)3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_3 [i_0])))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_7 [i_2] [i_2])), (max((((/* implicit */unsigned long long int) max((arr_8 [i_2] [i_2]), (((/* implicit */long long int) arr_0 [i_2]))))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (var_5) : (((/* implicit */unsigned long long int) 7646070917366973292LL))))))));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (arr_1 [i_2] [i_2]) : (((/* implicit */unsigned long long int) 799055928169325994LL))))))) ? ((-(arr_1 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (max((arr_2 [i_2] [i_2]), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))))));
    }
    for (long long int i_3 = 4; i_3 < 10; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (arr_2 [i_3 + 2] [8LL]) : (arr_2 [i_3 - 4] [i_3])))), (((((/* implicit */_Bool) arr_11 [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 + 1]))) : (arr_1 [(signed char)8] [i_3])))));
        arr_13 [i_3] = ((/* implicit */_Bool) arr_0 [i_3]);
    }
}
