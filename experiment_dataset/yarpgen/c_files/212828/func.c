/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212828
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_10 += max(((unsigned short)28427), ((unsigned short)37108));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_6);
                    var_11 = ((/* implicit */int) arr_5 [10LL] [i_1] [0LL] [0LL]);
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) -224331317)) ? (((/* implicit */int) (unsigned short)37108)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)37121)))), (((/* implicit */int) (short)-2))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [(short)15] = ((/* implicit */long long int) arr_7 [i_0]);
                    }
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (min((max((((/* implicit */long long int) var_1)), (arr_9 [i_4] [i_1] [i_1]))), (((/* implicit */long long int) arr_13 [i_1] [i_2] [i_1] [i_0]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned short) var_1);
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-2147483647 - 1)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */_Bool) arr_18 [i_1] [(short)19] [i_1] [i_1] [i_1]);
                            var_17 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_2] [i_2] [i_4]);
                        }
                        arr_19 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)37085)) ? (217378597173833748ULL) : (((/* implicit */unsigned long long int) 1839426714)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) arr_12 [i_4])))))));
                        var_18 = var_8;
                        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [(short)16] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_4])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [i_4] [i_4]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (1060797166)));
                        arr_22 [(_Bool)1] [(_Bool)1] [i_7] [i_7] = ((/* implicit */int) var_1);
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((min((max((1570113855192393854ULL), (((/* implicit */unsigned long long int) (unsigned short)21526)))), (((/* implicit */unsigned long long int) (unsigned short)37108)))), (((/* implicit */unsigned long long int) (unsigned short)14166)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 1; i_10 < 7; i_10 += 4) 
            {
                {
                    arr_31 [(_Bool)1] [i_8] [i_10] [i_10] = ((/* implicit */unsigned long long int) 1774138520);
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 2; i_11 < 9; i_11 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_8] [i_9] [i_11])) ? (((/* implicit */int) arr_14 [i_9] [i_9] [i_10 + 3])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_9] [i_11])), (arr_13 [i_8] [i_9] [i_10 + 1] [i_11 + 2]))))))), (max((((((/* implicit */_Bool) var_6)) ? (arr_24 [i_9]) : (var_1))), (((/* implicit */unsigned int) (unsigned short)28440))))));
                        arr_35 [i_9] [10LL] [i_9] [i_9] [i_9] [i_8] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((2147483647), (arr_34 [i_8])))), (min((217378597173833730ULL), (((/* implicit */unsigned long long int) arr_34 [i_8]))))));
                        arr_36 [i_8] [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_16 [(short)14] [(short)18] [(short)18] [i_9] [i_9] [i_10] [(short)14])), (arr_17 [i_8] [i_11])));
                        arr_37 [i_10] [i_8] [i_8] [3U] [(unsigned short)10] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (unsigned char i_12 = 2; i_12 < 9; i_12 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                        {
                            arr_42 [i_8] [i_12] [i_8] [(unsigned short)8] [i_8] = ((/* implicit */unsigned short) var_1);
                            arr_43 [i_8] [i_9] [i_9] = ((/* implicit */unsigned short) max((min((217378597173833748ULL), (139611588448485376ULL))), (((/* implicit */unsigned long long int) -2147483647))));
                        }
                        for (short i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                        {
                            arr_48 [i_8] [i_9] [i_10] [i_12] [i_14] = ((/* implicit */unsigned short) min((max((8532527375050593350LL), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_2))));
                            arr_49 [i_8] = (unsigned short)44009;
                        }
                        var_23 = ((/* implicit */unsigned long long int) arr_18 [i_8] [i_9] [i_8] [i_10] [i_12]);
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [i_12] [i_12 - 2] [i_10] [i_9] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_5 [i_12 - 1] [i_12] [i_12 - 2] [i_12]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21527)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)23574))))) ? (-7827396454610516290LL) : (max((((/* implicit */long long int) var_9)), (7995367686093900274LL)))))));
                    }
                    for (unsigned char i_15 = 2; i_15 < 9; i_15 += 3) /* same iter space */
                    {
                        arr_53 [i_8] [i_8] [i_10 + 2] [i_15 + 1] [i_10] = ((/* implicit */int) min((((/* implicit */unsigned int) var_5)), (var_1)));
                        var_25 += ((/* implicit */int) arr_14 [i_8] [(unsigned short)11] [(unsigned short)11]);
                        arr_54 [i_8] [i_8] = (_Bool)1;
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) arr_4 [i_10 + 4] [i_16 - 1] [i_16 - 1]);
                            arr_58 [i_15 - 1] [i_8] = ((/* implicit */unsigned short) var_4);
                        }
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-765)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))) : (7995367686093900274LL))))));
                            var_28 = ((/* implicit */short) min((((/* implicit */long long int) arr_59 [i_8] [i_9] [i_10] [(unsigned short)5] [i_15 + 2] [i_15 - 1] [i_15 + 2])), (min((((/* implicit */long long int) max((arr_29 [i_15] [i_17]), ((unsigned short)20120)))), (max((8380847037149769709LL), (3294890757195004583LL)))))));
                            var_29 = ((/* implicit */long long int) min((17994074850905607269ULL), (((/* implicit */unsigned long long int) var_9))));
                        }
                    }
                    arr_61 [i_8] = ((/* implicit */int) arr_17 [i_10 + 2] [i_8]);
                }
            } 
        } 
    } 
}
