/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241951
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
    var_14 = ((/* implicit */signed char) max((min((var_3), (((/* implicit */int) min((var_10), (var_8)))))), (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (arr_7 [i_0] [i_1] [(signed char)20] [i_3]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4])))) < (arr_4 [i_1] [i_3])));
                            arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) var_7);
                            arr_12 [i_0] [i_2] [i_3] = ((/* implicit */int) ((((arr_1 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (short)3212))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & (arr_9 [i_0] [i_1] [i_1] [i_2] [2ULL] [i_4])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (0ULL)))));
                        }
                        arr_13 [(signed char)2] [(short)14] [(short)17] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [5] [i_0] [i_3]);
                        arr_14 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */int) var_7)) <= (arr_9 [i_0] [i_0] [i_1] [i_1] [i_3] [i_3])));
                        var_17 = ((/* implicit */unsigned char) arr_3 [i_1] [(unsigned char)3]);
                    }
                } 
            } 
            arr_15 [i_0] [i_1] = ((arr_7 [i_0] [i_0] [i_1] [i_1]) << (((var_3) + (1702110888))));
            arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)110)) ? (((((/* implicit */_Bool) arr_8 [2ULL])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))) : (arr_3 [i_0] [i_1])));
            arr_17 [i_1] = ((/* implicit */unsigned long long int) ((((2675142076U) > (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [7U])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1]))) : (((long long int) arr_4 [21] [i_1]))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    {
                        arr_25 [i_5] [i_6] [14U] = ((/* implicit */int) (unsigned short)57158);
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [16U]))) : (var_9)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    {
                        var_19 = ((/* implicit */int) var_6);
                        arr_30 [i_0] [i_9] [i_8] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)57158);
                        arr_31 [i_9] [i_0] [i_5 + 1] [5U] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))) : (arr_19 [i_0] [15ULL] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_5 - 1] [8ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_8]))) : (arr_26 [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
                    }
                } 
            } 
            var_20 += ((/* implicit */int) var_7);
            var_21 = ((/* implicit */long long int) ((unsigned char) var_8));
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 2; i_10 < 20; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 1; i_12 < 18; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            {
                                var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_27 [i_0] [i_10] [i_0] [i_13])))))) ? (((unsigned int) ((short) 2675142076U))) : (((unsigned int) (-(2210856611U))))));
                                var_23 = ((/* implicit */unsigned short) (~(max((10490890165860136709ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_37 [(short)0])) + (2147483647))) >> (((60129542144ULL) - (60129542127ULL))))))))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-3671)) ? (arr_20 [i_10 + 2] [i_11] [i_12 + 1] [i_12 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)57)))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_10 + 2]))))), (((((/* implicit */_Bool) arr_20 [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_10 + 2])) ? (arr_20 [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_10 + 2]) : (arr_20 [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_10 + 2])))));
                    arr_43 [i_10] [i_11] = ((/* implicit */signed char) ((unsigned short) (~(min((((/* implicit */unsigned long long int) arr_0 [i_11])), (arr_35 [i_0] [i_10] [16U] [i_11]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        {
                            arr_53 [i_0] [i_14] [i_16] [20U] [i_0] = ((/* implicit */unsigned char) ((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            arr_54 [5U] [i_14] [i_16] [(signed char)12] [i_17] = ((/* implicit */signed char) 3835314801U);
                            var_26 = (i_16 % 2 == 0) ? (((/* implicit */unsigned long long int) ((arr_39 [i_0] [i_14] [18ULL] [i_16]) >> (((max((((/* implicit */unsigned long long int) var_0)), (arr_33 [i_0] [i_14] [i_16]))) - (1214864826100002246ULL)))))) : (((/* implicit */unsigned long long int) ((arr_39 [i_0] [i_14] [18ULL] [i_16]) >> (((((max((((/* implicit */unsigned long long int) var_0)), (arr_33 [i_0] [i_14] [i_16]))) - (1214864826100002246ULL))) - (6962722845624444982ULL))))));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_14] [i_15] [i_14]))) | (arr_52 [i_0] [i_14] [i_15] [i_0] [i_16] [i_15]))) >= (((/* implicit */unsigned long long int) arr_23 [i_0] [i_14] [i_14] [i_0] [i_17])))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) min((459652469U), (((/* implicit */unsigned int) var_1))));
            }
            arr_55 [i_0] = ((/* implicit */signed char) ((-7965600783042798896LL) - (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_3)) : (arr_22 [i_0] [i_14] [(unsigned char)1]))), (arr_1 [(signed char)8])))));
        }
        /* LoopNest 2 */
        for (signed char i_18 = 2; i_18 < 19; i_18 += 2) 
        {
            for (short i_19 = 0; i_19 < 22; i_19 += 4) 
            {
                {
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_22 [21] [i_18] [i_19]), (((/* implicit */long long int) ((arr_1 [i_0]) > (arr_41 [i_0] [i_0] [i_0] [i_18] [i_19] [i_19] [(unsigned char)17]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_0] [i_18 + 1] [i_18 + 1] [i_18 - 1])) / (((/* implicit */int) arr_27 [i_18] [i_18 + 1] [i_18 + 1] [i_18 - 1]))))) : (min((var_5), (18446744073709551615ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-8857468222632982544LL), (((/* implicit */long long int) min((((/* implicit */short) arr_27 [i_0] [i_18 + 2] [i_19] [i_0])), (var_4))))))) ? (max((arr_32 [i_18 + 3] [i_19]), (var_6))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)195)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 4) 
                        {
                            var_31 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_0)), (max((5565123887345703422ULL), (((/* implicit */unsigned long long int) arr_6 [i_18 + 1] [i_18 + 1] [i_18 + 3] [i_18 - 1]))))));
                            var_32 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)16384)) * (((/* implicit */int) arr_28 [i_18 - 1] [i_18 + 3] [i_18 - 1] [i_19] [i_18] [(short)14]))))) != (((((/* implicit */_Bool) max((arr_35 [i_0] [i_19] [i_19] [i_20]), (((/* implicit */unsigned long long int) -1374959762))))) ? (2196797528U) : (((/* implicit */unsigned int) min((293642864), (((/* implicit */int) (short)-2693)))))))));
                        }
                    }
                    for (unsigned int i_22 = 0; i_22 < 22; i_22 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3556867001U)) ? (8412685058437666256ULL) : (arr_52 [i_0] [i_0] [i_18 + 2] [i_18 - 1] [i_18 + 2] [i_22])))) ? (((/* implicit */int) arr_69 [i_0] [7ULL] [i_19] [i_22] [i_22])) : (var_3))))));
                        arr_70 [(unsigned char)15] [i_19] [5ULL] = ((/* implicit */unsigned char) ((unsigned int) min((var_5), (max((arr_38 [i_0] [i_19] [i_19] [i_22]), (((/* implicit */unsigned long long int) (short)23938)))))));
                    }
                }
            } 
        } 
    }
}
