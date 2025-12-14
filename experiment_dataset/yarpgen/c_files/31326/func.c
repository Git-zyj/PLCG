/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31326
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0 - 1] [i_0 + 1]);
        arr_5 [i_0 - 1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) (-(arr_2 [i_0])));
    }
    for (long long int i_1 = 1; i_1 < 9; i_1 += 2) /* same iter space */
    {
        arr_11 [i_1] = ((/* implicit */unsigned short) ((short) max((((((/* implicit */_Bool) arr_9 [i_1])) ? (33546240ULL) : (var_9))), (((/* implicit */unsigned long long int) 984953132U)))));
        arr_12 [i_1] = ((/* implicit */unsigned long long int) var_7);
    }
    var_14 = ((/* implicit */unsigned int) var_0);
    var_15 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) 984953117U))))) ? (min((var_9), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((_Bool) var_0)))))));
}
