/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50988
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
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) (((((-(0ULL))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))) | (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned int) var_0)))))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 - 2])) ^ ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) != (var_7))))))));
        var_15 ^= ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((18446744073709551615ULL), (var_9)))))));
        var_16 &= ((/* implicit */long long int) arr_1 [i_0 - 2]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((arr_4 [i_1 - 1]) << (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_0 [i_1]))))))));
        var_18 -= ((/* implicit */unsigned int) var_6);
    }
    /* vectorizable */
    for (unsigned char i_2 = 4; i_2 < 19; i_2 += 2) /* same iter space */
    {
        var_19 += var_7;
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned long long int) arr_5 [i_2])))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (var_11)));
        var_22 = ((((/* implicit */_Bool) arr_3 [i_2 - 4])) ? (((17ULL) << (((((/* implicit */int) (unsigned short)49401)) - (49347))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))));
        arr_8 [i_2] &= ((/* implicit */short) ((unsigned long long int) arr_4 [i_2 + 1]));
    }
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((((/* implicit */unsigned long long int) var_10)) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_12))))) - (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-30390)))), (((/* implicit */int) ((unsigned char) var_4))))))))));
    var_24 = ((/* implicit */int) var_13);
    var_25 = ((/* implicit */int) var_3);
}
