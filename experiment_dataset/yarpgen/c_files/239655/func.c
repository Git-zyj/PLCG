/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239655
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */short) var_5);
                            var_11 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1]))) / (min((((/* implicit */unsigned int) arr_2 [i_1 + 2] [i_1 + 1] [i_1 - 2])), (max((((/* implicit */unsigned int) arr_4 [i_0] [15LL])), (var_8)))))));
                            arr_11 [i_0] [i_1 - 2] [i_2] [i_3] [(short)1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [(unsigned short)11]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_1 + 2] [(unsigned short)12] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_12 [i_0] [i_1] [i_5] [i_4 - 1])) ^ (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_4 + 2])))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-25)) && (((/* implicit */_Bool) arr_12 [i_1 + 2] [i_1 - 2] [i_4 - 1] [i_4 + 1])))))));
                                var_12 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0] [i_0]))) == (((/* implicit */int) arr_0 [i_1 + 1])))));
                                var_13 = ((/* implicit */unsigned short) max((((((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (var_8)))) : (1557009353552359845LL))), (max((((1557009353552359845LL) - (var_0))), (((/* implicit */long long int) (unsigned short)15303))))));
                                arr_22 [i_6] [i_5] [19ULL] [i_0] [i_5] [i_0] = arr_16 [i_0] [11U] [i_0] [7ULL];
                                arr_23 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_4 + 2] [i_1 + 1] [i_1 + 2] [i_1])) - (((/* implicit */int) max((arr_2 [i_1] [i_1 + 2] [i_0]), (arr_2 [i_1] [i_1 + 2] [14LL]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 1; i_7 < 22; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 22; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            {
                                var_14 = ((((/* implicit */unsigned long long int) (+(1557009353552359845LL)))) == (var_7));
                                var_15 += ((/* implicit */unsigned short) ((arr_34 [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_9] [i_11] [i_9]))) : (-1557009353552359845LL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_43 [i_13] [i_13] [i_8] [i_12] [i_13] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_10 [i_7 + 1] [i_7 + 1] [i_7 + 1]), (arr_10 [i_7 + 1] [i_7 + 1] [i_7 + 1]))))));
                                arr_44 [i_13] = ((/* implicit */unsigned short) (-(arr_15 [i_13] [i_9])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_14 = 2; i_14 < 16; i_14 += 3) 
    {
        for (unsigned long long int i_15 = 3; i_15 < 14; i_15 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 18; i_18 += 2) 
                        {
                            {
                                arr_60 [i_14 + 2] [i_14 + 2] [i_16] [i_17] [i_17] [i_17] = ((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_14] [14ULL] [i_14]))) - (arr_7 [i_15 - 1] [i_16] [i_17]))) + (((/* implicit */long long int) ((/* implicit */int) var_6))))) << (((((-974270489) + (974270535))) - (46)))));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((min((arr_48 [i_14 + 1] [i_15 + 4]), (var_7))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))), (min((((/* implicit */unsigned int) arr_18 [i_17] [i_16] [9LL])), (606111836U)))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                arr_70 [i_21] [i_21] [i_20] [i_21] [i_21] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [i_14 - 2] [i_15 + 3] [i_15 - 2])), (max((((/* implicit */unsigned int) (_Bool)0)), (var_8)))))) - (arr_48 [i_21] [i_15 - 1])));
                                arr_71 [i_14 - 1] [i_21] [i_19] [i_21] [i_21] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) ((((/* implicit */int) arr_65 [i_14] [i_15] [i_19] [(unsigned short)10] [i_21])) ^ (((/* implicit */int) var_5)))))) + (2147483647))) << (((((arr_13 [i_14]) + (5336405016166834852LL))) - (5LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_22 = 1; i_22 < 15; i_22 += 3) 
                {
                    for (short i_23 = 0; i_23 < 18; i_23 += 4) 
                    {
                        {
                            arr_79 [i_23] [i_15] |= ((/* implicit */unsigned int) arr_36 [22ULL] [i_15] [i_15] [(unsigned short)4] [i_23]);
                            var_17 = min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-25)) * (((/* implicit */int) (signed char)-25)))) / (((/* implicit */int) arr_32 [i_14] [i_15 - 3] [i_23]))))), (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_39 [i_14 + 2] [i_14 + 2] [(unsigned short)17] [13LL] [(unsigned short)19] [i_23])) : (2013265920)))) / (7458917505756334011ULL))));
                            arr_80 [i_14] [2ULL] [i_22] [i_23] = (+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_22] [i_15] [i_15 + 4] [i_15])) + (((/* implicit */int) arr_50 [(unsigned char)5]))))), (var_7))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (signed char i_25 = 0; i_25 < 18; i_25 += 2) 
                    {
                        for (short i_26 = 0; i_26 < 18; i_26 += 1) 
                        {
                            {
                                arr_90 [7ULL] [i_15] [7ULL] [i_15] [i_15 + 2] = ((/* implicit */signed char) arr_56 [i_25] [i_25] [i_25] [(short)16] [i_25] [i_25]);
                                arr_91 [(short)3] [i_14] [i_15 + 3] [(short)3] [i_25] [1ULL] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_61 [(_Bool)1] [i_14 + 2])))), (((/* implicit */int) ((arr_41 [i_14 - 2] [i_14 - 1] [i_24] [i_25] [i_25]) && (arr_41 [i_14] [i_14 + 2] [i_25] [i_26] [i_26]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
