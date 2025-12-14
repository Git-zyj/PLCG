/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224152
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
    var_13 = ((/* implicit */unsigned int) var_2);
    var_14 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1943019137U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24397))) : (arr_9 [i_3] [i_2] [i_2] [i_1] [i_0])))) ? (arr_9 [i_1] [i_1] [i_1 - 2] [i_1] [i_1 + 1]) : (var_7)));
                        /* LoopSeq 4 */
                        for (short i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            arr_12 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((int) (_Bool)1));
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((arr_3 [i_1] [i_1 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2]))) : (arr_6 [i_1] [i_1 + 1])));
                            arr_14 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_0] [i_4 + 3])) ? (arr_6 [i_4 + 2] [i_2]) : (((/* implicit */unsigned int) arr_7 [i_4] [i_4] [i_2] [i_4] [i_4 - 1]))));
                        }
                        for (signed char i_5 = 3; i_5 < 23; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_2] [i_1 + 1] [i_5 - 2] [i_3]))));
                            var_17 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) arr_2 [i_0]))));
                        }
                        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            arr_21 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]))));
                            arr_22 [i_0] [i_1 - 1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967286U)));
                            var_18 = ((/* implicit */unsigned int) ((arr_3 [i_1 - 1] [i_3]) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) arr_4 [i_3] [i_6] [i_2] [i_2]))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_25 [i_2] [i_1] [i_0] [i_0] [i_7] [i_3] [i_2] = ((/* implicit */unsigned int) 18446744073709551615ULL);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-61))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_2] [i_3] [i_1] [i_2]))))) : ((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12478)))))));
                        }
                    }
                    var_20 = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) 0U))), (((((/* implicit */int) arr_23 [i_1 - 2] [i_1])) / (arr_0 [i_1 - 2])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_4)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_22 = ((/* implicit */short) var_1);
}
