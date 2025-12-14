/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223977
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
    var_18 = (-(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (unsigned char)128))))));
    var_19 |= ((/* implicit */unsigned int) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */int) max((var_8), ((unsigned short)13977)))) : ((-(((/* implicit */int) var_1))))))));
    var_20 |= ((/* implicit */_Bool) ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) 9535896803566537426ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    var_21 = min((((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1])) ? (arr_7 [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))), (((/* implicit */long long int) arr_4 [i_2 + 1] [i_2 + 1])));
                    var_22 = ((/* implicit */long long int) (~(((((-2418177766200662151LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-22))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))) : (2147483520)))));
                    var_23 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_2)) & (2147483509)))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_4 - 1] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) 2032785627)) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1])))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] = (~(((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1])))));
                            var_25 = ((/* implicit */signed char) (~(arr_6 [i_4 + 2] [i_4 + 2] [i_1])));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_27 = ((/* implicit */unsigned char) 431803667U);
                        }
                        for (unsigned char i_8 = 4; i_8 < 17; i_8 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1]);
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_1]);
                        }
                        var_29 = ((/* implicit */unsigned short) (~(arr_24 [i_1] [i_1] [i_1] [i_4 - 1])));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)128)) / (((/* implicit */int) (signed char)116))))) * (4294967295U)));
                    }
                    arr_30 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (signed char)-61));
                }
                for (signed char i_9 = 1; i_9 < 15; i_9 += 2) /* same iter space */
                {
                    arr_33 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_16 [i_1] [i_9 + 2] [i_1])) ? (arr_16 [i_1] [i_9 + 2] [i_1]) : (arr_16 [i_1] [i_9 + 2] [i_1]))));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((unsigned short) (+(arr_19 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_9 - 1] [i_0])))))));
                    var_32 -= ((/* implicit */short) min((arr_10 [i_0] [i_0] [(short)6]), (((/* implicit */long long int) ((_Bool) ((int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                    arr_34 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_24 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1]))))))), (max((((/* implicit */int) ((unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    var_33 = arr_11 [i_0] [i_0] [i_0] [i_0] [i_1];
                }
                /* vectorizable */
                for (signed char i_10 = 1; i_10 < 15; i_10 += 2) /* same iter space */
                {
                    arr_39 [i_1] [i_1] = arr_7 [i_0] [i_0] [i_1];
                    arr_40 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (short)32353);
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_2 [i_11])) == (((/* implicit */int) (_Bool)1))));
                        arr_45 [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)67)) : (-2147483637)));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_34 = ((/* implicit */short) ((unsigned int) arr_37 [i_12] [i_12] [i_1]));
                        arr_48 [i_0] [i_1] [i_1] [i_1] = (-(((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0])));
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (-((-(var_16))))))));
                        var_36 = ((/* implicit */unsigned int) (~(arr_24 [i_1] [i_1] [i_1] [i_1])));
                    }
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)127)))))));
                        arr_52 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_10] [i_10] [i_10 + 1] [i_10 + 1] [i_10 - 1]))));
                        arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_6);
                        arr_54 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_0 [i_0]);
                        /* LoopSeq 4 */
                        for (unsigned short i_14 = 3; i_14 < 17; i_14 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2594788491351330292LL)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (short)28395))));
                            var_39 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_10] [i_10] [i_10 + 1] [i_14 - 2] [i_10])) ? (((/* implicit */int) arr_49 [i_10] [i_10] [i_10 + 1] [i_14 - 2] [i_10])) : (((/* implicit */int) arr_49 [i_0] [i_0] [i_10 + 1] [i_14 - 2] [i_0]))));
                            arr_57 [i_14] [i_14] [i_14] [i_14] [i_13] &= ((/* implicit */signed char) (~(arr_38 [i_10 + 3] [i_10 + 2] [i_10 + 3] [i_14 + 1])));
                        }
                        for (long long int i_15 = 1; i_15 < 15; i_15 += 1) 
                        {
                            arr_60 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_61 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_16))) + (((/* implicit */int) (unsigned short)41010))));
                            arr_62 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_47 [i_0] [i_1] [i_10 + 3] [i_13]))));
                            arr_63 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_58 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_7 [i_1] [i_1] [i_1])))));
                        }
                        for (signed char i_16 = 2; i_16 < 17; i_16 += 1) 
                        {
                            arr_67 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_10 + 1] [i_1] [i_16 + 1] [i_16 - 1]))));
                            var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) 2147483636)))));
                            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_47 [i_1] [i_1] [i_1] [i_1]))))) ? (arr_0 [i_10]) : ((-(-2594788491351330293LL)))));
                            var_42 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [i_0] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                        }
                        for (int i_17 = 1; i_17 < 14; i_17 += 4) 
                        {
                            var_43 += ((/* implicit */unsigned char) arr_50 [i_0] [i_17 - 1] [i_10 + 2] [i_10 + 2] [i_0] [i_0]);
                            arr_71 [i_0] [i_1] [i_1] [i_1] = (+(((/* implicit */int) (short)(-32767 - 1))));
                            var_44 = ((/* implicit */unsigned short) (-(((var_0) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_1])))))));
                        }
                    }
                }
                arr_72 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)12322)), (2122024611U)));
                var_45 += ((/* implicit */int) min((((/* implicit */unsigned short) arr_35 [16] [16])), (var_8)));
            }
        } 
    } 
}
