/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28250
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
    var_18 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32262)))))));
        arr_2 [0ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0 + 1]))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((int) (_Bool)1)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)93)) ^ (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        var_20 = (signed char)59;
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 - 2])) ? (((15ULL) * (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    }
    var_22 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((_Bool) var_13))) : (((((/* implicit */int) (unsigned short)17877)) | (((int) var_16)))));
}
