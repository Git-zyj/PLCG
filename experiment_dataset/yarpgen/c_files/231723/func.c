/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231723
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
    var_11 &= ((/* implicit */signed char) min((((var_0) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)1))))))), (((/* implicit */unsigned long long int) max((((unsigned int) (short)-3741)), (((/* implicit */unsigned int) var_7)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_12 *= ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (9812349773501969678ULL))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (3447344308224727252ULL) : (((/* implicit */unsigned long long int) 2845633206U))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_7 [i_1] [17ULL] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)50)), (11U)))) ? (((((/* implicit */long long int) ((unsigned int) 0ULL))) + (((((/* implicit */long long int) 3377725822U)) - (arr_5 [(short)21]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_13 -= ((/* implicit */unsigned int) ((unsigned long long int) 238051011U));
    }
    var_14 *= ((/* implicit */_Bool) ((unsigned long long int) (short)2349));
    var_15 = ((/* implicit */long long int) ((unsigned int) ((unsigned short) (_Bool)1)));
    var_16 |= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)240))));
}
