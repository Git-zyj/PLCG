/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241477
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))) != (((unsigned int) 2U)))))));
        arr_3 [(signed char)4] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (arr_0 [i_0] [12])))))))) >= (arr_0 [(unsigned short)8] [i_0])));
        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) 9223372036854775807LL))))))))));
        arr_4 [(signed char)0] [0ULL] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (arr_1 [0ULL]))))))), ((~(max((((/* implicit */long long int) var_16)), (arr_0 [i_0] [(_Bool)1])))))));
        arr_5 [6] [6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_1 [i_0])), (((unsigned short) arr_0 [7LL] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (unsigned short)34618)), (9223372036854775807LL))) << (((((((((/* implicit */_Bool) arr_1 [11ULL])) ? (((/* implicit */int) arr_1 [5ULL])) : (((/* implicit */int) var_3)))) ^ (((/* implicit */int) arr_7 [i_1] [(signed char)6])))) - (61)))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [3LL])) || (((4294967294U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34635)))))));
    }
    var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((var_14) & (((/* implicit */int) var_2))))) ? (max((var_1), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5))))))));
    var_21 = ((/* implicit */unsigned char) min((min((max((var_14), (((/* implicit */int) var_11)))), (var_15))), (((/* implicit */int) var_12))));
    var_22 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((var_0) + (((/* implicit */long long int) var_13))))) ? (max((var_14), (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_5))))))));
}
