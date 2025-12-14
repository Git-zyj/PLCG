/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44974
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : ((-(14824584381941066740ULL))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [11] [i_1] |= 14824584381941066748ULL;
                                arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [6LL] [9U] = ((/* implicit */long long int) 4294967295U);
                            }
                        } 
                    } 
                    arr_17 [i_0] [1U] [i_2] = ((/* implicit */short) (~(790764475)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_12);
}
