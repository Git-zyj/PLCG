/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197494
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
    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32187)) - ((-(((/* implicit */int) (short)-16077))))));
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (short)16072);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1]);
            }
        } 
    } 
}
