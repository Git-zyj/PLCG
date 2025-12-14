/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233268
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
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4754036343733464980ULL)) ? (((/* implicit */int) (unsigned char)124)) : (728715331)))) != ((+(arr_9 [i_1 - 1] [i_1 + 1])))));
                                var_18 = (unsigned short)64510;
                                arr_12 [i_3] [i_2] [i_4] [i_2] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)96);
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? ((-(((unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)144)))))));
                }
            } 
        } 
    } 
}
