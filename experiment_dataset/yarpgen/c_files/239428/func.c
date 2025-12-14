/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239428
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
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) 7)) : (var_8))))) <= (min((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) 423926645))))), (var_17)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) 423926632)), (max((((/* implicit */long long int) (signed char)16)), (arr_7 [i_0] [i_1] [i_2 - 1]))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [7LL]))) : (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                    var_19 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((long long int) arr_5 [10] [i_2])) << (((-1188790376275915635LL) + (1188790376275915682LL))))) : (max((((/* implicit */long long int) min((423926656), (((/* implicit */int) (signed char)6))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_7 [i_0] [i_1] [i_0]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_0))));
}
