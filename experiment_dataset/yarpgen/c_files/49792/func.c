/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49792
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = max((((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 3740668662U))))) ? (max((var_1), (var_1))) : (((/* implicit */int) ((short) var_0))))), (((/* implicit */int) var_6)));
                arr_7 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) var_3)))));
                arr_8 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) min((var_4), (((/* implicit */short) arr_1 [i_0])))))) & (((/* implicit */int) arr_3 [i_0]))));
                var_10 |= ((/* implicit */unsigned long long int) arr_3 [i_1]);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) var_4)) ? (3740668662U) : (3740668662U)))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-33))))));
    var_12 = ((/* implicit */signed char) var_3);
    var_13 = ((/* implicit */unsigned long long int) var_1);
}
