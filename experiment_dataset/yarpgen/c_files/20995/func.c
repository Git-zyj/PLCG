/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20995
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
    var_15 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        arr_10 [i_3] [i_1] [i_0] = (short)18;
                        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) <= (-3673676951757707582LL)));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 1; i_5 < 15; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((arr_7 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2]) << (((arr_7 [i_0] [i_0] [i_1] [i_2 + 1] [i_4 + 1] [i_5]) - (14055900762244585588ULL))))))));
                            arr_16 [i_1] [(_Bool)1] [i_4 + 3] [i_1] [i_2] [i_1 + 1] [i_0] = ((/* implicit */_Bool) 3673676951757707581LL);
                        }
                        var_17 &= ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    }
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 4] [i_1 - 2])) ? (((arr_0 [i_0]) ? (arr_5 [i_2] [i_1]) : (((/* implicit */unsigned int) arr_14 [15] [i_1] [i_1] [i_1 - 2] [i_1 + 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [8LL] [i_0] [i_1] [i_1 - 1] [i_0])) && (((/* implicit */_Bool) arr_13 [i_2 - 1] [i_1] [i_1] [i_2]))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 3) 
        {
            for (unsigned char i_7 = 4; i_7 < 14; i_7 += 2) 
            {
                for (short i_8 = 1; i_8 < 15; i_8 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) 2736306967622295399LL));
                        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) arr_14 [i_0] [(signed char)8] [i_7] [i_8 + 1] [i_6])))))) * (arr_26 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_7 - 1] [i_6 + 1])));
                        var_21 = ((/* implicit */long long int) arr_23 [i_6 - 2] [i_7] [i_7 - 2] [i_8 + 1]);
                        arr_27 [i_0] [i_6 - 1] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_14) ? (arr_8 [i_0] [i_6 + 1] [i_6 + 1] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [15] [i_7] [3LL])))))) ? ((-(-1253911036))) : (14552048)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            var_22 = arr_8 [i_0] [i_0] [i_9] [12];
            arr_30 [i_0] [i_0] [i_0] &= ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_9] [i_9])) ? (arr_21 [i_0] [i_0] [i_0] [i_0]) : (arr_21 [i_0] [i_0] [i_9] [i_9]));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (short)29881))) < (((/* implicit */int) ((unsigned short) (_Bool)1)))));
            arr_31 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_9);
        }
        for (int i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    var_24 = arr_37 [i_0] [i_11] [i_12];
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1253911037)) && ((_Bool)1))))));
                }
                for (unsigned short i_13 = 2; i_13 < 15; i_13 += 3) 
                {
                    arr_45 [i_0] [i_0] [i_11] [i_13] = ((/* implicit */unsigned short) ((long long int) arr_29 [i_0]));
                    arr_46 [11U] [i_10] = ((/* implicit */long long int) arr_25 [i_13 - 1] [i_10] [(unsigned char)3] [i_10]);
                    arr_47 [i_0] = ((/* implicit */_Bool) ((((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) / (((((/* implicit */_Bool) var_1)) ? (arr_2 [i_11] [i_10] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                }
                for (signed char i_14 = 1; i_14 < 14; i_14 += 3) 
                {
                    arr_52 [i_0] [i_0] [i_0] [(unsigned short)12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_14 - 1] [i_14 - 1] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_14 - 1] [i_14 - 1] [i_14 - 1]))) : (arr_48 [i_14 + 1])));
                    var_26 = ((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_14 + 1] [i_10] [i_10] [i_10]))));
                }
                /* LoopNest 2 */
                for (long long int i_15 = 2; i_15 < 15; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_10] [i_0] [i_10] [i_11] [i_15] [i_16])) : (((/* implicit */int) arr_9 [i_11] [i_15] [i_16]))))) ? ((+(((/* implicit */int) (short)-5)))) : (((((/* implicit */int) var_14)) << (((/* implicit */int) arr_0 [(short)8]))))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_15 + 1] [i_16])) ? ((+(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_9 [i_11] [i_11] [i_15 - 1]))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_14 [i_0] [i_10] [i_11] [i_10] [i_11]) : (arr_14 [i_0] [i_0] [i_10] [i_10] [i_0])));
            }
            /* LoopSeq 1 */
            for (signed char i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                arr_59 [i_0] [8U] [i_17] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_38 [i_0] [(signed char)2] [i_17]))));
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_67 [i_0] [i_17] [i_18] = ((/* implicit */short) ((int) arr_12 [i_10] [i_10] [i_17] [i_18] [i_10] [i_18]));
                            arr_68 [i_0] [i_10] [i_0] [i_18] [i_18] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_0] [i_10]))));
                            var_30 = ((/* implicit */unsigned short) (+(arr_62 [i_19] [i_18] [i_18] [i_17] [i_0] [i_0])));
                        }
                    } 
                } 
            }
            arr_69 [i_10] [i_0] = arr_14 [i_0] [i_10] [i_0] [i_10] [i_10];
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((((/* implicit */int) arr_34 [i_0] [i_0] [i_10])) - (((/* implicit */int) arr_23 [i_0] [i_0] [i_10] [(unsigned char)6])))) * (((/* implicit */int) arr_28 [i_0])))))));
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (+(var_7))))));
        }
        arr_70 [i_0] = ((((/* implicit */int) arr_24 [i_0])) - (((/* implicit */int) (_Bool)1)));
    }
    var_33 = ((/* implicit */long long int) var_8);
}
