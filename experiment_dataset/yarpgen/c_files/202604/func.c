/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202604
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = (+(max((var_3), (((/* implicit */unsigned int) var_1)))));
                var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_12)) - (var_3)))) ? ((((_Bool)0) ? (((/* implicit */long long int) -1718755505)) : (-4657536474620424625LL))) : (((/* implicit */long long int) ((10U) + (((/* implicit */unsigned int) 1073725440)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) var_8);
                                var_18 = ((var_12) | (((/* implicit */int) var_7)));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 594348610)) ? (4657536474620424624LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_22 [i_4] [i_2] = ((/* implicit */unsigned int) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                }
            } 
        } 
        var_19 = ((var_2) | (((/* implicit */long long int) ((/* implicit */int) var_13))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (var_11))))));
    }
}
