/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24633
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
    var_12 = ((/* implicit */int) min((((((27ULL) != (18446744073709551589ULL))) ? (((((/* implicit */_Bool) var_10)) ? (17ULL) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_0))))))), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_3 [12] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) (short)-32758))))));
        arr_4 [3U] &= ((/* implicit */unsigned short) (short)32744);
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((int) arr_0 [i_0])) ^ (((/* implicit */int) (_Bool)1)))))));
        arr_5 [(unsigned char)17] = ((/* implicit */unsigned int) arr_1 [(unsigned char)5] [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */int) arr_1 [(short)22] [1ULL]);
        var_15 = ((/* implicit */unsigned char) ((int) arr_8 [i_1]));
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        arr_13 [(unsigned char)23] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32759)) ? ((~(((arr_6 [(short)20]) % (((/* implicit */int) (unsigned short)59187)))))) : (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) 2421604108U)) && (((/* implicit */_Bool) arr_0 [i_2])))))))));
        arr_14 [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32765))));
    }
}
