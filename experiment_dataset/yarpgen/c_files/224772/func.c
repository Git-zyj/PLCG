/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224772
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) max((max((((/* implicit */int) arr_5 [i_0 - 1] [i_2 + 1] [i_3] [i_3])), (((((/* implicit */int) (unsigned short)51299)) + (((/* implicit */int) (unsigned char)255)))))), ((-(((/* implicit */int) arr_6 [i_0] [i_0]))))));
                            var_20 = ((/* implicit */unsigned short) arr_5 [i_0 - 1] [16] [i_0 + 1] [i_0]);
                        }
                    } 
                } 
                arr_9 [i_1] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_1] [i_0])), (0)))))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_15 [i_0] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) max(((unsigned char)251), (arr_7 [i_5] [i_5] [i_0] [i_4] [i_0] [i_0]))))))));
                            arr_16 [i_0] = ((/* implicit */unsigned char) (~(max((arr_0 [i_0 + 1]), (arr_0 [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_17 [i_6])), ((-9223372036854775807LL - 1LL))))), (min((1497318045444095541ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((((/* implicit */int) arr_2 [i_6] [i_7])) / (((/* implicit */int) arr_2 [i_6] [i_7])))) : (((/* implicit */int) (signed char)63)))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 2; i_8 < 16; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        {
                            var_22 = ((((/* implicit */int) (signed char)-63)) <= (((/* implicit */int) var_17)));
                            /* LoopSeq 2 */
                            for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                            {
                                var_23 = ((/* implicit */signed char) min((((/* implicit */int) (signed char)-120)), (var_4)));
                                var_24 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_10] [i_8 - 2] [i_8 + 2]))) * (((arr_8 [i_6] [(short)3]) - (((/* implicit */unsigned long long int) var_13)))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [15LL] [i_8 + 2] [i_8 - 2] [i_8 + 1]))) | (var_7)))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((arr_4 [i_8 - 1] [i_8] [(unsigned char)15]) >> (((/* implicit */int) (_Bool)0))))) : (7383464116108657575ULL)));
                                arr_32 [0ULL] [0ULL] [i_8] [0ULL] [(signed char)14] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_7] [i_9])) ? (-2847381010236515662LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-76))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2288270076U)) ? (2288270076U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))))))))) || (((/* implicit */_Bool) arr_19 [i_8 - 1] [i_8 - 1]))));
                                var_26 *= ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)222)) % (((/* implicit */int) (short)-10819)))) >> (((((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)14236)))) - (-9223372036854775783LL))) + (31LL)))))) < (((arr_12 [i_6] [i_7] [i_8 + 1] [i_8 + 1] [i_10]) / (((/* implicit */long long int) var_5))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_11 = 3; i_11 < 17; i_11 += 3) 
                            {
                                arr_36 [i_6] [i_6] [i_6] [i_11] [(unsigned char)13] [i_6] = ((/* implicit */long long int) (unsigned short)0);
                                arr_37 [i_6] [i_11] [i_8] [i_11] [i_6] = ((/* implicit */long long int) arr_7 [i_11] [i_11 + 1] [i_11] [i_8] [i_8 + 2] [i_8 + 2]);
                            }
                        }
                    } 
                } 
                arr_38 [i_6] [(unsigned short)12] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6])) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned short)65535))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_13 [23U] [i_7])) ? (arr_8 [i_7] [i_7]) : (((/* implicit */unsigned long long int) arr_35 [i_6] [i_6] [i_6] [(unsigned char)11] [i_6])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned char)8] [i_7] [i_7] [i_7] [i_7] [i_7]))) - (-2847381010236515662LL)))))))));
            }
        } 
    } 
}
