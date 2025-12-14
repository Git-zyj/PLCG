/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215573
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
    for (long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))) > (((/* implicit */int) max(((_Bool)1), ((!(var_4))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_21 += ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) 4041433574U)) ? (((/* implicit */unsigned int) 1686025998)) : (var_14))), (((/* implicit */unsigned int) -783072371)))), (((/* implicit */unsigned int) var_2))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1686025991)) ? (var_16) : (((((/* implicit */_Bool) ((unsigned int) 1686025998))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_0])))) : (min((1686025990), (((/* implicit */int) arr_3 [i_0]))))))));
        }
        for (short i_2 = 3; i_2 < 9; i_2 += 3) 
        {
            var_23 = ((/* implicit */int) ((((arr_0 [i_0 + 1]) | (((/* implicit */unsigned long long int) arr_2 [i_0 - 2] [i_0 - 2] [i_2])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_2 - 1] [4ULL])) ? (arr_2 [(_Bool)0] [i_2] [i_0]) : (((/* implicit */long long int) -510413474)))))));
            arr_10 [i_0] = ((/* implicit */short) var_7);
        }
        var_24 = ((/* implicit */int) max(((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1))))) : (var_10))), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) 1651833322)), (var_13))) > (((/* implicit */long long int) ((unsigned int) arr_6 [i_0 + 2]))))))));
    }
    var_25 = ((/* implicit */unsigned long long int) ((_Bool) 253533721U));
}
