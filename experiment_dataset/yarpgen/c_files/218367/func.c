/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218367
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */unsigned char) var_5);
                arr_4 [i_1] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) & (min((max((arr_0 [i_0]), (arr_0 [i_0]))), (((/* implicit */unsigned int) arr_3 [i_0] [i_1 - 1])))));
                var_13 &= ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])) <= (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (var_8))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0)))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) << ((((-(max((var_5), (((/* implicit */int) var_8)))))) + (97)))));
}
