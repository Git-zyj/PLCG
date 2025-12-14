/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226953
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1 - 2] [i_2] [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1 - 2]))))));
                            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2] [i_3 - 1])) * (((/* implicit */int) arr_2 [i_3] [i_1])))) % (((/* implicit */int) arr_4 [i_1] [(short)6] [i_3])))))));
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_5))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */short) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            {
                arr_16 [i_4] [i_4] [i_5] = ((/* implicit */long long int) arr_13 [i_4] [i_5]);
                var_14 = ((/* implicit */unsigned short) (((-(2018641619U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_4])))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        for (unsigned short i_7 = 3; i_7 < 18; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                {
                    arr_24 [20ULL] [20ULL] [i_8] [i_6] = ((/* implicit */unsigned short) min(((-(((((/* implicit */int) arr_17 [i_6] [i_7])) * (((/* implicit */int) (short)-19102)))))), ((-(var_11)))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (short i_10 = 3; i_10 < 21; i_10 += 2) 
                        {
                            {
                                arr_30 [(short)0] [i_7] [i_8] [i_6] [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_25 [i_7] [i_8] [i_7] [i_7 + 2] [i_10 + 1])) ? (((/* implicit */int) (unsigned short)10802)) : (((/* implicit */int) arr_25 [10LL] [i_8] [i_6] [i_7 - 3] [i_10 + 1])))) | (((/* implicit */int) arr_21 [i_7 + 2] [i_7 + 3] [i_8]))));
                                var_15 = ((/* implicit */short) ((var_7) << (((min(((+(3390758015866066852ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_6] [i_7 + 1] [i_10])) + (arr_20 [i_10 - 1] [15ULL] [i_8])))))) - (3390758015866066811ULL)))));
                                arr_31 [(unsigned short)20] [i_9] [i_8] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)12544)) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7] [7ULL] [i_7]))) : (arr_23 [i_10 - 1] [i_7] [(short)10])))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_17 [i_6] [i_7 + 4]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) (!(arr_21 [i_6] [(signed char)12] [i_6])));
                                var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)45823))))), (var_0)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
