/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227564
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [9ULL] [i_0] = ((/* implicit */long long int) (((!((!(((/* implicit */_Bool) arr_1 [i_0])))))) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned long long int) (signed char)-113));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)32448), (((/* implicit */unsigned short) var_4))))) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (((2251799813681152ULL) >> (((arr_0 [i_0 - 1]) - (3749978313U)))))));
    }
    var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)498)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) (short)15184)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((((/* implicit */_Bool) -2216714904181979619LL)) ? (((/* implicit */int) (short)21586)) : (((/* implicit */int) (unsigned short)511)))))))));
}
