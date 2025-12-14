/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44606
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (18446744073709551615ULL)));
                    arr_11 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 6272873387922374154ULL)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1 - 1]))))));
                }
            } 
        } 
    } 
    var_12 = (signed char)(-127 - 1);
}
