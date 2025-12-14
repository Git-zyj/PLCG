/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215995
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (_Bool)1))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) ? (arr_5 [i_0] [i_1] [i_2]) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))) * (((unsigned int) arr_5 [i_0] [(short)7] [i_2]))));
                    var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_2] [(signed char)5] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) arr_2 [i_2] [i_1] [(signed char)24])))))) : (((unsigned long long int) arr_6 [i_0] [i_1] [i_2]))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [(unsigned char)3] [i_2]) ? (7312726519543633099LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0])))))) ? (min((arr_4 [i_2]), (((/* implicit */long long int) arr_7 [i_2] [i_1] [i_1] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_0])) < (((/* implicit */int) arr_0 [i_0] [i_1])))))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */unsigned int) var_16)), (var_14)))))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) (+(7312726519543633099LL)));
    var_24 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) var_13)), (min((0U), (((/* implicit */unsigned int) var_15)))))), (((/* implicit */unsigned int) var_9))));
}
