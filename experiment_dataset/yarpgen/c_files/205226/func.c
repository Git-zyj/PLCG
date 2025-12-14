/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205226
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((arr_0 [i_1] [i_1 - 1]) ^ (max((arr_0 [i_1] [i_0]), (((/* implicit */long long int) (signed char)-39)))))) & (((/* implicit */long long int) ((((/* implicit */int) (signed char)39)) ^ (((/* implicit */int) (signed char)-39)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_18 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-70)) + (2147483647))) << (((((((/* implicit */int) (signed char)-39)) + (61))) - (22)))));
                            arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) arr_3 [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) ^ (6564005406918323589LL)))));
                            /* LoopSeq 2 */
                            for (short i_4 = 1; i_4 < 17; i_4 += 1) 
                            {
                                arr_15 [i_2] [i_3] [i_0] = ((/* implicit */long long int) (unsigned short)48833);
                                arr_16 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0])) > (((/* implicit */int) arr_3 [i_0]))))), (arr_3 [i_0])));
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((arr_13 [i_4] [i_4 + 1] [i_3] [i_0] [i_3] [i_3] [i_2]) >> (((((arr_13 [i_4] [i_4 - 1] [i_4] [i_0] [i_4] [i_4] [i_1]) & (arr_13 [i_4] [i_4 + 1] [i_4] [i_0] [i_4] [i_2] [i_1]))) - (1534938048551924288LL)))))) : (((/* implicit */unsigned int) ((((arr_13 [i_4] [i_4 + 1] [i_3] [i_0] [i_3] [i_3] [i_2]) + (9223372036854775807LL))) >> (((((((arr_13 [i_4] [i_4 - 1] [i_4] [i_0] [i_4] [i_4] [i_1]) & (arr_13 [i_4] [i_4 + 1] [i_4] [i_0] [i_4] [i_2] [i_1]))) - (1534938048551924288LL))) + (3386083607629544355LL))))));
                            }
                            for (signed char i_5 = 3; i_5 < 16; i_5 += 2) 
                            {
                                arr_21 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65524);
                                arr_22 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_3] [i_0] [i_0 - 1])) - (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0 - 1]))))) == (1178678078U)));
                                arr_23 [i_0] [i_5] [i_2] [i_0] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) arr_14 [i_0]);
                            }
                            arr_24 [i_3] [i_3] [i_2] [0ULL] [i_3] &= ((/* implicit */unsigned char) min((((((/* implicit */long long int) 1425256763U)) / (arr_13 [i_0] [i_1] [i_2] [(short)12] [i_2 + 2] [i_2] [i_1]))), (((arr_0 [i_1 - 3] [i_0 - 1]) / (arr_13 [i_0] [i_0] [i_2] [(unsigned char)2] [i_2 + 1] [i_3] [i_1])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 17; i_6 += 1) 
                {
                    for (unsigned char i_7 = 3; i_7 < 16; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                arr_31 [i_8] [i_0] [i_6] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_4 [i_6]);
                                arr_32 [i_0] [i_0] = ((/* implicit */unsigned char) ((((arr_28 [i_1 - 3] [i_7 + 2]) + (arr_28 [i_1 + 2] [i_7 + 2]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((arr_28 [i_1 - 2] [i_7 - 3]) >= (arr_28 [i_1 + 2] [i_7 - 2])))))));
                                arr_33 [i_0] [i_1] [i_6] [i_0] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65518))) ^ (((arr_29 [i_0] [i_1]) << (((((/* implicit */int) (signed char)-24)) + (41)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) 2869710532U)), (var_2))))));
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_6))));
    var_21 = ((/* implicit */_Bool) ((2869710532U) | (1425256747U)));
}
