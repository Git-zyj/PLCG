/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229613
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
    var_14 = var_0;
    var_15 = var_3;
    var_16 = ((long long int) 827974315668675794LL);
    var_17 ^= ((var_11) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (var_9)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [i_0] = max(((+(arr_3 [i_0] [i_1] [i_1]))), ((+(arr_3 [i_0 - 2] [i_0 - 2] [i_0 + 1]))));
                arr_5 [i_0 - 1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_1 [i_0])))))) > ((-(arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                var_18 = ((((((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_1 [i_0]) : (arr_2 [i_1] [14LL]))) + (9223372036854775807LL))) << (((arr_3 [3LL] [i_0 - 1] [3LL]) - (4375259975375385803LL))))) & (((arr_0 [i_0 + 1] [i_0 - 1]) | (arr_0 [i_0 + 1] [i_0 - 2]))));
            }
        } 
    } 
}
