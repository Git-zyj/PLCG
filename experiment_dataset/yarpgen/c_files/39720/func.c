/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39720
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (-(var_11))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) arr_1 [i_0]))) : (max(((+(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((signed char) (signed char)124)))))));
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                    var_14 = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    } 
}
