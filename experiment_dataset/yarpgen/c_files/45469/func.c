/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45469
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_19 = arr_6 [i_0] [i_2];
                            arr_10 [i_2] [i_2] [i_2] = var_13;
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_20 *= ((/* implicit */signed char) arr_11 [i_1] [i_1] [i_4] [i_5]);
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_11 [i_1] [i_4 + 1] [i_6] [i_4]), (arr_11 [i_1] [i_4 - 1] [i_4] [i_4])))) ? (((((/* implicit */_Bool) -8888794138750126382LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28942))) : (0U))) : ((+(arr_9 [i_0] [i_4 - 1] [i_5] [i_5])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 12; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            {
                                arr_29 [i_11] [i_10] [i_9] [i_8] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((3738954271U), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (unsigned char)210))))) : (((/* implicit */int) arr_11 [i_7] [i_8] [i_9] [i_9])))), (((/* implicit */int) (unsigned short)5484))));
                                var_22 = ((/* implicit */unsigned char) ((unsigned short) var_9));
                                var_23 = ((/* implicit */unsigned char) arr_23 [i_7]);
                                var_24 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) (unsigned char)225)), (var_18)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        for (short i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            {
                                arr_36 [i_7] [i_12] [i_12] [i_12] [i_8] = ((/* implicit */unsigned char) (-((+(min((arr_12 [i_8]), (18446744073709551588ULL)))))));
                                arr_37 [i_7] [i_8] [i_9] [i_12] [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((unsigned short) ((2602590245255660543ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))));
                                arr_38 [i_13] [i_12] [i_9] [i_8] [i_7] = ((long long int) ((arr_14 [i_7] [i_13] [i_9] [i_13] [i_13]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 2; i_14 < 11; i_14 += 2) 
                    {
                        for (signed char i_15 = 0; i_15 < 13; i_15 += 4) 
                        {
                            {
                                arr_46 [i_8] [i_14] [i_9] = ((/* implicit */long long int) min((25U), (((/* implicit */unsigned int) (signed char)0))));
                                arr_47 [i_9] [i_15] = ((/* implicit */long long int) ((signed char) ((unsigned char) arr_44 [i_14 - 1] [i_14] [i_14 + 1] [i_9] [i_7])));
                                var_25 *= ((/* implicit */unsigned int) max((max((arr_34 [i_9] [i_14] [i_9] [i_14] [i_15]), (arr_34 [i_7] [i_8] [i_9] [i_7] [i_15]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-43)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        for (signed char i_17 = 1; i_17 < 11; i_17 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) (unsigned char)225);
                                arr_54 [i_7] [i_9] [i_16] [i_17] [i_17] = ((/* implicit */unsigned long long int) ((short) ((arr_53 [i_17] [i_16] [i_16] [i_9] [i_16] [i_7]) ^ (7276255738964235549LL))));
                                var_27 = ((/* implicit */int) max((((/* implicit */unsigned int) var_2)), (((181523384U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17719)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
