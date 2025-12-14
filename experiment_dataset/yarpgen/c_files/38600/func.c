/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38600
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_14 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_4])) ? (((/* implicit */int) arr_6 [i_3] [i_3 + 2] [i_4] [i_3 + 4])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1])))) >= (((((((/* implicit */_Bool) arr_4 [(unsigned short)0] [i_1] [i_4])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_0])))) & (((/* implicit */int) arr_0 [i_0 - 1]))))));
                                var_15 = ((/* implicit */unsigned short) arr_5 [i_0 + 1] [i_1 + 1] [i_2] [3ULL]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_6]))))))) / (arr_11 [i_0] [i_0] [i_0 + 1] [4LL] [i_0 - 1])));
                            var_17 = ((/* implicit */unsigned long long int) (~(((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) >= (arr_16 [i_1] [i_1] [i_1] [i_6 + 1] [i_5]))) ? (((((/* implicit */int) arr_1 [(unsigned short)10])) / (((/* implicit */int) arr_0 [i_1 + 1])))) : (((/* implicit */int) ((arr_5 [i_5] [i_1] [9] [i_1]) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])))))))));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned long long int) arr_15 [i_5] [(unsigned short)0] [i_5] [i_1])))));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (((+(arr_11 [i_5] [i_5] [i_6 - 1] [i_6] [i_6]))) >> (((arr_11 [i_1] [i_6] [i_6 - 1] [i_6] [i_6]) - (arr_11 [i_1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1]))))))));
                            arr_17 [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1])) > ((+((+(((/* implicit */int) arr_3 [i_0 + 2] [(unsigned char)1]))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((var_20), (((((arr_22 [i_0] [i_1 - 2] [6] [i_8] [i_8] [i_9]) == (arr_22 [i_0 + 2] [i_1 - 1] [i_7] [i_8] [i_9] [i_7]))) ? ((+(((/* implicit */int) arr_0 [i_1 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_9])) - (((/* implicit */int) arr_15 [i_0 + 2] [i_1] [i_8] [i_9]))))))))))));
                                arr_27 [i_9] [i_8] [i_7] [i_0] [i_1] [i_9] &= ((/* implicit */signed char) (((-((+(0))))) / (((((/* implicit */int) arr_1 [i_0 - 1])) / (((/* implicit */int) arr_1 [i_0 - 1]))))));
                                arr_28 [i_0] [i_1] [i_7] [1] [i_1] [7ULL] = ((/* implicit */unsigned long long int) ((((arr_13 [i_1] [i_0 + 2] [i_1 + 1] [i_8]) ^ (((/* implicit */int) arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2] [i_1] [i_1])))) ^ (((((/* implicit */_Bool) arr_13 [i_1] [i_0 - 1] [i_1 - 1] [i_8])) ? (((/* implicit */int) arr_25 [i_0 - 1] [0ULL] [i_0 + 1] [0ULL] [i_0 + 2] [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
                                var_21 = (!(((_Bool) arr_8 [i_1 + 1] [i_1 - 1])));
                            }
                        } 
                    } 
                    arr_29 [i_1] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_20 [i_1])) & (((/* implicit */int) arr_20 [i_1])))), (((arr_11 [i_0 + 1] [i_0 + 2] [i_1 - 1] [i_1] [i_1 - 2]) / ((-(((/* implicit */int) arr_15 [i_0 + 1] [i_1 - 1] [i_1] [i_7]))))))));
                    arr_30 [(unsigned short)5] [i_1] [i_7] [i_1 - 2] = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_1] [i_7] [i_7]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        for (int i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            {
                arr_36 [i_10] [i_11] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_35 [i_10] [i_11])))), (((arr_31 [i_11]) & (((/* implicit */int) arr_32 [i_10]))))));
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_35 [i_10] [i_11])) ? (((/* implicit */int) arr_33 [i_10] [i_11])) : (((/* implicit */int) arr_35 [i_10] [13ULL])))) % (((/* implicit */int) ((short) arr_34 [i_10]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (unsigned short)1008))));
}
