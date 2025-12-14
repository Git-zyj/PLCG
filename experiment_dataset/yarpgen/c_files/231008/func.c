/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231008
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_17 = arr_6 [i_0] [i_1] [i_2];
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */short) ((unsigned short) (unsigned char)158));
                                var_18 = ((/* implicit */_Bool) ((unsigned char) max((arr_8 [2ULL] [i_1] [i_0] [i_3] [i_4] [i_0]), (arr_8 [i_0] [i_1] [i_0] [i_2] [0] [i_4]))));
                                var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) (unsigned char)31))), (min((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [14ULL])) ? (((/* implicit */int) (signed char)1)) : (var_6))), (((/* implicit */int) max((arr_10 [i_0] [i_1] [i_3] [i_4]), (((/* implicit */short) arr_8 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0])))))))));
                                var_20 |= ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */signed char) arr_2 [i_0] [i_1] [i_1]);
                arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1])) ? (var_14) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]))))) & (var_7)));
                arr_15 [i_0] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) arr_7 [i_1] [i_0] [i_1] [i_1])))) <= (((/* implicit */int) max((arr_2 [i_0] [i_1] [i_1]), (((/* implicit */unsigned char) var_15))))))))) & (max((((/* implicit */unsigned int) ((signed char) arr_10 [i_0] [i_0] [i_0] [i_0]))), (((arr_1 [i_0]) & (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            {
                arr_23 [i_6] [i_6] = ((/* implicit */signed char) var_16);
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) arr_12 [18U] [i_6] [i_6]);
                            var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((max((((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])), (arr_19 [i_5] [i_8] [(unsigned char)11]))), (((((/* implicit */_Bool) -720429690)) ? (-1451124882) : (((/* implicit */int) (unsigned short)2046))))))), (max((arr_20 [i_6] [i_6 - 1]), (arr_20 [i_5] [i_6 - 1])))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_9 = 1; i_9 < 8; i_9 += 2) 
                            {
                                arr_33 [i_5] [(signed char)7] [(signed char)7] [(signed char)7] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_6] [(short)19] [i_8 - 1] [i_6])) - (((/* implicit */int) arr_31 [i_9 + 3] [i_8] [i_8] [i_8 + 1] [i_6 + 1]))));
                                arr_34 [i_5] [i_5] [i_5] [i_6] = var_5;
                                arr_35 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [i_9] [i_9 + 2] [i_9] [i_9 + 1] [i_9])) & (((/* implicit */int) arr_32 [i_9] [i_9 + 4] [i_9] [i_9 + 1] [(unsigned short)10]))));
                            }
                            var_24 = ((/* implicit */unsigned int) max((arr_25 [i_8 - 1]), (max((arr_25 [i_8 - 1]), (arr_25 [i_8 - 1])))));
                        }
                    } 
                } 
                arr_36 [i_6] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_5] [i_6 - 1] [i_5] [i_6] [i_5]))))) ? (((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5] [i_6 + 1] [i_5] [i_5] [i_5]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [i_5] [i_6 + 1] [i_6] [i_6] [(unsigned char)2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
    {
        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            {
                var_25 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2046))) / (((((/* implicit */unsigned int) (-(var_0)))) * (33554368U))));
                arr_41 [i_11] [i_10] [i_10] = ((/* implicit */signed char) ((var_8) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (arr_39 [i_10] [i_10] [i_10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_37 [i_10] [i_11]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (1479070166U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_40 [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_40 [i_11] [i_11] [i_10]))))) && (((/* implicit */_Bool) 2305280059260272640ULL))))))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    for (unsigned char i_13 = 1; i_13 < 22; i_13 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */int) var_16);
                            arr_46 [i_10] [i_10] [i_11] [i_11] [i_12] [i_13] = ((/* implicit */unsigned short) arr_45 [i_10] [i_11] [i_12] [i_13]);
                            var_27 &= ((/* implicit */unsigned short) (-(arr_42 [i_10])));
                        }
                    } 
                } 
                arr_47 [i_10] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)24576)))) + ((+(((/* implicit */int) arr_43 [i_11] [i_10] [i_10] [i_10])))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (arr_37 [i_11] [(short)18])))))))));
                arr_48 [i_10] [i_10] [i_11] = ((/* implicit */int) arr_39 [i_10] [i_10] [i_10]);
            }
        } 
    } 
}
