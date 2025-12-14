/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248990
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1]))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((_Bool) var_3));
    var_18 ^= ((/* implicit */unsigned short) (-(max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_11)))))))));
}
