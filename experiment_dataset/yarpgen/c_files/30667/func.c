/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30667
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (min((min((245209024U), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))))));
                var_13 |= ((/* implicit */int) (-(((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_8))))) ? (min((var_11), (((/* implicit */unsigned int) var_2)))) : (min((4294967295U), (3323118110U)))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_14 = ((((_Bool) min((var_4), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned int) var_0)) : (var_11));
                                var_15 = ((/* implicit */unsigned int) (~(((unsigned long long int) min((var_8), (var_2))))));
                                var_16 = max((((((var_11) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (min((var_9), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) var_11)))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_9)))) ? (max((var_6), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) min((var_0), (((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) max(((((+(((/* implicit */int) var_2)))) / ((~(var_0))))), (var_0)));
                    arr_13 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) var_0);
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) var_7)))))), (((unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (var_3))))));
                        var_19 |= min((((((/* implicit */_Bool) (+(var_3)))) ? (max((((/* implicit */unsigned int) var_7)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) var_0)))))))), (((/* implicit */unsigned int) max((min((var_5), (var_0))), (((/* implicit */int) max((((/* implicit */short) var_2)), (var_7))))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        var_20 = (~(((unsigned int) var_9)));
                        arr_21 [(short)12] [(short)12] [i_0] [i_6] = ((/* implicit */int) ((signed char) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 2; i_7 < 13; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)58863));
                        arr_24 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */_Bool) ((((var_10) >> (((((/* implicit */int) var_2)) - (92))))) | (((unsigned long long int) var_2))));
                        arr_25 [(short)2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((var_11) >= (var_4))) ? ((+(var_4))) : (var_11)));
                    }
                    for (unsigned int i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 3; i_9 < 13; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_5) + (((/* implicit */int) var_2))))) ? (min((((/* implicit */unsigned int) var_7)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((332789124U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)12288))))))))) % (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11)))))));
                            var_23 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) min((var_5), (var_0)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_6)))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_7)) | (var_0))), (((((/* implicit */_Bool) 3323118110U)) ? (((/* implicit */int) (unsigned short)58863)) : (((/* implicit */int) (unsigned short)58863))))))) ? ((-(max((((/* implicit */unsigned long long int) var_9)), (var_10))))) : (((/* implicit */unsigned long long int) var_4))));
                            var_25 -= ((/* implicit */int) (+((-(min((var_10), (((/* implicit */unsigned long long int) var_2))))))));
                        }
                        arr_32 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((var_9), (var_6)))) && (((/* implicit */_Bool) var_6)))), (((((/* implicit */_Bool) ((4294967275U) / (3052144908U)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))))));
                        arr_33 [i_0] [i_0] [i_0] [i_8 - 1] = var_11;
                    }
                }
                /* vectorizable */
                for (signed char i_10 = 1; i_10 < 14; i_10 += 4) 
                {
                    var_26 = ((/* implicit */unsigned int) var_8);
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_0] [i_10] [7ULL] [i_0] [i_11] = ((/* implicit */unsigned char) var_9);
                        arr_41 [i_0] [i_1] [i_10] [i_11] = ((/* implicit */short) var_9);
                    }
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [(unsigned char)3] [i_10] [5U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) var_0)))) : (((unsigned int) var_11))));
                        arr_45 [i_0] = ((/* implicit */int) ((unsigned int) ((var_0) / (((/* implicit */int) var_8)))));
                        arr_46 [i_1] [2U] [i_10] [i_12] |= ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_1)) >> (((var_11) - (3510408506U))))));
                    }
                }
            }
        } 
    } 
    var_27 ^= var_6;
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (var_3) : (var_11))), (min((((/* implicit */unsigned int) var_2)), (var_11)))))) == (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_0)) - (var_11)))), (((((/* implicit */unsigned long long int) var_0)) ^ (var_10)))))));
    /* LoopNest 2 */
    for (short i_13 = 3; i_13 < 16; i_13 += 1) 
    {
        for (unsigned int i_14 = 2; i_14 < 16; i_14 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 17; i_15 += 3) 
                {
                    for (unsigned int i_16 = 3; i_16 < 13; i_16 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (+(var_3))))) ? (max((((/* implicit */unsigned long long int) min((var_6), (var_6)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_4)) : (var_10))))) : (min((var_10), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (var_5))))))));
                            var_30 = ((/* implicit */short) min((min((min((var_3), (var_11))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))), (max(((-(var_6))), (min((var_6), (((/* implicit */unsigned int) var_1))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_17 = 4; i_17 < 13; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 1) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 3) 
                        {
                            {
                                arr_70 [i_13] [i_13] [i_13] [i_17 + 1] [i_17 + 4] [i_14] [i_19] = min((min((max((((/* implicit */unsigned int) var_8)), (var_3))), (min((var_11), (var_3))))), (((/* implicit */unsigned int) ((short) ((var_10) << (((((/* implicit */int) var_7)) - (25868))))))));
                                var_31 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (~(var_4)))))) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_0)) : (var_9))) >> (((/* implicit */int) min(((unsigned char)169), (((/* implicit */unsigned char) (_Bool)1))))))) : (var_11)));
                                var_32 = ((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)58863)), (var_0)))) ? (((((/* implicit */_Bool) var_2)) ? (var_3) : (var_3))) : (var_4))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_6)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_20 = 4; i_20 < 15; i_20 += 2) 
                {
                    for (unsigned long long int i_21 = 2; i_21 < 14; i_21 += 1) 
                    {
                        for (int i_22 = 1; i_22 < 14; i_22 += 4) 
                        {
                            {
                                arr_79 [i_13] [i_14] [i_20] [i_21] [i_14] = max((((/* implicit */unsigned long long int) var_9)), (max((min((var_10), (((/* implicit */unsigned long long int) var_8)))), (min((var_10), (((/* implicit */unsigned long long int) var_7)))))));
                                arr_80 [i_14] [9U] [6] [i_20] [i_21] [i_22] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) var_1)))));
                            }
                        } 
                    } 
                } 
                arr_81 [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((21U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86)))))) ? (((((/* implicit */int) (unsigned char)169)) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((min((((/* implicit */unsigned char) (signed char)16)), ((unsigned char)181))), ((unsigned char)187))))));
            }
        } 
    } 
    var_33 = ((long long int) ((((/* implicit */int) ((var_9) > (var_4)))) ^ ((+(((/* implicit */int) (unsigned char)167))))));
}
