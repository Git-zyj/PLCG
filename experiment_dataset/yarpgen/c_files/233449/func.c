/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233449
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
    var_10 = var_1;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_4 [10U] [10U] = arr_1 [10];
        var_11 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((unsigned int) ((arr_14 [i_0] [(_Bool)0] [i_3] [i_3] [i_4] [i_2]) * (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [8U])))))));
                                var_13 = ((/* implicit */signed char) ((((unsigned long long int) arr_3 [i_2])) / (((/* implicit */unsigned long long int) min((((arr_13 [i_0] [i_1] [i_0] [i_3] [4LL] [6]) * (((/* implicit */unsigned int) arr_6 [i_1] [i_1])))), (((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_4] [i_1])))))));
                                var_14 = ((/* implicit */signed char) arr_0 [i_4]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)11] [i_0])))))));
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_6 = 1; i_6 < 22; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                arr_22 [i_5] = ((/* implicit */signed char) ((short) arr_21 [i_6 + 1] [i_6 + 1] [i_6 + 1]));
                arr_23 [(_Bool)1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6 - 1] [i_6 - 1] [(short)13])) ? (arr_18 [8ULL] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_21 [i_5] [(signed char)3] [(unsigned char)21]))))));
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    var_16 = (+(arr_18 [i_6 + 1] [i_6 - 1]));
                    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_16 [i_6 - 1]))));
                }
                for (unsigned long long int i_9 = 3; i_9 < 21; i_9 += 4) 
                {
                    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5])) * (((/* implicit */int) arr_27 [i_6]))))) ? (((((/* implicit */_Bool) arr_27 [i_5])) ? (((/* implicit */int) arr_24 [i_5] [i_6] [i_7] [i_9])) : (((/* implicit */int) arr_16 [i_9])))) : (arr_17 [i_6 - 1]));
                    var_20 = ((signed char) (!(var_3)));
                }
            }
            for (short i_10 = 3; i_10 < 22; i_10 += 4) 
            {
                var_21 = ((/* implicit */_Bool) (~(arr_31 [i_10] [i_6 + 1] [i_10 + 1] [i_10 - 1])));
                arr_32 [i_5] [i_5] [i_10] = ((/* implicit */int) (-(arr_31 [i_10] [i_6] [i_6 + 1] [i_5])));
            }
            arr_33 [i_5] [(unsigned short)6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((-(arr_18 [i_5] [18LL]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5]))) * (arr_31 [i_5] [i_6] [i_6] [i_6])))));
        }
        arr_34 [i_5] [i_5] = ((/* implicit */unsigned long long int) (((+((~(((/* implicit */int) arr_27 [i_5])))))) != (((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_16 [i_5]))))));
        var_22 = ((/* implicit */int) ((unsigned long long int) min(((-(arr_31 [i_5] [(short)18] [(unsigned char)6] [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_6))))))));
    }
}
