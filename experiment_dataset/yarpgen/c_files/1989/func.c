/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1989
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
    var_12 = min((min(((!(((/* implicit */_Bool) (signed char)12)))), ((!(((/* implicit */_Bool) var_2)))))), (min(((!(var_4))), ((!(((/* implicit */_Bool) var_7)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        arr_11 [i_1] [i_1] [i_2] [i_3] = min((min((arr_2 [i_1 - 4] [i_1 - 2] [i_1]), (arr_2 [i_1 + 2] [i_1 - 4] [i_1]))), (((arr_2 [i_1 - 1] [i_1 + 1] [i_1 - 1]) | (arr_2 [i_1 - 2] [i_1 - 2] [i_1]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */signed char) (~(((/* implicit */int) ((((arr_5 [i_0] [i_1] [i_2] [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) : (arr_4 [i_1] [i_3]))) < (((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_3 + 4])))))));
                            var_14 = ((/* implicit */unsigned char) min((((/* implicit */long long int) 4026531840U)), (9066019023511501504LL)));
                        }
                        var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_0]))));
                        arr_15 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) min((((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0])), (arr_14 [i_0] [i_0] [i_0] [i_1] [i_0])))) != (((((/* implicit */int) arr_8 [i_3 - 2] [i_2] [i_1] [i_0] [i_0])) / (arr_0 [i_0] [i_0]))))), (min((arr_5 [i_3] [i_1] [i_1] [i_0]), ((!(arr_5 [i_0] [i_1] [i_1] [i_3])))))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_8 [(unsigned short)7] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5])) <= (((/* implicit */int) arr_8 [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1]))))) < (((/* implicit */int) arr_3 [i_1 - 2])))))));
                        arr_18 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(arr_17 [i_0] [i_1] [i_1 - 4] [i_1] [i_5 + 1]))), (arr_7 [i_0] [i_2] [(unsigned short)12])))) ? (min((((/* implicit */unsigned long long int) arr_14 [i_5] [i_5] [i_5] [i_1] [i_5 - 1])), (arr_10 [i_5] [i_5] [(_Bool)1] [i_5]))) : (((/* implicit */unsigned long long int) ((arr_1 [i_1 + 2] [i_1]) | (arr_1 [i_1] [i_1]))))));
                        var_17 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(arr_1 [i_1] [i_5])))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_5])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_5 + 1])) ? (((/* implicit */int) arr_8 [(unsigned short)11] [i_1] [i_2] [i_5 - 1] [(short)3])) : (((/* implicit */int) arr_3 [i_0]))))))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) ((arr_10 [i_0] [i_1] [i_0] [i_0]) != (((/* implicit */unsigned long long int) arr_2 [i_1] [i_2] [14U])))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_1] [9ULL] [i_0] [i_0] = ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_5] [i_6]);
                            var_18 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) arr_4 [i_1] [i_6])) ? (((/* implicit */unsigned long long int) arr_0 [i_1 - 2] [i_2])) : (arr_20 [i_1] [(short)11] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_1] [i_6])))))))));
                            var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)178))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_0] [i_7])) ? (arr_6 [i_0] [i_1] [i_0]) : (arr_13 [i_0] [i_0] [i_0] [(unsigned short)8]))), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_5] [i_7])))), (arr_12 [i_7] [i_1] [i_2] [i_1] [i_0])));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_14 [i_1 + 1] [i_1] [i_1] [4LL] [i_1])) != (((/* implicit */int) arr_5 [i_1 - 1] [(unsigned char)8] [i_1 - 1] [i_1 - 1]))))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [10U] [i_0] [12U] [i_0]))) : (arr_7 [i_1 + 2] [i_5] [i_7]))))))))))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (max((min((((arr_6 [i_1] [14U] [i_7]) >> (((/* implicit */int) arr_16 [i_0] [i_1] [4ULL] [i_5] [i_7])))), (min((arr_12 [i_0] [i_0] [i_0] [0LL] [i_0]), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_2] [i_1] [i_7])))))), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_5 + 1] [i_7])), (arr_22 [12ULL] [i_7]))) | ((~(-6635337613771988472LL))))))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_1] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((arr_2 [i_0] [i_1] [i_0]), (((/* implicit */long long int) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_8] [i_1] [i_1] [i_1])), (arr_8 [i_0] [(short)4] [i_0] [i_5] [i_8]))))) != (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_5] [i_8])) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]))))))) : (min(((~(((/* implicit */int) arr_16 [i_5] [i_5 + 1] [i_1] [i_5] [i_5])))), (((/* implicit */int) arr_19 [i_5 + 1] [i_5 + 1] [12LL] [i_5 - 1] [i_5]))))));
                            var_23 = ((unsigned short) arr_4 [i_1] [i_5 - 1]);
                        }
                    }
                    var_24 -= ((arr_17 [i_0] [(signed char)14] [i_1 + 1] [i_1 - 1] [(signed char)14]) >> (((((((/* implicit */_Bool) min((arr_2 [i_0] [14ULL] [14ULL]), (((/* implicit */long long int) arr_19 [i_0] [i_0] [i_1] [i_2] [i_2]))))) ? (max((arr_12 [i_0] [6ULL] [i_0] [(unsigned char)6] [2U]), (arr_10 [i_0] [i_1] [i_1] [(_Bool)0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))))) - (15833748376196119907ULL))));
                    var_25 += ((/* implicit */unsigned int) arr_6 [i_0] [14U] [(_Bool)1]);
                    var_26 &= ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)1)))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            {
                                arr_34 [(unsigned short)5] [i_1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) / ((~(((/* implicit */int) ((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(short)4] [(short)4] [i_2] [i_2] [i_2] [i_2] [i_2]))))))))));
                                var_27 = ((/* implicit */unsigned char) ((max((min((arr_22 [i_1] [i_1]), (((/* implicit */long long int) arr_23 [i_0] [i_0] [i_1] [(unsigned short)1] [i_0] [(_Bool)1] [i_10])))), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_9] [i_10])) - (((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_1] [i_10]))))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_28 [i_0] [i_2] [i_9] [i_9] [i_10])))))))));
                                arr_35 [i_9] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_19 [(unsigned char)4] [(unsigned char)4] [i_2] [i_9] [(unsigned char)4])) >= ((+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0] [i_2]))))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_26 [i_0] [i_1] [(_Bool)1] [i_2] [i_9] [i_10])), (arr_28 [i_0] [i_1 - 4] [i_2] [i_9] [12ULL]))))) > ((-(arr_2 [i_0] [i_0] [i_0]))))))));
                                arr_36 [i_1] [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_10] = ((/* implicit */long long int) max((arr_6 [13LL] [i_1] [i_0]), (((/* implicit */unsigned long long int) ((arr_16 [i_0] [i_1] [i_1] [i_9] [i_10]) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [i_2] [i_9] [i_10])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_9] [i_10])))))));
                                arr_37 [(_Bool)1] [i_9] [i_1] [i_2] [i_1] [(_Bool)1] [i_0] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_2] [i_2] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_1] [i_2] [i_9] [(_Bool)1] [i_10]))) : (arr_7 [(unsigned short)0] [i_1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1 - 2] [i_1 - 3] [i_1] [i_1 - 3] [i_1 - 1]))) : ((~(arr_1 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (~(arr_20 [14ULL] [i_0] [14ULL] [i_0] [i_0])))))));
    }
    var_29 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 3; i_13 < 15; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        {
                            var_30 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((arr_41 [i_13]), (((/* implicit */unsigned short) arr_42 [i_11] [i_14])))), (min((((/* implicit */unsigned short) arr_40 [i_12])), (arr_41 [i_11])))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_11] [i_11]))) ^ (arr_47 [i_12])))))) : ((~(arr_43 [i_13] [i_13 + 1] [i_14])))));
                            arr_48 [i_11] [i_11] [i_14] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_40 [i_13 - 3])), (arr_44 [i_14] [i_13 + 2] [i_13 - 1])))) ? (((/* implicit */int) arr_44 [i_13 - 2] [i_13 - 3] [i_13 - 2])) : (((((((/* implicit */int) arr_40 [i_13 + 2])) + (2147483647))) << (((((/* implicit */int) arr_44 [i_14] [i_13 + 3] [i_13 + 1])) - (24375)))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
                            {
                                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_40 [i_13 - 2])) ? (min((((/* implicit */long long int) arr_50 [i_11] [i_12] [i_13] [i_14] [i_14] [i_15])), (arr_47 [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_13 - 2] [i_13]))))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_11] [i_11] [i_12] [i_13] [(short)5] [i_15]))))) && (((/* implicit */_Bool) min((arr_47 [13ULL]), (((/* implicit */long long int) arr_52 [i_11] [i_12] [i_12] [i_14] [i_15] [i_12]))))))))))))));
                                var_32 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_50 [i_13 + 2] [i_13 + 2] [i_13] [i_13 + 3] [i_13 - 1] [i_13 + 2])))), (((/* implicit */int) arr_46 [i_13 + 3] [i_14] [(_Bool)1]))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)183))))))))));
                                var_34 = ((/* implicit */_Bool) arr_52 [i_18] [i_18] [i_18] [i_18] [i_18] [i_17]);
                                arr_61 [i_11] [i_11] [i_11] [i_17] [12ULL] [i_11] [i_11] = ((/* implicit */long long int) arr_55 [i_11] [i_12] [i_16] [i_17] [i_16]);
                            }
                        } 
                    } 
                } 
                arr_62 [i_11] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)42)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_19 = 0; i_19 < 13; i_19 += 2) 
    {
        for (signed char i_20 = 0; i_20 < 13; i_20 += 2) 
        {
            {
                var_35 = (((+(max((arr_2 [i_19] [i_19] [i_19]), (((/* implicit */long long int) arr_23 [i_19] [i_19] [(unsigned char)0] [i_19] [i_19] [i_19] [i_19])))))) >> (((max((((/* implicit */long long int) ((((/* implicit */int) arr_53 [i_19] [(unsigned short)16] [i_19])) % (((/* implicit */int) arr_53 [i_19] [i_20] [i_20]))))), (arr_51 [i_19] [i_19] [i_19] [i_20] [8LL]))) - (5709704768661607692LL))));
                /* LoopNest 3 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (unsigned int i_22 = 3; i_22 < 12; i_22 += 4) 
                    {
                        for (short i_23 = 0; i_23 < 13; i_23 += 3) 
                        {
                            {
                                arr_77 [i_19] [i_20] [i_21] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_19] [7LL] [i_22] [i_22 - 2] [i_22])) ? (((/* implicit */int) ((unsigned char) ((arr_58 [i_19] [i_20] [i_21] [i_20] [i_23]) ? (arr_20 [i_22] [i_20] [i_21] [i_22] [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_19] [13] [i_19] [i_19] [i_19]))))))) : ((~(((/* implicit */int) ((unsigned char) 4216554005U)))))));
                                var_36 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_73 [i_22 + 1] [i_22 + 1] [i_22 - 1] [i_22 - 2] [i_22 + 1] [i_22 + 1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_19] [i_20] [i_19] [i_19]))) < (arr_65 [i_19])))) : (((/* implicit */int) arr_16 [i_19] [i_20] [i_19] [(unsigned char)8] [i_23]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
