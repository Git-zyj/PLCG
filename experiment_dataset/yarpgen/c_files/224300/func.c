/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224300
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
    var_20 += ((/* implicit */unsigned int) ((max(((+(var_16))), (((/* implicit */unsigned long long int) ((unsigned int) var_8))))) / (((/* implicit */unsigned long long int) ((unsigned int) ((signed char) var_10))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))))));
        var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [(unsigned char)1]))))) ? (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_0 [(signed char)13] [i_0 - 1])))) : (((/* implicit */int) max((arr_0 [2ULL] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0 - 2]))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 3] [(short)7]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_22 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1] [i_1])) * (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) ((signed char) arr_4 [i_1] [i_1]))) : (((/* implicit */int) ((signed char) arr_0 [i_1] [i_1]))))) <= (((((((/* implicit */int) arr_0 [i_1] [i_1])) >> (((((/* implicit */int) arr_5 [i_1])) + (100))))) + (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_1])), (arr_0 [i_1] [i_1]))))))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_3 [(unsigned short)2] [(unsigned short)2]))));
    }
}
