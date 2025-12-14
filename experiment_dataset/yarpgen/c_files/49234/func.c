/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49234
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
    var_11 = ((/* implicit */unsigned char) (unsigned short)57521);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] |= ((/* implicit */short) ((unsigned long long int) (unsigned char)0));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 14; i_2 += 1) 
        {
            arr_11 [i_2] = ((/* implicit */_Bool) ((unsigned char) (unsigned char)0));
            arr_12 [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_2 - 1]))));
        }
        arr_13 [i_1] = ((/* implicit */signed char) 2557839625666768038ULL);
        var_12 = ((/* implicit */unsigned short) var_8);
        arr_14 [i_1] |= ((/* implicit */unsigned int) var_6);
    }
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) max((((unsigned short) 818577267U)), (((/* implicit */unsigned short) ((unsigned char) -1820654348))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                arr_26 [i_5] [i_3] = ((/* implicit */unsigned char) max((min((3745810404U), (((/* implicit */unsigned int) arr_0 [i_7])))), (((arr_23 [i_6 + 1] [(short)4] [i_3] [i_6] [i_6 + 1] [i_6 + 1]) << (((((/* implicit */int) arr_17 [i_6 - 1])) + (31379)))))));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (min((var_10), (((/* implicit */unsigned int) arr_25 [i_6] [i_6 + 1] [i_6 - 1] [i_6] [(unsigned short)6] [i_6 + 1])))))))));
                                arr_27 [i_7] [i_7] [16ULL] [i_7] [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_21 [(short)4] [(short)4] [(short)4])) - (((/* implicit */int) arr_7 [(unsigned short)16] [i_4])))))))) : (((/* implicit */int) arr_20 [(short)5] [(short)5] [i_5] [i_5]))));
                                var_15 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_6 - 1])) ? (((/* implicit */int) arr_15 [i_6 - 1])) : (((/* implicit */int) arr_15 [i_6 + 1])))));
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
        arr_28 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_15 [i_3]), (arr_15 [i_3])))) - (arr_22 [i_3] [i_3] [i_3] [i_3] [i_3])));
    }
    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
    {
        var_17 += ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8])) || (((/* implicit */_Bool) arr_9 [14ULL]))))), (arr_23 [i_8] [i_8] [14ULL] [i_8] [i_8] [i_8])));
        var_18 += ((/* implicit */unsigned short) (((-(arr_23 [i_8] [i_8] [(unsigned short)10] [(unsigned short)10] [i_8] [i_8]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_8])) == (((/* implicit */int) arr_0 [i_8]))))))));
    }
    var_19 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36876)))))) : (max((((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (short i_11 = 3; i_11 < 14; i_11 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) arr_16 [i_11 + 2] [i_11]);
                    arr_40 [i_9] [(short)3] [(_Bool)1] [i_11 + 1] = ((/* implicit */_Bool) max((max((((/* implicit */int) (unsigned short)36876)), (-1820654348))), (((/* implicit */int) arr_24 [i_11 + 1] [i_11 - 2] [i_11 - 1] [i_11 - 1] [i_11 + 2]))));
                    arr_41 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)166)) > (((/* implicit */int) arr_7 [i_9] [i_9]))))), (max(((unsigned char)165), (((/* implicit */unsigned char) arr_15 [i_9]))))));
                    var_21 += ((/* implicit */int) max((var_8), (((/* implicit */unsigned long long int) ((signed char) 18446744073709551615ULL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 13; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
                        {
                            {
                                arr_48 [i_9] [i_9] [i_9] [i_12] [i_11 + 1] [i_12] |= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) 1417455174))) < (var_3))));
                                var_22 += ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_24 [i_10] [i_11] [i_11 - 3] [i_12] [i_12 + 1])), (min((1847880544U), (((/* implicit */unsigned int) arr_0 [i_9]))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)168))))) : (((((arr_46 [i_9] [i_9] [i_11] [i_12] [i_9] [i_13] [i_9]) == (((/* implicit */int) arr_10 [i_10] [i_11 - 1])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_13] [i_10]))))) : ((-(arr_33 [i_9] [i_9])))))));
                                var_23 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) 3476390041U)))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    var_24 |= ((/* implicit */short) ((unsigned long long int) arr_18 [i_9] [i_9] [i_14]));
                    arr_51 [i_9] |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [i_9])) || (((/* implicit */_Bool) (unsigned char)96)))) ? (((/* implicit */int) arr_39 [i_14] [i_10] [i_9] [i_9])) : (((((((/* implicit */int) arr_17 [i_9])) + (2147483647))) << (((((((/* implicit */int) arr_39 [i_14] [i_10] [i_9] [i_9])) + (20547))) - (8)))))));
                }
                /* vectorizable */
                for (unsigned char i_15 = 1; i_15 < 15; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 1; i_16 < 13; i_16 += 3) 
                    {
                        for (int i_17 = 0; i_17 < 16; i_17 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_49 [i_15 + 1] [15ULL]))));
                                arr_60 [i_17] [i_17] [i_17] [i_17] [i_17] [i_16] [i_17] = ((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_16 + 3])) / (((/* implicit */int) (unsigned short)65523))));
                            }
                        } 
                    } 
                    arr_61 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_10])) : (((/* implicit */int) (unsigned short)59127)))) % (((/* implicit */int) ((unsigned short) arr_7 [i_9] [i_10])))));
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        for (int i_19 = 0; i_19 < 16; i_19 += 1) 
                        {
                            {
                                arr_69 [i_18] [i_18] = ((/* implicit */unsigned char) arr_42 [i_9] [9ULL] [i_18] [i_19]);
                                var_26 |= ((/* implicit */int) arr_55 [8]);
                                arr_70 [i_18] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)23932)))) > (var_3)));
                            }
                        } 
                    } 
                    arr_71 [i_10] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_43 [i_9] [i_10] [i_10] [i_15 - 1])) % (((/* implicit */int) arr_65 [i_15 + 1] [i_15] [i_15]))));
                    arr_72 [0ULL] [i_15] |= ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_58 [i_15] [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_15])) : (((/* implicit */int) (_Bool)1)));
                }
                /* LoopNest 3 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (unsigned short i_21 = 3; i_21 < 14; i_21 += 3) 
                    {
                        for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 3) 
                        {
                            {
                                var_27 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) - (((((/* implicit */int) (signed char)40)) + (((/* implicit */int) arr_20 [i_20] [i_22] [i_10] [i_21 + 1]))))));
                                var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) max((1545184837), (((/* implicit */int) arr_65 [i_9] [i_10] [i_20])))))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_21 + 2] [i_21] [i_21 - 1] [i_21 - 2])) || (((/* implicit */_Bool) var_0)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
