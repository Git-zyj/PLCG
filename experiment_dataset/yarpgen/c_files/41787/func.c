/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41787
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
    var_13 *= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((((var_3) + (2147483647))) << (((((/* implicit */int) (unsigned char)249)) - (249)))))), (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) >> (((((((/* implicit */_Bool) ((var_4) | (var_4)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : (((3508771788024350201LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))))))) + (223LL)))));
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) max((arr_0 [(unsigned short)20]), (((/* implicit */unsigned long long int) 2092805888))))))));
        var_16 = ((/* implicit */int) (-(min((arr_0 [i_0]), (((/* implicit */unsigned long long int) max((1052095183U), (1052095182U))))))));
        var_17 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 1052095183U)) : (9ULL)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-21580)))))))));
        arr_2 [(signed char)14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((18446744073709551614ULL), (((/* implicit */unsigned long long int) (unsigned short)18)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))) : (((((arr_0 [i_0]) ^ (arr_0 [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)19])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned char) max((((int) var_8)), (max((((((/* implicit */int) (unsigned char)69)) - (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0]))))))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)52108)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (-803452909) : (((/* implicit */int) (unsigned char)6))))) : ((+(((unsigned long long int) var_7)))))))));
        }
    }
    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
}
