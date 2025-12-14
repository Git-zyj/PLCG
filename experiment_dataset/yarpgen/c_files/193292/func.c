/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193292
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        arr_2 [(_Bool)1] &= ((/* implicit */long long int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)87))))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (arr_5 [(short)20])))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (3322556870U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))))))));
        var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [(signed char)13])) ? (arr_5 [(unsigned short)12]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_8)))) - (((/* implicit */int) min(((unsigned char)168), (((/* implicit */unsigned char) var_3)))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */short) var_3)), (var_8))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)16)) || (((/* implicit */_Bool) var_9))))), (((arr_4 [i_1]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))))) : (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_12 = ((/* implicit */_Bool) arr_8 [i_2] [i_2]);
        var_13 = ((/* implicit */short) ((var_3) ? (((((/* implicit */int) var_2)) & (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))));
        arr_10 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (signed char)3)))))) : (min((((/* implicit */unsigned int) var_0)), (var_7)))));
    }
    var_14 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-17)))))));
}
