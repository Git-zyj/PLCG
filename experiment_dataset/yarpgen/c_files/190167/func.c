/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190167
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
    var_12 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((898297852), (((/* implicit */int) (short)-26))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4092)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_10))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))))));
                var_14 = ((/* implicit */unsigned int) (!(((((unsigned long long int) arr_2 [i_0] [i_1] [i_0])) >= (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
            }
        } 
    } 
}
