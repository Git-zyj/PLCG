/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46837
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [7U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21787)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((arr_1 [i_0]) ? (var_14) : (8053063680ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        arr_3 [i_0] = (short)28612;
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_18 = var_0;
        arr_6 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11)) - (((/* implicit */int) (unsigned short)65521))))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) 1572864U))))));
        arr_7 [i_1] [(short)6] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) ((((var_8) >> (((((/* implicit */int) arr_4 [i_1])) + (31929))))) >= (((/* implicit */int) (unsigned char)7)))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */int) arr_8 [4] [i_2]);
        arr_12 [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) -370151624)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))) : (8053063690ULL)));
        arr_13 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) & (18446744065656487939ULL)));
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18446744065656487950ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max(((unsigned short)25), (((/* implicit */unsigned short) var_7)))))))) : (max((max((12100141767755992325ULL), (var_17))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (18235945752014842969ULL))))))));
}
