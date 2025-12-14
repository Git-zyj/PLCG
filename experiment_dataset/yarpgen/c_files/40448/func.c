/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40448
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
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] = (_Bool)1;
                            var_17 *= ((/* implicit */_Bool) arr_11 [i_0 - 1]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    arr_16 [i_0] [i_1] [i_4] [6] = ((/* implicit */int) arr_10 [i_0] [i_1] [i_4] [(_Bool)1] [i_4] [i_4]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_14 [i_0] [6ULL]))));
                                var_19 = ((((/* implicit */int) arr_17 [i_5])) >> (((arr_21 [(_Bool)1] [9ULL] [i_0] [i_5] [i_6]) - (898487140))));
                                var_20 = ((/* implicit */unsigned char) arr_22 [i_0] [i_0 + 1] [5] [i_6] [i_6]);
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(_Bool)1] [i_1] [(_Bool)0] [i_0 + 1] [i_6] [(_Bool)1]))));
                                arr_25 [15U] [i_0] [i_5] [(_Bool)1] [9] [i_0] = ((arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [(_Bool)1] [i_0 + 1] [i_0 - 1]) + (arr_10 [i_0] [i_0 - 1] [i_0] [6U] [i_0 - 2] [i_0 - 2]));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((arr_3 [i_0 + 1]) | (((/* implicit */int) arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_1])))))));
                    arr_26 [13U] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 1])) ? (arr_4 [i_0 - 2] [i_0 + 1]) : (((/* implicit */int) (_Bool)1))));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 15; i_9 += 3) 
                        {
                            {
                                arr_34 [i_0] [i_9] [i_1] [i_7 - 2] [i_8] [0U] [7ULL] = ((/* implicit */unsigned char) (~(arr_29 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])));
                                arr_35 [i_9] [i_1] [i_7] [i_8] = ((((/* implicit */_Bool) arr_2 [i_8] [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (6057368119229927363ULL)))));
                                var_23 = ((((/* implicit */unsigned long long int) 2147483647)) | (12389375954479624252ULL));
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */unsigned long long int) ((arr_22 [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 1] [6]) && (((arr_11 [i_0]) > (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_1] [(unsigned char)9]))))));
                    var_25 = (((~(-972704660))) ^ (((((/* implicit */int) arr_19 [i_0 - 1] [4ULL])) & (arr_15 [i_0] [3] [3] [(unsigned char)1]))));
                }
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0]))));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */unsigned int) -1866748708)) ^ (4294967295U))))));
                    arr_38 [i_0] |= ((/* implicit */_Bool) ((((arr_30 [i_0] [i_0] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))))) >> (((max((((/* implicit */int) (_Bool)1)), ((~(-1277518252))))) - (1277518249)))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((((/* implicit */unsigned int) arr_47 [(unsigned char)0] [i_12] [i_12] [i_12])) + (((((/* implicit */_Bool) 9715646600411188538ULL)) ? (2221078122U) : (2377244689U)))))));
                    arr_48 [i_11] = ((/* implicit */_Bool) arr_29 [i_11] [i_11] [i_12] [2ULL] [(_Bool)1] [i_13]);
                    var_29 = (-(((/* implicit */int) ((-1) < (((/* implicit */int) (_Bool)0))))));
                }
                for (int i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        arr_53 [i_11] = ((/* implicit */unsigned char) arr_13 [i_11] [i_12]);
                        var_30 = ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) (-(10973564236749118466ULL))))));
                        var_31 *= ((/* implicit */unsigned long long int) arr_36 [i_11] [7U] [i_11] [i_11]);
                    }
                    for (unsigned char i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        var_32 ^= ((((/* implicit */_Bool) arr_52 [i_11] [2] [i_14] [(_Bool)0])) ? (((/* implicit */int) ((arr_52 [i_11] [6] [i_14] [i_16]) < (arr_52 [i_11] [4] [i_14] [i_16])))) : ((~(arr_52 [i_11] [(_Bool)1] [i_11] [i_11]))));
                        var_33 = arr_31 [i_11] [i_12] [i_14] [i_16] [10] [i_11];
                    }
                    var_34 = (((~(arr_55 [i_11] [11] [4U] [i_14]))) < (((/* implicit */unsigned int) (-(((arr_54 [i_11] [i_11] [i_11] [i_11] [(unsigned char)7]) * (((/* implicit */int) arr_22 [5] [(unsigned char)1] [5] [i_14] [i_11]))))))));
                    arr_57 [i_11] [i_14] [i_12] [i_11] = ((/* implicit */unsigned char) arr_52 [i_11] [i_11] [i_11] [i_14]);
                    var_35 ^= (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_1 [i_12]))))));
                    var_36 *= ((/* implicit */_Bool) (+(((arr_54 [i_11] [i_11] [i_12] [i_12] [i_12]) / (arr_54 [i_11] [i_12] [i_11] [8U] [i_14])))));
                }
                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) arr_46 [i_11] [i_11] [i_11] [6ULL]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_17 = 3; i_17 < 7; i_17 += 2) 
    {
        var_38 = ((/* implicit */unsigned char) arr_15 [i_17 + 1] [i_17 - 2] [i_17 - 1] [i_17 + 1]);
        /* LoopSeq 1 */
        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
        {
            arr_64 [i_18] [i_18] = ((/* implicit */unsigned char) 63488);
            arr_65 [i_18] = ((/* implicit */int) (~(1930470898U)));
            var_39 = ((/* implicit */_Bool) 2073889185U);
            var_40 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))));
        }
        var_41 = ((/* implicit */int) min((var_41), ((~(((/* implicit */int) arr_0 [i_17 - 2]))))));
        arr_66 [i_17] = ((((/* implicit */_Bool) arr_27 [i_17 + 2])) ? (arr_15 [i_17] [i_17 - 3] [i_17] [i_17 - 2]) : (-2083905871));
    }
    /* vectorizable */
    for (unsigned char i_19 = 0; i_19 < 20; i_19 += 4) 
    {
        arr_69 [i_19] [i_19] = (~(((/* implicit */int) (_Bool)1)));
        arr_70 [6] = (-((~(((/* implicit */int) arr_67 [i_19])))));
        var_42 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_67 [i_19])) >= (((/* implicit */int) arr_67 [i_19]))));
        var_43 = ((/* implicit */unsigned int) ((arr_67 [i_19]) ? (((/* implicit */int) arr_67 [(_Bool)1])) : (arr_68 [i_19])));
    }
}
