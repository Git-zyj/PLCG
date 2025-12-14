/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204272
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
    var_13 = ((/* implicit */unsigned short) var_0);
    var_14 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -3333211960785527783LL))))) << (((((/* implicit */int) arr_1 [i_1])) - (124)))));
                var_15 = ((/* implicit */signed char) ((arr_0 [i_0] [i_1]) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 2]))) - (max((((/* implicit */unsigned long long int) arr_1 [i_1 + 1])), (arr_3 [i_0] [i_1 + 1])))))));
                arr_5 [i_1] [9] [i_1 + 1] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_0 [20LL] [20LL]))))), (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_0 [i_1 + 1] [i_1 + 1])))));
            }
        } 
    } 
}
