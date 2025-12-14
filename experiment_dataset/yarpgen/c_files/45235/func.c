/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45235
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    var_13 &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) > (((/* implicit */int) arr_1 [i_0 - 1])))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_8);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((17179869176LL), (((/* implicit */long long int) -1949787802)))), (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) -1949787828)))))))) ? (0LL) : ((+(((((-6660199616608601999LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)150)) - (138)))))))));
    var_16 -= ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            {
                arr_12 [i_3] = ((/* implicit */short) max((((((long long int) var_11)) | (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) 2031616LL)) ? (arr_8 [i_4]) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)32)) ? (arr_10 [i_4] [i_4] [i_3]) : (var_0)))))))));
                var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */int) (unsigned char)126)), (-542174120))) : (((((/* implicit */int) var_7)) - (var_0)))))), ((+(279830866U)))));
                /* LoopSeq 3 */
                for (int i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) ((long long int) max((((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_13 [i_3] [i_4] [i_5 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))))));
                    arr_15 [i_3] [i_4] |= ((/* implicit */unsigned int) -2031616LL);
                }
                for (long long int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) arr_18 [4ULL] [i_3] [(_Bool)1] [i_3]);
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_6] [13U] [6LL])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2)))))) : (var_5)));
                    }
                    var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (1949787801) : (((/* implicit */int) (signed char)-36))))) ? (((arr_2 [i_4] [i_6]) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_5)))))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (short)-9727)) ? (-2777618489738842850LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                    arr_22 [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (unsigned short)37350)) : (((/* implicit */int) (unsigned short)37348))))), (max((arr_21 [i_3] [i_4] [i_3] [i_4] [i_3] [(unsigned char)1]), (((/* implicit */long long int) (signed char)125))))));
                    var_22 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (1949787814)))) : (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) : (arr_18 [i_3] [7LL] [7LL] [7LL]))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_16 [i_6] [i_3] [i_3])) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_19 [i_3] [i_3] [i_4] [i_3] [i_6] [i_6])) : (1959721156))) : (arr_4 [i_4]))))));
                }
                for (long long int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 1; i_9 < 18; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 4; i_10 < 18; i_10 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) arr_19 [i_3] [i_10] [i_8] [i_8] [i_10] [i_4]);
                                var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_28 [i_8] [i_9 + 1] [i_10 + 1] [i_10] [i_10] [i_10])) ? (arr_28 [i_8] [i_9 - 1] [i_10 - 1] [5LL] [5LL] [i_8]) : (((/* implicit */long long int) arr_18 [i_9 - 1] [i_9 - 1] [i_10 + 2] [12LL]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) arr_23 [i_3] [i_4] [i_4] [i_8]);
                }
                var_26 |= ((unsigned char) var_6);
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_12 = 1; i_12 < 19; i_12 += 4) 
                    {
                        arr_36 [14ULL] [i_12] = ((/* implicit */long long int) ((unsigned char) arr_4 [i_12 + 1]));
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_7))));
                            var_28 = ((/* implicit */signed char) -3562724328657745193LL);
                            arr_40 [i_12] [i_11] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1] [i_12] [i_12])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            arr_44 [i_12] = ((arr_43 [i_14] [i_14] [i_14] [i_12 + 1] [(_Bool)1]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                            var_29 += ((/* implicit */unsigned char) ((var_0) - (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned char)6)))))));
                            arr_45 [i_3] [i_3] [i_11] [i_12] [i_3] [i_12] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)6)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 2; i_15 < 19; i_15 += 4) 
                    {
                        for (int i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            {
                                arr_52 [i_3] [i_4] [i_11] [i_11] [1LL] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_28 [i_3] [16U] [16U] [16U] [i_15] [i_15]))) ? ((+(arr_2 [0LL] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                                var_30 = ((/* implicit */short) ((((/* implicit */int) arr_42 [i_15] [i_15] [i_15] [(short)15] [i_15 - 1] [i_15])) | (((/* implicit */int) arr_50 [(_Bool)1] [2LL] [i_16] [2LL] [i_15 - 1] [8U]))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_17 = 4; i_17 < 16; i_17 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (long long int i_19 = 0; i_19 < 20; i_19 += 4) 
                        {
                            {
                                var_31 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) -1)), (max((((/* implicit */unsigned int) var_7)), (var_2)))));
                                var_32 = ((_Bool) ((((/* implicit */int) arr_19 [i_17 + 2] [(unsigned char)13] [16LL] [i_17 - 3] [i_17 - 3] [i_17 + 2])) >> (((var_5) + (6080041225886009387LL)))));
                            }
                        } 
                    } 
                    var_33 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_5 [(unsigned char)10] [i_4] [i_4] [i_17])) / (var_4)))))) ? ((+(((/* implicit */int) (unsigned short)65525)))) : (((/* implicit */int) arr_46 [i_17 - 1] [i_17] [i_17] [i_17] [i_17 + 4]))));
                    arr_59 [(signed char)17] [(signed char)17] = ((/* implicit */unsigned int) min((((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)127)), (var_3)))) >> (((((/* implicit */int) arr_41 [i_17] [i_17] [i_17] [i_17 + 1] [i_17] [i_3] [i_17])) - (13889))))), (((/* implicit */int) var_11))));
                }
                for (unsigned short i_20 = 4; i_20 < 16; i_20 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (-(max((((/* implicit */long long int) arr_62 [i_20 - 2] [i_20 + 3] [i_20])), (var_5))))))));
                    var_35 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_16 [i_3] [i_4] [i_20])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_24 [i_20])) : (((/* implicit */int) (unsigned short)54907))))) ? (((((/* implicit */_Bool) 2810098894528065908ULL)) ? (((/* implicit */long long int) 457156938U)) : (-3671507057655401808LL))) : (var_5)))));
                }
            }
        } 
    } 
}
