/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25462
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [(_Bool)1] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) ((var_0) && (((/* implicit */_Bool) var_2))))), (((var_9) ? (1152921504606846976ULL) : (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [(signed char)4])))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (arr_2 [i_0 - 1])))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0 - 1])) - (1152921504606846976ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) || (((/* implicit */_Bool) arr_2 [i_0])))))) : (arr_2 [i_0 - 1])))));
    }
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_3)))))) * (17293822569102704640ULL)))));
    var_12 = ((/* implicit */int) 715885548U);
    var_13 = ((/* implicit */_Bool) ((short) min((var_3), (((/* implicit */unsigned char) (signed char)-94)))));
}
