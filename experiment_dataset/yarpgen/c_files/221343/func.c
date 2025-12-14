/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221343
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
    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_2)))))))) / (var_8)));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) ((var_13) <= (var_13))))))), (((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_8))) * (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((min((min((((/* implicit */unsigned long long int) var_0)), (arr_12 [i_0] [i_2] [(short)2]))), (min((((/* implicit */unsigned long long int) arr_10 [i_0 - 3] [i_1] [17ULL])), (arr_13 [i_0 + 2] [i_0] [13LL] [i_0] [i_3 + 1]))))) < (((/* implicit */unsigned long long int) var_4))));
                            arr_14 [i_0 + 2] [i_1 - 1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */long long int) (-(var_7)))) & (min((var_8), (((/* implicit */long long int) var_7)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_1 - 2])) * ((+(((/* implicit */int) arr_11 [i_4] [i_1 + 1] [i_0] [i_0]))))));
                    var_18 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 2] [i_1 - 1] [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
                }
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_13))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) (-(((long long int) (-(((/* implicit */int) arr_17 [i_5])))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */int) min((var_0), (((/* implicit */short) arr_10 [(unsigned short)16] [(unsigned short)18] [2]))))), (((((/* implicit */int) arr_1 [i_5] [i_5])) + (((/* implicit */int) arr_1 [(unsigned short)18] [i_5]))))))) ^ (((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_7)) : (var_8))) + (9223372036854775807LL))) >> ((((+(((/* implicit */int) var_3)))) - (45277))))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */unsigned long long int) var_8);
        /* LoopSeq 1 */
        for (unsigned char i_7 = 2; i_7 < 15; i_7 += 3) 
        {
            arr_25 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_7])))))));
            var_22 = ((/* implicit */unsigned short) arr_2 [i_7]);
            var_23 *= ((/* implicit */unsigned long long int) var_2);
            arr_26 [i_7 - 1] [i_7 - 1] [i_7] = ((/* implicit */unsigned long long int) var_6);
            var_24 *= ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_13 [i_6] [i_6] [i_7] [i_7] [i_6]))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6]))) != (var_1))))));
        }
        var_25 = ((/* implicit */unsigned char) (-(var_8)));
    }
    /* LoopNest 2 */
    for (long long int i_8 = 2; i_8 < 15; i_8 += 3) 
    {
        for (short i_9 = 2; i_9 < 12; i_9 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 4; i_11 < 14; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            {
                                var_26 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_35 [i_11] [i_11 + 2] [i_11 + 2] [i_11 + 2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11] [i_11] [i_11 + 2] [i_11]))))) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9))))));
                                var_27 = ((/* implicit */int) min((((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_8 + 1]))))), (min((((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_8] [i_9] [i_9] [i_10] [i_10] [i_12] [i_12]))) % (var_8))), (((/* implicit */long long int) ((signed char) var_13)))))));
                                arr_44 [i_8] [i_9 + 4] [i_10] [i_11] [10] [i_11] = ((/* implicit */unsigned char) min((max((((/* implicit */int) arr_28 [i_8 - 2])), (arr_39 [i_11]))), ((~(((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((unsigned long long int) var_4)))));
                    arr_45 [i_8 - 2] [(short)7] = ((/* implicit */short) (-(((((((/* implicit */_Bool) var_8)) && (var_6))) ? (((long long int) arr_8 [i_8])) : (min((var_13), (((/* implicit */long long int) var_6))))))));
                }
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        {
                            var_29 = arr_24 [i_8];
                            var_30 -= ((/* implicit */unsigned short) ((int) arr_21 [i_8] [i_9]));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_15 = 2; i_15 < 14; i_15 += 1) /* same iter space */
                {
                    var_31 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (-(arr_23 [i_8] [i_9] [i_15 + 2])))) : (((long long int) var_5)));
                    var_32 = ((/* implicit */signed char) var_1);
                    arr_54 [i_8] = ((/* implicit */short) (-((-(((/* implicit */int) var_0))))));
                    var_33 = ((/* implicit */long long int) ((unsigned char) arr_40 [i_8] [i_9 + 1] [i_15 + 1]));
                }
                for (unsigned long long int i_16 = 2; i_16 < 14; i_16 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? ((~(var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (var_9)))))), (((/* implicit */long long int) max((min((arr_16 [i_8] [i_9] [i_16 + 1] [i_16 + 2]), (((/* implicit */int) arr_0 [i_9])))), (((/* implicit */int) arr_11 [19] [i_9] [i_16 + 1] [i_16])))))));
                    var_35 = ((/* implicit */short) min((((/* implicit */long long int) (((-(((/* implicit */int) var_12)))) != (((/* implicit */int) var_12))))), (((((/* implicit */long long int) (-(((/* implicit */int) var_6))))) * (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_55 [(unsigned short)12] [i_9] [i_8])))))));
                    var_36 = ((/* implicit */_Bool) ((unsigned char) (unsigned short)60611));
                }
                var_37 -= ((/* implicit */signed char) ((min((min((19ULL), (16701980293757150954ULL))), (((/* implicit */unsigned long long int) arr_40 [i_8 - 2] [i_8 + 1] [i_8 + 1])))) | (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_8 [i_9 - 2])), (var_8))), (((/* implicit */long long int) min((var_11), (((/* implicit */int) arr_10 [i_8] [12] [i_9]))))))))));
            }
        } 
    } 
    var_38 -= ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_3)))))) - (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_4) >= (((/* implicit */long long int) ((/* implicit */int) var_14)))))) / (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_12)))))))));
}
