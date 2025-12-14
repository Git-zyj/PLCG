/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199965
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_19 += ((/* implicit */unsigned short) ((unsigned int) ((((((/* implicit */int) arr_2 [i_0] [(short)5])) - (((/* implicit */int) var_3)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (arr_0 [i_0])))))));
            var_20 = ((/* implicit */unsigned int) ((((int) ((_Bool) (short)-24025))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (short)11343)))))));
            arr_6 [i_0] = ((/* implicit */unsigned char) var_7);
        }
        for (short i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            var_21 = ((((/* implicit */_Bool) max((arr_4 [i_2] [i_2 + 3] [i_2 - 2]), (arr_4 [2U] [i_2 + 1] [i_2 + 3])))) ? (max((((/* implicit */unsigned int) var_8)), (arr_4 [i_2] [0ULL] [i_2 - 2]))) : (((((/* implicit */_Bool) var_10)) ? (arr_4 [i_2] [i_2] [i_2 + 4]) : (var_6))));
            arr_9 [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_5))) <= (13U))))) > (var_7));
            var_22 &= (-(((arr_8 [i_2 + 1] [(unsigned short)2] [i_2 + 4]) / (arr_8 [i_2 + 3] [6U] [i_2 + 2]))));
        }
        arr_10 [(unsigned short)20] = ((/* implicit */signed char) max(((-(max((((/* implicit */unsigned long long int) var_16)), (var_11))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_1)))), (((((/* implicit */_Bool) arr_4 [(unsigned short)14] [i_0] [i_0])) && (((/* implicit */_Bool) -944757756)))))))));
        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 17; i_3 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (arr_7 [i_3])));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) (((-(arr_13 [i_3]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
                        var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) * (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned short)25276))));
                    }
                    for (int i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */short) (((+(arr_21 [i_3] [3ULL] [i_3] [i_3]))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (arr_17 [i_3] [i_7] [i_3]))))));
                        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_21 [i_3 - 1] [i_4] [16U] [i_3 + 2])));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_28 *= ((/* implicit */unsigned short) (_Bool)1);
                        var_29 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_3 + 1] [i_3 + 1])) - (((/* implicit */int) (_Bool)1))))) ? (arr_13 [0U]) : (845277449799422708ULL)));
                        var_30 = ((/* implicit */signed char) ((arr_8 [18U] [i_3] [i_5]) ^ ((~(arr_21 [i_3 + 2] [i_4] [i_3] [1ULL])))));
                    }
                    arr_26 [i_3] [11U] [i_3] [(signed char)6] = ((/* implicit */short) ((arr_0 [i_3 + 2]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_3 + 1] [i_3 + 2])))));
                    arr_27 [i_3] [i_3] = ((/* implicit */signed char) arr_4 [i_5] [i_5] [i_5]);
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_8 [i_3] [(short)14] [(short)16]))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        for (unsigned short i_10 = 2; i_10 < 14; i_10 += 3) 
        {
            {
                var_32 = ((((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) arr_21 [i_9] [i_10] [10U] [i_10]))))) ? (((unsigned int) (_Bool)0)) : (max((var_12), (3564789967U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)1776)))));
                var_33 ^= ((/* implicit */short) arr_17 [i_9] [i_9 - 1] [(short)16]);
                /* LoopNest 3 */
                for (signed char i_11 = 4; i_11 < 14; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_11 + 1] [i_11] [i_11 + 1] [i_11 - 2])) ? (((((((/* implicit */int) arr_38 [i_10] [i_10 - 1] [2U] [i_10])) + (2147483647))) << (((((((/* implicit */int) arr_38 [i_10] [i_11 - 3] [i_12] [i_13])) + (8709))) - (27))))) : (((/* implicit */int) max(((short)-17), (arr_38 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1]))))));
                                var_35 = ((/* implicit */unsigned int) min((var_35), ((-(((unsigned int) ((252391454U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62))))))))));
                                var_36 = ((signed char) var_15);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_37 &= var_18;
    var_38 = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) & (var_6)))));
    /* LoopSeq 1 */
    for (unsigned short i_14 = 1; i_14 < 9; i_14 += 2) 
    {
        var_39 = ((/* implicit */_Bool) max(((+(var_12))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_38 [i_14 + 1] [8U] [(unsigned short)13] [i_14 + 1])) ? (((/* implicit */unsigned long long int) arr_32 [i_14])) : (var_0)))))));
        var_40 -= ((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) (signed char)65)))) ? (var_7) : (((/* implicit */unsigned long long int) 1801044903U))))));
        var_41 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [(_Bool)1])) || (((/* implicit */_Bool) arr_14 [4U])))))));
    }
}
