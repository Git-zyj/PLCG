/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216118
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
    var_16 = ((/* implicit */unsigned short) var_15);
    var_17 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                arr_8 [i_1 - 1] [i_1] [i_1] = ((/* implicit */_Bool) (signed char)-95);
                var_18 |= ((/* implicit */_Bool) (unsigned char)252);
                var_19 = ((/* implicit */signed char) min((var_19), ((signed char)116)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 10; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (long long int i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_17 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */long long int) (_Bool)1);
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) 8754930653168619702LL))));
                }
            } 
        } 
    } 
}
