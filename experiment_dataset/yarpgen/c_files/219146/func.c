/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219146
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
    var_11 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [(short)13] [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 10U)), (var_7)));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_11 [i_4] [i_1 + 1] [i_2] [i_1 + 1] [i_4] [i_0 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (arr_3 [i_1])));
                                arr_13 [i_2] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)32)), (2027470691U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
