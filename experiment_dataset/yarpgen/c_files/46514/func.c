/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46514
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [9ULL]);
                    var_14 -= ((/* implicit */short) arr_5 [i_0] [20LL] [i_2]);
                    var_15 = ((/* implicit */unsigned short) ((arr_4 [i_1]) - (((/* implicit */unsigned long long int) (((-(793925591977425328LL))) + (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_12);
    var_17 = ((/* implicit */unsigned long long int) var_1);
}
