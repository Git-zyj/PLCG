/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232622
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_15 |= ((/* implicit */long long int) arr_0 [i_2] [i_0]);
                    var_16 = arr_6 [i_2] [i_1];
                }
            } 
        } 
    } 
    var_17 ^= max(((~(((int) (unsigned short)50282)))), (((/* implicit */int) ((unsigned short) var_13))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43775)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))))) ^ (((/* implicit */int) var_2))));
}
