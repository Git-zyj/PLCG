/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212337
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_15 += ((/* implicit */signed char) (~(((/* implicit */int) max((arr_4 [i_2 - 1] [i_0 - 1] [i_2 - 1]), (arr_4 [i_2 - 1] [i_0 - 2] [i_0 - 2]))))));
                            arr_11 [i_0] [i_2] [i_0] [i_3] = ((/* implicit */int) ((4018990101U) << (((min((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)4095)), (2908682339U)))), (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_0 [i_3]))))) + (117LL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (int i_5 = 4; i_5 < 12; i_5 += 2) 
                    {
                        {
                            arr_16 [(short)6] [(short)6] [i_1] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0 + 1] [i_5 - 1])) + (((/* implicit */int) arr_8 [i_0 + 1] [i_5 - 3]))))) > ((+((-9223372036854775807LL - 1LL))))));
                            arr_17 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */int) ((((((/* implicit */int) ((((/* implicit */int) arr_2 [i_4])) > (((/* implicit */int) var_5))))) % (var_10))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))) : (var_1)))))))));
                            arr_18 [i_0] [i_1] [i_4] [i_5 - 3] = ((/* implicit */long long int) 3423834831U);
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_1 [i_4] [i_4])) : (arr_3 [i_0]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            {
                arr_25 [i_6] [i_6] [i_7] = -1940673727;
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */int) arr_20 [i_9] [i_6]);
                            var_18 = (((~(1610612736U))) << (((/* implicit */int) (!(((/* implicit */_Bool) 10878537801741063510ULL))))));
                            var_19 ^= ((/* implicit */int) ((signed char) min((arr_28 [i_9] [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) (!((_Bool)1)))))));
                        }
                    } 
                } 
                arr_31 [i_6] [i_7] = ((/* implicit */unsigned int) ((_Bool) arr_24 [i_6] [i_7] [i_7]));
                var_20 -= ((/* implicit */long long int) (~(((/* implicit */int) min((arr_27 [i_6]), (arr_27 [i_6]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_10 = 3; i_10 < 11; i_10 += 4) 
    {
        for (int i_11 = 2; i_11 < 14; i_11 += 2) 
        {
            for (unsigned short i_12 = 1; i_12 < 14; i_12 += 4) 
            {
                {
                    var_21 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)112)), ((unsigned short)3968)))) ? (((/* implicit */long long int) ((3365917565U) | (((/* implicit */unsigned int) arr_34 [i_11 + 1]))))) : (arr_29 [i_10 - 2] [i_10 - 1])))), (((((/* implicit */_Bool) min((1832371495U), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)171))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_11))))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 2; i_14 < 13; i_14 += 4) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_10 - 3] [i_11] [i_10 - 3] [i_12 - 1])) ? (arr_20 [i_11 - 1] [i_10 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121)))))) ? (((/* implicit */unsigned long long int) ((int) arr_13 [i_10 + 1] [i_11] [i_12] [i_12 + 1]))) : (min((arr_20 [i_11 - 2] [i_10 + 3]), (((/* implicit */unsigned long long int) var_0))))));
                                var_23 &= ((/* implicit */signed char) min((((/* implicit */short) var_8)), (((short) arr_38 [i_10 - 2] [i_11]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
