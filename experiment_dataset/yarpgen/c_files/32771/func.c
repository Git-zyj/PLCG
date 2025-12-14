/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32771
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1270238092U)) ? (((int) var_1)) : (((/* implicit */int) (unsigned short)57519)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) (unsigned char)70);
                            var_19 = ((/* implicit */unsigned int) ((min((arr_10 [i_2 - 1] [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 1]), (((/* implicit */int) arr_7 [i_2 + 1] [i_0] [i_2 - 1] [i_3])))) - (((/* implicit */int) var_16))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_0 [i_4] [i_4]))));
                    var_21 = ((/* implicit */int) arr_9 [i_4]);
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned char)186)))) / (((arr_11 [(unsigned char)8] [i_1] [i_4] [i_4]) | (((/* implicit */int) arr_6 [i_0] [i_0] [0LL])))))))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(short)11] [i_4]))) | (arr_1 [i_1])))))) * (arr_3 [(short)2]))))));
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_24 = ((/* implicit */signed char) ((unsigned short) arr_12 [i_0] [i_5 - 1]));
                    var_25 = ((/* implicit */unsigned short) var_16);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) & (arr_1 [i_0])))) / (((((/* implicit */long long int) ((/* implicit */int) var_3))) + (arr_19 [i_0])))))));
                                var_27 = ((/* implicit */short) ((((((/* implicit */long long int) arr_10 [(unsigned short)7] [i_0] [i_5 - 1] [i_5 - 1] [(unsigned short)7])) + (min((arr_2 [i_0]), (arr_12 [i_0] [i_0]))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0] [(signed char)9]), (((/* implicit */int) arr_16 [i_0] [i_5] [i_0] [i_7]))))) ? (((((/* implicit */int) (unsigned short)57519)) >> (((((/* implicit */int) (unsigned char)170)) - (163))))) : (((((/* implicit */int) (unsigned char)80)) ^ (((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_8 = 3; i_8 < 15; i_8 += 3) 
                {
                    var_28 = ((/* implicit */_Bool) ((int) max((((/* implicit */signed char) var_3)), (arr_8 [i_0] [i_0] [i_0] [i_8 - 3]))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_9 = 3; i_9 < 14; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) 2366656499U))));
                        var_30 = ((/* implicit */short) ((unsigned int) (unsigned short)35537));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) arr_26 [i_0] [i_0] [i_1] [i_8 - 1] [i_10]))));
                        var_32 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_1])) : (4294967295U)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_13)) * (((/* implicit */int) (unsigned short)29998)))))), (var_4)));
                        var_33 = ((/* implicit */unsigned int) arr_11 [0ULL] [i_1] [i_0] [i_10]);
                        var_34 = ((/* implicit */int) arr_21 [i_8 + 1] [i_8 - 1] [i_8 - 1]);
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_8 - 2] [i_8 - 2] [i_8 - 3] [i_8 + 1] [i_8 - 3])) * (((/* implicit */int) arr_22 [i_8 - 2] [i_8 - 2] [(signed char)10] [i_8 + 1] [i_8 - 2]))))) ? (((/* implicit */int) min((arr_22 [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 + 1] [13]), (arr_22 [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8 - 1])))) : (min((var_4), (((/* implicit */int) arr_22 [i_8 - 2] [i_8 - 2] [i_8] [i_8 + 1] [i_8 - 2]))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3431733612799308770ULL)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned short)29984))))) : (((/* implicit */int) (_Bool)0))));
                        var_37 = ((/* implicit */short) ((int) arr_27 [i_8] [i_0] [i_8 - 3] [i_0]));
                        var_38 = ((/* implicit */unsigned long long int) var_15);
                    }
                    for (int i_12 = 0; i_12 < 16; i_12 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 16; i_13 += 3) 
                        {
                            var_39 = ((/* implicit */_Bool) var_0);
                            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) (short)-32056)) ? (((/* implicit */int) (unsigned short)30004)) : (((/* implicit */int) (_Bool)1)))))));
                            var_41 |= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) + (arr_0 [i_12] [i_8 - 2])));
                        }
                        for (int i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            var_42 &= ((/* implicit */int) ((((((/* implicit */int) var_6)) * (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_12] [i_8 - 1] [(unsigned char)0])))) > (((/* implicit */int) arr_9 [i_1]))));
                            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) max((((/* implicit */int) var_0)), ((-(((/* implicit */int) var_0)))))))));
                            var_44 = ((/* implicit */unsigned int) ((((arr_3 [i_12]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_14] [i_0] [i_0] [i_0] [i_0])) ? (arr_11 [(short)3] [(short)3] [i_0] [i_12]) : (2139095040)))))) * (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_11)) ^ (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_12] [i_14])))))));
                        }
                        /* vectorizable */
                        for (short i_15 = 0; i_15 < 16; i_15 += 4) 
                        {
                            var_45 = ((/* implicit */unsigned short) 1181413123U);
                            var_46 = arr_28 [14LL] [i_8 - 1] [i_0] [(unsigned short)10];
                            var_47 = ((/* implicit */unsigned short) var_7);
                        }
                        var_48 = ((/* implicit */signed char) arr_18 [(short)5] [i_12] [i_0] [(short)7] [i_0] [i_0] [i_0]);
                    }
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_49 = ((/* implicit */_Bool) max((var_49), (((((unsigned int) arr_25 [i_1] [i_1] [(short)4] [(unsigned char)4] [i_1] [12])) < (((/* implicit */unsigned int) var_4))))));
                    var_50 = ((/* implicit */unsigned int) (!(var_7)));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 4) 
                        {
                            {
                                var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) 1447997287U))))) == (((((/* implicit */_Bool) arr_12 [i_0] [i_18])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_34 [i_17] [i_17] [i_18] [i_17])) : (((/* implicit */int) arr_28 [i_1] [i_16] [i_18] [i_16])))) : (((((/* implicit */int) (unsigned char)30)) / (((/* implicit */int) arr_5 [i_0] [i_1])))))))))));
                                var_52 = ((/* implicit */short) arr_32 [i_1] [i_1] [i_0]);
                            }
                        } 
                    } 
                }
                var_53 = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned char)207)))))), (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))) / (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
