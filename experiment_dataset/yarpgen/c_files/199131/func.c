/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199131
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) var_8);
        var_14 = ((/* implicit */long long int) (unsigned short)58503);
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_2))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_4 [i_1]))) <= (((/* implicit */int) max((var_3), (arr_3 [i_1]))))))), (((((/* implicit */_Bool) min((arr_3 [i_1]), (arr_3 [i_1])))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned short) (unsigned short)58503)))))));
        arr_5 [i_1] = ((/* implicit */_Bool) (unsigned char)202);
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [i_1])) + (2147483647))) << (((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_1]))))) ? (var_6) : (((/* implicit */int) arr_4 [i_1])))) + (1804295079))) - (29)))));
    }
}
