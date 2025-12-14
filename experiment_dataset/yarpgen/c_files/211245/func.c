/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211245
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
    var_13 -= ((/* implicit */int) max(((~(var_1))), (((/* implicit */unsigned long long int) ((unsigned short) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36188)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_14 += ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (short)15205)) * (((/* implicit */int) (short)511)))));
        var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) >> (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)58494)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)3744)))) >= (((/* implicit */int) arr_2 [i_0])))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0]))) ? (((/* implicit */unsigned long long int) (~(-597649944)))) : (max((var_1), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
    }
}
