/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41144
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
    var_19 &= ((/* implicit */short) (((_Bool)1) ? (14367872697091382407ULL) : (4266774267984482397ULL)));
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 4078871376618169208ULL))));
    var_21 = ((((((/* implicit */_Bool) ((signed char) var_17))) ? (max((var_5), (14367872697091382424ULL))) : (var_18))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -7422021620595789709LL)) ^ (16901709444093164136ULL)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_22 = ((/* implicit */short) ((int) (_Bool)0));
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(2506173362318047298LL))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 536862720)) ? (2506173362318047306LL) : (((/* implicit */long long int) arr_0 [i_0]))))) : (14367872697091382411ULL)))) ? (((((/* implicit */_Bool) (+(11733540075752138081ULL)))) ? (((/* implicit */unsigned long long int) 2147483647)) : (1545034629616387487ULL))) : (137437904896ULL))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (unsigned char)237))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                        {
                            arr_14 [i_2] [i_2] [i_2] [i_3 - 2] [(_Bool)1] [i_2 + 3] = (-(((/* implicit */int) arr_6 [i_2 + 2] [i_2] [i_3 - 2] [i_3 - 2])));
                            var_25 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) > (((int) 8114325066258386595ULL))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (-(((int) -295436159))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                        {
                            arr_18 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_3] [i_5] [i_5]);
                            var_26 = ((/* implicit */unsigned long long int) ((7422021620595789709LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 15; i_6 += 3) 
                        {
                            var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_22 [i_0] [17] [i_2] [i_2] [i_2] [i_3 + 1] [i_6])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)232))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_0] [i_6 + 2] [i_2 + 2] [i_3] [i_6])), (arr_3 [i_1]))))) % (((((/* implicit */_Bool) 14367872697091382409ULL)) ? (7609511436997501880ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(short)9] [i_3 + 1] [i_2] [i_3] [i_6 + 3] [10ULL])))))))));
                            var_28 |= ((/* implicit */unsigned short) (_Bool)1);
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        arr_26 [i_2 - 1] [i_1] |= ((/* implicit */unsigned long long int) (~(((int) arr_8 [i_2 + 3]))));
                        var_29 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 8125536107187210233ULL)) ? (((/* implicit */int) arr_12 [i_2] [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 3])) : (var_9)));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_31 [i_0] [i_1] [i_2] [i_2 - 1] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((((/* implicit */int) ((short) 18446744073709551604ULL))) ^ (((/* implicit */int) arr_10 [i_9]))))));
                                var_30 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (334736225)))) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44))));
                                var_31 |= ((/* implicit */_Bool) max((((3858779227663340113ULL) >> (((-2549923629679427858LL) + (2549923629679427883LL))))), (((/* implicit */unsigned long long int) (short)2355))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */int) max((var_32), (min((2147483647), (((/* implicit */int) var_2))))));
                        var_33 = arr_17 [(unsigned char)3] [(short)10] [i_2 + 1] [i_0] [i_2];
                        var_34 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)19129)) - (((/* implicit */int) (_Bool)1)))) % (((((/* implicit */int) (unsigned char)19)) << (((/* implicit */int) (_Bool)1))))));
                        var_35 = ((/* implicit */long long int) var_1);
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (var_18)));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1471474765)) ? (-2506173362318047325LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235)))));
                        var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? ((+(arr_34 [i_0] [i_1] [i_0] [i_0]))) : (((((/* implicit */_Bool) 7776294951200222679ULL)) ? (arr_28 [i_0] [i_1] [i_11]) : (arr_36 [i_11] [i_11])))));
                        var_39 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [i_2] [i_2 + 2] [i_2 + 1] [i_2 + 3] [i_2 + 2]))));
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_16 [i_1])) >= (1362953777524715720LL))))));
                        var_41 += ((((/* implicit */_Bool) -1471474766)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) 1043780084))))) : (((/* implicit */int) arr_3 [i_0])));
                        arr_40 [i_2] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_2])) ? (var_17) : (arr_35 [i_2])));
                        arr_41 [i_0] [i_0] [i_2] [i_12] = ((/* implicit */_Bool) 4154920636U);
                    }
                    var_42 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (short)-30088)), (18084207295002397539ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) << (((18446744073709551612ULL) - (18446744073709551611ULL))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 18; i_13 += 4) 
        {
            for (unsigned int i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                {
                    arr_46 [i_0] [i_0] [i_14] = ((/* implicit */int) min(((_Bool)1), ((((_Bool)1) && (((/* implicit */_Bool) 15115904201583549243ULL))))));
                    var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) 1378092501232698470LL))));
                    var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 541186147266224176ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)0))))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */unsigned long long int) -7252089608406137842LL)) % (arr_34 [i_14] [i_14] [i_13] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0])))));
                }
            } 
        } 
    }
}
