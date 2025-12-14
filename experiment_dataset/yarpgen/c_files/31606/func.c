/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31606
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
    var_15 = ((/* implicit */short) var_14);
    var_16 = ((/* implicit */signed char) var_0);
    var_17 = ((/* implicit */int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) <= (var_11)));
        arr_4 [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_12))))));
        /* LoopSeq 2 */
        for (int i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            var_18 ^= ((/* implicit */unsigned int) var_11);
            arr_7 [2LL] &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_14)))) ? (((var_8) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_12))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_3))))));
        }
        for (signed char i_2 = 2; i_2 < 24; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 24; i_5 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */long long int) var_1);
                            var_20 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_5))))));
                            var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */int) var_1))));
                            arr_18 [18ULL] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) var_4)))) : (var_14)));
                        }
                    } 
                } 
            } 
            arr_19 [7] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */int) var_10)) & (((/* implicit */int) var_12)))) : ((~(((/* implicit */int) var_3))))));
        }
        arr_20 [i_0] [i_0] = ((/* implicit */short) var_14);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                for (unsigned char i_9 = 1; i_9 < 14; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 1; i_10 < 13; i_10 += 2) 
                        {
                            arr_36 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            arr_37 [i_10] [(unsigned char)12] [i_8] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))));
                        }
                        for (int i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            var_22 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                            var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) | (var_14)));
                            arr_41 [i_8] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))))));
                            var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_2)) + (((/* implicit */int) var_5))))));
                        }
                        var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_14)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_13))))));
                        arr_42 [i_6] [i_6] [(signed char)8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_6))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                {
                    arr_51 [i_6] [2ULL] [i_13] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))));
                    /* LoopSeq 3 */
                    for (unsigned short i_14 = 2; i_14 < 14; i_14 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))));
                        var_27 = ((/* implicit */signed char) (((~(((/* implicit */int) var_9)))) < (((/* implicit */int) var_1))));
                        var_28 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))));
                        var_29 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                    }
                    for (signed char i_15 = 0; i_15 < 15; i_15 += 1) 
                    {
                        var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_14)))) && (((/* implicit */_Bool) var_11))));
                        var_31 = (-(((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_16 = 2; i_16 < 13; i_16 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_12))))));
                            arr_61 [i_12] [i_12 + 1] [i_13] [i_12] [i_15] = ((/* implicit */unsigned short) var_13);
                            var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
                            var_34 = ((/* implicit */short) var_14);
                        }
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_0))))));
                            var_36 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))) : ((+(var_14)))));
                            arr_65 [i_6] [i_12] [i_12] [i_6] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                        }
                        for (int i_18 = 4; i_18 < 13; i_18 += 4) 
                        {
                            arr_68 [i_12] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_3))))));
                            arr_69 [i_6] [(unsigned short)11] [i_6] [i_12] [i_6] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_3))))));
                        }
                        for (int i_19 = 0; i_19 < 15; i_19 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))));
                            var_38 = ((((/* implicit */_Bool) var_1)) ? (var_14) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))));
                            var_39 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
                        }
                        var_40 -= ((/* implicit */long long int) var_14);
                    }
                    for (unsigned char i_20 = 0; i_20 < 15; i_20 += 3) 
                    {
                        arr_76 [i_6] [i_12] [(signed char)9] [i_13] = ((/* implicit */signed char) var_12);
                        var_41 = (!(((/* implicit */_Bool) var_0)));
                        var_42 -= ((/* implicit */signed char) var_7);
                        arr_77 [i_6] [i_12] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((var_13) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_12))))));
                        var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_14))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 15; i_21 += 1) 
                    {
                        for (long long int i_22 = 0; i_22 < 15; i_22 += 4) 
                        {
                            {
                                arr_84 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : ((-(((/* implicit */int) var_0))))));
                                var_44 = ((/* implicit */unsigned long long int) (((!(var_8))) ? (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))));
                                arr_85 [i_6] [i_12] [i_13] [i_21] [i_13] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
