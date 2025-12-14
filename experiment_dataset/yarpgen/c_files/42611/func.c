/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42611
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
    var_10 = ((/* implicit */signed char) var_1);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */short) arr_1 [i_0]))))) ? (((((/* implicit */unsigned long long int) var_6)) / (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) var_2)) & (var_5))))) : (((/* implicit */unsigned long long int) min(((-(var_2))), (((/* implicit */long long int) min((arr_2 [i_0] [i_0]), (((/* implicit */short) arr_1 [i_0]))))))))));
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) arr_1 [(unsigned char)18]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 *= ((/* implicit */unsigned char) ((_Bool) ((_Bool) var_9)));
        arr_8 [(unsigned short)10] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((arr_5 [6U] [6U]), (arr_5 [i_1] [16U])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) + (var_5)))));
        arr_9 [(unsigned short)8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [(unsigned char)2])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_5 [i_1] [8ULL])))) : (((((/* implicit */_Bool) min((17821464452369519476ULL), (17821464452369519476ULL)))) ? (((/* implicit */int) arr_5 [i_1] [8LL])) : (((/* implicit */int) ((_Bool) arr_5 [i_1] [(_Bool)0])))))));
        var_13 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_1])), (var_4)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_1])), (var_7)))) : (((/* implicit */int) arr_7 [(_Bool)1]))))), (min((min((625279621340032162ULL), (17821464452369519452ULL))), (((/* implicit */unsigned long long int) arr_7 [(short)18]))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (short i_3 = 3; i_3 < 18; i_3 += 2) 
        {
            for (signed char i_4 = 4; i_4 < 18; i_4 += 3) 
            {
                {
                    var_14 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [0U] [i_4 - 3])) ? (((/* implicit */int) ((short) arr_1 [(unsigned short)12]))) : (((((/* implicit */_Bool) arr_11 [10U])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_4 [i_4]))))))));
                    var_15 &= ((/* implicit */signed char) ((long long int) var_9));
                    /* LoopNest 2 */
                    for (short i_5 = 4; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_16 *= ((/* implicit */long long int) ((((((/* implicit */int) arr_13 [i_2 + 3] [i_6])) - (((/* implicit */int) arr_10 [i_2 + 2])))) / (((((/* implicit */int) arr_13 [i_6] [i_2])) - (((/* implicit */int) arr_10 [i_5]))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((((/* implicit */_Bool) arr_19 [i_2 + 1] [i_3] [i_6] [i_5] [i_3 - 2] [i_4 - 3])) ? (max((((/* implicit */int) arr_17 [i_2] [i_2] [i_2])), (var_1))) : ((+(((/* implicit */int) arr_18 [i_3] [i_3] [i_6])))))), (((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2 + 4])) ? (((/* implicit */int) arr_13 [i_2 - 1] [i_2 + 3])) : (((/* implicit */int) arr_2 [i_2 + 2] [i_6])))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_1 [i_2])))) >> (((((/* implicit */int) arr_17 [i_2] [i_2] [i_2])) - (52277)))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_10 [i_2]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_7 = 1; i_7 < 17; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (long long int i_10 = 2; i_10 < 18; i_10 += 1) 
                    {
                        {
                            arr_29 [i_2] [i_2] [i_2] [i_2] [i_8] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */int) max((arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1]), (arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1])))) == ((-(((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1]))))));
                            var_20 -= ((/* implicit */unsigned char) var_5);
                        }
                    } 
                } 
            } 
            arr_30 [16] &= ((/* implicit */short) arr_4 [i_7]);
            var_21 *= ((/* implicit */unsigned short) arr_19 [i_7 - 1] [i_7] [4LL] [i_7] [i_7] [i_7]);
        }
        for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_22 [i_11] [i_11]))));
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((long long int) min((((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) arr_16 [i_2] [i_11] [4LL]))))))));
        }
        /* LoopSeq 2 */
        for (int i_12 = 2; i_12 < 17; i_12 += 2) 
        {
            arr_35 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_2]))));
            var_24 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_32 [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_6 [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 - 1])))));
        }
        for (unsigned int i_13 = 2; i_13 < 18; i_13 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) min((max((arr_11 [i_2]), (((/* implicit */long long int) arr_1 [i_2])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_2] [i_2])))))));
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 17; i_14 += 2) 
            {
                for (short i_15 = 2; i_15 < 17; i_15 += 1) 
                {
                    {
                        arr_44 [i_2] [i_13] [i_14] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_2] [i_13] [i_14] [i_15] [i_15])))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_10 [i_13 - 2])), (arr_26 [i_15] [i_15 + 1] [i_2 + 2] [i_2] [i_2])))) : (var_6)));
                        /* LoopSeq 3 */
                        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
                        {
                            var_26 += ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_2] [i_13 - 1] [i_13]))))) ^ (((unsigned int) arr_17 [i_15] [i_13 - 2] [i_14]))));
                            var_27 *= ((/* implicit */unsigned short) ((min((((var_1) + (var_0))), (((/* implicit */int) ((short) arr_33 [i_14] [i_16]))))) > (((((/* implicit */_Bool) arr_2 [i_2 + 4] [i_13])) ? (((/* implicit */int) arr_39 [i_13] [i_14 + 1])) : (((/* implicit */int) arr_2 [i_2 - 1] [i_13]))))));
                            var_28 *= ((/* implicit */short) var_2);
                        }
                        /* vectorizable */
                        for (unsigned short i_17 = 0; i_17 < 19; i_17 += 1) /* same iter space */
                        {
                            arr_51 [i_2] [i_15] [i_14] [i_2] = ((/* implicit */unsigned short) arr_10 [i_2]);
                            var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_23 [i_14 - 1] [i_15 + 1] [i_13 + 1] [i_15])) : (((/* implicit */int) arr_45 [i_13] [i_13]))));
                            arr_52 [i_14] [i_15] [i_2] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_24 [i_2] [i_2])))) ? (((/* implicit */int) arr_10 [i_2 + 1])) : (((/* implicit */int) arr_40 [i_13 - 2] [i_14 - 2] [i_2]))));
                        }
                        for (unsigned short i_18 = 0; i_18 < 19; i_18 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((_Bool) arr_11 [i_2]))), (max((((/* implicit */unsigned long long int) 4294967286U)), (17821464452369519451ULL)))));
                            var_31 |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_19 [i_2] [i_13] [i_13] [i_14] [i_13] [i_18])) ? (((/* implicit */int) arr_28 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_9)))))) ? (((/* implicit */int) min((arr_18 [i_18] [i_13] [i_2 + 1]), (arr_18 [i_2] [i_13 - 1] [i_13 - 1])))) : (((/* implicit */int) ((unsigned char) 17821464452369519451ULL)))));
                            arr_55 [i_14] [i_15] [i_2] [i_15] [i_13] = ((/* implicit */unsigned int) (!(arr_20 [i_2] [i_13] [i_13])));
                        }
                    }
                } 
            } 
        }
    }
    for (signed char i_19 = 2; i_19 < 8; i_19 += 2) 
    {
        /* LoopNest 2 */
        for (short i_20 = 0; i_20 < 11; i_20 += 3) 
        {
            for (short i_21 = 1; i_21 < 7; i_21 += 2) 
            {
                {
                    var_32 *= arr_22 [i_20] [i_20];
                    var_33 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_19] [i_19] [i_19 - 1] [i_21] [i_21 - 1] [i_21]))))), (max((625279621340032164ULL), (((/* implicit */unsigned long long int) 4294967286U))))));
                    var_34 = ((/* implicit */long long int) var_9);
                    arr_64 [i_21] [i_21] [i_19] = (~(((/* implicit */int) arr_17 [i_19] [i_19] [i_21])));
                }
            } 
        } 
        var_35 ^= ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) arr_59 [i_19] [i_19] [i_19])) : (var_1)))) ? (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) arr_48 [i_19] [i_19] [i_19] [i_19]))))) : (max((((/* implicit */unsigned long long int) var_3)), (var_5))))), (((unsigned long long int) ((unsigned long long int) var_8)))));
    }
    var_36 = ((/* implicit */int) var_9);
}
