/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35407
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
    var_16 = ((/* implicit */unsigned long long int) var_11);
    var_17 = ((/* implicit */signed char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    arr_6 [(unsigned short)2] [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned short) ((3616380080917146948ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87)))));
                    arr_7 [(signed char)4] [i_0 + 1] [(signed char)7] [i_2] = ((/* implicit */short) (_Bool)1);
                    arr_8 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 2])) - (((/* implicit */int) arr_1 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (short)-20138);
                                var_19 = ((/* implicit */unsigned char) arr_2 [i_0 + 2] [i_0 + 1]);
                                arr_14 [i_0] [i_1] [i_2] [i_1] [7U] = (+(((/* implicit */int) var_7)));
                            }
                        } 
                    } 
                }
                arr_15 [i_0 + 1] [4] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_0 [i_0 + 2])) < (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(_Bool)1] [10U] [i_1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0] [6U])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) arr_20 [i_5] [i_5]);
                arr_21 [i_6] [i_6] [11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_13), (arr_18 [i_5] [i_6] [i_6])))) | (((/* implicit */int) min(((short)32767), (((/* implicit */short) (_Bool)0)))))));
                var_21 = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_7)), (var_1)))));
                arr_22 [i_6] [(unsigned short)0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((arr_16 [(unsigned short)12]) < (arr_16 [(unsigned char)12]))))) ? (((((/* implicit */_Bool) arr_19 [i_5] [i_6] [i_6])) ? (arr_19 [i_6] [i_6] [(unsigned short)4]) : (((/* implicit */unsigned long long int) (-(var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [(signed char)8] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(unsigned short)3] [9U]))) : (arr_16 [i_5]))) > (((/* implicit */unsigned long long int) min((-33320821), (((/* implicit */int) arr_17 [(_Bool)1])))))))))));
                arr_23 [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_6]))))) + (((/* implicit */int) ((-112105389) < (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_12)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (201326592U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (max((((/* implicit */unsigned long long int) var_4)), (var_14)))))) ? (min((var_6), (((/* implicit */int) var_5)))) : (((/* implicit */int) var_7))));
}
