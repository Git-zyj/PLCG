/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209830
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
    var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) 1828176011U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)124))))) : ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)129))))) : (var_12)))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (3836586163186796419ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)19007)), (1965703507U))))))));
        var_21 = ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)153)), (((((/* implicit */int) arr_0 [i_0])) >> (((arr_1 [i_0 + 3] [i_0]) - (2840693059U)))))))) ? (max(((-(arr_1 [i_0] [i_0 - 1]))), (arr_1 [i_0 - 1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 3]))));
        arr_3 [i_0 + 2] = ((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0])), (663995455)));
        var_22 -= ((/* implicit */signed char) arr_1 [i_0 + 2] [i_0]);
    }
}
