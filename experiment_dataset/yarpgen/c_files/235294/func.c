/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235294
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((short) arr_0 [i_0] [i_0]));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_1 [i_0]))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) arr_1 [6U])) ? (((/* implicit */unsigned long long int) ((arr_4 [i_1 - 1] [i_1 - 1]) / (arr_4 [i_1 + 3] [i_1 + 1])))) : (((((((/* implicit */_Bool) arr_0 [i_1] [i_1 - 1])) ? (arr_5 [i_1 + 3] [i_1 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1]))))));
        var_18 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 1])) - (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 1])))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_2])))))));
        var_20 -= ((/* implicit */int) ((arr_7 [i_2] [i_2]) - (arr_7 [i_2] [i_2])));
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 2; i_4 < 16; i_4 += 3) 
        {
            var_21 = ((/* implicit */short) (-(arr_9 [i_3] [i_3])));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3] [(_Bool)1])) ? (((((((/* implicit */_Bool) arr_11 [i_4] [(short)13])) ? (arr_7 [i_4 - 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_4 - 2]))))) | (arr_0 [i_4] [i_4 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_8 [i_3] [i_3]) ? (((/* implicit */int) arr_12 [i_4 + 1])) : (((/* implicit */int) arr_1 [i_4])))))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_6 = 2; i_6 < 16; i_6 += 1) 
            {
                var_23 *= ((/* implicit */unsigned int) arr_11 [i_5] [i_5]);
                /* LoopSeq 2 */
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
                    var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(arr_16 [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_6 - 2])))) + (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_6] [(short)10] [i_6])) != (((/* implicit */int) var_4))))), (min((var_6), (((/* implicit */unsigned long long int) arr_12 [i_5]))))))));
                }
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
                {
                    var_26 *= ((/* implicit */signed char) max((((((/* implicit */int) arr_20 [i_3] [i_5] [10U])) & ((-(((/* implicit */int) arr_17 [i_3] [i_6 - 1] [i_6] [(_Bool)1])))))), (((/* implicit */int) ((((/* implicit */int) arr_12 [i_8])) < (((/* implicit */int) arr_15 [i_3] [i_3] [(short)8])))))));
                    var_27 |= ((/* implicit */unsigned long long int) ((unsigned char) ((arr_15 [i_3] [14] [(_Bool)1]) || (((/* implicit */_Bool) var_11)))));
                    var_28 = ((/* implicit */unsigned long long int) arr_20 [i_3] [i_6 - 1] [0U]);
                    var_29 = ((/* implicit */signed char) ((unsigned long long int) var_1));
                }
                arr_21 [i_6] [i_6] [16ULL] = var_4;
            }
            for (short i_9 = 2; i_9 < 16; i_9 += 4) 
            {
                /* LoopSeq 4 */
                for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    arr_29 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) arr_24 [i_9] [i_10]);
                    var_30 = ((/* implicit */long long int) arr_1 [i_10]);
                }
                for (short i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    var_31 = ((/* implicit */unsigned int) ((((arr_7 [i_11] [i_5]) - (arr_7 [i_3] [16U]))) - (((/* implicit */unsigned long long int) ((unsigned int) ((short) arr_28 [i_3] [i_9 - 1] [i_11]))))));
                    var_32 = max((((unsigned int) max((arr_9 [i_5] [i_9]), (((/* implicit */unsigned int) var_4))))), (((/* implicit */unsigned int) var_13)));
                    var_33 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) var_5))))), ((((!(((/* implicit */_Bool) arr_2 [i_3] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_9] [14ULL] [i_3] [i_9]))) : (var_7)))));
                    arr_32 [i_3] [(unsigned char)4] [i_9 + 1] [i_9 + 1] [i_11] = ((/* implicit */int) arr_25 [i_3] [i_3]);
                }
                for (long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                {
                    var_34 = ((/* implicit */short) ((int) (-(arr_0 [i_9 - 1] [i_9]))));
                    arr_36 [i_3] = min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)98)));
                }
                for (unsigned char i_13 = 2; i_13 < 15; i_13 += 2) 
                {
                    arr_39 [i_13 + 2] [i_5] [i_3] &= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_9] [(_Bool)1] [i_13 + 2] [i_13 + 2] [i_13])))))));
                    arr_40 [i_5] = ((/* implicit */unsigned long long int) (~(arr_26 [i_3] [i_3] [i_9 - 2] [i_13])));
                }
                arr_41 [i_3] [i_5] = ((/* implicit */unsigned char) ((((long long int) var_7)) / (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_3])) * (((/* implicit */int) arr_8 [i_3] [(short)16])))))));
            }
            for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (int i_15 = 3; i_15 < 13; i_15 += 3) 
                {
                    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 2) 
                    {
                        {
                            var_35 -= ((/* implicit */short) min((arr_13 [i_16]), (((/* implicit */long long int) ((((/* implicit */int) arr_48 [(unsigned char)10] [i_15 + 1] [i_16] [i_15 + 4] [(short)14])) & (((/* implicit */int) arr_48 [i_3] [i_15 + 2] [i_14] [i_15 - 2] [i_16])))))));
                            arr_50 [i_3] [i_3] [(signed char)11] [i_3] [i_15] [i_3] = ((/* implicit */short) ((unsigned int) ((signed char) arr_8 [i_15 - 1] [i_14])));
                            var_36 = ((/* implicit */unsigned int) min((var_36), (arr_9 [i_15 + 3] [i_15 - 3])));
                        }
                    } 
                } 
                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_15 [i_3] [i_5] [i_14]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            }
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                arr_54 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) - (((/* implicit */int) min((((/* implicit */signed char) arr_8 [i_5] [i_5])), ((signed char)48))))));
                var_38 = ((/* implicit */unsigned int) max(((((~(arr_14 [i_3] [i_3] [i_3]))) | (arr_7 [i_17] [i_17]))), (((/* implicit */unsigned long long int) var_13))));
                var_39 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_0)), (min((arr_16 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) arr_52 [i_5]))))))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
            {
                var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_9 [i_3] [i_5])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (arr_44 [i_3] [i_5] [i_18])));
                var_41 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_19 [6ULL] [i_18] [8ULL] [i_18] [i_18] [(_Bool)1])) ? (arr_28 [i_18] [i_5] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_5] [i_5] [i_18]))))));
                arr_58 [14] [14] [14] [i_18] = min(((~(arr_57 [(signed char)16] [i_3] [i_5] [i_18]))), (((/* implicit */unsigned int) arr_27 [i_3])));
                var_42 = ((/* implicit */int) max((var_42), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (arr_7 [i_3] [i_5])))) ? (((/* implicit */int) arr_15 [i_18] [i_5] [2U])) : (((/* implicit */int) var_5))))));
            }
            arr_59 [i_3] = ((/* implicit */short) arr_57 [i_3] [i_3] [(unsigned char)12] [(unsigned char)12]);
            arr_60 [i_3] [11U] = (-(((((/* implicit */_Bool) var_12)) ? (arr_44 [i_3] [i_5] [i_5]) : (arr_44 [i_5] [i_5] [i_3]))));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 17; i_19 += 4) 
            {
                for (short i_20 = 0; i_20 < 17; i_20 += 1) 
                {
                    {
                        var_43 = ((/* implicit */unsigned char) (((~(arr_55 [i_3] [(unsigned short)9] [i_19] [(signed char)4]))) ^ (arr_55 [i_19] [i_5] [i_5] [i_20])));
                        var_44 ^= (-(((/* implicit */int) max((((/* implicit */short) (signed char)56)), ((short)10015)))));
                        var_45 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
                        arr_67 [i_19] [i_19] [8U] [8U] [i_19] [i_19] &= ((/* implicit */unsigned char) min(((+(arr_62 [i_3] [i_3] [i_3] [15]))), ((((-(((/* implicit */int) var_8)))) / (((/* implicit */int) arr_47 [i_19] [i_20]))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned char i_21 = 3; i_21 < 15; i_21 += 3) 
        {
            for (short i_22 = 1; i_22 < 13; i_22 += 3) 
            {
                for (short i_23 = 0; i_23 < 17; i_23 += 3) 
                {
                    {
                        var_46 = ((/* implicit */long long int) (-(max(((-(arr_38 [i_23]))), (((/* implicit */unsigned long long int) arr_13 [i_22]))))));
                        arr_75 [i_3] [i_21] [i_22] [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned long long int) var_2))))) ? (arr_62 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */int) var_11))))));
                    }
                } 
            } 
        } 
        var_47 = ((/* implicit */signed char) var_14);
    }
    var_48 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_0))));
}
