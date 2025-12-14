/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223191
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
    var_13 += ((/* implicit */int) var_7);
    var_14 &= ((/* implicit */int) var_9);
    var_15 |= ((/* implicit */unsigned char) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) == (((((/* implicit */_Bool) (unsigned short)64777)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1)))))) == (((/* implicit */int) ((18446744073709551615ULL) <= (max((((/* implicit */unsigned long long int) var_10)), (arr_1 [i_0]))))))));
        arr_3 [2LL] [2LL] &= ((/* implicit */long long int) var_5);
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_5))));
        arr_4 [i_0] = ((/* implicit */short) var_9);
        var_17 -= var_4;
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_1))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((var_8) / (var_8))))));
        var_20 = ((/* implicit */unsigned int) (short)18455);
    }
}
