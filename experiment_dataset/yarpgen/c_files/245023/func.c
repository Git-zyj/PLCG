/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245023
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
    var_14 = ((max((((/* implicit */int) (unsigned char)186)), (-526826703))) & (-526826720));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = arr_4 [i_0];
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (-(17443768816943426973ULL)));
                                var_17 = ((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]);
                                var_18 = ((/* implicit */unsigned long long int) 750629662U);
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((unsigned char) min((((17443768816943426973ULL) * (var_12))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_19 [i_6] [i_1] [(unsigned char)12] [4LL] [i_6] = var_5;
                                var_21 = ((/* implicit */unsigned short) var_8);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        for (int i_8 = 2; i_8 < 11; i_8 += 1) 
                        {
                            {
                                arr_24 [i_8] [i_8] [i_7] [i_2] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((((unsigned int) var_0)) << ((((+(max((var_11), (((/* implicit */unsigned long long int) (_Bool)1)))))) - (7415640158449469645ULL)))));
                                var_22 = ((/* implicit */long long int) var_4);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_9 = 1; i_9 < 13; i_9 += 1) 
                {
                    var_23 = ((/* implicit */int) ((unsigned int) (_Bool)1));
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1002975256766124642ULL)));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((12929757171512098567ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))))) | (min((((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) var_3))))), (((var_2) / (13341095171229942238ULL)))))));
}
