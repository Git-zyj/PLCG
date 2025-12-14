/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189614
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) arr_3 [i_2]);
                            arr_8 [i_0] [i_1 - 1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_3 [i_0]))) + (((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2])) : (arr_6 [i_1 + 1] [i_1 + 1] [i_1] [11ULL])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_4] [i_0] [i_1] [i_4] [i_6] = ((/* implicit */unsigned int) arr_9 [i_1 - 2] [i_1 - 1]);
                                var_16 -= ((/* implicit */int) ((((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_4] [i_5] [i_1 + 1]))))) * ((+(arr_5 [i_0] [i_1 - 1] [i_4])))));
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-(min((0ULL), (((/* implicit */unsigned long long int) arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 2])))))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_15 [i_1] [i_4] [i_4] [i_1] [i_1] [i_0]))));
                                var_19 = ((unsigned long long int) arr_6 [i_0] [(unsigned short)12] [i_4] [i_6]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((max((var_7), (((/* implicit */long long int) arr_13 [i_0] [i_1 - 2] [i_1 + 2] [i_1 + 1])))) - (((/* implicit */long long int) min((arr_15 [i_0] [i_1 + 2] [(_Bool)1] [i_1 + 2] [i_1] [i_1 + 1]), (arr_15 [i_0] [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1 - 1]))))));
                    arr_17 [i_0] [i_1] [(unsigned char)3] = ((/* implicit */unsigned long long int) ((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-21831)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 4; i_7 < 13; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                arr_24 [i_0] [7ULL] [i_7] [i_7] [i_8] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_15 [i_0] [i_1 + 1] [(short)0] [i_7 - 4] [i_7 + 1] [i_4]))))));
                                var_21 += ((/* implicit */unsigned char) ((long long int) max((arr_1 [i_1 - 2] [i_7 + 1]), (-2059491260))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    arr_28 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [(signed char)10] [i_1] [i_1 + 2])) ? (arr_9 [i_1] [i_1 + 1]) : (((((/* implicit */_Bool) 13U)) ? (arr_26 [i_9] [2ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                    var_22 &= ((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [(unsigned char)6] [i_1] [i_9]);
                    var_23 &= ((/* implicit */unsigned int) arr_25 [i_1 + 1] [i_1 + 1]);
                    arr_29 [i_0] [i_1 + 2] [i_9] = ((/* implicit */short) (-(arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                }
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~(max((-6908872687161623403LL), (((/* implicit */long long int) min((arr_1 [i_1] [i_1 + 1]), (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_1] [(short)11]))))))))))));
                arr_30 [i_1] = ((/* implicit */unsigned long long int) arr_21 [i_1] [i_1 + 1] [i_1] [i_0] [i_1 + 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            {
                var_25 = ((/* implicit */unsigned long long int) var_8);
                arr_37 [i_10] = ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) min((arr_32 [i_11]), (((/* implicit */int) arr_34 [i_10]))))) == ((+(arr_33 [i_10]))))));
                arr_38 [2] = max((((arr_31 [i_10]) >> (((((/* implicit */int) var_5)) - (41190))))), (max((((/* implicit */unsigned long long int) ((signed char) var_12))), (18446744073709551611ULL))));
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_39 [i_11] [i_11] [i_10] [i_10])) : (((/* implicit */int) arr_39 [i_10] [i_11] [i_11] [i_12]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_12])) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_10] [i_12] [i_10] [i_10])) ? (arr_40 [i_10] [i_10]) : (((/* implicit */unsigned int) arr_32 [12ULL]))))))))));
                    var_27 = 10ULL;
                }
            }
        } 
    } 
}
