/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54519
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
    var_17 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [(unsigned short)14] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))), (min((arr_1 [i_0 - 1] [i_1 + 1]), (((((/* implicit */_Bool) var_10)) ? (var_9) : (arr_1 [i_0] [i_1])))))));
                var_18 += ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (max((((/* implicit */unsigned int) arr_0 [(short)6])), (261888U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [0])))))) : (arr_6 [i_0]));
                arr_8 [i_0] [i_1 - 1] [(unsigned short)17] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (short)30720)) < (arr_3 [i_0 + 2]))))));
                var_19 = ((/* implicit */unsigned int) var_12);
            }
        } 
    } 
}
