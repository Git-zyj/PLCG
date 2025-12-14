/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199841
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
    var_16 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [8U] [10ULL] [3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_1]))));
                    arr_10 [i_1] [i_2] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 1])))) * (((/* implicit */int) arr_1 [i_0 - 1]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((short) var_14));
    var_18 = ((/* implicit */unsigned short) var_3);
    var_19 = ((unsigned short) (!(var_3)));
}
