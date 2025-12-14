/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49849
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */unsigned long long int) (_Bool)1);
                    var_18 = ((/* implicit */_Bool) var_5);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_2] = ((/* implicit */long long int) arr_7 [i_3] [i_1] [i_0 + 1]);
                                arr_16 [i_4] [i_4] [i_4] [i_4] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 1]))) | (min((-3543620511586932628LL), (((/* implicit */long long int) arr_11 [i_0 + 1] [(short)0] [i_2 + 1] [i_1 + 1] [i_4] [i_2])))));
                                var_19 *= ((/* implicit */short) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_16))));
}
