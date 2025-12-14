/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25887
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0])))) : ((+(((/* implicit */int) var_4))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
        {
            arr_6 [7] = ((var_6) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) != (((/* implicit */int) (short)-26927)))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                var_10 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [2U] [i_1] [i_0])) ? (arr_7 [0] [i_0] [i_0]) : (arr_1 [i_1])))) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) -9168766369516415783LL)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0])))))));
                /* LoopSeq 4 */
                for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */unsigned long long int) -1179796241)) : (arr_4 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [8] [i_1] [i_2] [(unsigned char)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_1 [i_2]))))));
                    var_12 = ((/* implicit */unsigned long long int) ((var_6) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_3] [i_2])) : (((/* implicit */int) var_7)))) : ((-(((/* implicit */int) arr_3 [8U] [2ULL]))))));
                    arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) var_6);
                    arr_14 [2U] [i_3] [i_2] [i_2] [i_1] [6ULL] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) >= (var_9)))) / ((~(((/* implicit */int) var_7))))));
                }
                for (long long int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                {
                    var_13 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) 6754350688310673435LL)) >= (arr_15 [i_0] [i_1] [i_2] [i_2])));
                    arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_1] [(unsigned char)8] [i_4]))));
                }
                for (long long int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                {
                    var_14 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
                    arr_21 [(short)3] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((arr_12 [i_1] [i_2] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (unsigned char)221)) : ((~(((/* implicit */int) var_4)))));
                    arr_22 [i_5] [5] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_5]))));
                }
                for (long long int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                {
                    arr_25 [i_0] [i_1] [(short)0] [i_6] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6] [i_1]))) : (arr_9 [i_0] [9ULL] [5LL] [5LL])))));
                    var_15 = ((/* implicit */int) var_9);
                    var_16 += ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)255)))) | ((~(((/* implicit */int) (short)7816))))));
                }
            }
            for (short i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                arr_28 [i_7] [i_7] [i_7] [i_7] = ((arr_12 [4LL] [i_0] [i_0]) / (((/* implicit */long long int) (+(2503234669U)))));
                arr_29 [i_0] [i_7] [i_7] = (~(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])));
                /* LoopSeq 3 */
                for (signed char i_8 = 1; i_8 < 8; i_8 += 3) 
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_20 [i_0] [i_7] [(unsigned char)2] [i_0]))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_9 [i_1] [i_1] [i_8 + 1] [i_7]) : (arr_9 [i_0] [i_1] [i_8 + 2] [i_0])));
                    arr_32 [i_0] [i_8 + 2] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32762))));
                }
                for (short i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_31 [i_0] [i_1] [(signed char)8] [4U] [i_9]))))) / (((var_3) * (arr_15 [i_0] [i_0] [0] [i_9]))))))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [(unsigned short)4] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [i_7] [i_1])) : (var_9))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) == (var_0)));
                    arr_35 [i_7] [i_1] [i_7] [i_9] = ((/* implicit */unsigned int) ((long long int) var_0));
                }
                for (short i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                {
                    arr_39 [i_7] = ((/* implicit */signed char) var_5);
                    arr_40 [i_0] [i_1] [i_7] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)130))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) & (((/* implicit */unsigned int) var_0))))) ? ((~(25ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                }
            }
            arr_41 [i_0] [i_1] [6U] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)32512)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31228)))))));
        }
        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_12 = 4; i_12 < 8; i_12 += 3) 
            {
                arr_48 [i_11] [(_Bool)1] [i_12] [i_12] = ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_11] [i_0])) ? ((-(((/* implicit */int) var_6)))) : (var_0));
                arr_49 [i_11] [6U] = ((/* implicit */long long int) (~(((var_0) + (((/* implicit */int) arr_20 [i_0] [i_12] [i_12] [(_Bool)1]))))));
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (arr_7 [i_12 + 1] [i_12 - 4] [i_11]) : (arr_7 [i_12 - 1] [i_12 + 1] [i_0]))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_2))));
                var_25 ^= ((((/* implicit */_Bool) (unsigned char)87)) || (arr_42 [i_0] [i_11] [i_13]));
            }
            arr_52 [i_11] = ((/* implicit */unsigned int) (~((~(var_0)))));
            arr_53 [i_0] [i_11] [i_0] = ((/* implicit */signed char) var_7);
        }
        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) arr_24 [i_14] [i_0] [i_0] [i_0] [i_0]);
            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
            /* LoopSeq 1 */
            for (short i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                var_28 = ((/* implicit */unsigned long long int) (((~(var_5))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [i_14] [i_14] [5])) >= (var_9)))))));
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (var_9)));
            }
            var_30 = ((/* implicit */unsigned short) ((short) arr_47 [i_0] [i_14]));
        }
    }
    for (long long int i_16 = 0; i_16 < 16; i_16 += 1) 
    {
        arr_60 [i_16] [i_16] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(var_2)))) ? (arr_59 [i_16]) : (((((/* implicit */_Bool) arr_58 [i_16] [i_16])) ? (arr_59 [i_16]) : (var_3))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_16]))))))));
        var_31 = ((/* implicit */unsigned long long int) max(((((!(((/* implicit */_Bool) arr_58 [(signed char)13] [i_16])))) || (((/* implicit */_Bool) var_9)))), (((_Bool) arr_59 [i_16]))));
    }
    var_32 = max((((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (var_5))), (var_5)))), (((min((var_3), (((/* implicit */unsigned long long int) var_0)))) >> (((max((var_9), (((/* implicit */unsigned long long int) -1)))) - (18446744073709551561ULL))))));
}
