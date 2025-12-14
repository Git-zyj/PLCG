/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27113
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) max((((arr_4 [i_0] [i_1] [i_1 + 2]) - (arr_4 [i_0] [i_1] [i_1 + 1]))), (arr_4 [i_0] [(_Bool)1] [i_1 + 2])));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) var_10);
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_4])) ^ (((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                } 
                var_13 += ((/* implicit */short) -2437757091917694127LL);
            }
        } 
    } 
    var_14 += ((/* implicit */long long int) var_7);
}
