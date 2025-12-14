/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193250
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                    var_18 -= (-(((/* implicit */int) (unsigned short)32858)));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)31)) + (((/* implicit */int) (signed char)35))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10387))) : (((((/* implicit */_Bool) (unsigned short)32692)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) : (-4619781924979733416LL))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */_Bool) var_9);
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_12 [i_4])))), (((/* implicit */int) arr_11 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0]))))) + ((~(arr_8 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0]))))))));
                        }
                    }
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                    {
                        var_22 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) * (4294967295U)));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_5] [i_2] [i_1] [i_0])))))))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) min((arr_10 [i_0] [4] [i_0] [i_0]), ((signed char)-122)))), ((+((+(((/* implicit */int) arr_0 [i_5]))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            arr_21 [i_2] [i_2] [i_2] [i_0] |= ((/* implicit */unsigned short) arr_12 [i_1]);
                            var_24 = ((/* implicit */int) max((var_24), (((((((/* implicit */int) (signed char)-36)) + (2147483647))) << (((((-4619781924979733424LL) + (4619781924979733455LL))) - (31LL)))))));
                        }
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            var_25 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-36)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32695))) : (-1LL)))))) ? (((/* implicit */long long int) (-(((((/* implicit */int) var_7)) | (((/* implicit */int) arr_11 [i_8] [i_8] [i_8] [5] [9LL] [i_1] [i_0]))))))) : (((arr_12 [i_8]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_6] [i_8])) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_13 [i_0]))))) : (-4619781924979733416LL)))));
                            arr_24 [i_1] [i_6] [i_2] [i_2] [i_8] = ((/* implicit */short) var_4);
                            arr_25 [i_6] [i_6] [i_2] [i_2] [i_1] [i_6] = ((/* implicit */signed char) -4619781924979733389LL);
                            arr_26 [i_6] [i_1] [i_6] = ((/* implicit */signed char) var_5);
                            arr_27 [i_0] [i_6] [i_6] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (min((7675185095115008043ULL), (((/* implicit */unsigned long long int) (signed char)-122)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (~(((((/* implicit */int) var_0)) << ((((((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [i_2] [i_6] [i_6] [(unsigned short)6] [i_6])))) + (52))) - (29))))))))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            var_27 += ((/* implicit */unsigned long long int) -1);
                            var_28 = ((/* implicit */unsigned int) arr_28 [i_0] [i_0] [i_2] [i_9]);
                        }
                        var_29 = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (int i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        var_30 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2])) ? (6310082765892942952LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (var_15))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) - (var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_11] [i_2] [i_1] [i_0]))) + (var_1))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            arr_38 [i_11] = ((/* implicit */short) (unsigned short)65535);
                            arr_39 [10] [i_11] [i_11] [i_2] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */int) var_9))))) ? (((/* implicit */int) (signed char)31)) : (((((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_1] [(signed char)11])) ? (((/* implicit */int) arr_16 [9] [i_2] [9] [i_2])) : (-1042074338)))));
                            arr_40 [i_12] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) 8);
                        }
                    }
                    /* vectorizable */
                    for (signed char i_13 = 2; i_13 < 11; i_13 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), ((~((~(var_15)))))));
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) 4294967295U))));
                        var_33 &= ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) 4294967291U)))));
                        var_34 = arr_13 [i_13 - 2];
                        var_35 -= ((/* implicit */_Bool) (-((~(7675185095115008053ULL)))));
                    }
                    for (signed char i_14 = 2; i_14 < 11; i_14 += 3) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned short) (~((+(max((10771558978594543573ULL), (((/* implicit */unsigned long long int) 804947517U))))))));
                        arr_47 [i_0] [i_1] [i_2] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_0)) | (0)))))) ? (((((/* implicit */_Bool) (unsigned short)32695)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))) : (4LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_1] [i_14 + 2] [i_14])))))));
                    }
                    var_37 |= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 2147483647)) * (17613323473523536101ULL))) <= (((/* implicit */unsigned long long int) arr_41 [i_2]))));
                }
            } 
        } 
    } 
    var_38 &= ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) (+(var_15)))) ? ((-(((/* implicit */int) (unsigned short)32699)))) : (((/* implicit */int) ((_Bool) (unsigned short)0))))) : (((((/* implicit */_Bool) (unsigned short)31281)) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) var_16)))));
    var_39 = ((/* implicit */_Bool) (unsigned short)0);
}
