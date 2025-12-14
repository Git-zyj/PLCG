/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25639
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
    var_20 = ((/* implicit */unsigned long long int) var_7);
    var_21 = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */_Bool) (short)4095)) ? (var_5) : (var_5)))) & (((/* implicit */long long int) ((unsigned int) 9223372036854775807LL)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_22 ^= ((/* implicit */long long int) var_12);
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((unsigned long long int) -9223372036854775807LL)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_4))))))) : (((((9919645071383304192ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) * (((/* implicit */unsigned long long int) ((arr_2 [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)9))))))))))));
        var_24 = ((((/* implicit */_Bool) 598073799537077273ULL)) ? (((/* implicit */int) arr_3 [i_0] [5ULL])) : (((/* implicit */int) arr_1 [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] &= ((/* implicit */unsigned short) var_8);
        var_25 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)250)), ((-((~(((/* implicit */int) (unsigned short)27028))))))));
        arr_7 [i_1] [i_1] &= ((/* implicit */long long int) arr_0 [i_1]);
    }
}
