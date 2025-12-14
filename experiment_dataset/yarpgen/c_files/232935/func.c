/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232935
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (~(66060288U))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) /* same iter space */
                    {
                        var_11 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_2 + 2])) : (((/* implicit */int) var_0)));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((((/* implicit */_Bool) arr_11 [i_4] [i_2 + 1] [i_3 + 2] [i_2 + 1])) ? (var_7) : ((+(var_7)))))));
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) 1472147458))));
                            arr_13 [i_0] [i_0] [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            var_14 = ((/* implicit */signed char) var_9);
                            var_15 ^= ((66060297U) == (((/* implicit */unsigned int) -1472147459)));
                        }
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_16 ^= ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) ((2ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) : ((((_Bool)0) ? (var_3) : (var_3))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) arr_1 [i_1] [i_5 + 1]))))) && (var_9)));
                            arr_20 [i_0] [i_5] [i_0] [(unsigned char)10] [i_0] [i_0] |= ((/* implicit */unsigned long long int) (~(arr_9 [i_6] [i_6])));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) arr_16 [i_7] [i_5 + 3] [i_2 + 1] [i_1] [i_0]);
                            var_19 = ((/* implicit */_Bool) var_3);
                            var_20 += ((/* implicit */unsigned int) var_1);
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            arr_26 [i_2] [i_2] [i_2] [i_5] [i_8] = ((((((/* implicit */int) var_5)) >= (((/* implicit */int) var_0)))) ? (((((/* implicit */_Bool) 4228907007U)) ? (66060309U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)166)) == (((/* implicit */int) arr_18 [(_Bool)1] [i_1] [(_Bool)1] [i_5] [i_5] [i_5] [i_1])))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((unsigned int) 18446744073709551613ULL)) : (((unsigned int) arr_23 [i_0] [i_1] [i_2] [i_5] [i_5 + 2] [i_8]))));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_2 + 1])) ? (((/* implicit */int) ((unsigned char) 1472147481))) : ((~(((/* implicit */int) var_0))))));
                            var_23 = (~(var_7));
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) var_0);
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(18446744073709551610ULL)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1] [i_10] [i_10]))));
                            var_26 -= ((/* implicit */unsigned char) var_4);
                        }
                    }
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        arr_37 [i_2] [i_2] = (~(var_8));
                        var_27 -= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_2 + 1] [i_0] [i_11] [i_2]))) : (4228906998U)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            arr_43 [i_2] [i_1] [(_Bool)1] [i_2] [i_1] [i_12] [i_13] = var_6;
                            var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_41 [i_13] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2]))));
                        }
                        var_29 = ((/* implicit */_Bool) ((int) var_3));
                        var_30 = ((/* implicit */unsigned int) ((_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                        var_31 -= ((/* implicit */unsigned int) ((unsigned char) 17ULL));
                    }
                    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
                    {
                        arr_46 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_4)))));
                        /* LoopSeq 4 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) (_Bool)1))));
                            var_33 = ((/* implicit */int) ((var_3) < (((/* implicit */int) arr_7 [(unsigned short)8] [i_2 - 1] [i_2]))));
                            arr_50 [i_14] [i_0] [i_2 - 1] [i_14] [i_2] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)50));
                            var_34 ^= ((/* implicit */unsigned long long int) 4228906999U);
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_35 += ((/* implicit */signed char) var_7);
                            var_36 = ((unsigned int) ((((/* implicit */_Bool) 1073217536U)) ? (-2005153702) : (arr_9 [i_2] [i_2])));
                        }
                        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 4) 
                        {
                            arr_55 [i_2] [i_2] [i_17] [i_1] [i_17] = ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)0));
                            arr_56 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2899713373424974510LL)) ? (arr_6 [i_2] [0]) : (((/* implicit */int) (_Bool)1))))) ? (var_1) : (((/* implicit */int) ((((/* implicit */int) var_5)) < (var_1))))));
                        }
                        for (signed char i_18 = 1; i_18 < 8; i_18 += 4) 
                        {
                            var_37 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)23222)))) ? (-1207854906) : (((/* implicit */int) (_Bool)1))));
                            var_38 = ((/* implicit */unsigned int) var_1);
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */int) var_6)) <= (((/* implicit */int) ((_Bool) (unsigned char)138))))))));
                        }
                        var_40 = ((/* implicit */unsigned char) 17ULL);
                        var_41 = ((/* implicit */int) ((unsigned long long int) ((unsigned int) var_3)));
                    }
                    var_42 ^= ((/* implicit */unsigned int) ((_Bool) (((_Bool)0) || (((/* implicit */_Bool) 1207854885)))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_62 [i_0] [i_1] [i_19] [i_19] = ((/* implicit */short) (signed char)-126);
                    arr_63 [i_0] [i_1] [i_1] [i_19] = ((/* implicit */_Bool) (~(((var_1) | (((/* implicit */int) arr_45 [i_0] [i_0] [0]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 12; i_20 += 4) 
                    {
                        for (signed char i_21 = 0; i_21 < 12; i_21 += 3) 
                        {
                            {
                                arr_70 [i_21] [i_21] [i_21] [i_21] [i_21] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) var_7));
                                arr_71 [i_21] = ((/* implicit */long long int) var_1);
                                arr_72 [i_0] [i_1] [i_1] [i_21] [i_20] [i_21] = ((/* implicit */_Bool) (~((~(var_1)))));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */int) (unsigned short)49981);
                }
                /* vectorizable */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_19 [5U] [i_1] [5U] [i_1] [i_1]))))))));
                    arr_75 [i_22] = ((/* implicit */unsigned char) ((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126)))));
                    var_45 = ((/* implicit */signed char) ((4228907028U) > (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                    var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))));
                }
                var_47 = ((/* implicit */int) max((var_47), (((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [2U] [i_0] [i_0])) && (((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)11] [i_1] [i_1] [i_1]))))) % (((/* implicit */int) ((unsigned char) (_Bool)1)))))));
            }
        } 
    } 
}
