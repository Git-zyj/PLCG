/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230868
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) 1887420922);
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) ^ (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) - (3510453810U))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */int) min((((/* implicit */long long int) ((int) arr_1 [i_1] [i_1]))), (((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1])))))));
        var_19 = ((/* implicit */short) max((min((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) | (((/* implicit */int) arr_5 [i_1]))))), (3510453810U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) (unsigned char)234)))))))));
    }
    var_20 = ((/* implicit */short) min((((unsigned int) var_17)), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 784513485U)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) var_14))))), (784513486U)))));
    var_21 = min((((/* implicit */int) var_15)), ((((-(((/* implicit */int) (unsigned short)0)))) / (((/* implicit */int) var_1)))));
}
