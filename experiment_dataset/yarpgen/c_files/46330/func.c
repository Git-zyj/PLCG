/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46330
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        {
                            arr_12 [(unsigned short)6] [i_1] [5ULL] [i_1] [(unsigned short)6] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (min((min((18446744073709551605ULL), (11038857512015308066ULL))), (((/* implicit */unsigned long long int) var_2)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) 2147483647)) : (var_6)))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) max((var_1), (((/* implicit */unsigned long long int) 2147483647)))));
                            var_11 &= ((/* implicit */short) max((arr_4 [i_1 + 1]), (((/* implicit */unsigned long long int) var_0))));
                        }
                    } 
                } 
            } 
            var_12 -= min((arr_7 [i_0] [i_1 + 3] [i_1] [i_0]), (max((arr_7 [i_0] [i_1 + 4] [i_0] [i_1 + 3]), (((/* implicit */unsigned long long int) var_3)))));
        }
        var_13 = ((/* implicit */signed char) (-((((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 4; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            {
                                arr_24 [i_7] [i_0] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                                var_14 = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_6 + 1] [i_5] [i_6])) ? (arr_2 [i_6 - 1] [i_5] [i_6 + 3]) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))) : (arr_11 [i_6 + 3] [i_5] [i_6 - 1] [i_5] [i_6 - 1] [(signed char)2])));
                    arr_25 [i_0] [5] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) var_7))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_9 = 2; i_9 < 13; i_9 += 2) 
        {
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((signed char) arr_26 [i_9 + 1])))));
            /* LoopSeq 1 */
            for (signed char i_10 = 2; i_10 < 14; i_10 += 3) 
            {
                var_17 = ((/* implicit */unsigned long long int) var_7);
                arr_30 [13] [i_10] [2] = ((unsigned long long int) var_8);
            }
            var_18 -= ((/* implicit */short) ((unsigned long long int) ((int) var_10)));
        }
    }
    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            for (int i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        var_19 &= ((/* implicit */signed char) var_5);
                        var_20 = ((/* implicit */short) ((unsigned int) max((((/* implicit */int) var_4)), (2147483647))));
                    }
                    for (signed char i_15 = 1; i_15 < 18; i_15 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_31 [i_13] [i_13]))));
                        var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_10)) : (var_3)))));
                    }
                    for (signed char i_16 = 1; i_16 < 18; i_16 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(-2147483647)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_16] [i_13] [i_13] [i_12] [i_12] [i_11])))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 2147483647)) : (var_1))))))))));
                        arr_50 [i_12] [i_11] [i_12] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_7))))));
                    }
                    var_24 = ((/* implicit */_Bool) min((-2147483647), (-2147483647)));
                    var_25 = ((/* implicit */unsigned long long int) 2147483647);
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) max((min((var_7), ((-(((/* implicit */int) arr_49 [i_11] [i_11] [i_11] [i_11] [i_11] [5ULL])))))), (((/* implicit */int) var_2)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_17 = 2; i_17 < 16; i_17 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 1) 
                {
                    {
                        var_27 = arr_49 [2U] [i_19] [i_17] [i_17] [i_11] [i_11];
                        var_28 ^= var_3;
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_37 [i_19] [i_19 - 2] [(unsigned short)11] [i_19 + 1]))))));
                        arr_58 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) 2147483647)) ? (arr_31 [i_19] [i_17]) : ((-2147483647 - 1)))) : ((-(2147483647)))));
                    }
                } 
            } 
            var_30 = ((/* implicit */int) arr_52 [i_11] [1U] [i_17]);
        }
        for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 3) 
        {
            arr_62 [i_11] [i_11] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) max((var_10), (var_5)))) ? (((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) var_5))))))));
            arr_63 [i_11] [i_11] = min((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) arr_52 [i_11] [i_20] [i_20])));
        }
        /* LoopNest 2 */
        for (long long int i_21 = 0; i_21 < 20; i_21 += 4) 
        {
            for (signed char i_22 = 4; i_22 < 19; i_22 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 1; i_23 < 18; i_23 += 3) 
                    {
                        for (unsigned long long int i_24 = 1; i_24 < 17; i_24 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) var_0))));
                                var_32 = ((_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_33 [i_21] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            }
                        } 
                    } 
                    var_33 = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483647) : (((((/* implicit */_Bool) var_3)) ? (2147483647) : (-2147483647))));
                    var_34 = ((/* implicit */short) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (arr_35 [i_11] [i_21]) : (((/* implicit */unsigned long long int) var_5)))))), (arr_48 [i_11] [i_11] [i_11] [i_11])));
                    arr_75 [i_11] [4] [i_11] = ((/* implicit */signed char) var_1);
                    arr_76 [i_11] = ((/* implicit */_Bool) 2147483647);
                }
            } 
        } 
    }
    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((signed char) ((unsigned long long int) 2147483647))))));
}
