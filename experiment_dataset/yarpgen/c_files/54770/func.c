/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54770
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_1] [i_0]);
                    var_20 = ((/* implicit */unsigned int) arr_1 [(short)10] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) : (arr_13 [i_3] [i_4] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3]))) : (((unsigned long long int) ((arr_13 [i_3 - 1] [i_4 + 1] [i_7]) | (((/* implicit */unsigned long long int) arr_11 [i_3])))))));
                                var_22 = ((((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_7 + 2])) * (((/* implicit */int) arr_10 [i_3])));
                                var_23 = ((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_7] [i_7] [i_7 + 3] [i_7] [i_7 + 2]);
                                var_24 = arr_22 [i_3] [i_4 + 1] [i_4 + 1] [i_3] [i_7 + 3] [i_7];
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (2904827284819068836LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-72)))));
            }
        } 
    } 
}
