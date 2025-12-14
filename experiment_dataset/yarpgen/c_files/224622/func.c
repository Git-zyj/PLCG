/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224622
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
    var_14 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((var_12) ? (var_10) : (((/* implicit */unsigned long long int) -281474976710656LL))))) ? (var_11) : (((/* implicit */unsigned long long int) var_3))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [12LL] [i_0] [i_3] = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_6 [i_0 - 1] [i_0 - 1] [i_2 + 1])), (arr_1 [i_0] [i_1]))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_2])))) ? (((((/* implicit */int) (unsigned char)33)) % (((/* implicit */int) (unsigned char)28)))) : (((/* implicit */int) (unsigned char)113)))))));
                        var_15 = (!(((/* implicit */_Bool) (+(arr_0 [i_0 - 1])))));
                        arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (((-(0U))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)69))))))))));
                        var_16 ^= (-(((/* implicit */int) arr_7 [i_0])));
                        var_17 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) arr_6 [i_3] [i_1] [i_0]))))) : (min((((/* implicit */unsigned long long int) arr_2 [i_3])), (var_11)))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_6)))) : (max((var_11), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [(unsigned char)18] [i_0])))))));
        arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 1]))))) == ((~(var_10)))));
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)10)) / (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_4 = 2; i_4 < 11; i_4 += 2) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned short) (-(7451095194553056768LL)));
        arr_17 [2ULL] = ((/* implicit */unsigned long long int) arr_8 [i_4] [i_4 + 1] [i_4]);
    }
    for (long long int i_5 = 1; i_5 < 18; i_5 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_18 [i_5 - 1] [i_5 - 1]), (arr_18 [i_5 + 1] [i_5]))))));
        arr_21 [i_5] = ((/* implicit */long long int) (-(1706821561)));
    }
    for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_7 = 2; i_7 < 13; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        var_20 -= ((/* implicit */_Bool) (~(var_10)));
                        arr_32 [i_6] [(unsigned char)3] [i_7 + 1] [(unsigned short)7] [12LL] [i_9] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_9])))) != ((~(((/* implicit */int) var_9))))))) << (((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148))) & (arr_1 [i_8] [i_9])))) ? (((((/* implicit */_Bool) var_2)) ? (arr_23 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7 + 1] [i_7] [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) - (4770911267005947294LL)))));
                        var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (6783367598858587810LL) : (((/* implicit */long long int) arr_31 [13U] [i_8] [13U] [i_9] [(_Bool)0]))))))) && (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_25 [i_6])), (var_9))))))));
                        var_22 = ((/* implicit */unsigned char) (-(min((var_10), (arr_30 [i_7 + 1] [i_7] [i_7 - 2] [i_7 + 1])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_10 = 4; i_10 < 12; i_10 += 4) 
        {
            arr_36 [i_6] [i_6] [i_10] = ((/* implicit */unsigned long long int) (~(-6173182577968979048LL)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) arr_6 [i_6] [i_12] [i_11]);
                    var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)31)) ? (arr_38 [i_10 + 2] [i_12 - 1] [i_12 - 1]) : (arr_38 [i_10 - 2] [i_12 - 1] [i_12 - 1])));
                    var_25 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_25 [i_12])) - (((/* implicit */int) arr_33 [i_6]))))));
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_4 [i_12]))))));
                        arr_44 [i_6] [i_10] [i_10] [i_6] [i_12] = ((/* implicit */unsigned char) (~(arr_22 [i_6] [i_6])));
                        arr_45 [i_13] [i_12] [(signed char)4] [i_12] [(signed char)4] = (!(((/* implicit */_Bool) arr_20 [i_10 + 1] [i_10 + 1])));
                        var_27 = ((/* implicit */unsigned char) (~(arr_27 [i_12 - 1] [i_10 - 3] [i_11] [12ULL])));
                    }
                    for (short i_14 = 3; i_14 < 12; i_14 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_42 [i_6] [i_12] [i_12]))));
                        var_29 = ((/* implicit */long long int) max((var_29), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_10 - 2] [i_12 - 1] [i_14]))) : (var_3)))));
                    }
                }
                arr_48 [11ULL] [11ULL] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_10 - 3] [i_11] [i_10 - 4])) - (((/* implicit */int) arr_42 [i_10 - 3] [i_6] [i_10 - 2]))));
            }
            for (unsigned int i_15 = 3; i_15 < 13; i_15 += 2) 
            {
                arr_52 [i_6] [i_6] [i_6] [(short)12] = ((/* implicit */_Bool) (~(1216294649570001940ULL)));
                var_30 = ((/* implicit */unsigned short) ((1989172620672653263LL) > (((/* implicit */long long int) var_6))));
                arr_53 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_5 [(unsigned char)14] [i_10] [(_Bool)1] [i_15]);
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    for (unsigned long long int i_17 = 4; i_17 < 11; i_17 += 4) 
                    {
                        {
                            var_31 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_4)))))) & (arr_49 [i_10 + 1] [i_15 - 2])))) ? (((/* implicit */unsigned long long int) arr_56 [(unsigned char)0] [i_10 - 4] [i_10 - 4] [i_10 - 4] [i_10 - 1] [i_10])) : (max((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) arr_33 [i_10])))));
                            var_32 = ((/* implicit */unsigned short) -3650858912160888899LL);
                        }
                    } 
                } 
            }
        }
        for (long long int i_18 = 2; i_18 < 13; i_18 += 1) 
        {
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */_Bool) (+(arr_38 [i_18 - 2] [i_18 + 1] [i_18 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_2 [i_6]))))) : (var_11)))));
            arr_60 [i_6] [i_18] = ((/* implicit */_Bool) (-(((/* implicit */int) max(((signed char)123), (((/* implicit */signed char) arr_50 [i_6])))))));
            arr_61 [i_18] [i_18] = ((/* implicit */long long int) arr_30 [i_6] [i_6] [i_18] [i_18]);
        }
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_4)))))));
    }
    var_35 = ((/* implicit */unsigned char) var_10);
}
