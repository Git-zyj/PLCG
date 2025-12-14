/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201738
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] &= ((/* implicit */long long int) arr_1 [i_2]);
                    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [(_Bool)1]))))), (((((/* implicit */_Bool) var_4)) ? (var_7) : (arr_7 [i_0])))));
                }
            } 
        } 
    } 
    var_12 = (-(var_3));
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((_Bool) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */unsigned long long int) var_5)) : (var_4)))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8988))) <= (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)19904)) <= (((/* implicit */int) (short)-32762))))), (1938782235U)))));
}
