/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190911
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
    var_15 = ((/* implicit */int) (((-(((((/* implicit */unsigned long long int) var_9)) + (var_14))))) >= (max((((((/* implicit */_Bool) -1883587347)) ? (((/* implicit */unsigned long long int) var_2)) : (var_4))), (((((/* implicit */_Bool) 1883587346)) ? (var_4) : (((/* implicit */unsigned long long int) -1883587347))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) max((max(((-(2883332063092855413LL))), (((/* implicit */long long int) var_2)))), (((((/* implicit */_Bool) ((arr_1 [i_4]) + (((/* implicit */int) var_8))))) ? (arr_9 [i_2] [i_1]) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)35182)), (2027442609))))))));
                                var_16 = ((/* implicit */short) max((((((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_2] [(signed char)1] [i_1] [(signed char)1])) ? (5049185517577175559LL) : (((/* implicit */long long int) arr_1 [i_1])))) + (((/* implicit */long long int) max((1883587366), (((/* implicit */int) var_11))))))), (((/* implicit */long long int) arr_6 [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_2] [3LL] [i_0] = max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) -1883587347)) : (var_2)))) ? (((/* implicit */long long int) var_1)) : ((+(arr_7 [i_0] [i_0]))))), (((/* implicit */long long int) max(((~(-1883587347))), (((((/* implicit */int) var_13)) & (((/* implicit */int) (unsigned short)32795))))))));
                                var_17 = ((/* implicit */int) arr_8 [i_0] [4LL] [i_2] [i_0]);
                            }
                        } 
                    } 
                }
                arr_20 [i_0] [i_1] = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]);
                var_18 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((((arr_6 [i_0]) & (arr_6 [i_0]))) + (arr_13 [i_0] [i_1] [i_0] [i_1] [i_0]))) & (((/* implicit */int) (unsigned short)60580))))) : (((/* implicit */unsigned int) ((((((arr_6 [i_0]) & (arr_6 [i_0]))) - (arr_13 [i_0] [i_1] [i_0] [i_1] [i_0]))) & (((/* implicit */int) (unsigned short)60580)))));
                arr_21 [i_0] [i_0] = ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) (unsigned short)30370)))))) ? (arr_13 [i_0] [i_0] [i_0] [i_1] [(short)1]) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_0])));
                arr_22 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_10);
            }
        } 
    } 
    var_19 = ((/* implicit */int) (short)-18425);
}
