/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35665
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 24; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_1] = ((/* implicit */unsigned int) var_18);
                            arr_12 [i_3] [i_1 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 859455512))) ? (((/* implicit */int) ((signed char) (-(arr_2 [i_2 + 1]))))) : ((-(((int) (short)63))))));
                            var_20 -= ((/* implicit */_Bool) ((unsigned int) (+(arr_8 [i_1 + 1] [i_1 - 1]))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13793465817342117630ULL))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11082))) : (0U)))))) ? (((/* implicit */unsigned long long int) (-(((unsigned int) var_18))))) : (arr_3 [i_0] [i_1]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_6 = 1; i_6 < 16; i_6 += 4) 
                {
                    for (unsigned short i_7 = 4; i_7 < 14; i_7 += 3) 
                    {
                        for (int i_8 = 4; i_8 < 17; i_8 += 3) 
                        {
                            {
                                arr_25 [i_4] [i_5] [i_6] [i_7] [i_8 - 4] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_18)), (arr_4 [(_Bool)1] [i_7 - 3] [i_6]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((signed char) min((arr_22 [i_6] [i_6 - 1] [16LL] [i_7] [i_7 - 3] [i_8 + 1]), (((((/* implicit */_Bool) arr_19 [i_7 - 3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)54454))))))))));
                                var_22 -= ((/* implicit */unsigned int) ((max((((/* implicit */long long int) arr_2 [i_8 - 1])), (arr_0 [i_6] [i_6 + 1]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_4] [i_4])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])))))))))));
                                arr_26 [i_8 - 4] [i_8] [i_8] [i_8] [i_8] [i_5] = ((/* implicit */_Bool) (+(((arr_18 [i_8 - 4] [i_5] [i_8]) ? (arr_23 [i_6 + 1] [i_8 - 4]) : (arr_23 [i_6 + 1] [i_8 - 4])))));
                            }
                        } 
                    } 
                } 
                arr_27 [i_5] [i_5] [i_4] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_21 [i_5] [17]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_13)), (var_11))) >= (((((/* implicit */_Bool) (unsigned short)11079)) ? (4079852895U) : (((/* implicit */unsigned int) -859455513))))));
    var_24 -= ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        {
                            arr_39 [i_9] [i_12] = ((/* implicit */unsigned int) arr_4 [i_10] [i_10] [i_12]);
                            arr_40 [(_Bool)1] [i_9] [(_Bool)1] [i_9] [i_10] [i_10] |= ((/* implicit */short) ((unsigned int) (+(((2559833568U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_9]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_13 = 2; i_13 < 15; i_13 += 1) 
                {
                    for (unsigned int i_14 = 4; i_14 < 15; i_14 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) var_13);
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_17 [i_14] [i_13 - 1])), (arr_0 [i_9] [i_9])))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 3376935946U)) : (0ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_9] [i_14]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_15 = 4; i_15 < 15; i_15 += 2) 
                {
                    for (signed char i_16 = 1; i_16 < 16; i_16 += 2) 
                    {
                        {
                            var_27 += ((/* implicit */_Bool) var_1);
                            arr_53 [i_16] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 918031349U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11082)))));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) max((3687532713U), (((/* implicit */unsigned int) (unsigned short)54454))))) || (((min((arr_3 [i_9] [i_9]), (((/* implicit */unsigned long long int) (signed char)127)))) <= (((((/* implicit */_Bool) var_16)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_18))))))));
                            var_29 -= ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */unsigned long long int) 918031336U)) - (arr_52 [i_10] [i_15] [i_15] [i_16 + 2])))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_9])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 18; i_17 += 1) 
                {
                    for (unsigned char i_18 = 2; i_18 < 16; i_18 += 2) 
                    {
                        {
                            arr_60 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) max((((arr_30 [i_9] [i_9]) || (((/* implicit */_Bool) ((unsigned int) (unsigned char)62))))), ((!(((/* implicit */_Bool) arr_54 [i_18] [i_18] [i_18] [i_18 - 2]))))));
                            arr_61 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) - (((/* implicit */int) (unsigned short)0))));
                        }
                    } 
                } 
                arr_62 [i_9] [i_10] &= ((/* implicit */signed char) max(((-(((/* implicit */int) arr_42 [i_9])))), (((/* implicit */int) arr_42 [i_9]))));
            }
        } 
    } 
}
