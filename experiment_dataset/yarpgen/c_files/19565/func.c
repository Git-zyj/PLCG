/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19565
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
    var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (max((var_8), (((/* implicit */unsigned long long int) var_10)))) : (((((/* implicit */_Bool) -37040746)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_4)) : (var_7)))), (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((((/* implicit */_Bool) (-(arr_0 [i_1 - 1] [i_1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (arr_0 [i_1 - 1] [i_1]))) : (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])) ? (arr_0 [i_1 + 1] [i_1 - 1]) : (((/* implicit */unsigned int) var_4)))));
                arr_4 [i_0] [i_1] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_0]))), (max((((var_0) << (((arr_0 [i_1] [i_0]) - (957601546U))))), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1]))))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (arr_1 [i_1 + 1] [i_1])));
                var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) -37040749))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_1))) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 - 1])))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0U)) && ((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (var_6)))) : (((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
}
