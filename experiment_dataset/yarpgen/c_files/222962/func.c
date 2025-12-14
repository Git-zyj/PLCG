/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222962
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_0] [i_0] [i_0] [2U] [2U] [15LL] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_2 [i_2 - 2] [i_3 - 2]))))));
                                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [6U] [i_3]))));
                                arr_15 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [i_1] [i_2 + 2] [i_2] [i_1])))) | ((~(arr_1 [i_0])))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    var_13 = ((/* implicit */short) (~(((/* implicit */int) arr_18 [i_0] [i_1] [i_5]))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            {
                                var_14 ^= ((/* implicit */signed char) ((int) arr_9 [i_5] [i_6] [14LL] [i_7 - 1] [i_7 - 1]));
                                arr_25 [i_7] [i_6] [i_0] [i_5] [i_0] [(short)0] [18ULL] &= ((/* implicit */unsigned long long int) (-(arr_8 [i_7 + 1] [i_1] [i_6] [(unsigned char)14])));
                                arr_26 [19] [19] [(short)17] [i_1] [(signed char)1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1] [i_7 + 1] [(short)12]))));
                                arr_27 [i_1] [i_1] = ((/* implicit */unsigned char) arr_17 [i_1]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) arr_16 [i_0] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                arr_34 [i_1] [i_5] [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_5])) ? (((/* implicit */int) arr_31 [(unsigned char)16] [11LL] [i_5] [i_8])) : (arr_8 [i_0] [i_1] [i_5] [i_9]))) : (((/* implicit */int) arr_21 [i_1] [1U] [i_8] [i_9]))));
                                arr_35 [(short)4] [(short)4] [i_8] [i_8] [i_9] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_9]))))) - (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_0] [12ULL])) < (((/* implicit */int) arr_13 [i_0] [i_1])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_13 = 2; i_13 < 20; i_13 += 3) 
                    {
                        arr_46 [i_10] [i_12] [i_12] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_37 [i_10]) != (((/* implicit */long long int) ((/* implicit */int) (short)-16722)))))) * (((/* implicit */int) arr_45 [i_10] [i_12] [i_12 - 1] [i_13]))));
                        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_44 [i_12 - 1] [i_13] [i_13 + 1] [i_10] [22LL])) * (((/* implicit */int) (!(arr_43 [i_10]))))));
                        var_17 += (~(34225520640ULL));
                    }
                    var_18 = ((short) ((((((/* implicit */int) (signed char)63)) != (((/* implicit */int) arr_42 [i_10] [i_10])))) ? (((/* implicit */int) min((((/* implicit */short) arr_43 [(signed char)5])), ((short)-16726)))) : (min((((/* implicit */int) arr_40 [i_12] [i_11])), (2147483647)))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_54 [i_12] [i_12] [i_12] [i_12] [i_14] [i_15])))) ^ ((~(((/* implicit */int) arr_50 [i_10] [i_11] [i_12] [i_14] [i_10]))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_54 [i_12] [i_12] [i_12 - 1] [i_12 - 1] [i_10] [i_12]))) ? ((+(((/* implicit */int) max((((/* implicit */unsigned char) arr_48 [i_12] [i_14] [i_12] [i_14])), ((unsigned char)127)))))) : ((~(((/* implicit */int) arr_40 [i_12 - 1] [i_12 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 1) 
    {
        for (signed char i_17 = 0; i_17 < 23; i_17 += 1) 
        {
            {
                arr_61 [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_50 [(unsigned char)11] [(unsigned char)11] [i_16] [12ULL] [i_17])) / (((/* implicit */int) (short)-17724)))))))) ^ (((/* implicit */int) ((((/* implicit */int) ((short) arr_56 [i_16]))) <= (((((/* implicit */_Bool) arr_41 [i_16] [i_16] [i_17] [(unsigned char)15])) ? (((/* implicit */int) arr_41 [i_16] [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_44 [i_16] [7ULL] [i_16] [i_16] [i_16])))))))));
                arr_62 [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_17] [i_16])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32756))))) : (((/* implicit */int) max((arr_44 [i_16] [i_17] [i_17] [i_16] [i_17]), (((/* implicit */unsigned char) arr_59 [i_16] [(unsigned char)3] [i_16])))))))) ? (((unsigned int) (!(((/* implicit */_Bool) arr_37 [(short)6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_42 [i_16] [i_17]), (arr_42 [i_16] [i_17]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_18 = 0; i_18 < 18; i_18 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_19 = 1; i_19 < 17; i_19 += 4) 
        {
            for (signed char i_20 = 1; i_20 < 16; i_20 += 4) 
            {
                for (int i_21 = 0; i_21 < 18; i_21 += 3) 
                {
                    {
                        var_21 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */unsigned int) (-(-749243597)))) : (min((arr_52 [(unsigned char)0] [i_19] [(unsigned char)8] [14ULL] [i_21]), (((/* implicit */unsigned int) arr_64 [i_18] [i_20])))))))));
                        var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_56 [16U])))))) * (((/* implicit */int) arr_6 [i_18] [i_18] [i_18] [i_18]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 18; i_22 += 1) 
        {
            for (unsigned int i_23 = 2; i_23 < 14; i_23 += 4) 
            {
                {
                    var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_12 [i_23] [i_23 + 1] [i_23] [i_23 + 1] [i_23 - 1]))) ? (((((/* implicit */int) arr_12 [i_23] [i_23] [i_23] [i_23 + 2] [i_23 + 3])) / (((/* implicit */int) arr_12 [i_23] [i_23] [i_23] [i_23 + 3] [i_23 + 2])))) : (((/* implicit */int) min((arr_12 [i_23] [i_23] [i_23] [i_23 - 2] [i_23 + 3]), (arr_12 [i_23] [i_23] [i_23] [i_23 + 1] [i_23 + 2]))))));
                    var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_64 [i_22] [i_18]))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_18] [i_18] [i_23])))))))) : (((/* implicit */int) arr_73 [i_18] [i_18] [i_23]))));
                    arr_79 [(unsigned char)16] [i_23] &= ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_64 [i_23 + 1] [i_23 - 1]), (arr_64 [i_23 + 1] [i_23 + 1]))))));
                }
            } 
        } 
    }
    for (unsigned short i_24 = 1; i_24 < 23; i_24 += 2) 
    {
        var_25 &= ((/* implicit */unsigned short) max((((long long int) arr_81 [i_24] [i_24 + 2])), ((+(arr_82 [i_24 + 1])))));
        arr_83 [i_24] = ((/* implicit */unsigned short) arr_80 [i_24 + 2] [i_24 - 1]);
        /* LoopNest 3 */
        for (unsigned int i_25 = 0; i_25 < 25; i_25 += 2) 
        {
            for (unsigned char i_26 = 0; i_26 < 25; i_26 += 2) 
            {
                for (unsigned long long int i_27 = 3; i_27 < 22; i_27 += 3) 
                {
                    {
                        arr_91 [i_27] [i_27 + 2] [i_27 + 2] [i_24] [i_24] [i_24] &= ((/* implicit */unsigned short) (signed char)127);
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4990679628198946225LL)) && ((_Bool)1)));
                    }
                } 
            } 
        } 
    }
}
