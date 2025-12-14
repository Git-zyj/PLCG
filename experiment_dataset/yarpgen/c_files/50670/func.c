/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50670
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
    var_10 = (+(((/* implicit */int) ((max((((/* implicit */long long int) (unsigned short)40601)), (var_7))) != (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (var_3))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [i_0 - 2] = ((/* implicit */_Bool) (-(max((var_7), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_2]))))));
                    var_11 = ((/* implicit */_Bool) ((long long int) (unsigned char)46));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_3 [i_0 + 1] [i_1] [i_1]);
                    arr_9 [i_0 - 2] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_0 - 3] [i_0] [i_0 - 3] [i_0 - 2]), (((/* implicit */unsigned long long int) (unsigned char)209))))) ? (((unsigned long long int) arr_4 [i_1] [i_2])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)41628)) + (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2])))))));
                }
            } 
        } 
    } 
}
