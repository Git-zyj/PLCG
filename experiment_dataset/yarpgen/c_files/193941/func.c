/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193941
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (((/* implicit */long long int) arr_1 [i_0 - 1])) : (arr_2 [i_0 - 1] [i_0 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) & (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))))) : (max((((((/* implicit */_Bool) 1826916955U)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (4294967295U))), (((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 + 1]))))));
        arr_3 [i_0] = ((int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)241)) || ((_Bool)0)))), (max((arr_0 [i_0] [i_0 + 1]), (((/* implicit */unsigned char) var_10))))));
        arr_4 [i_0 - 1] = ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) arr_0 [i_0 - 1] [i_0])))));
        arr_5 [i_0 - 1] [i_0 + 1] = ((/* implicit */long long int) var_9);
    }
    for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        var_18 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_7 [i_1 - 1])) && (((/* implicit */_Bool) arr_7 [i_1 + 1])))), (var_13)));
        arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_1 - 1]) ^ (arr_7 [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((arr_7 [i_1 + 1]) | (arr_7 [i_1 - 1])))) : (((((/* implicit */unsigned long long int) arr_7 [i_1 + 1])) | (var_0)))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_1] [i_1 - 1])) ? (102046702U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1])))))))))));
    }
    var_20 = ((/* implicit */unsigned char) (-(1826916955U)));
}
