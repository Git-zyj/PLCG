/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30411
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
    var_16 = ((/* implicit */_Bool) ((((((var_5) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (signed char)15))))) : (((unsigned long long int) 16053832630889719140ULL)))) >> ((((-(((((/* implicit */int) var_3)) - (((/* implicit */int) (signed char)99)))))) - (48)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0]);
                    arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) max(((signed char)-2), (((/* implicit */signed char) arr_1 [i_1 - 1])))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_7 [1LL] [i_1] [i_2] [i_0]) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) * (arr_3 [i_1 + 1] [i_1 - 3] [i_2]))))));
                }
            } 
        } 
    } 
}
