/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222148
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
    var_20 = ((/* implicit */long long int) 698951766);
    var_21 = ((/* implicit */unsigned short) ((short) var_10));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28672))) < (((unsigned long long int) var_4))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [(unsigned char)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)48193)) ? (arr_6 [i_3] [i_1]) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6403582393525006232ULL)) && (((/* implicit */_Bool) (short)-28680))))), (max((var_1), (12043161680184545382ULL)))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [(short)0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))) < (((unsigned int) (unsigned short)17357))));
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_4])) && (((/* implicit */_Bool) -417319022)))))))), (min((((/* implicit */unsigned long long int) (short)28675)), (var_4)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
