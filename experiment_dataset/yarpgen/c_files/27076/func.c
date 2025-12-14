/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27076
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_7))));
        arr_3 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (min((var_11), (((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */long long int) min((max((((/* implicit */int) arr_2 [i_0])), (arr_1 [i_0] [i_0]))), (((/* implicit */int) var_14))))) : (((min((arr_2 [i_0]), (arr_2 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((var_2) + (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1] [i_1])) % (((/* implicit */int) arr_0 [(short)8] [i_1]))));
        var_17 = ((/* implicit */long long int) arr_2 [(unsigned short)0]);
    }
    for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) max((arr_1 [i_2] [i_2]), (((/* implicit */int) arr_6 [i_2]))));
        arr_8 [i_2] [0LL] = ((/* implicit */unsigned char) ((int) min((min((arr_0 [(signed char)7] [i_2]), (arr_0 [i_2] [i_2]))), (var_4))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 1; i_6 < 17; i_6 += 4) 
                    {
                        var_19 = arr_6 [i_2];
                        arr_19 [i_6] [i_5] [i_2] [i_2] [i_2] = arr_16 [i_2] [i_4];
                    }
                    arr_20 [i_2 - 1] [i_2 - 1] [i_2] [(signed char)5] [i_4] [i_5] = ((unsigned char) arr_12 [i_2] [i_2] [i_2] [i_2]);
                }
                for (unsigned char i_7 = 4; i_7 < 18; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_8 = 2; i_8 < 17; i_8 += 4) 
                    {
                        arr_27 [i_2] [(unsigned char)11] [(unsigned char)11] [i_7] [i_4] [i_2] [i_4] = var_6;
                        arr_28 [i_2] [i_2] [i_4] [(signed char)13] [17LL] [i_8 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) % (((/* implicit */int) arr_4 [i_4] [i_7 - 3])))) >> (((((/* implicit */int) ((unsigned char) 15861739611542476454ULL))) - (143)))));
                    }
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        var_20 = var_6;
                        var_21 = ((/* implicit */unsigned short) arr_31 [i_9] [i_7] [i_7 + 1] [i_4] [i_3 + 1] [i_2]);
                        var_22 = ((/* implicit */long long int) max((var_22), (var_10)));
                        arr_33 [i_7] [i_7] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1])) - (((/* implicit */int) arr_16 [i_2] [i_2])))) - (((/* implicit */int) arr_9 [i_2] [i_2]))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) arr_30 [i_2] [18LL] [18LL] [i_2] [i_2]);
                        arr_38 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_7 - 3] [i_2] [i_2] [i_4] = ((/* implicit */signed char) var_14);
                        arr_39 [i_10] [i_2] [i_2] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_10] [i_2] [(signed char)15] [i_3] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((short) (unsigned short)47181)))));
                        var_24 = ((/* implicit */long long int) arr_4 [i_2] [i_4]);
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((int) arr_18 [i_2 - 1] [i_3] [(unsigned short)4] [i_7 - 2] [i_10])) | (((/* implicit */int) ((short) arr_0 [i_2] [i_2]))))))));
                    }
                    arr_40 [i_2] [(unsigned char)7] [i_2] [i_7] = ((/* implicit */unsigned short) var_6);
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) arr_25 [i_2 - 1] [i_7]);
                        var_27 = ((/* implicit */unsigned char) arr_42 [i_2] [i_2] [i_2] [i_2]);
                    }
                    /* LoopSeq 1 */
                    for (int i_12 = 2; i_12 < 17; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_13))));
                        arr_46 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_2] [i_4] [i_2] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_16 [2LL] [i_3]))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_13 = 1; i_13 < 18; i_13 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) var_12);
                        arr_49 [i_2] [i_7] [i_2] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_10 [i_2]))) >> (((((/* implicit */int) ((unsigned char) arr_6 [i_2]))) - (136)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_10 [i_2]))) >> (((((((/* implicit */int) ((unsigned char) arr_6 [i_2]))) - (136))) + (139))))));
                    }
                    for (long long int i_14 = 3; i_14 < 18; i_14 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_2] [i_3] [i_3] [i_14 - 1])) ? (arr_11 [i_2]) : (((/* implicit */long long int) arr_48 [i_2] [i_2] [i_3 + 1] [i_4] [i_7] [i_7 - 3] [i_14]))));
                        var_31 = var_8;
                    }
                }
                for (unsigned char i_15 = 4; i_15 < 16; i_15 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        arr_58 [i_2] [i_15] [i_4] [i_3] [i_2] = ((/* implicit */signed char) var_11);
                        arr_59 [i_2] [i_4] [i_15] [(unsigned short)4] = var_14;
                        arr_60 [(unsigned char)14] [i_3 + 2] [(unsigned char)14] [i_2] = ((/* implicit */int) arr_43 [i_2] [i_3]);
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) arr_5 [(unsigned char)15] [(unsigned char)15]))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [i_2 + 1] [18] [i_2 + 1] [i_15 - 2] [i_2 + 1])) & (((/* implicit */int) var_1))));
                    }
                    var_34 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_14 [i_15] [8LL] [i_2] [i_2])) ? (arr_32 [i_2] [i_2]) : (arr_17 [i_2] [i_3 - 1] [i_2] [i_15] [(signed char)1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 2; i_17 < 17; i_17 += 4) 
                    {
                        var_35 = ((/* implicit */short) ((arr_42 [i_2] [i_3] [i_4] [i_15]) | (((/* implicit */int) arr_21 [i_17] [i_17] [i_15] [(unsigned char)12] [i_3] [i_2]))));
                        arr_63 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) var_5);
                        arr_64 [i_2 + 1] [i_2] [i_2] [(short)6] [i_2] [(short)6] = ((/* implicit */unsigned char) ((arr_5 [0] [10LL]) && (var_1)));
                    }
                }
                var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) arr_45 [i_4] [i_2 - 1] [(unsigned char)2] [i_3] [i_2 - 1] [i_2 - 1]))) * (arr_14 [i_4] [14ULL] [i_2 - 1] [i_2])));
                var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2 - 1] [i_2] [i_2])) ? (((/* implicit */int) arr_41 [(unsigned short)4] [i_4] [i_3] [i_2])) : (arr_44 [i_2] [i_2] [i_3 - 1] [i_3] [i_4])))) >= (var_10))))));
                /* LoopSeq 1 */
                for (unsigned short i_18 = 4; i_18 < 15; i_18 += 2) 
                {
                    arr_68 [i_3] [i_2] [i_18] = ((unsigned char) arr_25 [i_3] [i_2]);
                    arr_69 [i_3] [16] [i_2] = ((/* implicit */unsigned char) arr_66 [i_18] [i_4] [i_2] [i_2]);
                }
            }
            for (unsigned short i_19 = 3; i_19 < 17; i_19 += 3) 
            {
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_36 [i_2] [i_3] [7] [i_3] [(unsigned short)14] [7]), (arr_18 [i_2 - 1] [i_3] [i_3] [(unsigned char)3] [(unsigned short)18])))), (((((/* implicit */int) (unsigned char)247)) & (80356199)))))) | (arr_37 [i_19 + 1] [i_3 - 1] [i_3] [i_3] [i_2 + 1])));
                var_39 = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) & (arr_65 [i_2])))), (min((((/* implicit */unsigned long long int) var_10)), (arr_14 [i_2] [i_3] [i_2] [i_2]))))));
                /* LoopSeq 3 */
                for (unsigned short i_20 = 1; i_20 < 18; i_20 += 4) 
                {
                    var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_8)), (max(((unsigned short)5615), (((/* implicit */unsigned short) (unsigned char)62)))))))));
                    var_41 ^= ((/* implicit */int) ((arr_35 [i_2 - 1] [i_3] [i_3] [i_19] [i_20]) | (min((max((((/* implicit */long long int) arr_62 [i_2] [i_3] [i_19 + 1] [4LL])), (arr_65 [i_2]))), (((var_10) | (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_20] [4LL] [4LL] [i_2])))))))));
                    var_42 = var_0;
                }
                for (int i_21 = 0; i_21 < 19; i_21 += 4) 
                {
                    arr_80 [i_21] &= ((/* implicit */unsigned char) arr_15 [i_21] [i_21] [i_2] [i_3 - 1] [i_2]);
                    arr_81 [i_2] [13] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_4 [i_2] [i_2]), (((/* implicit */unsigned char) min((arr_74 [i_2] [i_3]), (arr_66 [(signed char)18] [10] [(unsigned char)7] [(signed char)18]))))))), (arr_61 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 + 1])));
                    var_43 = ((/* implicit */unsigned char) var_1);
                    arr_82 [i_2] [(unsigned char)16] [i_21] [i_21] |= ((/* implicit */_Bool) arr_32 [i_2] [i_21]);
                }
                for (unsigned short i_22 = 0; i_22 < 19; i_22 += 2) 
                {
                    arr_85 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_84 [i_2] [i_2] [(unsigned char)6] [i_22]))) : (var_2))), (((/* implicit */long long int) arr_13 [i_19 - 1] [(unsigned char)10] [i_2]))))) ? (((/* implicit */int) arr_72 [(short)16] [i_3 + 1] [i_19] [i_22])) : (((/* implicit */int) arr_74 [(unsigned char)10] [i_2])));
                    var_44 = ((/* implicit */short) min((min((((/* implicit */long long int) arr_22 [i_2] [i_2] [(unsigned char)0] [(unsigned char)6] [i_22])), (min((arr_11 [i_2]), (arr_25 [i_3] [i_19]))))), (((/* implicit */long long int) ((unsigned char) max((arr_57 [i_2]), (((/* implicit */long long int) var_7))))))));
                    var_45 = ((/* implicit */unsigned char) arr_48 [i_2] [i_22] [i_22] [i_19 + 2] [i_3 + 1] [i_2] [i_2]);
                }
            }
            for (unsigned char i_23 = 0; i_23 < 19; i_23 += 4) 
            {
                var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) min((((/* implicit */int) arr_72 [i_2] [i_3] [i_23] [i_23])), (arr_48 [i_23] [i_3] [i_3 + 2] [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3]))))));
                var_47 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */int) arr_66 [i_2] [i_2] [i_2] [i_2])), (max((var_11), (((/* implicit */int) arr_77 [3ULL] [i_2] [i_2] [i_2] [i_2])))))));
            }
            arr_89 [i_2] [i_3] = ((/* implicit */unsigned char) arr_42 [i_2] [i_2] [(_Bool)1] [i_2]);
            arr_90 [i_3 + 1] [i_2] [i_2] = ((/* implicit */signed char) min((((((/* implicit */int) max((var_8), (arr_73 [i_2] [i_2] [i_2] [i_2 - 1])))) ^ (((/* implicit */int) arr_74 [i_3] [i_3])))), (((/* implicit */int) arr_43 [i_2] [i_2]))));
        }
    }
    var_48 = ((/* implicit */unsigned char) var_2);
}
