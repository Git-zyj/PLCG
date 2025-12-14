/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41336
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
    var_13 &= ((/* implicit */unsigned short) (+(((var_6) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))));
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (+(((/* implicit */int) var_9)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [(_Bool)1]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) arr_11 [i_1 + 2] [i_3 - 1] [i_4]);
                                arr_13 [i_0] = arr_10 [i_0] [i_1] [i_4];
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_10 [i_1] [i_3] [i_4])))) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_11 [(unsigned short)1] [i_1 + 1] [i_0])))))));
                                arr_14 [i_0] [i_1] [(unsigned short)15] [i_2] [(_Bool)1] [(unsigned short)19] [i_4] = ((/* implicit */unsigned char) arr_6 [i_4] [i_3] [i_2] [i_0]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_1 - 2] [i_2] [i_2] [i_6] &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
                            arr_21 [i_0] [i_5] [(_Bool)1] [14U] [(unsigned short)5] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_0] [i_1]))));
                            var_17 &= ((/* implicit */unsigned char) arr_9 [i_0] [i_1]);
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) arr_23 [i_0] [i_0] [i_5] [i_0] [i_0]);
                            arr_25 [i_5] [i_1] [i_1 + 2] [i_1] [i_1] [(unsigned short)10] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2]))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) arr_11 [i_0] [(short)3] [i_2])) : ((~(((/* implicit */int) arr_27 [i_0] [i_1]))))));
                            var_19 ^= ((/* implicit */unsigned short) arr_10 [i_0] [i_2] [i_8]);
                        }
                        arr_28 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) arr_22 [i_1 + 3] [i_2] [i_5]))))) ? (((/* implicit */unsigned long long int) arr_23 [i_0] [i_1] [i_5] [i_5] [i_5])) : (((arr_27 [i_0] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_1]))) : (arr_8 [(_Bool)1])))));
                    }
                    arr_29 [i_2] [i_1] &= ((/* implicit */unsigned short) ((arr_5 [i_0] [i_1] [i_1] [i_0]) ? ((-(((/* implicit */int) arr_1 [i_1 + 1])))) : (((/* implicit */int) arr_7 [i_0]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_9])) ? ((-((-(((/* implicit */int) arr_16 [i_9] [i_9])))))) : (((/* implicit */int) arr_22 [i_9] [i_9] [i_9]))));
        /* LoopNest 3 */
        for (unsigned short i_10 = 3; i_10 < 19; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (arr_35 [i_11])));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((arr_41 [i_9] [i_9] [i_9] [i_9]) ? (((/* implicit */int) arr_38 [i_9] [i_10 + 1] [i_11] [i_12])) : (((/* implicit */int) arr_4 [i_9])))))));
                    }
                } 
            } 
        } 
    }
}
