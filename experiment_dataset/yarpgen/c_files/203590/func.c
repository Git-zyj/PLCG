/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203590
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0 - 3] [i_0]);
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(unsigned char)7] [(unsigned char)6])) : (((/* implicit */int) arr_0 [(unsigned char)4] [(short)6])))) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [(_Bool)1] [i_0])) & ((~(((/* implicit */int) (unsigned short)23535)))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? (arr_4 [i_1] [i_1]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_0)))));
        arr_6 [i_1] [(unsigned short)6] = ((/* implicit */short) ((((arr_3 [i_1]) % (18446744073709551615ULL))) | (arr_3 [i_1 - 1])));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) var_1);
    }
    var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19177)) ^ (((/* implicit */int) var_4))))) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) var_7)))) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_9))))))), (min((((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) var_7))))))));
    var_15 = ((var_10) | (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_3)))), (((((/* implicit */int) (unsigned short)46351)) / (((/* implicit */int) var_5))))))));
    var_16 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)35)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)19177)) != (((/* implicit */int) (unsigned short)19177)))))))), (max((var_10), (((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19177)))))))));
    var_17 = ((/* implicit */unsigned int) ((unsigned short) ((long long int) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_10)))));
}
