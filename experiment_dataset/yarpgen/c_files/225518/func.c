/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225518
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [(short)1] |= ((/* implicit */unsigned int) var_13);
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned char)6] [i_0])))) : (((/* implicit */int) var_9))));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) (-(-1)));
                        /* LoopSeq 4 */
                        for (int i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) (~(var_10)));
                            var_19 = ((/* implicit */unsigned int) ((signed char) ((unsigned short) var_13)));
                            var_20 = ((((/* implicit */_Bool) arr_0 [i_3 + 3])) ? (((/* implicit */int) arr_0 [i_3 - 1])) : (((/* implicit */int) var_12)));
                        }
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            arr_19 [i_0] [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [(unsigned char)10] [(unsigned char)10] [i_2 + 1] [i_0] [i_0] [i_2 + 1]) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [9ULL] [i_1 - 1]))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [7LL] [i_1] [i_1 - 1] [(short)15])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 1] [i_1]))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (-(arr_18 [i_0] [i_0] [i_2 + 2] [(signed char)1] [i_1 + 1] [i_0] [9]))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            arr_22 [(unsigned short)16] [(unsigned short)16] [i_1] [(unsigned short)16] [(unsigned short)16] = ((/* implicit */unsigned int) arr_13 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [(unsigned char)4]);
                            var_23 = ((/* implicit */unsigned int) (+(arr_9 [i_2] [i_2] [13] [i_1] [13] [i_2])));
                            var_24 = ((/* implicit */short) (+(arr_4 [i_3 + 2] [i_3 + 1])));
                        }
                        for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) var_7);
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_18 [4ULL] [4ULL] [4ULL] [11LL] [4ULL] [4ULL] [4ULL]))));
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */int) var_7);
    }
    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            arr_33 [i_8] [i_8] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_8)))));
            arr_34 [i_8] [8] [8] = (~(arr_30 [i_8] [i_9]));
        }
        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            var_28 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_28 [18ULL] [i_10])))) + ((~(min((arr_29 [(unsigned char)0]), (((/* implicit */int) arr_32 [i_8]))))))));
            var_29 *= ((/* implicit */unsigned short) (+(((unsigned int) ((arr_35 [i_8] [i_8]) / (arr_35 [(unsigned char)10] [(unsigned char)10]))))));
            arr_37 [18] [18] [18] = ((/* implicit */unsigned short) arr_27 [i_8]);
        }
        for (int i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            var_30 += ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned short)64506)) | (430246231)))));
            var_31 = ((/* implicit */unsigned char) arr_27 [i_8]);
            /* LoopSeq 2 */
            for (int i_12 = 2; i_12 < 19; i_12 += 1) 
            {
                arr_43 [i_8] [i_8] [(_Bool)1] = ((/* implicit */short) arr_31 [i_8] [i_8]);
                var_32 += arr_32 [i_8];
            }
            for (int i_13 = 3; i_13 < 21; i_13 += 3) 
            {
                var_33 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */int) arr_42 [i_13 - 1] [i_13 - 2])) : ((-(((/* implicit */int) arr_36 [i_13]))))))), (var_8)));
                /* LoopSeq 2 */
                for (unsigned short i_14 = 2; i_14 < 21; i_14 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) arr_45 [i_14 - 2]);
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((int) var_7)))));
                        var_36 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_15)) ? (arr_30 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_13] [i_13]))))));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        var_37 = min((min((arr_42 [i_13] [8ULL]), (max((((/* implicit */unsigned char) arr_40 [i_11] [i_11])), (var_5))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 430246231))))));
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) arr_32 [i_14]))));
                    }
                    var_39 *= ((/* implicit */short) ((int) (-(-430246231))));
                }
                for (unsigned short i_17 = 1; i_17 < 20; i_17 += 3) 
                {
                    var_40 &= ((/* implicit */int) arr_44 [i_11] [i_11] [i_11] [5ULL]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_18 = 2; i_18 < 19; i_18 += 1) 
                    {
                        arr_59 [i_13] [2U] [i_13] [12ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_54 [i_13] [i_17 + 2] [i_17 + 1] [i_18 + 1])) ? (arr_46 [i_18] [i_18 - 2] [i_18 + 3] [i_18 + 3] [(signed char)6] [i_18 + 3]) : ((+(arr_46 [i_8] [i_8] [i_8] [i_8] [12ULL] [i_8])))));
                        arr_60 [i_8] [i_8] [i_8] [(unsigned short)17] [i_13] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) arr_35 [i_8] [i_8])));
                    }
                }
                var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) arr_51 [i_8] [(unsigned short)20]))));
            }
        }
        var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (arr_41 [2LL] [2LL])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_39 [11ULL] [(signed char)4] [11ULL]))))) : ((-(arr_51 [i_8] [i_8]))))))));
        arr_61 [i_8] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_57 [i_8] [20U] [i_8] [i_8] [i_8])) * (((/* implicit */int) arr_38 [17] [17] [i_8]))))));
        var_43 = ((/* implicit */unsigned int) var_0);
        var_44 = (((((!(((/* implicit */_Bool) var_2)))) ? ((+(arr_58 [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) / (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) + (min((((/* implicit */unsigned long long int) var_6)), (arr_52 [i_8] [i_8] [(short)4] [i_8] [(short)4] [i_8] [i_8]))))));
    }
    /* vectorizable */
    for (unsigned int i_19 = 2; i_19 < 13; i_19 += 2) 
    {
        arr_64 [i_19] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_41 [i_19] [i_19]))));
        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_19])) ? (arr_9 [i_19] [i_19] [i_19] [i_19] [(unsigned char)12] [i_19]) : (((/* implicit */int) arr_1 [i_19]))))) ? ((~(((/* implicit */int) arr_39 [(unsigned char)7] [(unsigned char)7] [17U])))) : (((((/* implicit */int) arr_36 [i_19])) ^ (((/* implicit */int) var_0))))));
        var_46 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_55 [i_19 - 1] [i_19 - 1] [i_19 + 2] [i_19 + 1] [i_19 + 2]))));
        /* LoopSeq 1 */
        for (unsigned char i_20 = 0; i_20 < 15; i_20 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_21 = 0; i_21 < 15; i_21 += 4) 
            {
                var_47 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_67 [i_19 - 1])) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) var_2))));
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 14; i_22 += 2) 
                {
                    for (int i_23 = 3; i_23 < 13; i_23 += 1) 
                    {
                        {
                            arr_78 [i_23] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_3)))));
                            var_48 *= ((/* implicit */unsigned short) var_0);
                        }
                    } 
                } 
            }
            var_49 = ((/* implicit */unsigned long long int) ((unsigned short) var_14));
        }
    }
    var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) var_12))));
    var_51 -= ((unsigned char) var_14);
}
