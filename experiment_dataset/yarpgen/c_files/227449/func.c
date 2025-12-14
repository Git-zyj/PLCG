/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227449
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
    var_20 &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32221)) - (((/* implicit */int) (unsigned short)33315))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (((long long int) var_5))))) > (((((((/* implicit */_Bool) var_19)) ? (var_10) : (((/* implicit */unsigned long long int) var_19)))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) << (((((/* implicit */int) var_15)) - (76))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_22 *= max(((+(arr_2 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_1))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (var_5))))))));
        var_24 ^= ((/* implicit */unsigned long long int) var_16);
        var_25 = ((/* implicit */unsigned int) var_5);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_26 |= ((/* implicit */long long int) arr_3 [i_1]);
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) + (arr_0 [i_1])));
        var_28 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)32221)) | (((/* implicit */int) var_18)))));
    }
}
