/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48933
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) <= (max((max((var_3), (((/* implicit */int) var_10)))), (((/* implicit */int) var_2))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8891582815309086696LL)) ? (8891582815309086696LL) : (8891582815309086696LL)));
                        var_12 = ((/* implicit */int) min((var_12), (((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((_Bool) var_4))) : (((((/* implicit */_Bool) 4063650988U)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)193))))))));
                        var_13 = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned char)216)))) : (((/* implicit */int) (unsigned char)253)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_14 = var_3;
                        arr_16 [i_0] [6] [i_4] [(unsigned char)3] = ((/* implicit */int) (~(-8891582815309086696LL)));
                    }
                    arr_17 [i_0] [7] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned short)3] [(unsigned short)3] [i_0])))))) * (((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 4; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_15 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) var_6)) : (arr_6 [i_1 + 2] [i_1 - 1] [i_1])));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_6 - 2] [i_6 - 2] [i_6] [i_6 + 2] [i_6 - 4] [i_6])) ? (((/* implicit */int) arr_9 [i_6 + 2] [i_6] [i_6] [i_6] [i_6 - 1] [9ULL])) : (((/* implicit */int) var_5))));
                                var_17 &= ((/* implicit */unsigned short) var_8);
                                arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_10)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned int i_7 = 2; i_7 < 12; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    {
                        var_18 = ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_32 [i_0] [i_0] [i_7] [i_0] [7] [i_9])));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 2; i_10 < 10; i_10 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_8])) ? (arr_6 [i_0] [i_7] [i_8]) : (((/* implicit */int) ((unsigned char) var_5)))));
                            arr_37 [i_0] [i_0] [i_8] [i_0] [i_10] [(unsigned char)11] [i_0] = ((/* implicit */unsigned char) ((((_Bool) var_7)) || (((/* implicit */_Bool) var_10))));
                        }
                        arr_38 [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_23 [(unsigned short)1])) : (((/* implicit */int) var_10))))) ? (((((/* implicit */int) var_7)) << (((((/* implicit */int) var_7)) - (933))))) : (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [(_Bool)1] [i_9])) ? (var_3) : (((/* implicit */int) var_7))))));
                        arr_39 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) : (8891582815309086696LL)))));
                    }
                } 
            } 
            var_20 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_8 [i_7 - 1] [i_7] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (var_3))));
        }
        for (unsigned char i_11 = 1; i_11 < 12; i_11 += 4) 
        {
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_3))) && ((!(((/* implicit */_Bool) arr_22 [i_11] [i_11] [(unsigned char)1])))))))));
            var_22 = (+(((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
        }
        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            arr_46 [i_0] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [12LL]))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
            /* LoopSeq 1 */
            for (int i_13 = 4; i_13 < 10; i_13 += 4) 
            {
                arr_51 [i_0] [i_12] [i_13 - 3] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_41 [i_0] [i_0] [i_13])) - (16319))))) / (((/* implicit */int) arr_4 [i_0]))));
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) 1854322271U)) ? (2440645024U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))))));
            }
            arr_52 [i_0] [i_0] [10LL] &= ((/* implicit */unsigned char) var_5);
        }
        for (signed char i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            var_24 = var_2;
            /* LoopSeq 3 */
            for (signed char i_15 = 1; i_15 < 10; i_15 += 2) 
            {
                var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_0] [i_15 + 3] [i_15] [i_15]))));
                /* LoopSeq 3 */
                for (int i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1854322272U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)83))));
                    var_27 = ((/* implicit */unsigned long long int) var_7);
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [i_14] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                }
                for (signed char i_17 = 2; i_17 < 12; i_17 += 1) 
                {
                    arr_63 [11] [i_14] [(unsigned short)9] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_0] [(signed char)13] [i_15] [i_15 + 3] [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6))));
                    var_31 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) >= (((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */unsigned int) -1113592286)) : (1854322269U)))));
                }
                for (unsigned short i_18 = 0; i_18 < 14; i_18 += 4) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_65 [i_15] [i_15 + 2] [i_15 + 2] [i_15 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [11U] [i_15 + 4] [i_15 + 2] [(_Bool)1] [i_15 + 1] [11U]))) : (arr_13 [i_0] [i_14] [i_14] [i_18])));
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_15 + 4] [12] [i_15 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) < (((/* implicit */unsigned int) var_3)))))) : (((unsigned int) var_8))));
                    arr_66 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_15 + 3] [i_0])) ? (arr_13 [i_0] [i_0] [i_15 - 1] [i_15]) : (((/* implicit */unsigned long long int) var_4))));
                    var_34 &= ((/* implicit */unsigned short) (~(var_4)));
                    arr_67 [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) var_9)) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_0]))))));
                }
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_20 = 0; i_20 < 14; i_20 += 4) 
                {
                    arr_73 [i_20] [i_20] [i_20] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (1854322271U) : (((/* implicit */unsigned int) arr_28 [i_0] [i_14] [4] [i_20]))))) ? (((/* implicit */int) arr_58 [i_20] [i_14] [i_20] [i_14] [i_19] [i_19])) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_53 [i_20] [i_14] [i_14])) : (((/* implicit */int) var_10))))));
                    arr_74 [i_0] [i_14] [(_Bool)1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_48 [i_14]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_0] [i_14] [i_0] [i_20])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8)))));
                }
                arr_75 [i_0] [i_14] [i_19] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))));
                arr_76 [i_0] [i_14] = ((/* implicit */int) ((signed char) var_1));
            }
            for (int i_21 = 3; i_21 < 12; i_21 += 3) 
            {
                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) arr_65 [i_21] [i_14] [i_14] [i_14]))));
                arr_80 [i_0] [i_21] [i_21] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_53 [(signed char)6] [i_21 - 2] [i_21])) < (((/* implicit */int) var_9))));
                var_36 = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_14] [i_0]);
            }
            var_37 = ((/* implicit */long long int) ((arr_79 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_42 [i_0])) : (((/* implicit */int) var_7))));
            arr_81 [i_0] [(signed char)5] = ((/* implicit */int) ((17470445906624977820ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58)))));
        }
        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        var_39 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) != (((/* implicit */int) var_5)))))) : (((unsigned int) arr_54 [i_0] [i_0] [i_0])));
    }
    var_40 &= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)19)), (635048760)));
    var_41 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) <= (var_4))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_2))))) ? ((-(var_4))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4)))))));
}
