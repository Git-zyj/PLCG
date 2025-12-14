/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200497
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min(((-(((/* implicit */int) arr_1 [i_2])))), (((/* implicit */int) (_Bool)0)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_20 = (-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (6382694107797583655LL))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (signed char)87))));
                    }
                    var_22 = ((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0] [i_0]);
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(unsigned char)12])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) -7699968971606569021LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23799))) : (8U)))));
        var_24 |= ((/* implicit */short) ((arr_11 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((7218325733764687773ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [(short)11] [i_0] [i_0])) * (((/* implicit */int) var_12))))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 4; i_5 < 15; i_5 += 3) 
        {
            for (unsigned char i_6 = 2; i_6 < 13; i_6 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (4014315268U)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 3681468491U)) ? (((((/* implicit */_Bool) 1964941527642615725LL)) ? (2712461062985270299ULL) : (((/* implicit */unsigned long long int) 9222480472528085239LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) <= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_15 [i_6 + 3])), (var_9))))));
                                var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-93))));
                                var_28 = ((/* implicit */unsigned short) var_14);
                                var_29 = ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_7] [i_6] [i_7]))) <= (1541791260U)))), (((((/* implicit */int) (unsigned char)6)) / (((/* implicit */int) arr_9 [i_8] [i_4] [i_4]))))))) == (((((/* implicit */_Bool) arr_17 [i_4])) ? (arr_17 [i_4]) : (arr_17 [i_4])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((1541791272U), (((/* implicit */unsigned int) arr_24 [i_4] [(short)14] [i_6] [14ULL])))), ((-(4294967295U)))))) ? (((((/* implicit */_Bool) arr_19 [(short)8] [i_5 - 2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_15)))))))) : ((((_Bool)1) ? (1139658840U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_10 = 1; i_10 < 14; i_10 += 3) 
                        {
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) arr_2 [(unsigned char)8]))));
                            var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)57)))))))))));
                            var_33 = ((/* implicit */_Bool) (~(arr_5 [i_10])));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned char) var_1);
                            var_35 = ((/* implicit */signed char) (-((+(arr_12 [i_11 + 1])))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_6 [10U] [i_6 + 1] [i_9] [(unsigned short)4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_23 [i_4] [3ULL] [i_6 - 1] [i_4] [i_5 - 3] [i_5 - 3])))) && (((/* implicit */_Bool) arr_8 [i_4] [6U] [(unsigned char)4]))));
                            var_37 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */long long int) ((/* implicit */int) ((2162122849U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [(unsigned short)11] [i_4] [11U] [i_9] [3ULL]))))))) : (((arr_7 [i_4] [i_12] [i_12]) / (((/* implicit */long long int) var_9))))))));
                            var_38 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (unsigned short)53023)))))));
                            var_39 = ((/* implicit */unsigned short) arr_26 [9LL] [i_5 - 4] [i_6] [11U] [i_9] [i_12]);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) arr_6 [(signed char)9] [i_5] [12LL] [i_9])), (221737115U)))));
                            var_41 = ((/* implicit */unsigned long long int) min(((+(min((var_14), (var_7))))), (((/* implicit */unsigned int) ((_Bool) 3U)))));
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_5 + 1] [i_6 + 3] [i_5] [1LL]))))) ? (((((/* implicit */_Bool) arr_17 [i_4])) ? (max((arr_7 [i_4] [i_6] [(unsigned short)9]), (((/* implicit */long long int) (unsigned short)65519)))) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((/* implicit */int) ((((8159470486972841980ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17473))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [6U] [i_5] [i_6] [i_9] [i_13])))))))))));
                        }
                    }
                }
            } 
        } 
        var_43 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) % (((/* implicit */int) (unsigned short)38331))))), (((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4] [(short)11])) ? (min((arr_36 [i_4] [i_4] [i_4] [(short)15] [i_4]), (((/* implicit */unsigned int) (_Bool)0)))) : (((2334343783U) << (((((/* implicit */int) (signed char)46)) - (46)))))))));
        var_44 = ((/* implicit */unsigned char) arr_6 [(signed char)6] [i_4] [i_4] [i_4]);
        var_45 = arr_21 [i_4];
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 3) 
    {
        var_46 &= ((/* implicit */short) (unsigned char)164);
        var_47 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) ^ (((arr_38 [i_14] [i_14]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_48 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)48062)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)93)) >= (((/* implicit */int) arr_37 [i_14]))))) : (((/* implicit */int) (unsigned short)23456))));
    }
    var_49 = ((/* implicit */short) (-(var_14)));
}
