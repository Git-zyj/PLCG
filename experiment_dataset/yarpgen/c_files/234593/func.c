/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234593
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
    var_18 = ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1 + 2])) ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 2]) : (arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2])))));
                var_20 = ((/* implicit */unsigned int) max((var_20), ((~(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((short) var_13));
}
