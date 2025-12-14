/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230141
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
    var_12 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [13LL] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_1 - 1] [i_2 - 1] [i_2])), (arr_4 [i_1] [i_2 - 1] [21])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) arr_7 [i_2] [i_0] [i_2])))))) : (((((/* implicit */_Bool) 335836775871636785LL)) ? (((/* implicit */unsigned int) var_9)) : (max((var_7), (((/* implicit */unsigned int) var_5)))))));
                    var_13 = ((/* implicit */int) min(((unsigned short)60259), ((unsigned short)22)));
                }
            } 
        } 
    } 
}
