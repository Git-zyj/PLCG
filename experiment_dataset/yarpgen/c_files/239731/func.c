/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239731
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (short)17316)), (arr_3 [i_0] [i_1 + 3]))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)0)) : (arr_4 [i_0] [i_1] [i_1] [i_2])))))));
                    var_21 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_2 [i_0])))), ((+(((/* implicit */int) arr_1 [i_1 + 3]))))));
                }
            } 
        } 
    } 
    var_22 = min(((+(5330424368432195299LL))), (((/* implicit */long long int) ((var_5) << (((((/* implicit */int) var_16)) - (19645)))))));
}
