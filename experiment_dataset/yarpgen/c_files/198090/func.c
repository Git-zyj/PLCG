/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198090
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) min((max((((/* implicit */int) (unsigned short)56868)), (-198130636))), (((/* implicit */int) var_4))))) < (arr_1 [i_1])));
        arr_6 [i_1] = ((/* implicit */long long int) min((arr_4 [i_1]), (((unsigned short) arr_4 [i_1]))));
        arr_7 [0] [0] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
        var_11 = ((/* implicit */unsigned int) ((min(((~(arr_1 [i_1]))), (((/* implicit */long long int) ((_Bool) var_1))))) << (((var_1) & (((/* implicit */long long int) ((/* implicit */int) min(((short)11212), (((/* implicit */short) (unsigned char)121))))))))));
    }
    var_12 *= ((/* implicit */short) ((unsigned int) max((max((var_7), (((/* implicit */int) var_9)))), (((/* implicit */int) var_8)))));
    var_13 = (-(((/* implicit */int) var_2)));
}
