/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219271
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
    var_15 = ((/* implicit */unsigned char) 79428395);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)215)) ? (arr_1 [(signed char)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)63))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_17 = min((min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (+(920374470)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((920374470) - (((/* implicit */int) (unsigned char)69)))))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */int) max(((unsigned char)195), ((unsigned char)57)));
        var_19 = ((/* implicit */unsigned char) var_14);
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
    {
        var_20 = (((!(((/* implicit */_Bool) arr_6 [i_2] [i_2])))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) (signed char)15)))));
        var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)102))))) : (((((/* implicit */_Bool) arr_5 [(unsigned char)12] [10ULL])) ? (((/* implicit */int) arr_3 [13ULL] [i_2])) : (((/* implicit */int) arr_3 [i_2] [(unsigned char)4]))))));
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((((/* implicit */unsigned char) var_11)), ((unsigned char)76))))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 33554431)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)35098))))));
}
