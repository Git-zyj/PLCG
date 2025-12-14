/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44733
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) var_13);
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_4 [0]) != (((/* implicit */long long int) ((unsigned int) arr_1 [i_0])))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_9 [i_0] [0LL] [i_1] [i_0])), (var_14))), (min((((/* implicit */long long int) var_2)), (-1LL)))))), (min((min((((/* implicit */unsigned long long int) var_8)), (arr_3 [i_0] [i_2]))), (((/* implicit */unsigned long long int) min((-1LL), (((/* implicit */long long int) arr_8 [(_Bool)1] [i_1] [(_Bool)1] [9])))))))));
                    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [4LL]))));
                    var_19 = ((/* implicit */int) (+(((long long int) ((int) var_1)))));
                    arr_12 [2] [i_1] [i_0] [2] = ((((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) arr_0 [i_0] [i_0]))))) != (var_6));
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_14))))));
                }
                /* LoopSeq 4 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_3] [i_3] = ((int) ((long long int) (~(((/* implicit */int) var_13)))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((arr_5 [i_3 - 1] [i_4 - 1] [i_4]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (16711680U) : (16711680U)))) : (max((0LL), (((/* implicit */long long int) 2864677993U)))))), (((/* implicit */long long int) var_15))));
                                arr_22 [i_0] [i_1] [i_0] [0] [1LL] = ((/* implicit */int) arr_15 [0] [6LL] [i_5]);
                                var_20 *= ((/* implicit */int) (+(((min((((/* implicit */long long int) var_12)), (arr_15 [i_0] [i_0] [(unsigned short)0]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [8] [10ULL] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_4 - 1] [i_5])) : (((/* implicit */int) var_2)))))))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) ((_Bool) ((int) min((((/* implicit */long long int) var_10)), (0LL)))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3 - 1]))))) >> (((((int) arr_18 [i_3 - 1] [7LL] [i_3] [i_3])) - (2144325002)))));
                    var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (+(((unsigned long long int) arr_0 [2] [(_Bool)1])))))));
                    var_23 -= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) min((arr_4 [(_Bool)1]), (((/* implicit */long long int) var_13))))) && (((/* implicit */_Bool) min((6447495958892161527LL), (((/* implicit */long long int) var_2))))))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_28 [5] [i_0] [i_0] [5] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_14 [i_0] [i_0])) != (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */long long int) var_1)) == (6447495958892161527LL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((int) arr_29 [i_0]))) + ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_14))))));
                                var_25 = ((/* implicit */_Bool) min(((+((+(var_3))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))) < (((long long int) var_16)))))));
                            }
                        } 
                    } 
                    var_26 = (-(((unsigned int) arr_27 [i_6 - 1] [i_6 - 1] [i_1])));
                }
                /* vectorizable */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7608389690251404019LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_9] [2]))) : (arr_20 [i_0] [i_9 - 1] [i_9 - 1])));
                        var_28 += ((/* implicit */_Bool) var_0);
                    }
                    for (int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 3; i_12 < 9; i_12 += 1) 
                        {
                            var_29 = ((/* implicit */int) ((long long int) arr_40 [i_9] [i_9 - 1] [i_9 - 1] [i_9]));
                            var_30 = ((/* implicit */long long int) ((int) (-(arr_43 [i_12]))));
                            var_31 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) arr_10 [4])) : (((/* implicit */int) var_4))))) == (arr_26 [i_9] [i_9 - 1] [i_9 - 1])));
                            arr_46 [i_0] [i_11] [i_0] [6] [i_0] &= ((/* implicit */unsigned int) (-(var_5)));
                        }
                        for (long long int i_13 = 1; i_13 < 9; i_13 += 1) 
                        {
                            arr_49 [i_0] [i_1] [i_1] [(_Bool)1] [i_13] = ((/* implicit */int) ((unsigned long long int) ((arr_38 [i_0] [i_1] [i_0] [i_0]) ? (var_3) : (((/* implicit */unsigned int) 536870912)))));
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_9 - 1])) ? (arr_15 [i_0] [i_1] [i_9 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            var_33 |= ((/* implicit */long long int) ((arr_42 [i_11] [i_1] [i_9 - 1] [i_11] [(unsigned short)4]) ? (((/* implicit */int) arr_42 [i_11] [i_11] [2LL] [i_11] [i_14])) : (((/* implicit */int) arr_42 [i_11] [i_9 - 1] [4U] [0] [i_14]))));
                            var_34 = ((/* implicit */long long int) (+((+(((/* implicit */int) var_12))))));
                            arr_53 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5796197941289081322LL)) ? (950725109) : (-686062989)));
                            var_35 = ((/* implicit */unsigned int) var_2);
                        }
                        arr_54 [7LL] [7LL] [i_0] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) 2095125061U)) <= (var_14))))));
                        arr_55 [3U] [i_0] [i_9] [i_11] = ((int) arr_9 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_0]);
                        var_36 = ((long long int) var_2);
                    }
                    /* LoopNest 2 */
                    for (long long int i_15 = 4; i_15 < 9; i_15 += 3) 
                    {
                        for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
                        {
                            {
                                arr_62 [i_0] [i_0] [i_0] [i_1] [0LL] [i_15] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_9 - 1] [i_9 - 1] [i_15 - 4])) ? ((+(arr_50 [i_16] [i_16] [i_0] [0LL] [i_0] [i_0] [i_0]))) : (((long long int) var_9))));
                                var_37 = ((/* implicit */long long int) arr_41 [i_0] [i_1] [i_9] [i_15]);
                            }
                        } 
                    } 
                    var_38 ^= ((/* implicit */_Bool) ((int) var_3));
                    arr_63 [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 767778091)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10))));
                }
                /* vectorizable */
                for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                {
                    var_39 = ((/* implicit */long long int) ((((arr_24 [i_0] [i_0] [i_1] [i_17]) ? (var_5) : (((/* implicit */int) arr_38 [10] [10] [10] [4LL])))) * (((/* implicit */int) arr_64 [i_0] [(_Bool)1] [i_0]))));
                    arr_66 [i_0] [i_0] [10U] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 11; i_19 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
                                arr_72 [i_0] [i_0] [(unsigned short)5] [(_Bool)1] [10LL] [8] [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [(unsigned short)2]))));
                                var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((unsigned long long int) arr_58 [i_0] [i_17])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_42 = ((/* implicit */long long int) var_4);
    var_43 += ((/* implicit */long long int) var_10);
}
