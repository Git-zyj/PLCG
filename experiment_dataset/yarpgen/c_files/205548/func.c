/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205548
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
    var_10 = ((/* implicit */long long int) var_0);
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)124), (((/* implicit */signed char) (_Bool)0)))))) >= (var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1] [i_0]);
                    var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) arr_8 [i_2 + 2] [i_2] [i_2 + 1] [i_2 + 3]))))) && (((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 + 3])) || (((/* implicit */_Bool) var_2))))));
                }
            } 
        } 
    } 
}
