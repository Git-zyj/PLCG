/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53426
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
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((2140746166139728344LL) >> (((arr_1 [i_0 + 4] [8]) - (3053521091U))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(arr_1 [15LL] [i_0 + 4])));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_10)) ? (arr_6 [i_1]) : (((((/* implicit */_Bool) var_7)) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) var_5))))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) -1))));
    }
    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((-1330995455) + (2147483647))) >> (((var_2) - (1767618389)))))) - (var_10)));
}
