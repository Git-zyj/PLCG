/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37892
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((min((((/* implicit */long long int) 612990698U)), (6655403133692127988LL))) > (((/* implicit */long long int) max((3681976600U), (3640462399U))))))), ((~(min((1516750943U), (((/* implicit */unsigned int) (signed char)-62))))))));
        arr_3 [(signed char)8] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-75)))))));
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
        var_17 = ((/* implicit */unsigned short) (+(12001678753158992576ULL)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_15) : (min((((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_1 [(unsigned char)15]))), (var_2)))));
    }
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = arr_7 [i_1];
        arr_9 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44813))))) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_10)))) - (14225)))))) : (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44813))))) << (((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_10)))) - (14225))) - (25701))))));
        arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 1])) < (((/* implicit */int) arr_0 [i_1 + 2])))))) | (min((arr_6 [i_1]), (((/* implicit */unsigned int) var_0))))));
    }
    var_18 = ((/* implicit */_Bool) var_12);
}
