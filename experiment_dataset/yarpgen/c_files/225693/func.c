/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225693
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) arr_2 [i_2 - 1]);
                    arr_6 [i_0] [i_2] [i_2] = ((/* implicit */int) arr_0 [i_1] [1]);
                    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned short) arr_4 [i_2 - 1])), (arr_3 [i_2 + 1])));
                    arr_7 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */unsigned short) var_14);
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */unsigned long long int) (-(var_16)));
}
