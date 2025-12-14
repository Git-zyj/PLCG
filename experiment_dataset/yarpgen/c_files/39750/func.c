/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39750
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
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)105)), (1076370305U)));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) max((((max((((/* implicit */unsigned int) arr_1 [i_0])), (1076370305U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [(unsigned char)7])) > (((/* implicit */int) arr_2 [i_0 + 2])))))))), (((/* implicit */unsigned int) arr_1 [i_0]))));
        var_22 = ((/* implicit */unsigned int) max((((short) arr_2 [i_0 - 1])), (((/* implicit */short) ((((/* implicit */unsigned int) max((var_1), (((/* implicit */int) arr_1 [(short)5]))))) == (max((((/* implicit */unsigned int) arr_0 [16U] [i_0])), (1985822294U))))))));
    }
    for (short i_1 = 3; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32738)) ? (1076370305U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))) | (min((arr_4 [i_1] [i_1]), (((/* implicit */long long int) (short)-32738)))))), (((/* implicit */long long int) (_Bool)1))));
        arr_8 [(unsigned short)0] |= ((((/* implicit */_Bool) (-(2970216609U)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_2 [i_1 - 2]))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_1] [i_1])), (1796386876U))))))));
        var_23 ^= ((/* implicit */unsigned int) arr_3 [i_1] [i_1]);
    }
}
