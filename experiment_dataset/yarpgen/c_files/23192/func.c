/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23192
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
    var_14 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (min((var_1), (((/* implicit */int) var_13))))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3213)) && (((/* implicit */_Bool) (short)(-32767 - 1)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 536805376)) && (((/* implicit */_Bool) ((signed char) arr_1 [13] [2ULL])))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_17 = ((int) ((((/* implicit */_Bool) arr_6 [i_2] [i_0 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_2]))) : (arr_0 [i_0 + 1])));
                    arr_7 [i_0 - 1] [i_1] [i_2] [i_2] = ((/* implicit */int) var_0);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 4; i_5 < 22; i_5 += 4) 
                {
                    {
                        var_18 = ((/* implicit */long long int) arr_5 [i_0 + 1] [i_5 + 2]);
                        var_19 = min((((((/* implicit */unsigned int) max((arr_11 [i_4]), (((/* implicit */int) arr_3 [i_5] [i_0]))))) * (arr_14 [i_0]))), (((/* implicit */unsigned int) (-(arr_17 [i_4] [(short)8] [i_4] [i_4])))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        for (unsigned short i_7 = 3; i_7 < 20; i_7 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned short) arr_3 [i_6] [13LL])), (var_8)));
                var_21 = ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
                /* LoopSeq 3 */
                for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    arr_24 [16] [i_7] [i_8] [16] |= ((/* implicit */short) arr_12 [i_7] [(short)15] [i_8] [i_8]);
                    arr_25 [i_8] [i_7] [i_6] [i_8] = ((/* implicit */unsigned long long int) arr_11 [i_6]);
                    var_22 = ((/* implicit */unsigned short) min((var_22), (var_3)));
                    var_23 = ((/* implicit */long long int) arr_0 [i_6]);
                }
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    arr_30 [i_6] = ((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_9])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [(unsigned short)14] [i_7] [i_6])) ? (arr_13 [i_6]) : (arr_13 [i_7])))) : (arr_5 [i_6] [i_7 - 2]));
                    /* LoopNest 2 */
                    for (short i_10 = 3; i_10 < 21; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            {
                                var_24 = ((long long int) (-(((/* implicit */int) var_4))));
                                arr_35 [i_6] [(short)16] [i_9] [i_10] [i_11] [i_7 + 2] = ((/* implicit */long long int) var_10);
                                var_25 = ((/* implicit */short) arr_12 [i_6] [(unsigned char)1] [i_9] [(short)2]);
                                var_26 = arr_27 [i_6];
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) ((signed char) (unsigned short)31744));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 1; i_12 < 21; i_12 += 2) 
                    {
                        for (unsigned long long int i_13 = 2; i_13 < 21; i_13 += 4) 
                        {
                            {
                                arr_43 [i_6] [i_7] [i_6] [i_12] [i_13] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_11))) && (((/* implicit */_Bool) arr_4 [i_6] [i_7]))));
                                var_28 = ((/* implicit */unsigned char) var_6);
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_1))));
                                var_30 = ((/* implicit */unsigned long long int) arr_4 [i_7 - 1] [i_12 - 1]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    arr_46 [i_6] [i_6] [(unsigned short)10] [i_6] = ((/* implicit */unsigned char) ((unsigned short) arr_29 [i_6] [i_7 - 3] [i_14]));
                    arr_47 [0ULL] [i_6] = var_1;
                }
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((short) ((((/* implicit */int) arr_32 [i_7] [(unsigned char)12] [i_7] [i_7] [i_6])) == (((/* implicit */int) arr_41 [i_6] [i_6])))))) : (((/* implicit */int) var_5)))))));
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) var_10))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (unsigned char i_16 = 4; i_16 < 11; i_16 += 1) 
        {
            for (unsigned char i_17 = 0; i_17 < 15; i_17 += 4) 
            {
                {
                    arr_55 [i_16] [i_16] [i_17] [i_15] = ((/* implicit */unsigned char) arr_26 [i_15]);
                    arr_56 [1ULL] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) max((var_5), (((/* implicit */short) arr_12 [i_15] [i_17] [i_17] [i_15])))))) ? (((var_13) ? (((((/* implicit */_Bool) var_1)) ? (15866442050234257550ULL) : (((/* implicit */unsigned long long int) arr_48 [i_15])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_15] [5U] [i_17] [i_17] [i_15]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8909663708540190372LL)) ? (((/* implicit */int) (signed char)-39)) : (536805397))))));
                }
            } 
        } 
    } 
}
