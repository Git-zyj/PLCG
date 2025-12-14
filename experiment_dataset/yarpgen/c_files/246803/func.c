/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246803
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
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) var_9);
        var_19 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((unsigned short) arr_1 [i_0])), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)173)) <= (((/* implicit */int) var_17)))))))), (min((((/* implicit */long long int) arr_1 [i_0])), (var_12)))));
    }
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_20 *= ((/* implicit */_Bool) arr_1 [i_1]);
        var_21 ^= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)194))));
    }
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
    var_23 += ((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) (unsigned short)16665)) : (((/* implicit */int) var_8))));
}
