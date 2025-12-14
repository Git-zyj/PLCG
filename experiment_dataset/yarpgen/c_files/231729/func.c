/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231729
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((((arr_0 [i_0]) - (((/* implicit */int) var_13)))) != ((((+(1401661983))) | (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_12) : (1401661990)))))));
        var_17 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_1 + 1]) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) var_2))))) ? ((+(arr_2 [i_1 + 1]))) : (arr_2 [i_1 + 1])));
        var_18 = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_13))))));
    }
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 1401661983)) < (min((2537555902U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1401661999)) ? (1401661983) : (((/* implicit */int) var_5)))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) == (((/* implicit */int) ((((((/* implicit */int) var_14)) >> (((((/* implicit */int) var_10)) - (123))))) == (((((/* implicit */_Bool) 2598095182U)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned short)56629)))))))));
    var_21 = ((/* implicit */unsigned int) ((var_2) && (((((/* implicit */_Bool) ((int) (unsigned short)8906))) && (((/* implicit */_Bool) var_14))))));
    var_22 = ((/* implicit */unsigned long long int) var_15);
}
