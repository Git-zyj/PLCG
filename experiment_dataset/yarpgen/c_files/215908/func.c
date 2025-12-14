/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215908
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
    var_18 *= ((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_6)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((0U), (4294967287U)));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) ((signed char) (((+(4294967295U))) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */unsigned int) ((int) (+(arr_2 [i_0]))))) : (max((min((((/* implicit */unsigned int) arr_2 [i_1])), (8U))), (((/* implicit */unsigned int) arr_0 [i_0]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max(((-(min((var_3), (((/* implicit */long long int) arr_16 [i_0] [i_3] [i_3] [i_4])))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) (unsigned short)0)) : (arr_16 [0] [i_0] [i_0] [(unsigned char)3])))) + (11U)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_0] [i_0]) * (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [(unsigned char)6]))))) + (max((4294967282U), (((/* implicit */unsigned int) arr_23 [i_0]))))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) min((((((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3]))))) % (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_18 [i_3] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_14 [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_3] [i_3]))))))))));
                                var_22 = ((/* implicit */unsigned short) (~(max((((((/* implicit */long long int) arr_2 [i_6])) + (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(short)9] [i_4] [6U]))) : (4294967295U))))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)31))));
                    var_23 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 3; i_8 < 12; i_8 += 4) 
            {
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_8] [i_7] [i_7] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))) : (4294967295U)))) && (((/* implicit */_Bool) ((signed char) arr_1 [i_0])))));
                arr_30 [i_7] [(unsigned short)0] [i_7] = ((((/* implicit */_Bool) (+(arr_7 [2LL] [i_7] [4U] [i_7])))) ? (((/* implicit */int) (_Bool)0)) : (arr_27 [i_0] [i_7] [i_8]));
                var_25 ^= ((/* implicit */short) var_17);
                /* LoopNest 2 */
                for (short i_9 = 4; i_9 < 13; i_9 += 1) 
                {
                    for (unsigned char i_10 = 3; i_10 < 13; i_10 += 1) 
                    {
                        {
                            arr_36 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (!((_Bool)1)))) % ((~(((/* implicit */int) arr_11 [i_0]))))));
                            var_26 = ((/* implicit */short) (((+(arr_35 [i_7] [i_7] [i_7] [i_7] [(_Bool)1]))) + (((((/* implicit */int) (short)9938)) % (arr_27 [11U] [i_9 - 1] [i_10 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        {
                            arr_41 [i_12] [i_11] [i_7] [i_7] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) arr_13 [i_7])) + (arr_7 [i_0] [i_7] [i_7] [i_11]))));
                            var_27 = ((/* implicit */int) 2322698139901511689LL);
                            var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-13497)) ? (((2U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) arr_2 [i_0]))));
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */short) arr_8 [i_0] [i_7] [i_0] [i_7]);
        }
        /* vectorizable */
        for (int i_13 = 2; i_13 < 12; i_13 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_14 = 1; i_14 < 12; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (int i_16 = 2; i_16 < 13; i_16 += 1) 
                    {
                        {
                            var_30 = ((arr_51 [i_16] [i_15] [6] [6]) + (((/* implicit */long long int) arr_35 [i_14] [i_15] [i_13] [i_13] [i_14])));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_9))));
                            var_32 *= ((/* implicit */_Bool) ((signed char) var_11));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */int) ((unsigned char) arr_1 [i_0]));
            arr_54 [i_0] = ((/* implicit */unsigned short) ((long long int) arr_14 [i_13 + 1] [i_13 - 2]));
            var_34 *= ((/* implicit */signed char) var_10);
            arr_55 [(_Bool)1] [(_Bool)0] [7U] = ((/* implicit */unsigned short) (unsigned char)179);
        }
        var_35 = ((/* implicit */unsigned int) (unsigned char)76);
    }
    var_36 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_13)))))))));
    var_37 = ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 2 */
    for (unsigned int i_17 = 2; i_17 < 21; i_17 += 1) 
    {
        for (unsigned long long int i_18 = 3; i_18 < 23; i_18 += 4) 
        {
            {
                arr_61 [(_Bool)1] [i_17] [i_18] = ((/* implicit */unsigned short) (!(arr_58 [i_18 - 1])));
                /* LoopNest 2 */
                for (unsigned char i_19 = 4; i_19 < 24; i_19 += 3) 
                {
                    for (int i_20 = 0; i_20 < 25; i_20 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) var_0))));
                            arr_66 [i_20] [i_17] [i_19 - 4] [(_Bool)1] [i_17] [i_17] = ((/* implicit */_Bool) arr_60 [i_18 - 3] [i_19 - 2] [i_20]);
                        }
                    } 
                } 
            }
        } 
    } 
}
