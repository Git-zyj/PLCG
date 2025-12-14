/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36548
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 *= ((/* implicit */unsigned short) 1873643911U);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((arr_0 [(_Bool)1]) ? (((/* implicit */int) arr_5 [0LL])) : (((/* implicit */int) arr_8 [i_0] [14] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_3] [i_4 + 1]))) : (2298312641U))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [6LL] [(unsigned short)0] [i_3 + 1] [i_4]))))))));
                                var_12 &= ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1] [i_1] [10LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24864))) : (arr_7 [i_3 - 2] [i_4] [(signed char)6] [i_4 + 1]))) >= (((((/* implicit */_Bool) arr_7 [i_3 + 2] [i_4] [i_3 + 2] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49090))) : (arr_7 [i_3 - 2] [i_4] [i_4] [i_4])))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_2 [i_0] [15ULL] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) + (((/* implicit */int) (unsigned short)44966)))) <= (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(short)8]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) max((min((var_8), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0))))), (((/* implicit */unsigned int) var_5))));
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            {
                var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2421323385U)) ? (16793226908291320026ULL) : (((/* implicit */unsigned long long int) 0U))));
                /* LoopSeq 2 */
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    arr_21 [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_13 [i_5] [i_6])), (1873643911U)));
                    var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_20 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) >> (((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 1873643911U)) : (4031797283573313227ULL))) - (1873643898ULL)))))) ? (((arr_18 [(unsigned short)6] [i_5] [i_5 - 1]) + (((/* implicit */unsigned long long int) -474644745257379651LL)))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1161448321U)) ? (-7012748757508407531LL) : (arr_19 [(unsigned short)8] [(unsigned short)8] [(unsigned short)12]))), (((arr_12 [i_6]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20570))))))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_6]))) >= (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))) : (arr_15 [i_5 - 1]))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2421323385U)) ? (arr_12 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (short)-23102)))))) ? ((-(arr_17 [i_7]))) : (((/* implicit */long long int) ((arr_16 [i_6] [i_7]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))))))))));
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    arr_25 [i_5] [i_5] [i_8] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_13 [i_5] [i_8])))) <= (((/* implicit */int) (unsigned char)185))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */unsigned long long int) arr_24 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])) : (arr_22 [i_5 - 1] [i_5] [i_5])));
                }
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_6])) ? (16814914327203764416ULL) : (arr_23 [i_6])))) ? (((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5]))) : (1631829746505787200ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2421323385U)) ? (arr_15 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))))))))) ? ((+(((arr_23 [i_5]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48134))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 - 1] [i_5])))));
            }
        } 
    } 
}
