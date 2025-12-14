/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224666
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
    var_19 = ((/* implicit */long long int) var_17);
    var_20 -= ((/* implicit */unsigned long long int) ((unsigned int) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : ((+(var_3))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_2] [i_4 + 2] = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) -7299176245252963127LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24041))) : (33554431ULL))))));
                                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)64))))), (max((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_2] [i_3])), (((((/* implicit */_Bool) 33554424ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))) : (2732910168U)))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] = ((/* implicit */signed char) min((1336126018U), ((-(arr_12 [i_0 - 3] [i_0 - 3] [i_1] [i_2] [i_2])))));
                    arr_15 [i_2] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))), (((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_10)))))));
                }
            } 
        } 
        arr_16 [12] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (arr_3 [i_0 + 2] [i_0 - 2] [i_0 - 2]))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 - 1] [i_0])) ? (arr_3 [i_0 + 2] [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned char i_5 = 3; i_5 < 14; i_5 += 2) /* same iter space */
    {
        var_22 = ((((/* implicit */int) min((var_2), ((unsigned char)246)))) != (((/* implicit */int) (((~(var_16))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)17499)))))))));
        arr_21 [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (8522825728ULL)));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(2066224245))))));
        arr_22 [i_5] = ((/* implicit */long long int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            arr_26 [i_5] [i_6] [i_5] = ((/* implicit */short) ((_Bool) ((long long int) arr_11 [(_Bool)1] [(_Bool)1] [i_5] [i_5 - 3] [(unsigned short)11] [i_6] [i_6])));
            arr_27 [i_5 - 2] [i_5 - 2] [i_5 - 2] = ((/* implicit */int) max(((!(((/* implicit */_Bool) (short)25521)))), (((((/* implicit */int) (unsigned char)131)) != (((/* implicit */int) (short)32753))))));
            var_24 = ((/* implicit */int) var_13);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_7 = 1; i_7 < 15; i_7 += 4) 
            {
                arr_31 [i_5] [i_6] [(unsigned char)5] [i_5] = ((unsigned char) 4652704895334985663LL);
                arr_32 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) (!(arr_2 [i_6] [i_5 + 3])));
                arr_33 [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) 0);
            }
            /* vectorizable */
            for (unsigned char i_8 = 2; i_8 < 13; i_8 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        arr_43 [i_10] [i_9] [7] [7] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned char)0))));
                        var_25 = ((((/* implicit */_Bool) ((unsigned int) -1LL))) ? (((((/* implicit */_Bool) var_9)) ? (arr_5 [i_8] [i_8] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)124))))));
                        arr_44 [i_8] = ((/* implicit */_Bool) arr_39 [i_5] [i_6] [i_8] [i_5]);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_8 + 4])) ? (((/* implicit */unsigned long long int) var_15)) : (arr_18 [i_8 + 1])));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) arr_18 [i_8]))));
                        arr_49 [i_11] [i_11] [i_11] [i_5] = ((/* implicit */unsigned int) ((unsigned short) arr_18 [i_8 + 4]));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        arr_52 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 3] [i_5 + 3] [i_5] = ((/* implicit */long long int) var_7);
                        var_28 ^= ((/* implicit */unsigned short) arr_8 [i_8 + 3] [i_5 - 2] [(_Bool)1] [i_5 + 3]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 3; i_13 < 14; i_13 += 2) 
                    {
                        var_29 = arr_36 [i_5] [i_5] [i_5 - 2] [i_13 + 2];
                        arr_55 [i_9] [i_6] [i_9] |= ((/* implicit */long long int) ((unsigned int) (signed char)31));
                        var_30 = ((/* implicit */short) ((arr_4 [i_5] [i_6] [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113)))));
                    }
                    arr_56 [i_9] [i_6] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18014398509481952LL)) ? (((((/* implicit */_Bool) arr_34 [i_5] [i_5] [9] [i_5])) ? (arr_36 [i_5] [(_Bool)1] [(_Bool)1] [(short)8]) : (((/* implicit */long long int) -37225307)))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5 + 1] [i_5 - 1] [i_5])))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_15 = 2; i_15 < 14; i_15 += 2) 
                    {
                        arr_63 [i_5 + 3] [i_6] [i_8] [i_5 + 3] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_8 + 2] [i_5 - 1] [i_8 - 1] [i_15 + 1])) & (((/* implicit */int) arr_7 [i_8 - 2] [i_5 - 2] [(_Bool)1] [i_15 + 3]))));
                        arr_64 [i_5] = ((/* implicit */short) ((unsigned long long int) arr_51 [i_5 + 3] [i_8 - 2] [i_15 - 2]));
                        arr_65 [i_5] [i_6] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_18))));
                        var_31 *= ((/* implicit */unsigned char) arr_36 [i_6] [i_8] [i_14] [i_15 - 2]);
                    }
                    arr_66 [2] [i_6] [i_6] [i_14] [i_14] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (short)32746))) < (((/* implicit */int) (short)-25543))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    var_32 -= ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_5 + 2])) * (((/* implicit */int) var_18))));
                    arr_69 [i_16] [i_6] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_5 - 1] [i_6] [i_6] [(signed char)12] [i_16] [i_16])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) || (((/* implicit */_Bool) (unsigned short)33067))));
                    arr_70 [i_5] = ((/* implicit */unsigned short) (short)32766);
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 17; i_17 += 1) 
                    {
                        arr_75 [i_5] [i_6] [i_5] [(unsigned short)3] [i_5] [7LL] = ((/* implicit */int) ((arr_4 [i_6] [i_17] [i_8 + 4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [8] [i_5 - 3] [i_8 + 2] [i_8])))));
                        arr_76 [i_5] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_5] [i_5 - 1] [i_6] [i_6] [i_17] [i_17])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_46 [i_5] [i_5 - 2] [i_8] [(_Bool)1] [i_17] [i_17]))));
                        arr_77 [i_5] [i_5] [i_5 - 3] [(unsigned short)13] [i_5] &= ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) 131071)) | (arr_29 [i_17])))));
                    }
                    arr_78 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(-1368566579))))));
                }
                var_33 = ((/* implicit */int) (-(arr_17 [i_5 - 3])));
            }
        }
    }
    for (unsigned char i_18 = 3; i_18 < 14; i_18 += 2) /* same iter space */
    {
        var_34 += ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (unsigned char)113)))), (((((/* implicit */int) (unsigned short)45619)) == (((/* implicit */int) (short)25535))))));
        var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((+(var_13))))))));
    }
}
