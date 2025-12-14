/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48997
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_0] [(signed char)12])), ((+(((/* implicit */int) arr_3 [i_0] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 14509088113732808776ULL))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_11 [i_3] [i_1] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_1] [i_2]))));
                            var_18 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) arr_6 [i_3 - 1] [i_3] [i_3 + 1] [i_2])))));
                            var_19 -= ((/* implicit */_Bool) max((arr_7 [i_1]), (arr_7 [i_1])));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) (-((-(((/* implicit */int) max(((short)24324), (((/* implicit */short) (signed char)1)))))))));
                arr_12 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))))) ? (max((((unsigned long long int) arr_9 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))))) : (((/* implicit */unsigned long long int) ((arr_8 [i_1]) ? (((/* implicit */int) ((unsigned char) (unsigned short)11712))) : (((/* implicit */int) var_13)))))));
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    arr_16 [i_4] [19LL] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0ULL))));
                    arr_17 [i_4] [i_1] = max(((+(((/* implicit */int) arr_13 [i_0] [i_1] [i_4] [i_4])))), (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_4])));
                }
                for (int i_5 = 2; i_5 < 24; i_5 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) arr_6 [i_0] [(signed char)8] [i_1] [i_5 - 2]);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(16166658984880232427ULL)))) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_5] [i_5])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_0] [i_0]), (arr_5 [(_Bool)0] [i_1]))))) | (max((arr_20 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_2))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                var_23 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (unsigned short)46271))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [17] [i_5] [i_7])))))))) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_1] [i_5 + 1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_7] [i_1] [i_5 - 2] [i_0] [i_7]))) & (arr_20 [i_5 - 1] [i_5 + 1] [i_5 - 1])))));
                                arr_25 [i_0] [i_6] [17ULL] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_1] [i_5])) : (((/* implicit */int) (unsigned short)36596))))) - ((-(arr_1 [i_6])))))));
                                arr_26 [i_0] [i_1] [i_7] &= ((/* implicit */signed char) ((((/* implicit */int) (!(arr_22 [i_1] [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5 - 1] [i_1])))) >= (((/* implicit */int) (!(arr_22 [i_7] [i_5 + 1] [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_7]))))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_0 [2U] [i_1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_24 = 17673959944237096384ULL;
                        /* LoopSeq 1 */
                        for (int i_9 = 1; i_9 < 24; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 2046LL)))) ? (((/* implicit */unsigned long long int) arr_7 [i_1])) : (arr_20 [(_Bool)1] [i_5] [3ULL])));
                            var_26 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)12] [i_5] [i_8] [i_9 - 1])) ? (8966272596645749797ULL) : (((/* implicit */unsigned long long int) var_2)))))));
                        }
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 24; i_10 += 4) 
                    {
                        var_27 += (!(((/* implicit */_Bool) ((((_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_32 [i_10] [i_10 - 2] [i_5] [i_1] [i_0] [i_0] [i_0]))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_21 [i_0] [i_1] [i_0] [i_0])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)6349)) : (((/* implicit */int) arr_15 [20ULL] [i_5 + 1] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) arr_37 [i_10] [i_10] [i_0] [i_10] [i_10 - 1] [i_0])))))) : (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (21ULL)))));
                        var_29 = ((/* implicit */unsigned short) arr_35 [i_0]);
                        arr_39 [i_0] [i_1] [i_5] [i_10] = ((arr_34 [(signed char)14] [i_1] [i_5] [i_10 - 1] [i_10]) ? (max((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_19 [i_1] [(short)21]) : (((/* implicit */unsigned long long int) var_2)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_1] [i_10] [i_5] [i_10 - 2]))))))) : (arr_0 [i_0] [i_1]));
                    }
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) max((((/* implicit */int) (!((_Bool)1)))), (var_10)));
    var_31 = ((/* implicit */unsigned long long int) ((int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (var_16))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) & (var_10)))))));
    /* LoopNest 2 */
    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
    {
        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            {
                var_32 = ((/* implicit */signed char) arr_36 [i_11] [i_11] [i_11] [i_11] [i_11]);
                /* LoopSeq 3 */
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
                {
                    var_33 = (+((~(min((((/* implicit */unsigned int) (-2147483647 - 1))), (arr_7 [i_12]))))));
                    arr_49 [i_11] [i_12] [i_13] = ((((/* implicit */_Bool) min(((unsigned char)252), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_11] [i_12] [i_12] [(unsigned short)4] [i_13])))))) : (max((arr_9 [i_11] [i_11] [i_11] [i_12] [i_11]), (arr_9 [i_11] [i_12] [i_12] [i_13] [i_13]))));
                    arr_50 [i_11] [i_11] [i_12] [i_13] &= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 5182709219042294170LL)) ? (var_3) : (((/* implicit */long long int) arr_9 [i_11] [i_11] [i_11] [i_12] [i_13])))))))));
                }
                for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
                {
                    var_34 ^= max((((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_9)), (arr_14 [12ULL] [i_12] [i_14] [i_14]))), ((-(((/* implicit */int) var_5))))))), ((+((+(arr_43 [i_14] [i_12] [i_11]))))));
                    var_35 = ((/* implicit */long long int) ((unsigned long long int) ((_Bool) arr_30 [i_14] [i_12] [i_11])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11154)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_11] [(short)20] [i_11] [i_15])))))) ? ((-(arr_1 [i_11]))) : (arr_54 [9ULL] [i_15 + 1]))));
                        var_37 = ((/* implicit */signed char) max((((/* implicit */short) (unsigned char)194)), ((short)32755)));
                    }
                    for (int i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        arr_62 [i_12] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_30 [i_11] [i_12] [i_16])) ? (arr_30 [i_11] [i_12] [i_14]) : (arr_30 [i_12] [i_12] [i_11]))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) arr_47 [i_14] [i_12] [i_11])) : (((/* implicit */int) ((unsigned char) arr_2 [i_14])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_34 [i_11] [i_11] [i_11] [i_16] [i_16]))))) : (min(((+(arr_19 [i_11] [i_12]))), (((/* implicit */unsigned long long int) arr_8 [i_12]))))));
                    }
                    arr_63 [i_11] [i_11] [i_12] = ((/* implicit */long long int) var_11);
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_22 [i_12] [i_12] [i_17] [i_12] [i_17] [i_12])), (1468441297))))));
                    var_40 = ((/* implicit */unsigned short) var_9);
                    arr_67 [i_11] [i_11] [i_12] [i_12] = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_5 [i_12] [i_17]), (((/* implicit */short) (!((_Bool)1)))))))));
                }
                /* LoopNest 2 */
                for (long long int i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    for (unsigned short i_19 = 0; i_19 < 21; i_19 += 3) 
                    {
                        {
                            arr_75 [i_11] [i_19] [i_12] [9ULL] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_33 [i_11] [i_19]))))));
                            var_41 = ((/* implicit */short) (+(arr_20 [(short)20] [i_12] [i_19])));
                            arr_76 [i_19] [i_12] [i_12] [i_11] = ((/* implicit */signed char) (~((-((+(((/* implicit */int) arr_21 [i_11] [i_12] [i_11] [i_11]))))))));
                            arr_77 [i_12] [i_18] [i_12] [(_Bool)1] [i_12] [i_12] = ((/* implicit */unsigned char) (+(((arr_48 [i_12] [i_12] [8ULL] [i_19]) * (arr_20 [i_19] [i_19] [i_19])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
