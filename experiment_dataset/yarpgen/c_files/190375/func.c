/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190375
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [6] |= ((/* implicit */unsigned short) arr_1 [2LL] [i_1]);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) arr_2 [i_0] [4]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-125)) * (((/* implicit */int) ((((/* implicit */_Bool) 1878065376U)) && (((/* implicit */_Bool) (unsigned short)56319))))))))));
}
