/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24464
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
    var_15 = ((/* implicit */signed char) (~((+((~(var_12)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((~((-9223372036854775807LL - 1LL)))))))));
                        arr_14 [i_0] [(short)5] [i_2] [7] = ((/* implicit */unsigned char) (+((-((-(((/* implicit */int) arr_1 [(unsigned char)4]))))))));
                        var_17 = ((/* implicit */int) (-((-((~(var_3)))))));
                        arr_15 [i_3] [9] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */int) (+((~(9223372036854775807LL)))));
                        var_19 &= ((/* implicit */short) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) (-((~(((/* implicit */int) (signed char)119))))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 4; i_6 < 9; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */int) (~((-(var_9)))));
                            var_22 = ((/* implicit */signed char) (~((~(-1958376380)))));
                            var_23 = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_8 [i_5] [i_2] [i_1]))))));
                            arr_25 [i_0] &= ((/* implicit */long long int) (~((-(arr_10 [(signed char)4] [i_2] [i_5] [2])))));
                            var_24 = ((/* implicit */long long int) (-((~(530012252U)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            arr_31 [i_8] [i_7] [(_Bool)1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (-((-(arr_10 [5U] [(_Bool)1] [i_2 + 1] [(unsigned char)4])))));
                            arr_32 [7U] [i_7] [(unsigned char)5] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1] [i_1])))))));
                        }
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            arr_35 [i_9] [i_7] [i_2] [i_1] [(short)9] [(unsigned char)5] [i_0] = (+((~((-9223372036854775807LL - 1LL)))));
                            var_25 = ((/* implicit */signed char) (~((~(var_11)))));
                            var_26 ^= ((/* implicit */signed char) (+((~(2084443897)))));
                            arr_36 [0U] [i_0] [i_2 + 1] [2U] [i_9] = (!(((/* implicit */_Bool) (+(arr_2 [i_0] [(signed char)9])))));
                        }
                        for (int i_10 = 3; i_10 < 7; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)-103))))));
                            arr_39 [i_10] [i_7] [(unsigned char)5] [(unsigned char)5] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_7])))))));
                            var_28 = ((/* implicit */long long int) (+((~(((/* implicit */int) (_Bool)0))))));
                        }
                        for (unsigned int i_11 = 2; i_11 < 9; i_11 += 4) 
                        {
                            var_29 = ((/* implicit */signed char) (-((-(((/* implicit */int) (_Bool)1))))));
                            var_30 = ((/* implicit */signed char) (+((-(arr_29 [8] [i_7] [i_7] [i_2] [i_1] [i_0] [1U])))));
                            var_31 *= ((/* implicit */int) (!((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))));
                        }
                        arr_42 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (+((-(-6481114964083425187LL)))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            var_32 -= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3294672753U)))))));
                            arr_45 [i_12] [3LL] [i_2] [i_7] [8U] = ((/* implicit */unsigned char) (-(2084443897)));
                        }
                        arr_46 [i_0] [9LL] [(_Bool)1] [i_7] [i_0] [i_7] = ((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)0))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_13 = 2; i_13 < 8; i_13 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned int) (-((-(1958376363)))));
                            arr_51 [i_0] [i_1] [i_2 - 1] [i_1] [i_14] [3] = ((/* implicit */short) (-((~(var_5)))));
                            arr_52 [i_0] [(signed char)1] [8U] [7U] [i_14] = (-((+(var_6))));
                            arr_53 [i_1] [(signed char)6] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_11))))));
                        }
                        for (int i_15 = 2; i_15 < 6; i_15 += 4) 
                        {
                            arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [5U] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3904328840U)))))));
                            arr_59 [0LL] [i_1] [i_1] [6] = ((/* implicit */_Bool) (-((+(arr_54 [i_0] [i_1])))));
                            var_34 = ((/* implicit */unsigned int) (-((~(6481114964083425186LL)))));
                        }
                        var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
                    }
                    arr_60 [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1)))))))));
                    var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((-(var_0))))))));
                }
                for (signed char i_16 = 2; i_16 < 9; i_16 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_17 = 2; i_17 < 9; i_17 += 2) 
                    {
                        for (signed char i_18 = 0; i_18 < 10; i_18 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */short) (+((~((~(arr_57 [i_0] [4LL] [i_18])))))));
                                var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)119)))))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned int) (-((+((-(((/* implicit */int) var_2))))))));
                    arr_69 [i_16] = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) (signed char)-116))))))));
                    arr_70 [i_0] [i_1] [i_16] [i_0] &= ((/* implicit */_Bool) (~((~((+((-2147483647 - 1))))))));
                }
                for (signed char i_19 = 2; i_19 < 9; i_19 += 3) /* same iter space */
                {
                    arr_74 [i_0] [i_19] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(1958376371)))))))));
                    arr_75 [i_19] [(_Bool)1] [i_1] [i_19] = ((/* implicit */_Bool) (~((-((~(((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (long long int i_20 = 3; i_20 < 9; i_20 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned int) (-((-((-(((/* implicit */int) (signed char)124))))))));
                        var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) (-((-(var_5))))))));
                        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_0] [4] [i_19 - 2] [i_19] [i_19 - 2])))))))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_21 = 1; i_21 < 8; i_21 += 4) 
                        {
                            arr_81 [i_19] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_5 [7LL])))))))));
                            arr_82 [i_19] [i_20 + 1] [i_19] [i_1] [i_19] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)80))));
                            arr_83 [i_21] [i_19] [5] [i_19] [4U] = ((/* implicit */unsigned int) (-((~((~(arr_10 [i_21 + 1] [0] [(_Bool)1] [(short)6])))))));
                            arr_84 [i_19] [4] [i_19] [i_19] [i_20] [i_21] [i_21] = (-((+((-(2175606633U))))));
                        }
                        for (int i_22 = 0; i_22 < 10; i_22 += 4) 
                        {
                            var_43 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)127))));
                            var_44 *= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(2088064358U))))))));
                            var_45 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_85 [i_20] [i_1] [i_19 - 2] [i_20] [i_22])))))))));
                        }
                        for (signed char i_23 = 0; i_23 < 10; i_23 += 2) 
                        {
                            arr_90 [i_0] [i_0] [(unsigned char)2] [i_19 - 1] [i_20] [i_19] = ((/* implicit */unsigned char) (~((~((~(var_12)))))));
                            arr_91 [0U] [i_19] [i_19] [i_19] [5] = ((/* implicit */signed char) (~((+(((/* implicit */int) (_Bool)0))))));
                            arr_92 [i_19] [i_19] [9U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                        }
                        var_46 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))))));
                    }
                }
                /* LoopNest 3 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (signed char i_25 = 2; i_25 < 9; i_25 += 4) 
                    {
                        for (unsigned int i_26 = 1; i_26 < 8; i_26 += 3) 
                        {
                            {
                                var_47 = ((/* implicit */long long int) (~((-((~(var_11)))))));
                                var_48 = ((/* implicit */long long int) (-((~((-(((/* implicit */int) arr_18 [i_26] [i_25 - 2] [i_1] [i_0]))))))));
                                var_49 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((~(var_6))))))));
                                var_50 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)103)))))))));
                            }
                        } 
                    } 
                } 
                arr_101 [i_0] [6] = ((/* implicit */_Bool) (-((+((-(var_0)))))));
            }
        } 
    } 
    var_51 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
}
