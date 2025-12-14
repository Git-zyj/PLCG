/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192827
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
    var_14 |= var_6;
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_15 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)-31146)) ? (((/* implicit */int) (unsigned char)211)) : (-20220196)))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((var_8) >> (((((/* implicit */int) arr_2 [i_0])) - (58521))))) % (var_7))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) min((max((4ULL), (((/* implicit */unsigned long long int) arr_2 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))))));
        var_17 ^= ((/* implicit */short) var_3);
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_18 = ((unsigned short) var_8);
        arr_11 [0LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((var_13) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_1))))) ? (((((/* implicit */unsigned long long int) ((int) arr_2 [i_2]))) ^ (18132420855481126117ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_2]) <= (arr_9 [i_2])))))));
        arr_12 [i_2] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37689))) : (((var_7) * (var_8)))))), (var_0)));
    }
    /* vectorizable */
    for (short i_3 = 3; i_3 < 21; i_3 += 4) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_3]))) : (arr_16 [i_3])))) ? (arr_16 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_3 + 2])))));
        arr_18 [i_3 + 1] [i_3] |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_6)) ? (arr_16 [i_3]) : (var_9)))));
    }
}
