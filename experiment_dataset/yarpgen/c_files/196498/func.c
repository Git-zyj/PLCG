/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196498
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_4))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = (((~(arr_1 [i_0]))) != (((/* implicit */unsigned long long int) var_8)));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((+(var_10))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))))));
        var_20 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)106))))), (var_16)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1]) - (arr_5 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_1])))) : (arr_5 [i_1])));
        var_22 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_3])) ? (((/* implicit */int) arr_11 [i_2] [i_3] [i_2])) : (((/* implicit */int) var_3)))))));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_6))));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_2] [i_3] [i_4])))))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((arr_5 [i_3]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_9 [i_2] [i_2])) - (110))))))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            arr_22 [i_2] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_20 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_6]))) : (var_8)))));
            /* LoopSeq 3 */
            for (signed char i_7 = 1; i_7 < 14; i_7 += 1) 
            {
                arr_25 [i_2] = ((/* implicit */short) ((int) arr_17 [i_7 + 1] [i_6] [i_7]));
                /* LoopNest 2 */
                for (unsigned int i_8 = 3; i_8 < 14; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) (~(arr_14 [i_2] [i_9 + 1] [i_7 + 1])));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-78)) : (268435456))))));
                            arr_30 [i_7] [i_8] [i_6] [i_7] [i_6] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2] [i_7 + 1] [i_8 - 2])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((var_8) - (4133680026257046328LL)))))) : (arr_17 [i_2] [i_7 + 1] [i_8 - 3])));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (-(arr_27 [i_2] [i_6] [i_7 - 1] [i_9]))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned int) (~(var_15)));
            }
            for (unsigned long long int i_10 = 4; i_10 < 14; i_10 += 1) 
            {
                var_32 = ((/* implicit */long long int) (+(arr_17 [i_10 - 3] [i_6] [i_10 - 3])));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        {
                            arr_38 [i_2] [i_6] [i_10 - 4] [i_6] [i_11] [i_12] = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)89)) ? (-1395569021) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_13 = 1; i_13 < 14; i_13 += 2) 
            {
                var_34 ^= ((unsigned int) arr_19 [i_6]);
                var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_29 [i_13] [i_6] [i_6]))));
                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((unsigned char) arr_11 [i_13] [4] [i_13 - 1])))));
                /* LoopSeq 1 */
                for (unsigned char i_14 = 1; i_14 < 14; i_14 += 2) 
                {
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [i_2])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_13]))))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))))));
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_2] [i_2] [i_2] [i_14 - 1] [(short)6])) ? (var_10) : (var_10)))) ? ((~(var_1))) : ((~(((/* implicit */int) arr_12 [i_14] [i_13] [i_2])))))))));
                }
            }
            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (-(((/* implicit */int) var_7)))))));
            /* LoopSeq 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_49 [i_2] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned char) arr_20 [i_6])))));
                var_40 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_2] [i_2])) ? (arr_24 [i_15] [i_6] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_29 [i_2] [i_6] [i_15]))))));
            }
            for (int i_16 = 3; i_16 < 12; i_16 += 2) 
            {
                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_16 - 3])))))));
                var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) var_10))));
            }
            for (signed char i_17 = 1; i_17 < 11; i_17 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_18 = 0; i_18 < 15; i_18 += 1) 
                {
                    var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_56 [i_2] [i_2] [i_2] [i_17 + 4] [i_18] [i_18])) : (arr_17 [i_2] [i_6] [i_17 + 4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_17 + 3] [9U] [i_17] [i_17 + 3]))) : ((~(var_10)))));
                    arr_58 [i_2] [i_6] [i_2] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_6] [(unsigned short)2] [i_17] [i_17 + 4])) ? (arr_54 [i_2] [i_2] [i_6] [i_17 - 1]) : (arr_54 [i_17] [i_17 - 1] [i_17] [i_17 + 2])));
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [2LL] [i_6] [i_17 + 4] [i_2] [2LL] [i_17])) ? (((/* implicit */int) arr_44 [i_2] [i_2] [i_6] [i_17 + 3] [i_17 - 1] [i_17 + 3])) : (((/* implicit */int) var_18))));
                    var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_6] [i_17 - 1] [i_17 + 1] [i_17 + 2] [i_17 + 2])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_4))))) : ((-(var_8)))));
                }
                var_46 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_55 [i_17 + 2] [i_17 + 1] [i_17 + 3])) : (((/* implicit */int) arr_55 [i_17 + 2] [i_17 + 1] [i_17 + 3]))));
            }
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 15; i_19 += 4) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    var_47 = ((/* implicit */_Bool) arr_7 [i_20]);
                    arr_67 [i_20] [i_19] = ((/* implicit */unsigned int) arr_4 [i_2]);
                }
            } 
        } 
        arr_68 [i_2] = ((/* implicit */short) ((unsigned char) arr_64 [i_2] [i_2]));
        /* LoopNest 3 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (unsigned int i_22 = 0; i_22 < 15; i_22 += 1) 
            {
                for (unsigned char i_23 = 0; i_23 < 15; i_23 += 4) 
                {
                    {
                        arr_77 [i_23] [i_22] [i_21] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) var_3)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_24 = 0; i_24 < 15; i_24 += 3) 
                        {
                            arr_82 [i_2] [i_21] [i_22] [i_24] [i_24] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_48 [i_24] [i_23] [i_22] [i_2]))));
                            arr_83 [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */signed char) arr_31 [i_21] [i_22] [i_23] [i_24]);
                        }
                    }
                } 
            } 
        } 
    }
    var_48 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_12))));
}
