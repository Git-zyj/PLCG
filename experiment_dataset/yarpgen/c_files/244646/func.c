/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244646
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
    var_19 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) -2644047225649612017LL)) ? (var_4) : (((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))))));
    var_20 = ((/* implicit */long long int) min((var_13), (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            arr_13 [10LL] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) var_16)), (((((/* implicit */_Bool) -2019764044439314536LL)) ? (((/* implicit */int) arr_11 [i_3 + 2] [(_Bool)1] [2LL] [i_3 + 1] [16LL])) : (((/* implicit */int) arr_12 [i_3 + 2] [15U] [i_3 + 2] [i_3 + 1] [i_3] [i_3 + 1]))))));
                            var_21 = ((/* implicit */_Bool) arr_1 [i_2]);
                            arr_14 [i_4] = ((/* implicit */int) max((var_6), (((/* implicit */unsigned char) ((min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_2)))) <= (var_8))))));
                        }
                        arr_15 [14ULL] [18ULL] [18ULL] [18ULL] = var_7;
                        arr_16 [i_3 + 2] = ((/* implicit */unsigned long long int) var_4);
                    }
                } 
            } 
        } 
        arr_17 [(short)18] = ((/* implicit */unsigned short) arr_10 [i_0] [i_0]);
        /* LoopNest 2 */
        for (short i_5 = 3; i_5 < 17; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_6]))))))))), (min((var_1), (((/* implicit */unsigned short) arr_7 [15ULL] [i_5 + 1] [i_5]))))));
                    var_23 = ((/* implicit */short) (+(max((var_14), (((/* implicit */unsigned long long int) -422783397690731737LL))))));
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */int) 3476743533716504056ULL);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_7 = 2; i_7 < 19; i_7 += 4) /* same iter space */
        {
            arr_26 [5ULL] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_0] [(_Bool)1]))))) / (((((/* implicit */_Bool) 422783397690731737LL)) ? (422783397690731715LL) : (921494665243371962LL)))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_7] [i_7])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
        }
        for (int i_8 = 2; i_8 < 19; i_8 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */int) max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) arr_27 [i_8 + 1] [i_8 - 1]))));
            /* LoopSeq 1 */
            for (short i_9 = 1; i_9 < 19; i_9 += 2) 
            {
                arr_31 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(max((((/* implicit */int) arr_18 [i_0])), (arr_4 [i_0] [i_0] [i_0])))));
                var_26 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))));
                var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))) ? (((/* implicit */unsigned long long int) var_15)) : (min((3476743533716504056ULL), (((/* implicit */unsigned long long int) -422783397690731746LL)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0])), (arr_27 [i_9 + 1] [i_8 - 1])))))));
            }
        }
        for (int i_10 = 2; i_10 < 19; i_10 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_11 = 1; i_11 < 19; i_11 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) arr_27 [i_0] [i_11 - 1])), (4294967295U)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    var_29 = ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (arr_32 [i_10 + 1] [i_10 - 2] [i_11 - 1]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_10 + 1] [i_10 - 1])), (-422783397690731716LL)))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_42 [i_0] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) (((~(arr_33 [i_10 - 1] [i_11]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((var_16), (((/* implicit */unsigned short) var_18)))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) <= (var_8))))))))));
                        arr_43 [(signed char)18] [i_11] [i_11] [i_12] [(signed char)5] = ((/* implicit */_Bool) arr_4 [i_13] [(signed char)5] [i_13]);
                        arr_44 [i_11] [(short)5] [(short)2] [i_11] [(unsigned char)8] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -422783397690731716LL)) ? (-1169988509) : (-2125645814)));
                        var_30 &= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)0)))), (((/* implicit */int) (unsigned short)15625))));
                    }
                }
                for (unsigned int i_14 = 1; i_14 < 16; i_14 += 2) /* same iter space */
                {
                    arr_47 [14LL] [i_11] [i_11] [(_Bool)1] = ((/* implicit */_Bool) min((arr_41 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 + 3] [i_14 + 2] [i_14 + 3] [i_14 + 3]), ((~(((((/* implicit */_Bool) arr_29 [i_0] [i_10 + 1] [7] [3LL])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_32 [i_0] [i_10] [i_11])))))));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_11] [(unsigned short)4])) + (((/* implicit */int) arr_22 [i_10] [i_10])))))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        arr_50 [i_0] [i_10] [i_11] [i_11] [i_15] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_7)), (((max((((/* implicit */unsigned long long int) var_5)), (arr_8 [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
                        var_32 = ((/* implicit */unsigned short) (_Bool)0);
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) arr_36 [i_0] [i_0] [i_0] [i_0]))));
                        var_34 = ((/* implicit */signed char) (+(-1169988509)));
                    }
                    var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_39 [i_14 - 1] [8ULL] [i_14 - 1] [i_0])), (((((/* implicit */_Bool) -1169988509)) ? (((/* implicit */unsigned long long int) 1169988512)) : (6747590493772062545ULL)))));
                }
                /* vectorizable */
                for (unsigned int i_16 = 1; i_16 < 16; i_16 += 2) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_16]))));
                    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) 3476743533716504056ULL))));
                    /* LoopSeq 2 */
                    for (long long int i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        arr_58 [i_0] [(signed char)15] [i_11] = ((/* implicit */signed char) arr_34 [i_11]);
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [i_10] [(unsigned char)1])) ^ (((/* implicit */int) var_18))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))));
                        arr_59 [i_10] &= ((/* implicit */short) (-((+(-422783397690731699LL)))));
                        var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_10 + 1] [i_10] [(unsigned short)19]))));
                        arr_60 [i_11] [19LL] [i_11 - 1] [(short)11] [i_17] = ((/* implicit */unsigned short) arr_2 [i_0] [i_10]);
                    }
                    for (unsigned int i_18 = 1; i_18 < 18; i_18 += 2) 
                    {
                        arr_63 [i_11] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */long long int) ((arr_55 [i_0] [i_0] [i_11] [i_0] [5] [i_0]) >= (((/* implicit */int) (_Bool)1))));
                        var_40 = ((/* implicit */_Bool) (~(((/* implicit */int) ((var_10) != (arr_57 [i_0] [(_Bool)1]))))));
                        var_41 = var_12;
                        var_42 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                    }
                }
                var_43 = ((/* implicit */unsigned int) var_14);
            }
            for (unsigned int i_19 = 1; i_19 < 19; i_19 += 4) /* same iter space */
            {
                var_44 ^= ((/* implicit */signed char) (~((~(((/* implicit */int) arr_12 [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 - 1] [i_19 - 1]))))));
                arr_66 [i_0] [i_10] [i_19] = var_15;
            }
            for (unsigned int i_20 = 1; i_20 < 19; i_20 += 4) /* same iter space */
            {
                var_45 = ((/* implicit */short) min((((((/* implicit */_Bool) min((var_5), (((/* implicit */short) arr_2 [i_0] [i_0]))))) ? (arr_46 [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_54 [i_0] [i_10] [i_20] [i_10] [i_0]))))))), (((/* implicit */unsigned long long int) var_2))));
                var_46 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_37 [i_10] [i_10 + 1] [i_10 - 2])), (min((var_11), (((/* implicit */int) (_Bool)1)))))) | (((/* implicit */int) var_2))));
                /* LoopSeq 1 */
                for (signed char i_21 = 0; i_21 < 20; i_21 += 3) 
                {
                    var_47 = ((/* implicit */short) ((422783397690731737LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_72 [i_0] [i_21] [i_20] [i_21] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) arr_41 [i_20 + 1] [i_20 - 1] [i_20 + 1] [i_20 - 1] [i_20 - 1] [i_20 + 1] [i_20 - 1]))), ((~(arr_0 [i_10 + 1] [i_20 + 1])))));
                }
                var_48 = ((/* implicit */signed char) var_16);
            }
            var_49 = ((max((((((/* implicit */_Bool) 11381446985677180668ULL)) ? (((/* implicit */long long int) 2007660527U)) : (422783397690731715LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_27 [i_0] [(unsigned char)12])), (var_10)))))) << (((arr_67 [17U] [17U] [i_10]) + (8519878042175547945LL))));
        }
    }
}
