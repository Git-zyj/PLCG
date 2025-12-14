/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29802
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
    var_14 = ((/* implicit */unsigned int) max(((~(((-1381965249) & (-1381965220))))), ((~(max((-1056791706), (((/* implicit */int) var_6))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 1381965248)) > (2750019022U))))) ^ (((unsigned long long int) arr_0 [i_2]))));
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((2750019022U) ^ (3248709730U))) : (((/* implicit */unsigned int) max((1381965249), (1381965248))))));
                }
            } 
        } 
        var_16 = ((/* implicit */short) ((((arr_4 [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1]))) : (var_3))) % (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_10 [(short)3] [(short)3] = ((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            arr_15 [i_3] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) (_Bool)1)))));
            var_17 = ((/* implicit */_Bool) (+(((1544948284U) << (((326296217) - (326296206)))))));
            arr_16 [i_3] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_4])) ? (((/* implicit */unsigned int) -326296218)) : (arr_11 [i_4])))));
        }
        for (int i_5 = 2; i_5 < 16; i_5 += 4) 
        {
            var_18 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_4)) ^ (arr_0 [i_3]))) >> (((arr_14 [(unsigned char)14] [i_5 - 2] [i_5]) + (2102964135)))));
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_5 - 2] [i_5] [i_5 + 1] [i_5 - 2])) / (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))))))));
        }
    }
}
