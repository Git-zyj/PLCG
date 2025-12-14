/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229434
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = arr_1 [i_0];
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(max((((/* implicit */long long int) arr_1 [i_0])), (var_1))))))));
        arr_4 [(unsigned short)0] = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 - 1])) ? (((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (arr_5 [(unsigned short)7]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_7 [i_1] [i_1 - 1]))))))))));
        var_21 |= ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])) / (((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) arr_6 [i_1])) ? (7364346737305173879ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1 - 1]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (short)(-32767 - 1)))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_11))) : (((var_5) - (((/* implicit */unsigned int) var_7)))))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (var_0) : (arr_6 [i_1 - 1])))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_1))))));
        var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)32753)), (2997508481U)))) ? (((/* implicit */long long int) arr_6 [i_1])) : (((((-692046257402220394LL) + (9223372036854775807LL))) >> (((2374924746269272269ULL) - (2374924746269272217ULL)))))));
    }
    var_24 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) var_11)))), (((min((var_1), ((-9223372036854775807LL - 1LL)))) > (((/* implicit */long long int) min((-987598895), (((/* implicit */int) var_6)))))))));
    var_25 |= ((/* implicit */int) var_3);
}
