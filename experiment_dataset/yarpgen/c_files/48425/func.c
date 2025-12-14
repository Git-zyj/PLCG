/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48425
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
    var_18 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (var_4))), (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) arr_3 [i_0 + 3]);
                        arr_8 [i_0] [21] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */short) ((int) min((var_4), (((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_0 + 1] [i_0])))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)-11098)), ((unsigned short)3584)))), (3520417218U)));
                            arr_12 [i_0] [i_1] [(short)10] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */long long int) ((unsigned int) arr_3 [i_0 + 2]))) : (min((arr_4 [i_1] [i_1] [i_1]), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_2])), (var_3))))))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 3) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_3] [i_5])) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (arr_14 [i_0 - 1] [i_1] [i_0] [i_3] [i_5] [(signed char)20] [i_2]))))))), (var_12)));
                            var_21 = arr_13 [i_0] [11U] [(short)6] [i_3] [i_5];
                            arr_17 [i_0] [i_1] [(short)5] [i_2] [i_3] [i_5] = ((/* implicit */short) ((signed char) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_6 [i_5 + 1] [i_3] [i_2] [9U] [(unsigned char)15])) : (var_12))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_5] [i_2] [i_3])), (var_11)))))));
                            arr_18 [i_5] [i_5 + 1] [i_3] [i_3] [i_2] [i_1] [i_0 + 2] = ((/* implicit */unsigned char) max((min((min((var_6), (((/* implicit */unsigned short) arr_15 [i_2])))), (((/* implicit */unsigned short) ((signed char) (unsigned short)7739))))), (((/* implicit */unsigned short) var_16))));
                            arr_19 [5U] [(short)15] [i_2] [(signed char)8] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32443)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))) : (arr_10 [i_2] [i_2] [i_2] [i_2])));
                        }
                        var_22 = ((/* implicit */unsigned int) var_9);
                    }
                    arr_20 [i_2] [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
                }
            } 
        } 
        arr_21 [i_0 - 2] = ((short) (short)8192);
    }
    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 1; i_7 < 14; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                {
                    arr_30 [i_6] [i_7] [i_6] = ((/* implicit */short) max((var_6), (max((var_6), (((/* implicit */unsigned short) arr_7 [i_6] [i_7 + 1] [i_8] [i_7 - 1] [i_7 + 2] [(short)6]))))));
                    arr_31 [i_6] [i_7 - 1] [i_6] = ((/* implicit */short) min((((/* implicit */long long int) arr_22 [i_6] [i_7])), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_6]))) : (var_8)))), (var_0)))));
                }
            } 
        } 
        var_23 = arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6];
        var_24 = ((/* implicit */short) ((unsigned int) min((max((((/* implicit */short) var_7)), (arr_26 [i_6]))), (arr_26 [i_6]))));
        arr_32 [i_6] [i_6] = ((/* implicit */short) var_1);
    }
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        for (unsigned int i_10 = 2; i_10 < 8; i_10 += 2) 
        {
            {
                arr_37 [i_9] [i_10 + 3] [i_10 + 1] = ((/* implicit */unsigned int) var_5);
                arr_38 [i_9] [i_9] = ((/* implicit */unsigned int) var_9);
                arr_39 [i_9] [i_10] [i_9] = arr_0 [i_9];
                arr_40 [3] [i_9] [i_9] = max((arr_34 [i_10]), ((short)-11098));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) ((unsigned int) var_12));
}
