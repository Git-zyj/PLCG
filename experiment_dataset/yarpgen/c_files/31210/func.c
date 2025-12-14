/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31210
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
    var_10 = ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) arr_8 [(_Bool)1] [i_2 - 1]);
                    var_12 += ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_1 + 3])) ^ (((/* implicit */int) arr_2 [i_1 + 1])))) * (((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 + 1]))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned char) arr_11 [i_0]);
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((arr_6 [i_2] [i_2] [i_2 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9917))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_3]))) : (arr_11 [i_2]))))) - (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)55618)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (_Bool)0))))))))))));
                            arr_14 [i_0] [i_1] [i_1] [i_0] [i_1] [i_4] &= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)20001)) & (((((/* implicit */int) (unsigned char)230)) & (((/* implicit */int) arr_13 [i_3] [i_3] [i_2] [i_1] [i_0 + 1])))))) | (((/* implicit */int) min((arr_12 [i_0 - 1] [i_3 + 1]), (var_4))))));
                            arr_15 [i_4 + 2] [i_3] [i_2 + 1] [i_1] [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_3 - 3] [i_3])) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56248)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156)))))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_12 [i_2 + 2] [i_0])))))))));
                            var_15 -= ((/* implicit */unsigned char) var_3);
                        }
                        /* vectorizable */
                        for (long long int i_5 = 3; i_5 < 12; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_1 - 1] [(unsigned char)0] = ((/* implicit */unsigned short) (unsigned char)5);
                            var_16 = var_4;
                            arr_20 [i_3] [i_3] [i_0 - 3] [i_0 - 3] [i_0 - 3] = ((/* implicit */long long int) (_Bool)1);
                        }
                        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 4) 
                        {
                            var_17 &= ((/* implicit */unsigned char) ((min(((~(var_9))), (((/* implicit */long long int) ((unsigned char) var_3))))) != (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 + 2])) << ((((((~(((/* implicit */int) (_Bool)0)))) + (32))) - (31))))))));
                            arr_24 [i_1] [i_1] [i_1] [i_6 + 1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)45554))));
                            arr_25 [i_0] [i_1] [i_2] [i_3 + 3] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (unsigned char)1)), ((unsigned short)58148)));
                            arr_26 [(unsigned char)2] [i_1] [i_1] [i_1] [i_1] = var_8;
                        }
                        for (unsigned short i_7 = 3; i_7 < 10; i_7 += 1) 
                        {
                            arr_31 [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned short) (unsigned char)226));
                            var_18 = ((/* implicit */long long int) max((var_18), (max((((/* implicit */long long int) (unsigned short)65528)), (((((/* implicit */_Bool) (unsigned short)33066)) ? (((((/* implicit */_Bool) (unsigned short)42026)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17720))) : (arr_8 [9LL] [9LL]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239)))))))));
                            var_19 += ((/* implicit */unsigned short) (+(var_6)));
                        }
                        arr_32 [i_2] = ((/* implicit */long long int) arr_13 [i_3 - 1] [i_2] [i_0] [i_1] [i_0]);
                        var_20 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (unsigned short)19975)) && ((_Bool)1)))));
                    }
                    for (long long int i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        var_21 += ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_8 + 1] [(unsigned short)4]))) - (((((/* implicit */_Bool) (unsigned char)204)) ? (arr_4 [i_1] [i_2 + 2]) : (arr_33 [i_0] [i_1] [(_Bool)1] [i_2] [i_0])))))));
                        var_22 = ((long long int) ((((/* implicit */_Bool) ((unsigned char) arr_33 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_8 + 1] [i_8]))) ? (((/* implicit */int) ((((/* implicit */int) arr_36 [i_8])) != (((/* implicit */int) (unsigned short)17720))))) : (((((/* implicit */_Bool) (unsigned short)45561)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (unsigned char)164))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 2; i_10 < 10; i_10 += 1) 
                        {
                            var_23 &= arr_2 [(_Bool)1];
                            var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_21 [i_0] [i_1 - 2] [i_2 + 2] [i_0 - 2] [i_2 + 1]) & (arr_38 [i_0 - 3] [i_1] [(unsigned char)5] [i_9])))) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)57163)))) != (((/* implicit */int) arr_28 [i_2] [i_1] [i_0] [(unsigned char)3] [(unsigned char)4]))))) : (((/* implicit */int) arr_5 [i_0 + 1]))));
                            arr_41 [i_10 + 2] [(unsigned char)6] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) 7664950020737424342LL));
                            arr_42 [i_0] [i_1 - 2] [(unsigned short)1] [i_9] [i_10] [(unsigned short)1] [i_2 - 1] = ((/* implicit */unsigned short) var_2);
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_11 = 2; i_11 < 10; i_11 += 1) 
                        {
                            arr_45 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = (!(((/* implicit */_Bool) arr_28 [i_2 + 1] [i_9] [i_2 + 1] [i_1] [(unsigned char)5])));
                            arr_46 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)57163)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (unsigned char)97))));
                            arr_47 [i_0] [i_0] [i_0 - 3] [i_0] [i_0] [i_0 + 1] = ((/* implicit */long long int) (unsigned char)67);
                        }
                        for (unsigned char i_12 = 2; i_12 < 11; i_12 += 3) 
                        {
                            arr_50 [i_1 + 1] [i_9] = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) -7664950020737424342LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)64)))))), (((/* implicit */int) arr_35 [i_0] [i_1]))));
                            var_25 |= ((/* implicit */long long int) var_7);
                            var_26 += var_7;
                            arr_51 [i_0] [i_0] [i_1] [i_2] [i_9] [i_9] = ((((/* implicit */_Bool) max((var_7), (var_0)))) && (((((/* implicit */_Bool) (unsigned char)17)) || (((/* implicit */_Bool) (unsigned char)179)))));
                        }
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            var_27 += ((/* implicit */unsigned char) var_9);
                            var_28 = ((/* implicit */_Bool) var_5);
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) var_4))));
                            arr_54 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 3] = ((/* implicit */unsigned char) ((_Bool) (unsigned char)174));
                            arr_55 [i_0] [i_0] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)26558)));
                        }
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26551)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9898))) : (-642099685649292181LL)))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) (unsigned short)23292)))) : ((~((-(((/* implicit */int) var_8))))))));
                    }
                    var_31 = ((/* implicit */_Bool) (unsigned short)45574);
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) var_4))));
                }
            } 
        } 
    } 
    var_33 |= ((/* implicit */unsigned char) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
