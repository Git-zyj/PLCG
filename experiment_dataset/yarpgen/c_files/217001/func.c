/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217001
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
    var_15 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) var_9))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((((/* implicit */unsigned long long int) min((var_8), (var_8)))) + (min((((/* implicit */unsigned long long int) var_5)), (arr_3 [i_0] [i_1]))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))))))));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((unsigned long long int) arr_0 [i_0 + 3])) / (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))))));
                    var_18 = ((/* implicit */_Bool) arr_4 [i_0 - 1]);
                }
            } 
        } 
    } 
}
