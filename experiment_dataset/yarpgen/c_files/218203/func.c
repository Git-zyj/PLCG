/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218203
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 - 1] = arr_0 [(signed char)12] [i_0];
        arr_3 [i_0 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])))) ? (min((((/* implicit */long long int) var_5)), (arr_1 [i_0 + 1]))) : (min((((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 + 1])), (arr_1 [i_0 + 1])))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [7] [7])) << (((/* implicit */int) arr_4 [i_1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [6U]))) + (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (arr_1 [i_1])))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) <= (var_7)))))))));
        var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) arr_1 [i_1]))));
        var_11 = ((/* implicit */unsigned long long int) (~(((int) arr_1 [i_1]))));
        var_12 &= ((/* implicit */long long int) min((((((/* implicit */int) arr_5 [i_1] [i_1])) | (((int) arr_0 [i_1] [i_1])))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (short)521))))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_13 += ((/* implicit */short) min((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_8 [i_2]))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))), (arr_8 [i_2])));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_14 = ((/* implicit */signed char) arr_10 [i_2] [i_2]);
            arr_12 [8] [i_3] = ((/* implicit */signed char) var_3);
            var_15 += ((/* implicit */unsigned short) arr_0 [i_2] [(short)5]);
            arr_13 [i_3] = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_2] [i_2] [i_3])), (arr_8 [i_2])))) ? (min((arr_1 [7]), (((8510243948156806034LL) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))));
            var_16 -= ((/* implicit */unsigned char) (signed char)125);
        }
    }
    /* LoopSeq 4 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            var_17 = ((/* implicit */short) (+(((/* implicit */int) arr_15 [i_4 - 1]))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_17 [i_4] [i_4] [14U])))) ? (((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) arr_14 [(unsigned short)11])) : (((/* implicit */int) var_6)))) : ((-(((/* implicit */int) (unsigned char)78))))));
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned char)3])))))) ? (((/* implicit */int) arr_15 [19U])) : (((/* implicit */int) arr_15 [i_4 - 1])))))));
        }
        for (signed char i_6 = 3; i_6 < 20; i_6 += 4) 
        {
            var_20 |= ((((/* implicit */_Bool) var_1)) ? ((((+(((/* implicit */int) arr_19 [i_4] [i_6] [i_6])))) >> (((arr_20 [i_6 + 1] [i_4 - 1]) + (1991419155))))) : (((((/* implicit */_Bool) arr_15 [i_6 - 1])) ? (arr_20 [i_4] [i_6]) : ((~(((/* implicit */int) (short)5364)))))));
            var_21 = ((/* implicit */short) arr_20 [i_4] [i_6]);
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4] [11U] [(unsigned char)7])) ? (((/* implicit */int) arr_15 [(unsigned char)8])) : (((/* implicit */int) arr_19 [i_4] [i_6 - 2] [(_Bool)1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_15 [i_4])), (arr_16 [i_4 - 1] [i_4 - 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4 - 1]))))))) : (arr_16 [20] [i_6]))))));
        }
        arr_21 [i_4 - 1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_14 [i_4 - 1])), (var_1)))) != (((((/* implicit */unsigned long long int) arr_20 [i_4 - 1] [i_4 - 1])) | (((arr_17 [i_4] [i_4] [i_4]) ^ (var_3)))))));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_23 += ((/* implicit */unsigned short) arr_24 [(unsigned char)2]);
        arr_26 [i_7] [i_7 - 1] = arr_20 [(unsigned char)14] [i_7 - 1];
    }
    /* vectorizable */
    for (unsigned short i_8 = 2; i_8 < 23; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_8 + 2])) ? (((/* implicit */int) arr_27 [i_8 + 2])) : (((/* implicit */int) arr_27 [i_8 - 2]))));
            var_25 = ((/* implicit */short) arr_27 [i_8 + 1]);
            var_26 |= ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8]))) / (((((/* implicit */_Bool) arr_31 [(unsigned char)20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [(unsigned char)7]))) : (arr_31 [(short)24]))));
        }
        var_27 = ((/* implicit */int) var_6);
        arr_32 [i_8] [i_8] = ((/* implicit */long long int) var_9);
    }
    for (short i_10 = 3; i_10 < 9; i_10 += 2) 
    {
        arr_36 [i_10] [i_10] = ((/* implicit */long long int) (unsigned char)70);
        var_28 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_10] [i_10 - 2] [2ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_17 [i_10 - 3] [i_10 - 3] [i_10]))));
        arr_37 [i_10] [i_10] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)166)), (((((/* implicit */_Bool) arr_27 [i_10])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_23 [i_10] [i_10]))))))), (var_3)));
        var_29 = ((/* implicit */short) min((((((17995992299997009563ULL) == (((/* implicit */unsigned long long int) arr_7 [i_10])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_10] [i_10]))) : (arr_24 [i_10])))) : (((((/* implicit */_Bool) var_1)) ? (arr_17 [i_10] [i_10] [2]) : (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) arr_30 [i_10]))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            arr_40 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_31 [i_10])))) ? (((arr_31 [i_10]) & (arr_31 [i_10]))) : (min((arr_31 [i_10]), (arr_31 [i_10])))));
            arr_41 [i_10] = ((/* implicit */_Bool) arr_30 [i_10]);
            var_30 = arr_39 [i_11];
        }
    }
    var_31 = ((/* implicit */unsigned int) max((var_31), (var_8)));
    var_32 = ((/* implicit */long long int) var_8);
}
