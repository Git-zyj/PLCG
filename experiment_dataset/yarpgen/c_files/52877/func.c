/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52877
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
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) | (((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 + 2])))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] = max((((/* implicit */long long int) ((unsigned char) ((arr_4 [15]) + (((/* implicit */unsigned long long int) 2147483640)))))), ((~(((((/* implicit */long long int) (-2147483647 - 1))) - (arr_2 [7]))))));
                                var_16 = ((/* implicit */unsigned char) (~(var_8)));
                                arr_16 [i_2] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned long long int) 9734311034764021433ULL));
                                var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), (min((arr_11 [i_4] [i_3] [i_2] [i_1 - 1] [i_1] [i_0]), (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])))))), ((~(max((((/* implicit */unsigned int) var_4)), (var_0)))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1 - 1] [i_0] = ((/* implicit */signed char) ((unsigned short) (~(min((((/* implicit */long long int) 1164716451)), (-4696413782818318890LL))))));
                arr_18 [i_0 + 2] = ((/* implicit */int) arr_2 [i_1]);
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0]) == (arr_12 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2]))))) <= (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((var_6) | (-2147483647)));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (int i_6 = 2; i_6 < 10; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (unsigned short i_8 = 2; i_8 < 11; i_8 += 4) 
                    {
                        {
                            arr_31 [3ULL] [(signed char)5] [3ULL] [i_7] [i_7] [i_5] = ((/* implicit */short) -2147483647);
                            arr_32 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_8 - 2] [i_6] [i_8] [i_6 + 2] [i_6] [i_6 + 2])) ? (((/* implicit */int) arr_14 [i_8 - 2] [i_6] [7] [i_6 - 2] [7] [i_6])) : (((/* implicit */int) arr_14 [i_8 - 2] [i_6] [i_7] [i_6 + 1] [i_5] [i_7])))) * (((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5])) && (arr_3 [i_5] [i_5])))) >> (((((((/* implicit */_Bool) arr_4 [i_8])) ? (arr_27 [5LL] [i_5] [i_7]) : (((/* implicit */unsigned long long int) arr_19 [i_7] [i_5])))) - (6206941948390037086ULL)))))));
                            arr_33 [i_5] [i_6] [i_6] [1] = ((/* implicit */int) min((((((((-1776620306084481173LL) + (9223372036854775807LL))) >> (0LL))) ^ (((/* implicit */long long int) max((var_6), (var_8)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_5] [i_8])) || (((/* implicit */_Bool) min((-2147483637), (((/* implicit */int) (short)4032))))))))));
                            var_20 = ((/* implicit */unsigned char) ((int) min((var_0), (((/* implicit */unsigned int) ((1667807773) - (1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) 9110773676009916590ULL)) ? (((/* implicit */long long int) ((arr_21 [i_5] [i_6 + 1]) + (arr_21 [i_5] [i_6 + 3])))) : (max(((-(var_1))), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_10] [i_9] [i_6] [(unsigned short)7])) / (((/* implicit */int) var_14))))))))))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_6] [2])) ? (arr_12 [i_5] [i_6 + 3] [i_9] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_15)))) : (max((var_12), (((/* implicit */long long int) var_3))))))) | (max((((/* implicit */unsigned long long int) (signed char)-79)), (9110773676009916606ULL))))))));
                            var_23 = ((/* implicit */long long int) max((min((5013345788923374326ULL), (((/* implicit */unsigned long long int) (~(arr_21 [i_9] [i_10])))))), (((/* implicit */unsigned long long int) var_4))));
                            var_24 = ((/* implicit */unsigned long long int) arr_35 [(short)3] [i_5] [i_5] [i_5]);
                        }
                    } 
                } 
                arr_41 [i_6] [i_5] = ((/* implicit */short) ((long long int) var_14));
            }
        } 
    } 
}
