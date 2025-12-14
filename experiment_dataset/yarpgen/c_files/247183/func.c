/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247183
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (514187610007640333ULL))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))) : (var_1)))))) ? (max((((/* implicit */unsigned long long int) min((513816435U), (2335152512U)))), (min((17932556463701911270ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_2 [i_0 + 2]) : (arr_3 [i_1 + 3] [i_0 - 1] [i_0]))), (((((/* implicit */_Bool) arr_3 [i_1 - 4] [i_0 - 1] [i_0 - 1])) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1])))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [2U])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) : (arr_2 [i_0 - 1])))) && (((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0 + 1]))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_18)) / (var_9)))) ? (var_1) : (((/* implicit */unsigned long long int) max((var_18), (((/* implicit */long long int) var_7)))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))) + (((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */long long int) var_17))));
    var_23 = ((/* implicit */unsigned long long int) max((min((((long long int) 85266514U)), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (var_7))), (((/* implicit */int) ((unsigned short) var_11))))))));
}
