/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2790
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
    var_12 = var_9;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0 + 1] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (arr_0 [i_0 + 1])))) ? (((((/* implicit */_Bool) var_6)) ? (170693118976210663ULL) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((2036934485U) % (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                    var_13 ^= ((/* implicit */int) ((unsigned long long int) arr_7 [i_0] [i_2]));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_7);
                }
            } 
        } 
    } 
}
