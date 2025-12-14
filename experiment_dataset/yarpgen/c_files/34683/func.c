/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34683
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_19 = ((/* implicit */unsigned short) var_13);
        arr_3 [i_0] = ((/* implicit */short) var_18);
        arr_4 [i_0] = ((/* implicit */unsigned char) (~(max((((/* implicit */int) arr_1 [i_0] [i_0])), ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) arr_1 [i_0] [i_0]))))), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 6; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1 + 4]))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 + 2])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_1]))))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1 - 1]))) : (var_3)))));
        var_21 = ((/* implicit */short) (-(((/* implicit */int) ((4294967287U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 6; i_2 += 2) /* same iter space */
    {
        var_22 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)70)) ? (arr_9 [(unsigned char)8]) : (arr_9 [0LL])))) ? (arr_9 [6ULL]) : (((arr_9 [(short)6]) - (arr_9 [(unsigned char)8]))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [i_2])) - (((/* implicit */int) var_4)))) & (var_6)))), (((((/* implicit */_Bool) arr_0 [i_2 - 3])) ? (max((2867266588U), (arr_9 [i_2]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))));
        var_23 = ((/* implicit */long long int) var_0);
    }
    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 2) 
    {
        var_24 += ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-4)), ((unsigned char)160)))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(arr_13 [i_3]))))));
        var_26 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14)))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_12 [i_3]))))))));
    }
    var_27 |= var_11;
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? ((-(((((/* implicit */unsigned int) ((/* implicit */int) (short)24248))) - (1427700709U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))));
}
