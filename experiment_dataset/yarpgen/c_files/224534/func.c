/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224534
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
    var_11 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))), ((-(2124184587U)))))));
    var_12 = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) var_5)))));
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)31164)), (2170782698U)))) ? (2170782727U) : (2170782708U)))), (((long long int) (unsigned short)23602))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 2170782687U)) ? (var_10) : (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (2124184605U)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_4 [(unsigned short)7] [i_0] = ((/* implicit */unsigned long long int) 2170782703U);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((-(2170782704U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_10 [i_1] = ((/* implicit */long long int) ((unsigned long long int) 2170782687U));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min(((+(-8723124723878182898LL))), (min((((/* implicit */long long int) (short)-26)), ((-9223372036854775807LL - 1LL))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
    {
        var_16 &= (unsigned short)57108;
        arr_13 [i_2] [i_2] = ((/* implicit */short) (-(26U)));
        var_17 += ((/* implicit */_Bool) ((int) 15909928260957379854ULL));
    }
}
