/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50001
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (3830005822661844850LL) : (3830005822661844850LL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((long long int) ((unsigned int) ((arr_0 [(signed char)18] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))));
        arr_6 [(unsigned char)0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1])) != (((/* implicit */int) ((short) arr_4 [i_1])))));
        arr_7 [(signed char)15] [19U] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (var_7))), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) * (3830005822661844830LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            arr_14 [i_2] [i_3] = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_3] [i_3]));
            var_20 = ((/* implicit */unsigned long long int) ((short) var_1));
        }
        for (long long int i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) var_6)) : (arr_16 [i_2] [i_4]))))));
            arr_17 [i_2] [i_4] [(unsigned char)12] = ((/* implicit */_Bool) var_11);
            arr_18 [i_4] |= ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) var_12)))));
        }
        arr_19 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3830005822661844845LL)) ? (6202377121648473924LL) : ((((_Bool)1) ? (3830005822661844837LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)86)))))));
        arr_20 [i_2] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) arr_4 [i_2])) : (655653311)))) : (((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))) : (var_7)))));
    }
    /* LoopSeq 3 */
    for (signed char i_5 = 1; i_5 < 12; i_5 += 4) 
    {
        var_22 -= ((/* implicit */_Bool) var_2);
        arr_23 [i_5] = ((/* implicit */long long int) var_8);
        /* LoopSeq 1 */
        for (long long int i_6 = 2; i_6 < 12; i_6 += 3) 
        {
            arr_26 [i_6] = ((/* implicit */long long int) var_2);
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    {
                        var_23 ^= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_1 [i_6 - 2])) ? (((arr_12 [i_5] [i_6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8] [i_7] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8] [i_8] [4LL] [i_8]))))));
                        arr_31 [i_5] [4LL] [i_5] [i_6] [i_5 + 1] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) var_6))))) % (((arr_28 [i_6 + 1] [i_6] [i_5 + 1]) / (var_10)))));
                        var_24 = ((/* implicit */_Bool) var_2);
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_10 = 3; i_10 < 11; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        {
                            arr_43 [i_11] = ((/* implicit */int) ((((arr_37 [i_10 - 2] [i_10] [i_5]) / (arr_37 [i_10 - 2] [i_10] [(signed char)0]))) != (max((((/* implicit */unsigned long long int) arr_39 [1LL] [i_10 - 2] [i_10 - 1] [i_9])), (arr_37 [i_10 - 2] [i_9] [i_5])))));
                            var_25 *= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_30 [i_5 + 1] [i_11] [i_11] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_30 [i_5 + 1] [i_9] [i_12] [i_12] [i_12] [(signed char)7])))));
                        }
                    } 
                } 
            } 
            arr_44 [i_5 + 1] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? ((-(max((var_7), (arr_11 [i_5 + 1] [i_5]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_30 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1])), (var_2))))));
        }
    }
    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 2) 
    {
        arr_48 [i_13] = ((unsigned char) (!(((/* implicit */_Bool) var_4))));
        arr_49 [i_13] [i_13] = ((/* implicit */signed char) var_15);
    }
    for (signed char i_14 = 0; i_14 < 23; i_14 += 2) 
    {
        var_26 = ((/* implicit */long long int) max((var_26), (((((((/* implicit */_Bool) ((unsigned char) arr_50 [i_14] [i_14]))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_5))))) % (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_14] [i_14])))))));
        var_27 ^= (~(((/* implicit */int) (_Bool)1)));
        var_28 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */signed char) arr_51 [i_14] [i_14])))))) % (((((/* implicit */unsigned long long int) ((var_2) % (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_14] [i_14])))))) % (((((/* implicit */_Bool) -655653325)) ? (16046873047032341368ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))))));
        arr_52 [i_14] = ((/* implicit */unsigned char) ((arr_51 [i_14] [20LL]) ? (((/* implicit */int) min((arr_51 [i_14] [i_14]), (arr_51 [i_14] [i_14])))) : (((((/* implicit */_Bool) arr_50 [i_14] [i_14])) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) ((unsigned char) 13814801002406486806ULL)))))));
    }
}
