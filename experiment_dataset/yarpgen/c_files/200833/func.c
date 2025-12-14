/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200833
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
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)13))));
    var_13 = ((/* implicit */int) (~(min((((/* implicit */unsigned int) (short)7187)), (2U)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) (short)-7200)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7200))))))) + (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) (unsigned short)13))), (((((/* implicit */int) (short)-31363)) + (((/* implicit */int) (short)30502)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4310094713418273842LL)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))) : (min((((/* implicit */unsigned int) 2147483647)), (1656883341U)))));
        var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_0 - 1]), (((/* implicit */unsigned int) (short)-7200))))), (max((min((((/* implicit */unsigned long long int) arr_0 [i_0] [17])), (14343521314372001171ULL))), (((/* implicit */unsigned long long int) min(((unsigned char)15), ((unsigned char)178))))))));
    }
}
