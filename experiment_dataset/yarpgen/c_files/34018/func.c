/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34018
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (arr_3 [i_1 - 1] [i_1 - 1])))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 - 1])), (arr_4 [i_1 - 1] [i_1]))) : (((/* implicit */unsigned long long int) min((arr_5 [i_1 - 1] [i_1]), (arr_5 [i_1 - 1] [i_1]))))));
                arr_7 [i_1] = ((/* implicit */signed char) max(((~(((/* implicit */int) (short)6716)))), (((/* implicit */int) (short)-20681))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)252)), (9845301880812888136ULL)));
    var_15 = ((/* implicit */signed char) var_0);
}
