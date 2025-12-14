/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206844
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
    var_15 = ((/* implicit */unsigned int) var_9);
    var_16 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) var_8);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) >= ((-(arr_1 [i_0] [i_1])))));
            var_19 = ((/* implicit */unsigned int) arr_2 [(_Bool)1] [i_0]);
        }
        for (signed char i_2 = 2; i_2 < 24; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) (~((((_Bool)1) ? (((/* implicit */int) arr_13 [i_2 - 2] [i_2 - 2] [i_2] [i_3])) : (arr_11 [i_2 - 2] [i_3])))));
                        var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((251785113U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_4]))))) >= (max((((/* implicit */unsigned int) (_Bool)1)), (4043182202U)))))), (arr_4 [i_3] [i_4])));
                    }
                } 
            } 
            arr_15 [i_0] [i_0] = ((/* implicit */long long int) ((short) arr_2 [i_0] [i_0]));
            var_22 = ((/* implicit */signed char) arr_0 [i_0]);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) arr_17 [i_5])) : ((-(((/* implicit */int) var_0))))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_6 [i_6])))) ? (((/* implicit */unsigned long long int) arr_6 [i_6])) : (var_4)));
                        arr_23 [i_6] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_6] [i_0] [i_7])) : ((-(arr_19 [i_0] [i_6] [i_7])))));
                    }
                } 
            } 
        }
        arr_24 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_0] [(_Bool)1] [i_0])))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned int) arr_7 [i_0])), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (((/* implicit */int) var_8)) : (var_12)));
        var_26 ^= ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
    {
        var_27 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)40839)))))));
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 23; i_9 += 3) 
        {
            for (long long int i_10 = 3; i_10 < 21; i_10 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(9379790557976982170ULL)))) ? (((/* implicit */int) arr_21 [i_10 + 1] [i_10] [i_10 - 2] [i_10] [i_10 - 1])) : (((/* implicit */int) ((signed char) var_5))))))));
                    var_29 &= ((/* implicit */long long int) (~(arr_4 [22ULL] [i_9])));
                    var_30 = ((/* implicit */signed char) max((var_30), (max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_8] [i_8]))))), (arr_25 [(short)4] [(short)4])))));
                    arr_32 [i_8] = ((/* implicit */_Bool) arr_3 [i_8] [i_8]);
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned char) arr_25 [i_8] [i_8]);
    }
    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
    {
        var_32 += ((/* implicit */unsigned long long int) 2023505569U);
        /* LoopSeq 3 */
        for (long long int i_12 = 2; i_12 < 15; i_12 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */short) 4043182183U);
            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_27 [i_12 - 1] [i_12] [i_11])) ? (((/* implicit */int) arr_31 [i_11] [i_11])) : (((/* implicit */int) var_5))))))) ? ((+(arr_7 [i_11]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_26 [i_11] [i_11]) || (((/* implicit */_Bool) arr_6 [i_12 - 1])))))))))));
        }
        /* vectorizable */
        for (long long int i_13 = 2; i_13 < 15; i_13 += 1) /* same iter space */
        {
            arr_41 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (-(1958037262)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_13] [i_13 - 2]))) : (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */long long int) 3755103738U)) : (-4LL)))));
            arr_42 [i_11] [i_11] [i_13] = ((/* implicit */unsigned int) arr_31 [i_13] [i_13]);
            arr_43 [i_13] = arr_3 [i_13] [i_13];
            arr_44 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1854539615)) ? (arr_10 [i_13 - 2] [i_13] [i_13 - 2] [i_13 - 2]) : (((((/* implicit */_Bool) var_3)) ? (4043182165U) : (251785130U)))));
        }
        /* vectorizable */
        for (long long int i_14 = 2; i_14 < 15; i_14 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 16; i_15 += 2) 
            {
                for (long long int i_16 = 2; i_16 < 14; i_16 += 2) 
                {
                    for (unsigned int i_17 = 1; i_17 < 13; i_17 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_11]))))) ? ((-(1352395369))) : (((/* implicit */int) (unsigned char)32))));
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_17 + 2] [i_16 - 1] [i_14 - 2] [i_11])) ? (arr_49 [i_17 + 1] [i_16 - 1] [i_14 - 1] [i_11]) : (arr_49 [i_17 - 1] [i_16 - 2] [i_14 + 1] [i_14]))))));
                            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_11])) && ((!(((/* implicit */_Bool) arr_10 [i_11] [i_15] [i_15] [i_16])))))))));
                        }
                    } 
                } 
            } 
            arr_56 [i_11] = ((/* implicit */signed char) (+(1854539608)));
        }
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 16; i_18 += 2) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        arr_65 [i_19] [7ULL] [i_19] [i_20] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_20] [i_20] [(unsigned short)1] [i_18] [24LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_20]))) : ((+(arr_49 [i_11] [i_11] [i_11] [i_11]))))))));
                        var_38 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((unsigned int) arr_10 [(_Bool)1] [i_18] [i_20] [i_20])) << (((arr_29 [i_20] [i_18]) - (5018690568375382386ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [20U] [20U] [20U] [i_19] [i_20]))) : (((unsigned int) arr_48 [i_19]))));
                        arr_66 [i_20] [i_19] [i_19] [i_11] [i_11] = ((/* implicit */signed char) min((arr_54 [i_11] [i_18] [i_18] [i_19] [i_19] [i_20] [i_20]), (((/* implicit */long long int) ((unsigned short) (short)48)))));
                    }
                    var_39 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) arr_35 [i_19]))), ((-(((/* implicit */int) arr_35 [i_11]))))));
                    var_40 = ((/* implicit */signed char) arr_57 [i_11] [i_11]);
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_18] [i_19])) ? (max((arr_11 [i_11] [i_19]), (arr_11 [i_19] [i_19]))) : (((arr_11 [i_11] [i_19]) / (arr_11 [i_19] [i_19])))));
                }
            } 
        } 
        var_42 = ((/* implicit */signed char) min(((-(arr_60 [i_11] [i_11] [i_11]))), (((((/* implicit */_Bool) arr_29 [(unsigned short)13] [(unsigned short)13])) ? ((((_Bool)1) ? (251785120U) : (4043182183U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
    }
}
