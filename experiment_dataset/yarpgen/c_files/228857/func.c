/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228857
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
    var_20 = ((/* implicit */int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((short) ((long long int) (unsigned char)91)));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0]) : (-9223372036854775797LL)))) ? (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) 268435455)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        var_22 += ((/* implicit */long long int) arr_0 [(signed char)2]);
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max(((-2147483647 - 1)), (((/* implicit */int) var_7)))), (((((/* implicit */int) var_18)) << (((/* implicit */int) arr_4 [i_1]))))))) ? (((((/* implicit */_Bool) ((signed char) arr_1 [i_1]))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_6 [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_3 [i_1]))))))));
        var_23 = ((/* implicit */int) ((unsigned short) ((unsigned short) 19LL)));
    }
    var_24 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3)))) << (((((/* implicit */int) var_0)) - (222)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) -3810527070470492664LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17))))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) max((-1998764967), (var_14)))) : (3ULL))));
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)48)) | (((/* implicit */int) (unsigned char)255))));
}
