/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23324
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) 4549607712528045845ULL)) ? (((/* implicit */int) (unsigned short)21930)) : (((/* implicit */int) (unsigned short)43590)))) << (((((((/* implicit */_Bool) arr_12 [i_1 - 3] [i_1 + 2] [i_1] [i_4] [(unsigned char)18])) ? (arr_12 [i_1 - 3] [i_1 + 2] [(unsigned char)8] [i_3] [i_3]) : (((/* implicit */unsigned int) arr_13 [i_1 - 3] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_3])))) - (2137449143U)))));
                                var_16 = ((/* implicit */_Bool) arr_1 [i_2]);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)43591)) - (996448247)))), (arr_10 [i_1]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_5);
    var_19 = var_5;
}
