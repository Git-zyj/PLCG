/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19285
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((var_4), (((/* implicit */unsigned long long int) arr_0 [6U])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_1] [i_0]) : (arr_1 [i_0] [i_2]))) : (((arr_4 [(_Bool)1] [i_1] [i_2]) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))));
                    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [(signed char)3] [i_1])) ? (arr_5 [i_0] [i_0] [i_1]) : (arr_5 [i_0] [i_1] [i_1])))) ? (var_8) : (((/* implicit */unsigned long long int) arr_2 [i_1])));
                }
            } 
        } 
        var_19 = arr_1 [i_0] [i_0];
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 1) 
            {
                {
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_13 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3])))));
                    arr_15 [i_4] [0U] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [10U] [i_4 + 3])) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_6 [i_0] [i_3])))) ? (var_8) : (((/* implicit */unsigned long long int) arr_11 [i_4 + 1] [i_4] [i_4] [i_4]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (short i_6 = 3; i_6 < 7; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((((/* implicit */int) var_7)), (min((-838343413), (((/* implicit */int) (short)29507))))));
                                var_21 = ((/* implicit */_Bool) arr_5 [i_3] [i_3] [2U]);
                                var_22 = var_4;
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) arr_16 [i_0] [i_3] [i_4] [(_Bool)1] [i_3] [(_Bool)1]);
                    arr_22 [(short)0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_16 [i_0] [i_0] [i_3] [i_3] [i_4] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                }
            } 
        } 
        var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [10ULL])) ? (arr_2 [6U]) : (arr_2 [(_Bool)0])))) ? (arr_2 [(short)0]) : (arr_2 [(_Bool)1])));
    }
    for (short i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_16))));
        var_26 = ((/* implicit */unsigned int) arr_10 [i_7] [i_7]);
        arr_26 [i_7] = ((/* implicit */long long int) min((max((min((var_4), (((/* implicit */unsigned long long int) arr_25 [i_7] [i_7])))), (((/* implicit */unsigned long long int) arr_17 [i_7] [i_7] [i_7] [i_7] [i_7])))), (((/* implicit */unsigned long long int) arr_16 [i_7] [(_Bool)1] [i_7] [i_7] [(_Bool)1] [8]))));
        var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967295U)), (arr_6 [i_7] [3])))) ? (arr_20 [10] [i_7] [10] [(_Bool)1] [i_7]) : (arr_2 [i_7])));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 1; i_10 < 9; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */short) max((min((arr_24 [i_8]), (((/* implicit */long long int) min((var_15), (var_5)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_34 [i_7])), (arr_3 [i_8])))) ? (((/* implicit */int) arr_32 [i_10 + 1] [i_10 - 1])) : (((/* implicit */int) var_9)))))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_7] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10 + 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_8]) : (arr_16 [i_7] [i_8] [i_7] [(short)5] [i_7] [i_7])))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_17)) : (arr_35 [i_7] [i_8] [i_9] [i_8]))) : (((/* implicit */unsigned long long int) arr_11 [i_8] [i_10 + 1] [i_10] [i_10]))))));
                        var_30 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_3 [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9] [i_10]))))), (((/* implicit */unsigned long long int) arr_20 [i_7] [i_8] [i_8] [1U] [i_10]))));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        for (short i_12 = 1; i_12 < 8; i_12 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_31 [i_8] [7U] [i_9] [i_11])) ? (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) arr_23 [i_9])) : (((/* implicit */int) arr_34 [i_12]))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_7] [i_7])), (arr_6 [i_7] [i_7]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_11] [i_12 + 1] [i_12] [i_11] [i_12])) ? (((/* implicit */int) arr_40 [i_9] [i_12 - 1] [i_12] [i_12] [i_12])) : (((/* implicit */int) var_9)))))));
                                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_20 [i_7] [i_8] [(_Bool)1] [i_11] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_8] [i_12 - 1] [i_12 + 1] [i_12] [i_11] [i_8])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_39 [i_7] [i_12 + 2] [i_9] [i_8] [i_12])), (arr_16 [i_7] [i_12 + 2] [i_9] [i_9] [i_12] [i_9])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7] [i_8] [i_9] [4U] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_11] [i_8] [i_9] [i_11]))) : (arr_25 [0ULL] [i_12])))) ? (var_6) : (((/* implicit */unsigned long long int) min((arr_21 [i_11] [5U] [i_8]), (((/* implicit */int) arr_8 [i_11])))))))));
                                arr_43 [(short)4] [i_11] [i_8] [i_8] [i_8] [9U] = ((/* implicit */long long int) arr_2 [i_8]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
    {
        for (long long int i_14 = 1; i_14 < 22; i_14 += 1) 
        {
            for (short i_15 = 2; i_15 < 20; i_15 += 3) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) var_1))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 4) 
                    {
                        for (unsigned short i_17 = 1; i_17 < 21; i_17 += 3) 
                        {
                            {
                                arr_58 [10U] [i_17] [i_15] [i_15] [i_17] [i_13] = arr_54 [i_14] [i_14] [i_16] [i_17];
                                var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) arr_56 [(signed char)8] [i_15] [i_16] [i_15 + 4]))));
                                var_35 = ((/* implicit */unsigned int) arr_56 [i_13] [i_13] [i_17] [i_13]);
                                arr_59 [i_17] = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((arr_49 [i_13] [i_14] [i_13] [i_17]), (arr_49 [i_13] [12ULL] [i_15] [i_16])))), (min((arr_52 [i_17] [i_14] [i_15 + 4] [i_16]), (arr_52 [i_13] [i_14 + 2] [i_16] [i_13])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */unsigned char) var_8);
    var_37 = ((/* implicit */unsigned long long int) var_15);
}
