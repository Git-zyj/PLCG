/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22605
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_4 [3ULL] |= ((/* implicit */long long int) (~((~(max((var_0), (((/* implicit */unsigned int) (signed char)66))))))));
        arr_5 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) var_8)) : (min((((/* implicit */unsigned long long int) (signed char)-66)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_5))))))));
    }
    for (int i_1 = 2; i_1 < 8; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = max((((/* implicit */int) (signed char)-67)), (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 + 4])) : (((/* implicit */int) arr_0 [i_1 + 1])))));
        var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
    }
    var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) != (var_4))))) - (((unsigned long long int) var_2)))) > (((/* implicit */unsigned long long int) var_2))));
}
