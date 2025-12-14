/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194487
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_2] [i_0] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) -292037556)), (0U)));
                    arr_11 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-29)) / (292037556)))) * (0U))), (0U)));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned short) var_9);
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((((/* implicit */int) var_9)) - (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) var_4)) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_13 = ((/* implicit */_Bool) var_4);
}
