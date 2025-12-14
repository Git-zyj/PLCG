/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222501
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
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */unsigned long long int) (+((((-(arr_1 [i_1] [i_0]))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)183)))))))));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (arr_0 [(unsigned char)12])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-13)))))));
    var_16 = ((/* implicit */_Bool) var_7);
    var_17 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_1))))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) arr_10 [i_2]);
                    var_18 = ((/* implicit */unsigned long long int) max(((unsigned char)81), (((/* implicit */unsigned char) (signed char)13))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((867829706U) >> (((1143234664) - (1143234652))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) == (((/* implicit */int) arr_5 [i_2] [i_2]))))))));
                                arr_20 [i_2] [i_5] [i_2] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)84)) != (-1143234652)))), (var_5)))));
                                arr_21 [i_6] [i_5] [(short)12] [i_5] [i_3] [i_6] = ((/* implicit */_Bool) (((-(arr_15 [i_5]))) * (((/* implicit */unsigned long long int) min(((+(var_0))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_5] [i_2] [i_2]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        for (int i_8 = 2; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41844)))))));
                                var_21 += ((/* implicit */unsigned int) ((((((/* implicit */int) arr_17 [i_8] [i_8 - 2] [i_8 + 4] [i_8 + 4] [i_8 + 4])) % (((/* implicit */int) arr_17 [i_8] [i_8 + 2] [i_8 - 1] [i_8 - 1] [i_8])))) != (((/* implicit */int) ((((/* implicit */int) arr_17 [i_8] [i_8 - 2] [i_8 + 1] [i_8 - 2] [i_8])) != (((/* implicit */int) arr_17 [i_8] [i_8 + 2] [i_8 - 2] [i_8 + 2] [i_8])))))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_3))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)60)) || (((/* implicit */_Bool) (unsigned char)183))));
                                var_24 = ((/* implicit */int) ((((/* implicit */int) max(((unsigned char)102), (((/* implicit */unsigned char) (signed char)-40))))) <= ((~(1143234673)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
