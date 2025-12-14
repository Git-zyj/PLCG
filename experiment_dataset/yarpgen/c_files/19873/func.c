/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19873
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
    var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_6)), (var_5))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                for (unsigned char i_3 = 4; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 32640)) ? (((/* implicit */long long int) (+(6U)))) : (((((/* implicit */_Bool) ((unsigned char) (unsigned short)0))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : ((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))))))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [4ULL] = ((/* implicit */unsigned long long int) -381271497);
                        }
                    } 
                } 
            } 
            var_16 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65516)) >> (((arr_14 [i_0]) - (1902914806))))))));
            var_17 = ((/* implicit */int) var_2);
            var_18 = ((/* implicit */_Bool) ((21ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_20 = ((/* implicit */unsigned char) ((_Bool) max((var_11), (((/* implicit */unsigned int) arr_6 [i_0 - 1])))));
        }
        var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_19 [i_0 - 2] [i_0 + 1] [i_0 + 1])) : (var_13)))), (((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) var_6))))) + (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65495))) : (2157566170790818543ULL)))))));
        var_22 *= ((/* implicit */short) var_8);
        var_23 = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */int) ((unsigned char) var_6))), (((((/* implicit */_Bool) var_1)) ? (arr_20 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_3)))))));
    }
    for (short i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)162))) - (arr_22 [i_6])))) ? (min((((/* implicit */long long int) (unsigned char)255)), (9223372036854775805LL))) : (((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) var_12))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) 3759458362U)) ? (var_8) : (-1406123446)))) + (max((2610109209085506683LL), (((/* implicit */long long int) arr_21 [i_6]))))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) arr_21 [i_8]);
                                arr_33 [i_6] [i_6] [i_6] [19] [i_6] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6] [21U])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [1U] [1U] [i_7] [i_9])))))) ? (arr_24 [i_6] [i_6]) : ((+(4135273596U))))) - (arr_24 [i_8] [i_8])));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) (~(var_11)));
                    arr_34 [i_6] [2U] [18] = ((/* implicit */int) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_3)))))))));
                    arr_35 [i_6] [i_7] = ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) ((980385551) >> (((-310335493) + (310335519))))))));
                }
            } 
        } 
        arr_36 [15U] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)1))))) ? ((((_Bool)1) ? (-2610109209085506670LL) : (((/* implicit */long long int) -301990491)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)235))))))));
    }
    for (short i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_37 [i_11] [i_11]) : (arr_37 [i_11] [i_11]))))));
        var_27 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_40 [i_11]) : (((/* implicit */unsigned int) var_12))))) ? (((((/* implicit */_Bool) arr_40 [i_11])) ? (3ULL) : (((/* implicit */unsigned long long int) 721283737)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_2))))))));
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_0))));
        var_29 = ((((/* implicit */int) (unsigned short)65518)) - (((/* implicit */int) (unsigned char)12)));
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 2) 
        {
            for (int i_14 = 1; i_14 < 19; i_14 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 22; i_15 += 2) 
                    {
                        for (int i_16 = 0; i_16 < 23; i_16 += 2) 
                        {
                            {
                                arr_55 [i_13] [i_13] [i_14 + 3] [i_13] [i_13] [i_14 + 3] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [i_12] [i_15 - 1] [i_12] [3ULL] [i_16] [(_Bool)1] [i_16])) >> (((/* implicit */int) ((7ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_12] [(_Bool)1] [i_14]))))))));
                                arr_56 [(_Bool)1] [12U] [10ULL] [12U] [12U] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */int) (unsigned short)26924)))) + (((/* implicit */int) arr_54 [i_14] [i_14] [i_15 - 1] [i_14] [i_16] [i_14]))));
                            }
                        } 
                    } 
                    arr_57 [i_14] [i_14] [i_14] = (~(((/* implicit */int) var_2)));
                    var_30 = ((/* implicit */unsigned short) ((arr_50 [i_14] [i_14 + 2] [i_14 + 4] [i_14 + 2] [i_14 + 2] [i_14 + 1]) - (((/* implicit */unsigned int) 7))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_17 = 0; i_17 < 23; i_17 += 2) 
        {
            /* LoopNest 2 */
            for (short i_18 = 0; i_18 < 23; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 2) 
                {
                    {
                        var_31 ^= ((/* implicit */unsigned char) (unsigned short)65535);
                        arr_66 [i_12] = ((/* implicit */_Bool) var_7);
                        var_32 = var_3;
                        var_33 = ((/* implicit */unsigned char) (unsigned short)38999);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_20 = 1; i_20 < 20; i_20 += 2) 
            {
                for (unsigned char i_21 = 0; i_21 < 23; i_21 += 2) 
                {
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */int) var_2);
                            arr_75 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) (unsigned char)158)) - (156)))));
                        }
                    } 
                } 
            } 
            arr_76 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) (-((+(var_13)))));
        }
        for (int i_23 = 3; i_23 < 20; i_23 += 2) 
        {
            arr_79 [i_12] [(signed char)10] = ((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_23 + 2] [i_12] [i_12] [i_12])))));
            var_35 = ((/* implicit */_Bool) (+(arr_51 [i_23] [(_Bool)1] [i_23 - 3] [i_23])));
            var_36 = ((/* implicit */unsigned char) min((var_36), ((unsigned char)0)));
        }
        var_37 = ((/* implicit */unsigned long long int) var_2);
    }
    var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)11)))))));
}
