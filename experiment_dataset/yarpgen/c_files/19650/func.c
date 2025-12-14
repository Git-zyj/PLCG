/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19650
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 415916225U)) : (arr_3 [i_0] [i_1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (arr_3 [i_1] [i_0]) : (((/* implicit */unsigned long long int) (+(((int) arr_3 [i_0] [i_1]))))))))));
                arr_4 [i_0] [(unsigned char)19] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_3 [i_0] [i_1])))));
                var_13 = ((/* implicit */_Bool) arr_0 [i_0]);
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((-64860164318503172LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)118)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) arr_9 [i_2]);
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) 6072915209085717175ULL);
                                var_16 *= ((/* implicit */unsigned long long int) var_5);
                                arr_21 [i_2] [i_2] [(signed char)16] [i_4] [i_4] [i_4] [i_6 - 1] |= ((/* implicit */signed char) min((((arr_17 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6] [i_6 + 3] [i_6]) ? (((/* implicit */int) arr_17 [i_3] [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 2] [i_6 + 3])) : (((/* implicit */int) arr_17 [i_2] [i_6 - 1] [i_6 + 1] [(short)14] [i_6] [(short)21])))), (((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 22; i_9 += 2) 
                        {
                            {
                                arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [(short)22] |= ((/* implicit */short) max((min((var_5), (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) arr_9 [i_9 + 2])) : (((/* implicit */int) arr_9 [i_9 - 2]))))));
                                var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (arr_26 [i_2] [i_3] [i_7] [(unsigned char)23] [i_9 - 2]))))) : (((((/* implicit */_Bool) arr_27 [(short)6] [i_3] [3ULL] [3ULL] [(unsigned short)17])) ? (((/* implicit */unsigned int) var_0)) : (var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_2] [i_3] [i_3] [i_8] [i_3]))) : (arr_23 [(_Bool)1] [i_8] [i_7])));
                                arr_30 [i_2] [i_3] [(signed char)18] [i_8] [(unsigned char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)35180)) : (((/* implicit */int) ((((/* implicit */_Bool) max((arr_23 [i_9 + 1] [i_7] [(unsigned short)12]), (((/* implicit */unsigned int) var_9))))) || (((/* implicit */_Bool) arr_10 [i_9 - 1] [7ULL])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
