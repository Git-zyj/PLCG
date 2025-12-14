/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247773
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
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_4) - (6945177076446328350LL)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0]) >> (((arr_2 [i_0]) - (3122015433U)))));
        var_13 = ((/* implicit */_Bool) ((unsigned char) arr_0 [5ULL]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (unsigned short)20106)) : (((/* implicit */int) (unsigned short)45434))));
        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1])) > (((/* implicit */int) arr_5 [12ULL]))));
    }
    var_16 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20106)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1413))) : (12369805371966041739ULL));
}
