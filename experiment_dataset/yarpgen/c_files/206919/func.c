/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206919
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((_Bool) (short)27499)) ? (((long long int) var_12)) : (arr_0 [i_0] [i_0]))))));
        arr_4 [9LL] [9LL] = ((/* implicit */signed char) max((((/* implicit */long long int) var_13)), (arr_0 [i_0] [i_0])));
        var_18 = ((/* implicit */signed char) (short)-27500);
    }
    var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) (-((~(((/* implicit */int) var_1))))))), (var_3)));
    var_20 = var_4;
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] [(short)1] = ((/* implicit */long long int) arr_3 [i_1] [i_1]);
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((long long int) ((long long int) var_15))), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))))));
        var_22 = arr_0 [i_1] [(short)13];
        var_23 = ((/* implicit */int) var_7);
        var_24 = ((/* implicit */int) max((var_24), (max(((-(((/* implicit */int) arr_3 [i_1] [i_1])))), (((/* implicit */int) arr_6 [i_1]))))));
    }
    for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        var_25 = (-(((/* implicit */int) arr_11 [1LL])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            var_26 -= ((/* implicit */signed char) arr_11 [i_2]);
            arr_17 [i_3] = ((/* implicit */short) var_1);
        }
        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            arr_21 [(short)3] [(short)3] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) min((var_3), (((/* implicit */long long int) (short)27500))))))));
            /* LoopNest 3 */
            for (long long int i_5 = 1; i_5 < 11; i_5 += 2) 
            {
                for (long long int i_6 = 3; i_6 < 14; i_6 += 2) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)30352))))) + (((/* implicit */int) ((short) var_8)))))) : (((((unsigned long long int) arr_9 [i_2] [i_2 + 1])) ^ (((/* implicit */unsigned long long int) arr_30 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]))))));
                            var_28 = ((/* implicit */signed char) var_1);
                            var_29 = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_2 + 1] [i_5 + 4] [i_6 - 2] [i_7 - 1] [i_7] [i_7]))))), (((((/* implicit */_Bool) arr_20 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [5LL] [5LL]), (((/* implicit */unsigned char) arr_29 [i_2] [i_4] [12LL] [0LL] [i_5] [14] [i_7])))))) : (var_15)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_8 = 3; i_8 < 13; i_8 += 4) 
        {
            var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)27496))));
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (-(arr_25 [i_8 - 3] [i_2]))))));
            arr_35 [i_8] = ((int) ((((/* implicit */_Bool) arr_13 [i_8 + 2] [10ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_2 [i_8] [i_2])));
            /* LoopSeq 4 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                var_32 = ((/* implicit */short) ((((max((var_3), (arr_0 [12ULL] [i_8]))) - (var_0))) % (((/* implicit */long long int) ((/* implicit */int) (short)-27514)))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        {
                            arr_44 [i_2 + 1] [i_11] [8LL] |= ((/* implicit */int) var_9);
                            arr_45 [(short)9] [i_8] [i_9 - 1] [i_8] [i_2] = ((/* implicit */unsigned char) (+((~(((((/* implicit */unsigned long long int) arr_0 [i_2] [i_2])) / (arr_33 [i_8] [i_8] [10LL])))))));
                            arr_46 [i_8] [0] [i_9] [3LL] [i_8] = ((/* implicit */short) (~((~(((/* implicit */int) arr_26 [i_11] [i_8] [i_8] [i_2]))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_12 = 2; i_12 < 14; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    var_33 = ((/* implicit */int) var_11);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) arr_15 [10LL]);
                        arr_55 [i_8] [i_8 + 1] [i_8 + 1] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) arr_20 [i_12] [i_2]))));
                        var_35 = ((/* implicit */unsigned long long int) var_12);
                        arr_56 [i_8] [i_8] [i_8] [i_8] [13] = ((/* implicit */short) var_16);
                    }
                    for (long long int i_15 = 1; i_15 < 12; i_15 += 2) 
                    {
                        arr_59 [i_2] [i_8 + 1] [i_8] [i_13] [i_15] [(_Bool)1] [i_15] = ((/* implicit */unsigned char) var_10);
                        arr_60 [i_8] [i_13] [i_8] [i_12] [i_8] [i_8] [i_2 + 1] = ((/* implicit */_Bool) var_7);
                    }
                    for (long long int i_16 = 0; i_16 < 15; i_16 += 4) 
                    {
                        var_36 = ((/* implicit */long long int) min((arr_48 [i_16] [i_12] [i_8]), (arr_43 [i_2 + 1] [i_8 - 3] [i_2 + 1] [i_8 - 2] [i_12 - 1])));
                        arr_63 [i_8] [i_13] [i_8] = ((/* implicit */short) min((((/* implicit */unsigned char) ((var_15) <= (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_2] [(signed char)5] [i_12] [i_13] [i_2])))))), (arr_34 [(unsigned char)13])));
                        arr_64 [i_8] [i_2] [i_2] [i_8] [i_8] = ((/* implicit */signed char) arr_19 [i_16] [(_Bool)1]);
                    }
                    arr_65 [i_8] [i_13] [i_8] [i_2] [i_2] = var_5;
                    var_37 = ((/* implicit */int) arr_39 [i_2] [i_13]);
                }
                var_38 = ((/* implicit */short) (((-(var_10))) ^ (min((((/* implicit */long long int) ((short) var_16))), ((-(arr_31 [i_8])))))));
            }
            for (short i_17 = 2; i_17 < 14; i_17 += 3) 
            {
                arr_69 [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                arr_70 [i_2] [(signed char)13] [i_8] [(signed char)13] = ((/* implicit */long long int) max((min((((((/* implicit */int) arr_20 [(short)8] [i_8])) - (((/* implicit */int) arr_3 [(short)0] [(short)0])))), (((/* implicit */int) ((signed char) var_6))))), (((/* implicit */int) var_11))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_39 = ((/* implicit */int) arr_12 [13ULL]);
                arr_74 [i_18] [i_8] [i_8] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_66 [i_8 - 2] [i_8 - 2] [(unsigned char)7]), (arr_66 [i_8 - 2] [i_8] [(signed char)12])))) * (((/* implicit */int) (short)-27500))));
            }
            /* LoopNest 3 */
            for (short i_19 = 1; i_19 < 13; i_19 += 1) 
            {
                for (long long int i_20 = 0; i_20 < 15; i_20 += 2) 
                {
                    for (signed char i_21 = 1; i_21 < 13; i_21 += 1) 
                    {
                        {
                            arr_82 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (max((((((/* implicit */_Bool) arr_81 [i_21] [i_8] [i_8] [i_19] [i_8] [i_8] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_0 [(signed char)14] [(unsigned char)5]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)27488)) || (((/* implicit */_Bool) (short)-27501))))))));
                            arr_83 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) var_10);
                            arr_84 [4ULL] [(short)4] [i_19] [i_19] [i_19] [i_8] [i_19] = ((/* implicit */_Bool) var_16);
                            var_40 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_2] [i_8 - 1] [i_20] [i_20] [i_21 + 2] [6U] [6U]))) + (arr_38 [i_2 + 1] [i_2 + 1] [i_19] [13LL])))) ? ((-(var_8))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-27487))) + (var_10)))))) ? (arr_58 [(unsigned char)14] [i_20] [(unsigned char)8] [(short)10] [i_20] [i_2 + 1]) : (((/* implicit */long long int) ((int) ((((/* implicit */int) arr_52 [4LL] [4LL] [(short)0] [i_20])) + (((/* implicit */int) arr_42 [0] [(_Bool)0] [i_19] [11U]))))))));
                            var_41 = ((/* implicit */unsigned long long int) (((~(arr_53 [7LL] [7LL] [7LL] [7LL] [7LL]))) ^ ((~(arr_53 [i_21] [i_20] [i_2] [0LL] [i_2])))));
                        }
                    } 
                } 
            } 
        }
    }
}
