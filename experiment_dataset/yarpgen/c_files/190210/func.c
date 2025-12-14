/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190210
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) ((long long int) (signed char)86))) : (max((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned short) var_7))))), (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
    var_19 |= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) ((signed char) var_10)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) max((((((/* implicit */int) arr_0 [i_0 + 1])) * (((/* implicit */int) arr_0 [i_0 + 1])))), (((/* implicit */int) arr_0 [i_0 + 1]))));
                arr_5 [i_0 + 1] = ((/* implicit */long long int) ((((unsigned long long int) arr_0 [i_0])) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 + 1])))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_14 [i_3] [i_3] = ((/* implicit */int) (~(5558586742538829596LL)));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_0 [i_0 - 1]))) ? (((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1])))));
                                arr_15 [(signed char)8] [i_1] [(signed char)9] [i_3] [i_4 + 2] = ((/* implicit */signed char) arr_9 [(signed char)12] [(signed char)12] [i_2] [i_4]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    arr_20 [7] [7] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0 + 1] [i_0] [i_1] [i_1] [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_5])), (arr_7 [i_0] [i_0] [i_1] [i_5])))) * ((~(((/* implicit */int) arr_0 [7]))))))) : (((arr_12 [i_5] [i_5]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 1])) / (arr_16 [(signed char)14] [i_1] [i_1] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                arr_25 [i_0 - 1] [i_1] [i_5] [i_1] = ((/* implicit */signed char) ((arr_13 [i_7] [1LL] [i_1] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5])))));
                                arr_26 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5] [5ULL] [i_0 + 1] [i_7] = max((((arr_17 [i_0 + 1] [i_0] [i_0 - 1]) + (arr_17 [i_0 - 1] [(unsigned short)8] [i_0 + 1]))), (((arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1]) / (arr_17 [i_0 - 1] [i_0] [i_0 - 1]))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_23 [i_0] [i_1] [i_5] [i_6] [i_7]))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (unsigned short)33101))))) ? (min((((/* implicit */unsigned long long int) arr_23 [(short)6] [(short)6] [(signed char)5] [(short)6] [(unsigned short)2])), (arr_12 [i_5] [i_1]))) : (max((arr_8 [(signed char)14] [i_1] [i_1] [(signed char)14]), (((/* implicit */unsigned long long int) (short)-13593))))))));
                }
                for (long long int i_8 = 3; i_8 < 11; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        for (long long int i_10 = 1; i_10 < 14; i_10 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) arr_33 [i_8 + 3] [i_0]);
                                var_23 = arr_11 [i_10 + 1] [i_8 + 4] [i_0 - 1] [i_0] [i_0 - 1];
                            }
                        } 
                    } 
                    arr_35 [i_0] [i_8] = ((/* implicit */unsigned short) max(((-(arr_30 [i_0] [i_0] [i_8]))), (((min((arr_19 [i_1] [i_0]), (arr_31 [i_1] [i_1] [i_1] [i_1]))) / ((+(18446744073709551615ULL)))))));
                }
            }
        } 
    } 
}
