/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193855
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 3] [i_1 + 2] [i_1 + 3])) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)4])) && (((/* implicit */_Bool) 1289353098U)))))))), (max((((/* implicit */unsigned int) ((signed char) var_4))), (((unsigned int) 3005614174U))))));
                    arr_9 [i_0] [18LL] [i_2] = arr_3 [i_0];
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (min((((/* implicit */unsigned int) var_8)), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */short) var_0)))))))), (((/* implicit */unsigned int) var_2))));
}
