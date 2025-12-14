/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30483
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
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7449)) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 3] [i_0 - 2]))))), (((((/* implicit */_Bool) max((((/* implicit */short) var_0)), ((short)7449)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-7436)) == (((/* implicit */int) var_5)))))) : (max((var_6), (((/* implicit */unsigned long long int) arr_1 [i_1]))))))));
                arr_6 [19] [15ULL] [i_0] &= ((/* implicit */signed char) ((((((/* implicit */int) (short)-7449)) & (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_1])))) << (((((/* implicit */int) max((arr_4 [8U] [i_0 + 1] [8U]), (((/* implicit */short) (unsigned char)104))))) - (12946)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_2]))))) ? (((((/* implicit */int) arr_8 [i_2] [i_2])) / (((/* implicit */int) (short)-7450)))) : (((/* implicit */int) ((signed char) arr_8 [i_2] [i_2])))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    {
                        arr_16 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)7434))))) ? (((/* implicit */int) arr_14 [i_3] [i_3] [i_4] [i_5] [i_4])) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_5] [i_4] [i_3] [i_2] [i_2])) == (((/* implicit */int) (signed char)93)))))));
                        arr_17 [(unsigned short)1] [i_2] [(signed char)6] [(_Bool)1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_13 [(short)6] [i_3] [i_3] [i_3]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [i_5]))))) && (arr_13 [i_2] [i_3] [i_4] [i_4])));
                    }
                } 
            } 
        } 
    }
}
