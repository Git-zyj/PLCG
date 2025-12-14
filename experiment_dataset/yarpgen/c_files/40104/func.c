/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40104
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [15U] [i_1] [i_1] = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) var_13)))));
                    arr_10 [i_1] [9ULL] = ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_2])) || (((/* implicit */_Bool) var_4))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_8))))));
}
