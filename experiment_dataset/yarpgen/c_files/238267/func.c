/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238267
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
    var_20 = min((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)65521))), (var_19));
    var_21 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) ((var_18) == (((/* implicit */long long int) ((/* implicit */int) var_17)))))), (((8935141660703064064ULL) * (9511602413006487549ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((8935141660703064067ULL) >= (9511602413006487542ULL)))))));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (((-(max((8935141660703064079ULL), (10515440385772324159ULL))))) * (((((/* implicit */_Bool) ((9511602413006487537ULL) + (8935141660703064045ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((8935141660703064061ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_7))))))))));
    var_23 = var_12;
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_24 += ((/* implicit */unsigned long long int) ((2147483647) >> (((9511602413006487523ULL) - (9511602413006487507ULL)))));
        var_25 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) 8935141660703064071ULL))));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1])) & (((/* implicit */int) arr_2 [i_1]))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (+(((((((/* implicit */int) (short)-26106)) + (2147483647))) >> (((7931303687937227446ULL) - (7931303687937227444ULL))))))))));
                        var_29 = ((/* implicit */unsigned short) 8935141660703064064ULL);
                        var_30 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [13ULL] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_4]))) : (arr_14 [i_1] [i_2] [i_3] [i_4])));
                        var_31 = ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) arr_8 [(unsigned short)15] [i_1])))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_16)) * (arr_4 [i_3])))) ? (arr_11 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1])))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_1] [12ULL])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        var_34 = ((/* implicit */short) var_4);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_6))));
                            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) var_15))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (7931303687937227425ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))));
                            arr_31 [i_6] [i_5] [i_5] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) arr_2 [i_6 - 1])) : (((/* implicit */int) arr_26 [i_6] [i_6 - 1] [i_6] [i_6] [i_6 + 1] [0]))));
                            arr_32 [i_6] [i_9] [i_9] [6LL] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 7931303687937227456ULL)) ? (arr_10 [i_6]) : (arr_10 [i_6])));
                            var_38 = arr_25 [i_5];
                            var_39 = var_10;
                        }
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        arr_36 [i_5] [i_6] [i_6] [12LL] [i_5] = ((/* implicit */long long int) var_1);
                        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((arr_17 [i_5]) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [(short)8] [i_5] [(short)8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5] [i_10]))) : (var_16)))))))));
                        var_41 = ((/* implicit */signed char) (short)(-32767 - 1));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 2) /* same iter space */
                    {
                        var_42 = ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_11 + 3] [i_11] [i_6 - 1]))));
                        arr_40 [i_1] [(short)16] [i_6] [i_11] = (-(arr_27 [i_11 + 1] [i_11] [i_11] [i_11]));
                    }
                    for (unsigned long long int i_12 = 2; i_12 < 14; i_12 += 2) /* same iter space */
                    {
                        var_43 = ((/* implicit */long long int) (~(var_8)));
                        var_44 = 12514256574032229140ULL;
                        var_45 = ((/* implicit */unsigned char) arr_20 [i_1] [i_1] [8ULL] [i_6] [i_12]);
                        var_46 = ((/* implicit */short) arr_30 [15ULL] [15ULL] [15ULL] [i_5] [i_1]);
                    }
                    var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((9511602413006487541ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
                }
            } 
        } 
    }
    for (short i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
    {
        var_48 -= ((((/* implicit */_Bool) (-(min((9511602413006487527ULL), (((/* implicit */unsigned long long int) (short)16878))))))) ? (max((var_5), (((/* implicit */unsigned long long int) arr_45 [i_13])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4160749568U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
        var_49 = ((/* implicit */short) max((max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [2ULL]))) != (var_8)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_46 [i_13])) && (((/* implicit */_Bool) var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) arr_44 [3ULL] [i_13])))))) : (9223372036854775807LL))))));
        var_50 = (~(((((/* implicit */_Bool) 5932487499677322472ULL)) ? (min((var_5), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13]))))));
        arr_47 [i_13] &= max((arr_44 [(unsigned short)17] [(unsigned short)17]), (((/* implicit */long long int) (-(((/* implicit */int) (short)32745))))));
    }
    for (short i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
    {
        arr_50 [i_14] = ((/* implicit */unsigned short) var_5);
        arr_51 [(signed char)2] = ((/* implicit */int) ((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3079)))));
    }
}
