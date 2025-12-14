/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218710
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
    var_12 = ((/* implicit */int) ((_Bool) var_7));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1]))))), (((unsigned short) var_3)))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_7)))) | (((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)9]))))) ? (((unsigned long long int) (~(var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0 + 1] [i_0 + 1] [i_4 - 1]) == (arr_4 [i_0 - 1] [i_0 - 1] [i_4 + 1])))))));
                                arr_13 [i_0] = arr_4 [i_1] [i_2] [i_3];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((1335601697U), (1335601697U)))), (min((min((var_10), (var_11))), (((/* implicit */unsigned long long int) ((2959365599U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))))))))));
                                var_16 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_6 - 1]))) <= (arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0])))) << ((((-(((int) arr_11 [i_0] [4] [i_2] [i_0] [i_0])))) + (1534200992)))))) : (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_6 - 1]))) <= (arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0])))) << ((((((-(((int) arr_11 [i_0] [4] [i_2] [i_0] [i_0])))) + (1534200992))) - (951692078))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_19 [i_0] [i_0] [i_1] [i_5]))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) (-(arr_17 [i_0] [i_0] [1] [i_2]))));
                    arr_21 [4] [i_1] [i_0] = min((((unsigned int) var_7)), (((/* implicit */unsigned int) -1525624385)));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)692)) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
        {
            arr_25 [i_0] = ((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0] [i_0] [i_7] [i_7] [(unsigned char)9]);
            arr_26 [i_0] [i_7] [i_7] |= ((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_7] [i_0 + 1] [i_0] [i_7])) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (signed char i_8 = 3; i_8 < 8; i_8 += 1) 
            {
                for (int i_9 = 2; i_9 < 9; i_9 += 2) 
                {
                    {
                        arr_32 [(unsigned short)9] [i_7] [i_7] [i_7] [(unsigned short)9] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        arr_33 [i_0] [i_8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (arr_4 [i_9 + 1] [i_8 - 3] [i_0 - 1]) : (arr_4 [i_9 - 2] [i_8 + 2] [i_0 + 1])));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [9ULL] [i_7] [9ULL] [i_7]))))) % (((/* implicit */int) arr_1 [i_7] [i_9]))));
                        arr_34 [i_0] [i_0] [i_8 - 2] [i_0] = ((/* implicit */long long int) arr_29 [i_0]);
                    }
                } 
            } 
            arr_35 [i_0] [i_0] [i_7] = ((/* implicit */_Bool) arr_9 [i_0] [i_7] [i_7] [i_0]);
        }
        for (short i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                for (int i_12 = 3; i_12 < 9; i_12 += 2) 
                {
                    {
                        arr_46 [i_0] [i_10] [i_11] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) (-(((((((/* implicit */int) var_0)) + (2147483647))) << (((arr_19 [i_0 - 1] [i_10] [i_0] [i_12 - 2]) - (348202790)))))))) : (((/* implicit */unsigned short) (-(((((((/* implicit */int) var_0)) + (2147483647))) << (((((((arr_19 [i_0 - 1] [i_10] [i_0] [i_12 - 2]) + (348202790))) + (1452305186))) - (3))))))));
                        arr_47 [i_0] [i_0] [i_10] [i_11] [i_0] [i_12 - 1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (short)7680)) ^ (((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
            var_20 -= ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_29 [i_10])))), (((/* implicit */int) ((((/* implicit */int) (short)-7703)) <= (((/* implicit */int) arr_29 [i_10])))))));
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
        {
            arr_50 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0))));
            arr_51 [i_0] [i_0] [i_0] = (~(((/* implicit */int) (_Bool)1)));
        }
        /* LoopNest 3 */
        for (int i_14 = 3; i_14 < 9; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 10; i_17 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) (~(((max((arr_30 [i_0] [i_14]), (((/* implicit */unsigned long long int) var_3)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_0]) <= (((/* implicit */unsigned int) var_6))))))))));
                            var_22 = ((/* implicit */signed char) (+(1500158817U)));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (short)7669)) < (((/* implicit */int) arr_14 [i_0 - 1] [i_14 - 2] [i_0 - 1] [i_0 - 1]))))))))));
                        }
                        var_24 = ((/* implicit */signed char) (-(min((((/* implicit */long long int) 1335601697U)), (((((/* implicit */long long int) 2959365599U)) & (6337294096248923243LL)))))));
                    }
                } 
            } 
        } 
    }
    for (short i_18 = 3; i_18 < 13; i_18 += 1) 
    {
        var_25 &= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [(signed char)10] [i_18 - 1]))))), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0))))));
        arr_62 [i_18] [i_18] = ((/* implicit */_Bool) (signed char)127);
        arr_63 [i_18] = ((/* implicit */unsigned long long int) arr_61 [i_18] [i_18]);
        var_26 = ((/* implicit */_Bool) ((short) ((int) (_Bool)1)));
        arr_64 [i_18] = ((/* implicit */int) (_Bool)1);
    }
    for (int i_19 = 0; i_19 < 11; i_19 += 1) /* same iter space */
    {
        arr_67 [i_19] = ((/* implicit */short) (_Bool)1);
        var_27 |= ((/* implicit */unsigned short) min(((~((+(arr_61 [(unsigned short)4] [i_19]))))), ((+(((/* implicit */int) var_0))))));
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 11; i_20 += 1) /* same iter space */
    {
        arr_72 [i_20] [i_20] = ((/* implicit */signed char) (_Bool)1);
        var_28 |= ((/* implicit */_Bool) ((unsigned long long int) arr_60 [i_20] [i_20]));
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 11; i_21 += 2) 
        {
            for (unsigned short i_22 = 2; i_22 < 10; i_22 += 1) 
            {
                {
                    var_29 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_68 [i_22 - 2] [(unsigned char)4])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_74 [i_21] [i_21]))))));
                    arr_77 [i_20] [i_21] [i_22] [i_21] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_75 [i_22 - 1] [i_21] [i_22 - 1])) ? (((/* implicit */int) ((signed char) var_11))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-32372)) : (((/* implicit */int) (short)32380))))));
                }
            } 
        } 
    }
}
