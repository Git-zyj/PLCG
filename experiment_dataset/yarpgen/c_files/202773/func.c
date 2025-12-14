/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202773
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_13))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) min((arr_2 [i_0 - 1] [i_0 - 1] [i_1]), (((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_1]))))))));
                var_15 ^= ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))), (((((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_1]))))));
                var_16 ^= ((/* implicit */short) ((long long int) var_0));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_0 [(short)1] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) arr_2 [9LL] [9LL] [9LL])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [18U] [i_0] [i_1]))))))) : (max((((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_0 [i_0] [i_1]))), (arr_0 [i_1] [i_0 - 1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((signed char) var_12));
}
