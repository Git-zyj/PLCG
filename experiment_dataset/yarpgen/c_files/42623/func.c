/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42623
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_5))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = var_7;
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1 + 3] [i_0 - 1]))) ? ((-(((/* implicit */int) arr_4 [i_1 + 3] [i_0 - 1])))) : (((((/* implicit */_Bool) arr_0 [i_1 + 3] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_1 + 3] [i_0 - 1])) : (arr_0 [i_1 + 3] [i_0 - 1])))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (max((max((((/* implicit */unsigned long long int) ((signed char) (unsigned short)61373))), (arr_2 [i_1 + 2]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 1])))))))));
                arr_6 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned short) arr_0 [7ULL] [7ULL]);
                arr_7 [i_0] = arr_2 [i_0];
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4162)))))) <= (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
    var_19 = ((/* implicit */int) var_9);
}
