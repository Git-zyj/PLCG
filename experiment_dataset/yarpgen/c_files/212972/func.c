/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212972
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
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_0 [i_0])))))))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65521)) == (-1721933114)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64634))) : (14161340107024931582ULL)))))) && (((/* implicit */_Bool) ((unsigned char) arr_4 [i_0 - 1] [i_0 - 1])))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 4; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_11 [i_0 + 1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_5 [(unsigned short)20] [(unsigned short)20] [i_2]);
                        arr_12 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((_Bool) (unsigned short)28282))), (arr_9 [i_3 - 4] [i_2] [i_1] [i_0] [i_0 + 1])))) != (max((((/* implicit */long long int) arr_10 [i_2] [i_2] [i_2] [(unsigned char)14] [i_3 + 1])), (((arr_5 [(unsigned char)16] [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                        arr_13 [i_0] [i_1] [i_2] [10ULL] [(signed char)10] = ((int) 2147483647);
                        arr_14 [i_1] [i_2] [i_2] = ((/* implicit */signed char) max((min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)72)), ((unsigned char)156)))), (var_6))), (((/* implicit */unsigned short) ((arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1]) > (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            arr_17 [i_4] = ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [i_0 - 1] [i_0] [i_0] [0ULL]))) ? (((/* implicit */int) arr_10 [i_4] [i_0] [i_0 + 1] [i_4 + 3] [i_4])) : ((+(((/* implicit */int) (unsigned char)99)))));
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0 + 1] [i_0])) != (((/* implicit */int) (unsigned char)156)))))));
            /* LoopSeq 1 */
            for (long long int i_5 = 2; i_5 < 19; i_5 += 2) 
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 - 1])) / (((/* implicit */int) arr_0 [i_0 - 1]))));
                var_14 = ((/* implicit */_Bool) ((arr_5 [i_0 + 1] [i_4 - 1] [i_5 - 2]) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_6 [i_0 - 1] [i_4] [i_4] [i_0 - 1])) >= (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5] [i_5])))))));
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    arr_22 [i_0] [i_4] = ((arr_18 [i_4]) || (((/* implicit */_Bool) arr_10 [i_4] [i_4 + 1] [i_5 - 2] [i_6] [i_0 - 1])));
                    arr_23 [i_6] [i_4] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)99)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_9 [i_0] [i_4] [i_5 + 3] [i_6] [i_6]))) : (3077434196U)));
                    arr_24 [i_0] [i_4] [i_4] [i_5] [0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_6] [i_6])) ? (arr_5 [i_0 - 1] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_0] [i_0] [i_0] [i_4 + 3])))));
                    arr_25 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_18 [i_4])))))));
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_8 [i_4] [i_5] [(short)15] [i_7]))));
                        arr_29 [i_0] [i_4] [i_5] [i_4] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_27 [(signed char)12] [i_0 + 1] [(signed char)12] [i_6] [i_5] [i_0 + 1] [i_0 + 1])) ^ (((/* implicit */int) arr_27 [(signed char)16] [i_4] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_6] [i_7]))));
                    }
                    for (unsigned short i_8 = 3; i_8 < 21; i_8 += 1) 
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] [(unsigned short)18] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_4 + 3] [i_5 + 2])) & (arr_7 [i_0 + 1])));
                        arr_33 [12LL] [12LL] [12LL] [i_5] [i_8] &= ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_9 [i_8 - 2] [5U] [i_8 - 3] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_8 - 3]))) <= (11973283416151428567ULL))))));
                    }
                }
            }
            arr_34 [i_0] [i_0 + 1] [i_4] = ((/* implicit */unsigned char) ((arr_18 [i_4]) && (arr_18 [i_4])));
        }
        for (unsigned short i_9 = 2; i_9 < 21; i_9 += 1) 
        {
            var_16 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0 + 1] [11ULL] [i_0] [19ULL])) ? (((/* implicit */int) arr_26 [i_0 + 1] [(unsigned short)16] [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (arr_31 [i_0] [i_0]))))))) - (((((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_20 [i_0 + 1] [i_9] [i_0 + 1] [(unsigned short)4] [(_Bool)1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)100))))))))));
            var_17 -= ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_36 [i_9 + 1] [i_9]))))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((2084447353U), (((/* implicit */unsigned int) max((((((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_9] [i_0 + 1])) + (((/* implicit */int) arr_15 [i_9])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)99)) || (((/* implicit */_Bool) -1LL)))))))))))));
        }
    }
    for (int i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        arr_40 [(_Bool)0] [4LL] &= ((/* implicit */_Bool) ((max((arr_30 [i_10] [i_10] [i_10] [i_10] [(short)4]), (arr_30 [i_10] [i_10] [i_10] [i_10] [i_10]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((arr_30 [i_10] [i_10] [(signed char)1] [i_10] [i_10]) != (arr_30 [i_10] [i_10] [i_10] [i_10] [i_10])))))));
        var_19 = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) arr_26 [i_10] [i_10] [i_10] [i_10] [i_10])))));
        /* LoopSeq 3 */
        for (unsigned long long int i_11 = 1; i_11 < 8; i_11 += 4) 
        {
            arr_45 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_10] [8LL])) ? (var_9) : (min((((((/* implicit */_Bool) arr_7 [i_11])) ? (var_4) : (((/* implicit */unsigned int) 224108849)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1753144909)) && (((/* implicit */_Bool) (short)27597)))))))));
            /* LoopNest 2 */
            for (unsigned short i_12 = 1; i_12 < 11; i_12 += 3) 
            {
                for (int i_13 = 3; i_13 < 10; i_13 += 1) 
                {
                    {
                        arr_51 [i_10] [i_10] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_21 [i_10] [i_11 + 2] [i_12] [i_13]), (arr_21 [(unsigned char)9] [(_Bool)1] [11U] [11U])))) && ((!(((/* implicit */_Bool) arr_21 [i_10] [i_11 + 2] [i_12] [i_13 + 1]))))));
                        arr_52 [i_10] [i_10] [i_12] = ((/* implicit */_Bool) max((((/* implicit */int) arr_42 [i_10])), (max((((((/* implicit */int) (unsigned char)99)) ^ (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned char)223))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    {
                        var_20 *= ((/* implicit */signed char) ((((/* implicit */int) arr_10 [(unsigned char)2] [i_11] [i_11 + 2] [i_11] [i_11 + 4])) != (((/* implicit */int) ((((/* implicit */int) arr_10 [16] [16] [i_11 + 4] [i_11 - 1] [i_11 + 1])) < (((/* implicit */int) arr_26 [i_11 + 2] [(signed char)6] [i_11] [i_11 + 2] [i_14])))))));
                        arr_58 [i_10] [i_10] [i_11] [i_14] [i_14] [(unsigned char)8] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)146))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_16 = 1; i_16 < 9; i_16 += 1) 
        {
            arr_61 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((int) 9223372036854775807LL));
            arr_62 [i_10] [i_16 + 2] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_39 [i_10] [i_10])))));
            arr_63 [i_10] [i_16] [i_16] = ((/* implicit */long long int) (!(arr_56 [i_16 - 1] [i_16 + 3] [i_16 + 2] [i_16 + 3] [i_16 - 1] [i_16 + 2])));
            arr_64 [i_10] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)23715)))))));
        }
        for (unsigned short i_17 = 1; i_17 < 9; i_17 += 4) 
        {
            arr_69 [(unsigned short)8] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((max((arr_67 [i_17]), (((/* implicit */int) (unsigned char)158)))) * (((/* implicit */int) (_Bool)0))))) - ((~(((((/* implicit */long long int) ((/* implicit */int) var_6))) / (2426998809649063216LL)))))));
            arr_70 [i_10] [i_17 + 3] = ((/* implicit */unsigned int) 8515347470683751196ULL);
            arr_71 [i_10] [i_17] [i_10] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)0)), (var_2))))))));
            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_6 [i_10] [i_10] [i_10] [i_17 + 2])) ? (((/* implicit */int) arr_50 [(unsigned short)0] [i_17] [i_17 + 1] [i_17])) : (arr_59 [i_17] [i_10])))))) ? (arr_44 [i_10] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (short)28752)))));
        }
    }
    for (long long int i_18 = 4; i_18 < 15; i_18 += 1) 
    {
        arr_75 [i_18] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_18] [i_18])) ? (var_9) : (arr_9 [i_18] [i_18] [i_18] [i_18] [i_18 - 3])))))) ? (((/* implicit */long long int) min((min((arr_28 [i_18] [i_18] [i_18] [(short)19] [i_18] [i_18]), (((/* implicit */int) arr_73 [i_18] [i_18])))), (((/* implicit */int) ((((/* implicit */int) arr_26 [i_18] [i_18] [i_18] [i_18] [i_18])) < (((/* implicit */int) arr_2 [i_18])))))))) : (max((arr_5 [i_18 + 1] [i_18] [i_18 - 1]), (((/* implicit */long long int) (short)-26737))))));
        arr_76 [i_18] [i_18] = (~(((((((/* implicit */_Bool) (unsigned char)8)) ? (arr_21 [i_18] [i_18] [0] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_18]))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_18] [i_18 + 1]))))));
    }
    var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13371882808810741019ULL)) ? (((/* implicit */int) (short)26736)) : (((/* implicit */int) (short)26748))))) ? (var_9) : (((/* implicit */unsigned int) var_3))))) : ((~(((((/* implicit */long long int) var_1)) / (-3218865306019247552LL)))))));
    var_23 |= ((/* implicit */unsigned long long int) var_4);
    var_24 = ((/* implicit */long long int) var_6);
}
