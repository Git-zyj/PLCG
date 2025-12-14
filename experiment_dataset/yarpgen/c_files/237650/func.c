/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237650
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
    var_13 = ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [i_0]));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            arr_4 [i_1 - 2] [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    arr_10 [i_3] [i_3] = ((/* implicit */int) arr_6 [i_3 - 1] [i_2] [i_1] [i_0]);
                    arr_11 [i_3 - 1] [i_0] [i_1 - 2] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_1 [i_3] [i_3 - 1])) : (((/* implicit */int) arr_1 [i_3] [i_3 + 1]))));
                    arr_12 [i_3] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_3 - 1]);
                }
                arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 2])) ? (arr_7 [i_0] [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])))))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_5 [i_0] [i_1 - 2] [i_2] [i_2]))));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    var_16 = ((/* implicit */_Bool) var_3);
                    /* LoopSeq 2 */
                    for (signed char i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        var_17 += ((/* implicit */signed char) (~(((arr_5 [i_0] [i_1 + 1] [i_0] [i_5]) >> (((arr_6 [(unsigned char)11] [i_1] [i_1] [i_1]) - (9301321952795268436ULL)))))));
                        var_18 += ((/* implicit */unsigned int) -1479541050);
                    }
                    for (signed char i_6 = 4; i_6 < 19; i_6 += 2) 
                    {
                        arr_23 [i_6 - 1] [i_1] [i_1] [i_2] [i_6] = ((/* implicit */unsigned short) arr_22 [i_6] [i_2] [i_2] [i_4] [(_Bool)1]);
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_16 [i_6 - 4]))));
                        arr_24 [i_0] [i_1 - 1] [i_2] [i_4 - 1] [i_6 - 4] |= (-(((/* implicit */int) arr_16 [i_0])));
                        arr_25 [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                    }
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    arr_28 [i_7 - 1] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_0))))));
                    var_21 = ((/* implicit */short) arr_7 [i_1 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]);
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1 - 2] [i_1] [i_1 - 1] [i_2] [i_7 - 1])) ? (((/* implicit */int) arr_8 [i_7 - 1] [i_2] [i_1 - 2] [i_0])) : (((/* implicit */int) arr_8 [i_7 - 1] [i_2] [i_1] [i_0])))))));
                }
                var_23 = (!(((/* implicit */_Bool) (unsigned char)248)));
            }
            arr_29 [i_0] = ((/* implicit */unsigned int) arr_17 [8] [(unsigned short)20]);
        }
        var_24 = ((/* implicit */_Bool) ((unsigned short) arr_21 [i_0] [i_0] [15ULL] [i_0]));
    }
    /* LoopSeq 4 */
    for (unsigned short i_8 = 3; i_8 < 16; i_8 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-(var_6))))));
        var_26 = ((/* implicit */long long int) arr_3 [i_8 - 1] [i_8] [i_8]);
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 3; i_9 < 10; i_9 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_9 + 1] [(unsigned short)19] [i_9 + 3] [i_9] [i_9])) ? (arr_9 [i_9 - 2] [i_9] [i_9 + 3] [i_9] [i_9 - 3]) : (var_0))))));
        /* LoopSeq 3 */
        for (unsigned short i_10 = 2; i_10 < 11; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_11 = 4; i_11 < 11; i_11 += 4) 
            {
                var_28 |= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_7))))));
                var_29 = ((/* implicit */short) (-(((((/* implicit */unsigned int) var_1)) - (var_7)))));
                var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        {
                            arr_45 [i_9] [i_10] [i_11 + 1] [i_12] [i_11 + 1] = ((/* implicit */_Bool) (-(var_11)));
                            var_31 += ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)7))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (long long int i_14 = 2; i_14 < 11; i_14 += 4) 
            {
                for (short i_15 = 2; i_15 < 11; i_15 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_9] [i_10 + 2] [i_9 - 3] [i_9] [(unsigned short)11])) ? (arr_35 [i_10 + 1] [(short)7]) : (arr_35 [i_10 + 1] [i_10 - 1])));
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
                        {
                            arr_57 [i_9] [i_14] [4LL] [i_10] [4LL] [i_16] [i_16] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_9 - 2] [i_14 - 1] [i_15 - 2] [i_16])) ? (arr_35 [i_9 - 1] [i_9]) : (arr_35 [i_15] [i_16])));
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) arr_33 [i_14 + 2]))));
                            var_34 += ((/* implicit */short) (~(var_6)));
                        }
                        var_35 = ((/* implicit */int) max((var_35), ((~(((((/* implicit */int) var_12)) | (((/* implicit */int) arr_2 [i_9] [i_10 - 2] [i_15]))))))));
                    }
                } 
            } 
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            arr_62 [i_17 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_53 [(unsigned short)3] [i_17 - 1] [i_17 - 1] [i_9 + 2] [i_17 - 1]))));
            var_36 += ((/* implicit */unsigned int) (+(arr_40 [i_17 - 1])));
        }
        for (unsigned char i_18 = 0; i_18 < 13; i_18 += 1) 
        {
            arr_65 [i_18] |= ((/* implicit */short) var_0);
            var_37 = ((/* implicit */unsigned short) arr_14 [i_9] [i_9] [i_18]);
            var_38 = ((/* implicit */_Bool) ((arr_60 [i_9 + 1] [i_9 + 2] [i_9]) * (arr_60 [i_9 - 2] [i_9 - 2] [i_9 + 2])));
            var_39 |= ((/* implicit */long long int) arr_56 [i_18] [i_18] [i_18] [2LL] [i_18]);
        }
        var_40 = arr_43 [i_9] [i_9];
    }
    /* vectorizable */
    for (unsigned long long int i_19 = 3; i_19 < 10; i_19 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_20 = 3; i_20 < 10; i_20 += 4) 
        {
            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (1660048989) : (((/* implicit */int) arr_42 [i_20 + 2]))));
            var_42 += ((/* implicit */short) arr_37 [i_20 - 1]);
            /* LoopNest 3 */
            for (unsigned short i_21 = 2; i_21 < 12; i_21 += 1) 
            {
                for (long long int i_22 = 1; i_22 < 12; i_22 += 4) 
                {
                    for (int i_23 = 0; i_23 < 13; i_23 += 3) 
                    {
                        {
                            arr_80 [i_19] [i_20 + 2] [i_21 - 2] [i_20 + 2] [i_19] [i_20 - 3] = ((((/* implicit */_Bool) arr_26 [i_19] [i_19] [i_19] [i_19 - 3] [i_20] [i_20 - 2])) ? (arr_9 [i_21] [i_21] [i_21 + 1] [i_22] [i_22 + 1]) : (((/* implicit */int) arr_26 [i_19] [i_19] [i_19] [i_19 - 1] [i_20 + 2] [i_20 + 1])));
                            var_43 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [i_19])) * (((/* implicit */int) arr_15 [i_21 - 1] [i_20 - 1] [i_19] [i_19 + 1]))));
                            arr_81 [(unsigned char)10] [i_20] [i_21] [i_22 + 1] [(unsigned char)10] [i_23] |= ((/* implicit */unsigned int) (+((~(var_1)))));
                        }
                    } 
                } 
            } 
            var_44 = ((/* implicit */unsigned long long int) arr_46 [i_20] [i_20 + 3] [i_20 + 3]);
        }
        for (int i_24 = 2; i_24 < 12; i_24 += 4) 
        {
            arr_85 [i_19] [i_24] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)-4796)))) ? (((/* implicit */int) arr_68 [i_19 + 2] [i_24 + 1])) : (arr_67 [i_19])));
            arr_86 [i_24] [i_19] [i_19 - 3] = arr_17 [i_19 + 1] [i_19 - 1];
        }
        var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((signed char) (short)4773)))));
        var_46 += ((/* implicit */signed char) (~(((/* implicit */int) arr_34 [i_19 + 3]))));
    }
    for (unsigned int i_25 = 0; i_25 < 14; i_25 += 1) 
    {
        arr_90 [i_25] [i_25] |= ((/* implicit */short) (!(((/* implicit */_Bool) (((+(3703170345452156189LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_89 [i_25] [i_25])))))))))));
        var_47 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-4796))))) >= (((/* implicit */int) var_3))));
    }
}
