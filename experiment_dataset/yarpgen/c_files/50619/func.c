/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50619
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
    var_16 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((var_8) << (((((((/* implicit */int) var_15)) + (31298))) - (18)))))), (((var_14) >> (((((/* implicit */int) var_15)) + (31298))))))), (((/* implicit */long long int) var_2))));
    var_17 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_5 [i_1] [i_1] [i_1] [i_1])))) || (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_4])), (arr_11 [i_0] [i_4] [i_0] [i_0] [i_4] [i_0]))))) >= (max((arr_5 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */long long int) arr_10 [i_0] [i_0]))))))));
                                arr_13 [i_4] [i_4] [i_1] [i_0] [i_4] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [i_3] [i_1] [i_4] [i_4])), (min((max((((/* implicit */long long int) arr_6 [i_2] [i_3])), (arr_4 [i_0] [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_1])) * (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0] [i_1]))));
                arr_15 [i_0] [i_0] [i_0] = ((((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */unsigned long long int) (~(arr_4 [i_0] [i_1] [i_1]))))))) - (((/* implicit */int) arr_0 [i_0] [i_0])));
                arr_16 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1])) && (((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))), (((max((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0])), (arr_4 [i_0] [i_0] [i_0]))) | (((/* implicit */long long int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 3; i_5 < 19; i_5 += 2) 
                {
                    for (unsigned int i_6 = 4; i_6 < 18; i_6 += 1) 
                    {
                        {
                            arr_23 [i_0] [i_1] [i_5] = ((/* implicit */unsigned short) ((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) * (max((max((arr_19 [i_5] [i_5] [i_5] [i_6]), (((/* implicit */unsigned long long int) arr_20 [i_5] [i_1])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1] [i_1])))))))));
                            arr_24 [i_5] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((arr_22 [i_0] [i_1] [i_0] [i_5] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_6])) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_1] [i_6])))))))) > (arr_2 [i_1])));
                            arr_25 [i_5] [i_1] = ((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [i_5] [i_5] [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
}
