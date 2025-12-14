/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241552
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (min(((~(5412972010978169461ULL))), (((/* implicit */unsigned long long int) ((13033772062731382140ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13044)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (_Bool)0)))))))));
        arr_3 [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 2147483632)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0 - 1])))));
        var_21 = ((/* implicit */_Bool) (unsigned char)168);
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_22 ^= ((long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1]))));
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)9))))) ? (((/* implicit */int) ((short) arr_1 [i_1 + 1]))) : (((/* implicit */int) min((((/* implicit */short) var_15)), (arr_1 [i_1 - 1]))))));
        var_23 -= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) < (arr_5 [(short)6]))) ? (((/* implicit */int) ((arr_5 [(signed char)8]) < (18446744073709551615ULL)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1 + 1])), ((unsigned short)24))))));
    }
    var_24 = ((/* implicit */unsigned short) var_12);
}
