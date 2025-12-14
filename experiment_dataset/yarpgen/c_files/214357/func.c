/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214357
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (signed char)109))) ? (((((/* implicit */_Bool) var_2)) ? (min((var_8), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (var_8)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */short) ((signed char) var_1));
                arr_7 [i_1] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0])))))));
                var_12 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2] [i_1 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                var_13 = ((/* implicit */unsigned long long int) 7577420610048284810LL);
            }
        } 
    } 
}
