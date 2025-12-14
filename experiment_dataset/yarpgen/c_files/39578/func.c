/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39578
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
    for (int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)8834)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)91))));
                    arr_7 [i_0] [i_1 + 3] [i_1 + 3] [i_2] |= ((/* implicit */unsigned int) var_8);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_1 + 1] [i_0] = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_3] [i_2] [i_4] [i_4])) ? (arr_12 [i_4] [i_0] [i_2] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) ((int) arr_8 [i_0] [i_0] [i_2] [i_3])))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (((!((!((_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (arr_12 [i_0] [i_1] [i_0] [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1023)))) : (((1319230887U) + (((/* implicit */unsigned int) -1427875056))))))) : (((((_Bool) 8819380549036538023ULL)) ? (((unsigned long long int) arr_11 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((var_6) * (var_1)))) ? (max((var_6), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-100))))))), ((+((-(var_6)))))));
}
