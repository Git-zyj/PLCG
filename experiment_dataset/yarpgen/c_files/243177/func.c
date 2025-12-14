/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243177
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(_Bool)1] [i_1] |= ((/* implicit */unsigned int) min((((/* implicit */short) arr_5 [i_0] [(signed char)12])), (arr_0 [i_0] [(_Bool)1])));
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) max((arr_0 [i_0] [i_0]), (((/* implicit */short) arr_1 [i_0]))));
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((max((((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_0])), (arr_5 [i_0] [i_1]))), (((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]))));
                arr_9 [i_1] [i_0] [i_1] = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_1]);
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((max((((/* implicit */short) max((arr_5 [i_0] [12U]), (((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_1]))))), (arr_0 [i_0] [i_0]))), (arr_0 [i_1] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 4) 
    {
        var_21 = ((/* implicit */int) arr_12 [i_2]);
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        for (signed char i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            {
                                arr_23 [(_Bool)1] [i_3] [i_4] [i_3] [(_Bool)1] = ((/* implicit */long long int) arr_19 [i_5]);
                                arr_24 [i_2] [i_2] [i_4] [i_5] [i_6] [i_2] [i_6 + 1] = ((/* implicit */unsigned short) arr_13 [i_2 - 2] [i_4] [i_4]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) arr_19 [i_2]);
                    var_23 *= ((/* implicit */unsigned long long int) arr_10 [i_2 - 1] [i_3]);
                    arr_25 [i_2] [i_3] [i_4] = ((/* implicit */signed char) arr_22 [i_2] [i_3] [i_4] [i_4] [(signed char)13]);
                }
            } 
        } 
        arr_26 [i_2] = ((/* implicit */_Bool) arr_17 [i_2]);
    }
    for (int i_7 = 2; i_7 < 21; i_7 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 2) 
        {
            var_24 = ((/* implicit */short) arr_28 [i_7]);
            var_25 = ((/* implicit */unsigned long long int) arr_29 [i_7]);
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            arr_33 [i_7] = arr_27 [i_7] [i_7];
            var_26 = ((/* implicit */unsigned int) max((var_26), (arr_30 [i_7] [(unsigned short)0] [i_7])));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 4; i_11 < 21; i_11 += 2) 
                {
                    for (unsigned int i_12 = 4; i_12 < 21; i_12 += 1) 
                    {
                        {
                            arr_42 [(unsigned short)12] [i_7] [i_7] [i_10] [i_7] [i_7] = ((/* implicit */short) arr_38 [i_7] [i_9] [i_7] [i_9]);
                            arr_43 [i_7] [i_9] [i_7] [i_11] [i_12 - 2] [i_7] [i_7] = ((/* implicit */short) arr_28 [i_9]);
                            var_27 = arr_30 [i_7] [i_7] [i_10];
                        }
                    } 
                } 
                arr_44 [i_7 + 1] [i_7] [i_10] = ((/* implicit */unsigned short) arr_38 [i_9] [i_9] [i_9] [i_7 + 1]);
                arr_45 [i_7] = arr_36 [i_7 - 2] [i_7 - 2] [15U];
            }
        }
        for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            arr_48 [i_7] = ((/* implicit */signed char) arr_39 [i_7]);
            arr_49 [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */short) arr_27 [i_7] [i_7])), (arr_29 [i_13])));
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 18; i_14 += 2) 
            {
                for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                {
                    {
                        arr_55 [i_7] [i_13] [i_14] [i_14] = ((/* implicit */signed char) min((max((arr_31 [i_7]), (((/* implicit */long long int) arr_41 [i_7] [i_13] [i_7] [i_15] [i_7 + 1] [i_15] [i_13])))), (min((((/* implicit */long long int) arr_30 [i_7] [i_7] [i_7])), (max((((/* implicit */long long int) arr_27 [i_7] [i_13])), (arr_32 [i_7 + 1] [i_13] [i_14])))))));
                        arr_56 [i_7 + 1] [i_7] [i_14] [i_14] [4U] [i_7] = ((/* implicit */signed char) arr_52 [i_7] [i_13] [i_13] [i_7]);
                        arr_57 [i_7] [i_13] [i_7] [i_15] = ((/* implicit */unsigned long long int) arr_32 [(_Bool)1] [2LL] [i_15]);
                        arr_58 [i_7 + 1] [i_13] [i_7] [i_15] = ((/* implicit */int) max((min((max((arr_51 [i_7 - 1]), (((/* implicit */unsigned int) arr_46 [i_7])))), (((/* implicit */unsigned int) arr_38 [i_15] [i_13] [i_14 + 2] [i_15])))), (max((arr_50 [(unsigned char)12] [i_14 + 2] [11U]), (min((arr_54 [i_13] [i_13] [i_14 + 2] [i_15]), (arr_54 [i_7] [i_13] [i_14] [i_7])))))));
                    }
                } 
            } 
        }
        arr_59 [i_7] = ((/* implicit */unsigned long long int) arr_34 [i_7] [(short)10]);
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_35 [i_7 + 1] [i_7 - 1] [i_7 - 1])), (max((max((((/* implicit */long long int) arr_54 [i_7] [i_7 + 1] [i_7] [i_7])), (arr_31 [14U]))), (((/* implicit */long long int) max((arr_50 [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) arr_29 [i_7]))))))))))));
    }
}
