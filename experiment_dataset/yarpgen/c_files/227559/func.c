/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227559
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
    var_18 = var_4;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_19 = ((var_10) % (((((/* implicit */_Bool) var_16)) ? (var_12) : (14470572992971662256ULL))));
                                var_20 &= ((unsigned long long int) min((var_15), (2643015010248376882ULL)));
                                var_21 = var_13;
                            }
                        } 
                    } 
                    var_22 = ((((/* implicit */_Bool) arr_6 [i_0])) ? (15593237798627564028ULL) : (((unsigned long long int) arr_0 [i_2 - 2])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_23 -= min((max((arr_2 [i_1] [i_1] [i_1 - 2]), (12694902550400004979ULL))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1 - 2])) ? (arr_2 [i_1] [i_1] [i_1 - 2]) : (12112750981635292895ULL))));
                                var_24 = min((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))));
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((2853506275081987587ULL) + (((var_14) + (6333993092074258698ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
