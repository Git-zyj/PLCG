/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226054
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
    var_18 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (var_5)));
        arr_3 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? ((-(min((arr_0 [i_0] [i_0]), (((/* implicit */int) (short)30953)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) < (var_14))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((int) (unsigned char)247)))))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? ((+(((/* implicit */int) (unsigned short)8128)))) : (((/* implicit */int) var_10))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((((var_6) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) + (((arr_0 [i_1] [i_1]) - (((/* implicit */int) arr_5 [i_1] [i_1])))))) + (((/* implicit */int) arr_5 [i_1] [i_1]))));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((max((arr_6 [i_1]), (((/* implicit */unsigned int) var_1)))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) 14553259094779050128ULL)) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)26)))) : (((/* implicit */int) arr_1 [i_1] [i_1])))))));
    }
    var_20 = (unsigned short)8646;
}
