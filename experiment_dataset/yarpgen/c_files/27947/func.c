/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27947
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
    var_18 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    var_19 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1 - 1])) <= (((/* implicit */int) max((arr_6 [i_2] [i_2]), ((signed char)1))))))), (arr_2 [i_1]));
                    var_20 = ((unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_3 [i_2] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 2] [i_1] [i_1 + 1]))) : ((-(var_14)))));
                }
            } 
        } 
    } 
}
