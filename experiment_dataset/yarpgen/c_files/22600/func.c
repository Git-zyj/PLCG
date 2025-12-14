/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22600
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (+(((int) ((((/* implicit */_Bool) 18U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (28U)))));
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((45U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) < (max((arr_0 [i_0]), (arr_0 [i_0])))));
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_0 [i_0]) < (arr_0 [i_0])))) < (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) min((var_11), (arr_7 [10] [10ULL])));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) ((((((/* implicit */int) arr_12 [i_2] [i_2])) & (((/* implicit */int) arr_6 [i_2] [i_2])))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [6ULL])) & (((/* implicit */int) var_7))))) <= ((~(11602377903639900809ULL))))))));
        var_13 &= (~(min((((/* implicit */unsigned int) arr_13 [i_2])), (((4294967277U) | (4294967289U))))));
    }
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4))))), (var_9))), (max((((((/* implicit */_Bool) var_0)) ? (var_9) : (var_5))), (((/* implicit */unsigned int) ((unsigned short) var_2))))))))));
    var_15 &= ((/* implicit */long long int) var_8);
}
