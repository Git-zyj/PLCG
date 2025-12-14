/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26523
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)27097))))), (max((((/* implicit */unsigned int) arr_6 [i_0 - 1] [i_4 + 1] [i_3] [i_2 - 1] [i_0] [i_0])), (arr_9 [i_4 - 1] [i_3 + 2] [i_0] [i_1] [i_0 + 1])))))) ? (min((((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */long long int) arr_9 [i_0 + 1] [i_0] [i_0] [i_3 - 1] [i_4 - 2])))), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_6))) - (((/* implicit */int) (unsigned char)255)))))));
                                arr_11 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2 - 1] [i_0]))) & (((unsigned long long int) ((15080666274576229567ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned long long int) arr_8 [i_4 + 1] [i_1] [i_1 - 2] [i_4] [i_2])), (11905544114301906477ULL)))))));
                                arr_12 [i_0] [(short)8] [i_2] [i_3 + 1] [i_0] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_2 + 2] [i_2] [i_0] [i_2 - 1] [i_2 - 1]))) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) min(((unsigned char)73), (((/* implicit */unsigned char) (signed char)-36)))))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */short) arr_4 [i_2] [2ULL] [i_1 + 1] [i_2]);
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */unsigned int) var_11);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6541199959407645151ULL)) ? (583377496U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49)))));
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 2) 
            {
                {
                    arr_22 [i_5] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) arr_20 [10U] [i_7 + 1] [i_7] [i_7]);
                    arr_23 [i_5] [11U] = max((max((4589688553584982933ULL), (((/* implicit */unsigned long long int) arr_21 [i_5] [i_6] [i_6])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) arr_13 [i_6]))) ^ (min((((/* implicit */unsigned int) arr_16 [i_5] [i_6] [i_7 - 1])), (var_8)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                {
                    arr_30 [i_8] [i_9] [i_10] [i_9] = ((/* implicit */unsigned int) (-(max((((((/* implicit */unsigned long long int) arr_26 [i_8] [i_9])) & (6541199959407645158ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (4294967295U))))))));
                    arr_31 [i_8] [i_8] [i_10] [i_10] = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned int) min((((/* implicit */long long int) 1U)), (var_1))))), (min((arr_26 [i_8] [i_9]), (arr_26 [i_8] [i_8])))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)28113)) ? (((/* implicit */int) max((((unsigned char) (_Bool)1)), ((unsigned char)50)))) : (((/* implicit */int) (short)10503))));
                    var_20 = 6564727956134957563ULL;
                }
            } 
        } 
    } 
}
