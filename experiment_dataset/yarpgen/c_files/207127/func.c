/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207127
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
    var_12 = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_0)), (var_3))), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */unsigned int) var_4)) : (((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (var_7)))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    arr_7 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                    arr_8 [10U] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2])) << (((arr_2 [i_0] [10]) + (5876522930382836990LL)))))) ^ (((((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_2] [1])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                    var_13 = ((/* implicit */unsigned short) ((((arr_0 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [(unsigned char)12] [7] [i_0]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) <= (arr_0 [i_0])))))));
                }
                for (unsigned char i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_5] [i_0] [i_4] [i_4] [i_0] = ((/* implicit */int) (((-(((arr_12 [i_5] [i_4] [1LL] [i_1] [6LL]) * (arr_3 [(unsigned short)3] [i_5]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [8ULL] [i_4] [i_0] [(unsigned char)0])))));
                                var_14 = ((/* implicit */unsigned long long int) (((((~(arr_11 [(_Bool)1] [i_3] [i_3]))) | (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)99))))))) ^ (((((arr_10 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [9U] [i_0] [i_0]))))) & (((((/* implicit */long long int) arr_1 [i_5])) | (arr_16 [i_0] [(signed char)12] [i_3] [i_0] [i_5])))))));
                                var_15 = ((/* implicit */unsigned int) arr_0 [i_0]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) ((arr_12 [i_0] [i_3 + 1] [(unsigned short)0] [i_3] [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_3])))) == (((/* implicit */unsigned long long int) (-(arr_13 [i_0] [i_0] [i_3]))))))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 9; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        {
                            arr_25 [i_6] [i_0] [i_7] [i_7] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_19 [i_7] [i_0] [i_1])) / (((/* implicit */int) ((arr_2 [i_0] [i_6]) != (arr_10 [i_0])))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_6] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [8] [i_0] [i_6]))) : (arr_16 [i_0] [i_6] [i_6] [i_0] [i_6])))) || (((/* implicit */_Bool) min((arr_10 [i_0]), (arr_2 [i_6] [11U])))))))));
                            arr_26 [i_0] = min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)163)) && (((/* implicit */_Bool) 3516494707683096337ULL))))), (max((arr_16 [i_0] [12ULL] [(_Bool)0] [i_0] [(unsigned short)8]), (((((/* implicit */long long int) arr_1 [i_6])) & (arr_11 [i_6] [i_6] [i_6]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) == (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (var_4)))) * (min((((/* implicit */unsigned int) var_8)), (var_6)))))));
}
