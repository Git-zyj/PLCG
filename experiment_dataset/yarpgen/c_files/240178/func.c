/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240178
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
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3 - 1] [i_2] [i_0 + 1] [i_0 + 1] [(unsigned short)7] = ((/* implicit */short) (((!(((/* implicit */_Bool) 812613426U)))) ? (max((((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_0 + 1])), (3482353870U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (signed char)22)))))))));
                            arr_13 [i_0] [i_0] [(unsigned short)1] [i_2] [i_0] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) (unsigned short)17019)), (arr_7 [(unsigned char)8] [i_1] [i_1] [9]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) (unsigned short)11)))))))) ? (((unsigned int) min((3482353858U), (((/* implicit */unsigned int) var_4))))) : (((/* implicit */unsigned int) ((max((-777299263), (-777299259))) & (((/* implicit */int) (unsigned short)23)))))));
                            var_10 = ((/* implicit */unsigned short) 3482353844U);
                            arr_14 [9LL] = ((/* implicit */signed char) 3482353847U);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 3; i_4 < 9; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [4LL] [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) 4166857470U)) ? (arr_15 [i_0 + 1] [i_0]) : (3482353866U))), (3482353856U))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_5]))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_0] [i_1])), (arr_1 [i_6])))))))));
                                arr_22 [i_0 - 1] [i_1] [i_4 - 2] [i_5] [i_1] &= ((/* implicit */int) (~(((((/* implicit */_Bool) 3482353870U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [3U] [i_5]))) >= (arr_8 [i_5] [(signed char)6] [(signed char)6]))))) : (arr_8 [i_0 - 1] [i_1] [i_4 - 3])))));
                                arr_23 [i_6] [i_4] [i_4] [i_1] [i_4] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) ((short) arr_15 [(_Bool)1] [(_Bool)1]))) + (2147483647))) >> (((((long long int) var_5)) - (20928LL))))) <= ((-(((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned short i_8 = 4; i_8 < 9; i_8 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) (unsigned short)48517)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48502))) : (128109826U))), (((/* implicit */unsigned int) (unsigned short)11))))));
                            var_12 = ((/* implicit */long long int) (unsigned char)88);
                            var_13 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_27 [(unsigned char)5] [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)16994)))))))) >> (((((((((/* implicit */_Bool) var_2)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) - (-9223372036854775805LL))) + (24LL)))));
                            arr_29 [i_0] [i_8] [i_0] [i_8] [i_0] [4LL] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)4096), (((/* implicit */unsigned short) arr_25 [i_0] [2U] [i_7] [i_8])))))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) arr_27 [i_0] [i_1] [i_7] [i_0])) | (((/* implicit */int) max((var_2), (((/* implicit */short) arr_19 [i_0] [i_0] [i_1] [(_Bool)1] [i_7] [(_Bool)1] [i_8])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        for (int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        for (long long int i_13 = 1; i_13 < 15; i_13 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) 812613449U);
                                arr_43 [(unsigned char)15] [i_9] [(unsigned short)11] [i_10] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (-(var_6)));
                                var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65503)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 3; i_14 < 17; i_14 += 2) 
                    {
                        for (short i_15 = 2; i_15 < 16; i_15 += 3) 
                        {
                            {
                                arr_49 [i_9] [i_10] [i_9] [(unsigned short)1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)196)), ((unsigned short)11))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 128109810U)) ? (((/* implicit */int) arr_35 [i_9] [i_9] [i_11] [i_14])) : (((/* implicit */int) (unsigned short)11))))))))));
                                arr_50 [i_9] [i_9] [i_9] [i_10] [i_14 - 1] [i_15] [i_15] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max(((unsigned short)65523), (((/* implicit */unsigned short) arr_40 [i_9] [i_9] [i_10] [i_10] [i_15 + 1] [i_15 + 1] [i_11]))))), (min((((/* implicit */unsigned int) (unsigned char)196)), ((-(128109826U)))))));
                                var_16 = ((/* implicit */short) min((max((((/* implicit */unsigned int) var_6)), (128109819U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)135)) >= (arr_38 [i_15] [i_15] [i_15] [i_14 + 1] [i_14] [i_10]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 18; i_17 += 2) 
                        {
                            {
                                arr_56 [i_9] [i_10] [15LL] [(unsigned char)14] [i_16] [i_16] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1205549010)) ? (max((arr_45 [i_9] [i_10] [6LL] [i_16]), (((/* implicit */long long int) (unsigned char)205)))) : (((/* implicit */long long int) (~(128109819U)))))) - (0LL)));
                                var_17 = ((/* implicit */_Bool) var_9);
                                arr_57 [(_Bool)1] [i_10] [i_11] [i_16] [i_16] [(unsigned short)12] [i_17] = (!(((/* implicit */_Bool) (-(max((11305840198767010319ULL), (((/* implicit */unsigned long long int) arr_38 [i_9] [i_9] [i_9] [i_9] [(short)4] [(short)4]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        for (signed char i_19 = 3; i_19 < 16; i_19 += 2) 
                        {
                            {
                                arr_63 [i_10] [i_19] [i_18] [i_11] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) ((signed char) var_0)))))) : (((/* implicit */int) (unsigned short)59480))));
                                arr_64 [i_9] [i_10] [i_11] [i_18] [i_19] = ((/* implicit */unsigned char) 812613424U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_20 = 1; i_20 < 16; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 18; i_21 += 1) 
                        {
                            {
                                arr_71 [i_9] [(_Bool)1] [i_9] [i_20 + 2] [14LL] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4096))) & (-5266929580560413283LL)));
                                arr_72 [i_10] [13LL] [i_11] [i_20] [(short)15] [i_21] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3482353872U)) ? (((/* implicit */unsigned long long int) 3009318381U)) : (arr_68 [i_10] [i_10] [i_10] [i_20])))))) ? (min((min((((/* implicit */unsigned int) arr_31 [i_21])), (3482353869U))), ((+(4166857470U))))) : (1540200839U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_22 = 0; i_22 < 22; i_22 += 1) 
    {
        for (long long int i_23 = 1; i_23 < 18; i_23 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                {
                    for (unsigned int i_25 = 4; i_25 < 20; i_25 += 2) 
                    {
                        {
                            var_18 -= ((/* implicit */_Bool) var_2);
                            arr_84 [(short)8] [i_23] [i_22] [i_25] [i_25] = ((/* implicit */unsigned char) 3482353870U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_26 = 0; i_26 < 22; i_26 += 1) 
                {
                    for (unsigned int i_27 = 0; i_27 < 22; i_27 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) arr_75 [i_22]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((3482353847U), (((/* implicit */unsigned int) arr_80 [i_22] [(_Bool)1])))))), (((unsigned int) max((arr_88 [i_22] [i_22]), (((/* implicit */unsigned int) (_Bool)1)))))));
                            arr_89 [i_22] = (!(((/* implicit */_Bool) ((signed char) arr_85 [i_26]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_28 = 0; i_28 < 22; i_28 += 3) 
                {
                    for (unsigned int i_29 = 3; i_29 < 21; i_29 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (~(((/* implicit */int) arr_77 [i_22]))));
                            arr_94 [i_28] [i_23] [i_28] [i_22] = ((/* implicit */unsigned char) ((_Bool) var_6));
                            var_21 = ((/* implicit */unsigned long long int) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
}
