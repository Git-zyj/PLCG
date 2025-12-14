/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219852
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
    var_18 += ((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((var_5) + (934394990)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((_Bool) arr_1 [i_0] [i_1]);
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
            {
                arr_8 [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_2]))) != (arr_4 [i_2] [i_1] [i_0])));
                arr_9 [i_0] [9] [i_2] = ((/* implicit */_Bool) var_1);
            }
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
            {
                var_19 = ((/* implicit */int) max((var_19), ((~(((((/* implicit */_Bool) (unsigned short)39546)) ? (arr_7 [i_3]) : (arr_2 [i_3] [i_1])))))));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    arr_16 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_1] [i_1] [i_3] [i_1]))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_4])) ? (arr_7 [i_0]) : (arr_7 [i_4])));
                    var_21 = ((/* implicit */unsigned int) var_14);
                    arr_17 [i_0] [i_0] [3U] [i_3] [(_Bool)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_11 [4ULL] [4ULL] [i_4]))))) ? (((/* implicit */unsigned long long int) (+(arr_7 [i_0])))) : ((-(var_11)))));
                }
            }
            arr_18 [i_0] [(short)17] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [(short)0] [(short)0])) && (((/* implicit */_Bool) (~(arr_3 [i_0] [i_1] [i_1]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        {
                            arr_29 [i_5] [i_1] [i_1] [i_1] [i_5] [i_6 - 3] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_6] [i_6 + 1] [i_6] [i_6] [i_1]))));
                            arr_30 [4] [i_5] = ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_6 - 1])) ? (((/* implicit */int) arr_11 [i_6] [i_5] [i_0])) : (((/* implicit */int) arr_19 [i_5] [i_1] [i_7]))));
                            arr_31 [i_5] [i_1] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                            var_22 ^= ((/* implicit */unsigned char) ((arr_25 [i_0] [i_0] [i_0] [i_6] [i_7]) != (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_6 - 3] [i_6 - 3] [i_6 - 3] [i_6 - 3] [i_6 - 3])) - (((/* implicit */int) arr_22 [i_6 - 3] [i_1] [i_5] [i_6] [7U])))))));
                        }
                    } 
                } 
            } 
            arr_32 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_1]) : (arr_7 [i_0])));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 19; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 19; i_9 += 1) 
            {
                for (unsigned char i_10 = 2; i_10 < 19; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((arr_3 [i_0] [i_10] [i_11]) > (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_9 + 2] [i_0] [i_11])))) ? (arr_20 [i_8 + 3]) : (((int) arr_42 [i_0] [i_8] [i_9] [i_10 + 2] [i_11])))))));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [19ULL] [19ULL] [19ULL] [i_10] [i_11]))))) ? (arr_27 [i_8 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_37 [i_0] [i_8] [i_9] [i_10])))))))));
                            arr_45 [i_9] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_11] [i_10] [i_10] [i_10] [i_10 + 3] [i_10 + 3]))));
                            var_26 = ((/* implicit */int) arr_15 [i_0] [i_11] [i_0] [i_8 + 3] [i_0]);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_7 [i_8]))));
            arr_46 [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_0] [i_8] [i_8] [i_8 + 1] [i_8]))));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 1) 
        {
            var_28 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [20U]))));
            /* LoopNest 2 */
            for (unsigned short i_13 = 1; i_13 < 19; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_13 + 3] [i_13 + 3] [i_12 - 1] [i_0] [i_0]))) < (((arr_21 [i_0] [i_12] [i_0]) * (arr_3 [i_12] [i_12 + 1] [(unsigned char)16])))));
                        arr_57 [(unsigned char)7] [i_13 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_13 + 3] [i_13 + 3] [i_12 + 1] [i_12])) - (((/* implicit */int) (unsigned char)0))));
                    }
                } 
            } 
            arr_58 [i_0] [i_0] [i_12 + 1] = ((/* implicit */unsigned long long int) ((short) var_8));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            arr_61 [i_0] [i_15] = ((/* implicit */unsigned long long int) arr_52 [i_0] [(_Bool)1]);
            var_30 = var_10;
        }
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 19; i_16 += 3) 
        {
            for (unsigned char i_17 = 0; i_17 < 22; i_17 += 2) 
            {
                {
                    arr_66 [i_16] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_41 [i_17] [i_17] [i_16 + 1] [i_17] [i_0])), (arr_36 [i_17] [i_16])))) ? (arr_38 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_22 [i_17] [i_16 + 2] [i_16 + 2] [17] [i_16 + 3])))) > (((/* implicit */int) (unsigned char)255))));
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            {
                                arr_72 [i_18] [i_18] [i_16] [i_16] [i_18] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
                                arr_73 [i_0] [i_0] [i_17] [i_18] [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_35 [i_16 + 2] [i_16 + 3]), (arr_35 [i_16 + 3] [i_16 + 2]))))));
                                arr_74 [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_50 [i_0] [i_18] [i_18])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_16])) ? (arr_3 [i_0] [(short)5] [i_0]) : (0U)))) : (arr_48 [i_16] [i_17])))) ? (((/* implicit */unsigned long long int) var_10)) : ((+(arr_71 [i_19] [i_18] [i_18] [i_17] [i_16 - 1] [i_0])))));
                                arr_75 [i_18] [i_18] [i_18] [i_16] [i_19] = ((/* implicit */signed char) var_14);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_76 [i_0] = ((/* implicit */unsigned char) arr_69 [i_0] [i_0] [i_0] [i_0] [(short)17] [i_0]);
    }
    for (int i_20 = 0; i_20 < 12; i_20 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_21 = 0; i_21 < 12; i_21 += 4) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (unsigned short i_23 = 0; i_23 < 12; i_23 += 3) 
                {
                    {
                        arr_88 [(unsigned char)2] [i_21] [(unsigned char)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_81 [i_23] [i_20] [i_20]))))) ? ((+(arr_34 [i_21] [i_23]))) : (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_52 [i_21] [i_21])))) ? (((((/* implicit */_Bool) arr_54 [i_20] [i_21] [i_22] [i_23] [i_20] [i_21])) ? (((/* implicit */unsigned long long int) 1813647716)) : (arr_83 [i_20] [i_21] [i_22] [i_23]))) : (((((/* implicit */_Bool) arr_40 [(signed char)10] [i_23] [i_23] [(unsigned char)7] [i_23])) ? (((/* implicit */unsigned long long int) arr_4 [i_20] [i_21] [i_22])) : (arr_37 [i_20] [i_20] [(_Bool)1] [i_23])))))));
                        arr_89 [i_20] [7] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_67 [i_23] [i_22] [i_21] [i_20])) ? (arr_47 [i_23] [12]) : (((/* implicit */unsigned long long int) (-(max((((/* implicit */int) arr_26 [i_23] [i_22] [i_20] [i_20] [i_20])), (arr_2 [i_23] [i_21]))))))));
                        arr_90 [i_21] = ((/* implicit */unsigned char) max((((int) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned char)250))))), (((/* implicit */int) arr_53 [i_20] [i_20] [i_21] [13U] [i_22] [i_23]))));
                    }
                } 
            } 
        } 
        arr_91 [i_20] = ((/* implicit */long long int) (_Bool)1);
    }
}
