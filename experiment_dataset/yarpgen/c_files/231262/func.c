/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231262
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_17 [i_1] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_0]))) : (max((arr_12 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3] [i_3]), (arr_12 [i_3 + 1] [i_3] [i_3 - 1] [(signed char)10] [(signed char)10] [i_3])))));
                                arr_18 [7LL] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) 2741421232U);
                                var_19 = ((/* implicit */unsigned char) arr_13 [i_3 + 1] [17ULL] [i_3 - 1] [i_3 - 1] [i_3 - 1]);
                                arr_19 [i_0] [i_1] [i_0] = arr_12 [i_0] [i_1] [i_1] [i_0] [i_3] [i_0];
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (signed char)77))));
                                var_21 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) -2662565706203659297LL))))));
                                var_22 = min(((+(((/* implicit */int) arr_8 [i_0])))), ((+(arr_7 [i_0] [i_6] [i_7]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_8 = 3; i_8 < 16; i_8 += 4) 
                {
                    for (signed char i_9 = 3; i_9 < 16; i_9 += 4) 
                    {
                        for (short i_10 = 1; i_10 < 15; i_10 += 2) 
                        {
                            {
                                var_23 ^= 1447824722;
                                var_24 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 432587392)) : (arr_22 [i_1] [i_1] [(short)10] [i_10])))))))) & (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned short)5])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0]) < (((/* implicit */long long int) arr_7 [i_9] [16LL] [i_0])))))) : (arr_26 [i_1] [i_9] [i_10] [i_10 + 2] [i_10])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_11 = 2; i_11 < 14; i_11 += 4) 
    {
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            {
                                arr_49 [i_15] [(_Bool)1] [(signed char)6] [i_13] [i_13] [i_11] [i_11] |= ((/* implicit */signed char) arr_46 [i_11 - 2] [i_14] [i_12] [i_13] [i_13] [i_14] [i_15]);
                                arr_50 [i_11] [i_11] [i_15] [i_11] [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                                var_25 = ((/* implicit */signed char) (+(((/* implicit */int) (((-(arr_35 [i_15] [i_15] [(short)15] [i_15] [i_11]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))))))));
                                var_26 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)5])))))))));
                                arr_51 [i_15] [i_15] [i_13] [i_15] [(signed char)10] = (+((~(arr_26 [i_15] [i_11 - 1] [i_11 + 1] [i_11 - 2] [i_11 - 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 16; i_17 += 2) 
                        {
                            {
                                var_27 += ((/* implicit */_Bool) min((min((arr_39 [i_11 + 1]), (((/* implicit */int) arr_24 [i_11 + 2] [i_17] [i_11])))), (((/* implicit */int) (unsigned char)204))));
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_13 [12U] [i_16] [7U] [12U] [12U]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        for (signed char i_19 = 3; i_19 < 14; i_19 += 2) 
                        {
                            {
                                var_29 |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_7 [i_11 - 2] [i_12] [i_18]) != (arr_7 [i_19 - 2] [i_12] [i_11 - 1]))))));
                                var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)25585))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        for (unsigned short i_21 = 0; i_21 < 16; i_21 += 4) 
                        {
                            {
                                arr_65 [i_11] [i_11] [(signed char)3] [i_13] [i_20] [i_20] [i_21] = ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_11 + 1] [i_11] [i_11 - 1] [i_11 + 2]))))) != (min((((/* implicit */unsigned int) arr_23 [i_12] [i_13])), (max((var_12), (((/* implicit */unsigned int) arr_8 [i_20])))))));
                                arr_66 [i_20] = ((/* implicit */unsigned int) arr_8 [i_20]);
                                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_11] [i_11 + 1] [i_11 - 1] [i_11] [i_11])) ? (((/* implicit */int) arr_45 [i_11] [i_11 - 1] [i_11 - 2] [i_11] [i_11 - 2])) : (((/* implicit */int) arr_45 [(short)11] [i_11 - 2] [i_11 - 1] [(short)11] [i_11]))));
                                var_32 += ((/* implicit */signed char) max((max((arr_62 [i_11 - 1] [i_11 - 2] [i_11 + 1] [i_11 - 2]), (arr_62 [i_11 + 2] [i_11 - 1] [i_11 - 1] [i_11]))), (((((/* implicit */_Bool) arr_62 [i_11 + 2] [i_11 + 1] [i_11 + 2] [(unsigned char)3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))) : (arr_62 [i_11 - 2] [i_11 + 2] [i_11 - 1] [i_11])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_22 = 2; i_22 < 16; i_22 += 3) 
    {
        for (unsigned long long int i_23 = 3; i_23 < 16; i_23 += 3) 
        {
            for (int i_24 = 0; i_24 < 17; i_24 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_25 = 0; i_25 < 17; i_25 += 2) 
                    {
                        for (short i_26 = 1; i_26 < 16; i_26 += 2) 
                        {
                            {
                                arr_81 [i_22] [i_25] [i_26 + 1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_79 [i_22] [i_23 - 3] [i_23 - 2] [i_22] [i_24] [i_25] [i_26])))) != (((((/* implicit */_Bool) arr_79 [i_22] [i_22] [i_23 - 1] [i_22] [i_25] [i_22] [i_26 + 1])) ? (arr_79 [i_26] [i_23] [i_24] [i_22] [i_23] [i_22] [4LL]) : (((/* implicit */unsigned long long int) 2741421232U)))));
                                var_33 = ((/* implicit */unsigned short) arr_7 [(unsigned char)5] [(unsigned char)5] [i_26]);
                                arr_82 [i_22] [i_22] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -2662565706203659284LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_27 = 0; i_27 < 17; i_27 += 3) 
                    {
                        for (unsigned int i_28 = 0; i_28 < 17; i_28 += 3) 
                        {
                            {
                                arr_87 [(_Bool)1] [(signed char)5] [i_22] [(_Bool)1] [i_28] = ((/* implicit */long long int) ((arr_79 [i_22 - 2] [i_23 + 1] [i_27] [i_22] [i_24] [i_23 + 1] [i_22 - 2]) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_68 [i_22] [i_22])), ((-(1504420624496165244LL))))))));
                                arr_88 [i_22] [i_23] [i_24] [i_24] [i_27] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_22])) ? (((long long int) -4194304)) : (-1LL)));
                                arr_89 [i_22] [i_23] [i_24] [i_22] [i_22] [i_22] [7ULL] = var_10;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
                    {
                        for (int i_30 = 0; i_30 < 17; i_30 += 4) 
                        {
                            {
                                var_34 += ((/* implicit */long long int) arr_13 [(_Bool)1] [i_23] [i_23] [i_23 - 1] [i_24]);
                                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (1504779630416723658ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
