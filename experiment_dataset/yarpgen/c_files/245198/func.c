/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245198
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_0 [(signed char)11] [8LL])))) + (2147483647))) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))) + (132)))));
        var_15 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */signed char) min((var_11), (var_7)))), (max((arr_1 [i_1] [i_1]), (arr_1 [4LL] [(_Bool)1])))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_1])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_1] [i_1]))))))));
        var_17 &= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_8))))));
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_1] [(signed char)8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_3 [i_1]))))))) : (((max((var_2), (((/* implicit */long long int) var_12)))) - (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */int) (signed char)70)) >> (((((/* implicit */int) (unsigned short)45690)) - (45665))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [9ULL])) : (var_9))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
    {
        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (var_13)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (signed char)94)))))))) ? (min((((/* implicit */int) max((var_6), (((/* implicit */unsigned short) arr_6 [i_2]))))), ((+(arr_4 [i_2] [4ULL]))))) : (min((((/* implicit */int) var_10)), (arr_4 [i_2] [(unsigned short)10])))));
        var_21 += ((/* implicit */signed char) var_10);
        var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)19127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) : (5144716910863513061ULL))), (((/* implicit */unsigned long long int) ((arr_6 [i_2]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))))))));
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_11))))) ? (min((var_8), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])))) : (max((var_8), (var_8))))))));
        var_24 = ((/* implicit */signed char) max((((/* implicit */int) var_13)), (max((((((/* implicit */int) var_6)) >> (((/* implicit */int) var_11)))), (((/* implicit */int) max((arr_1 [i_2] [i_2]), (var_5))))))));
    }
    var_25 = ((/* implicit */int) max((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_1))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >> (((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))) - (26452))))))));
}
