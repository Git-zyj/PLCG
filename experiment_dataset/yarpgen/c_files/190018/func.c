/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190018
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
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) (-(var_1)));
                                var_16 = arr_0 [i_0];
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */int) (unsigned short)63)) | (((/* implicit */int) arr_0 [i_0])))) + (((/* implicit */int) ((1529553257U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11)))))))) | (var_0)));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_1])) || (((/* implicit */_Bool) 1529553271U)))))))) + (2765414038U)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 8; i_5 += 2) 
    {
        for (long long int i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            for (long long int i_7 = 1; i_7 < 8; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_18 ^= ((/* implicit */_Bool) arr_29 [i_8] [i_8]);
                            arr_34 [i_6] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5]))) % (arr_25 [i_5 + 3] [i_5 + 1])));
                            var_19 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_5 + 3]))));
                            var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_28 [i_5] [i_8] [i_9]))));
                        }
                        for (long long int i_10 = 1; i_10 < 9; i_10 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) (-((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((2136708056U) - (2136708015U)))))));
                            arr_37 [i_5] [i_6] [i_7 + 3] [i_6] [i_5] = ((/* implicit */unsigned int) arr_19 [i_5 + 2]);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))) == (arr_36 [i_5 + 2] [i_6] [i_6] [i_7] [i_8] [i_8] [i_11])));
                            arr_41 [i_5] [i_6] [i_7] [i_8] [i_8] [i_11] = ((/* implicit */long long int) var_14);
                        }
                        var_23 = ((/* implicit */unsigned char) var_15);
                    }
                    /* vectorizable */
                    for (long long int i_12 = 1; i_12 < 8; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 4; i_13 < 9; i_13 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 70368744177663LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_42 [i_5] [i_5 - 1] [i_5] [i_5]))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_19 [i_6 + 1])) : (((/* implicit */int) arr_19 [i_5 + 1]))));
                            arr_48 [i_5 + 2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5])) ? (arr_25 [i_6 - 1] [i_7]) : (((/* implicit */long long int) arr_47 [i_13] [i_13] [i_13] [i_13] [i_13]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_13 - 4]))));
                            var_26 = ((/* implicit */long long int) (signed char)120);
                        }
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_6] [i_6 - 1] [i_6 - 1])) ? (((2765414038U) & (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                        var_28 = arr_9 [i_5] [i_6] [i_6];
                        var_29 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_9)))) <= (((/* implicit */int) arr_12 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 + 2] [i_12 + 2] [i_12 - 1]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        arr_52 [i_14] [i_6] [i_6] [i_5] = ((/* implicit */short) arr_40 [i_6] [i_6] [i_7] [i_6] [i_5] [i_6] [i_5]);
                        var_30 -= ((/* implicit */unsigned int) (((~((+(var_0))))) == (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((6225247088603219018LL), (((/* implicit */long long int) 623723166U))))) ? (((/* implicit */int) (((+(3ULL))) < (((/* implicit */unsigned long long int) ((617902398) % (((/* implicit */int) var_9)))))))) : (((/* implicit */int) var_11))));
                            var_32 = (_Bool)1;
                            var_33 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_24 [i_6] [i_7 + 2] [i_14] [i_15]) / (((/* implicit */int) arr_7 [i_5]))))) && (((/* implicit */_Bool) arr_35 [i_5] [i_5 + 3] [i_5] [i_6 + 1] [i_7 + 2]))))), (max((arr_23 [i_5 + 2] [i_6] [i_14]), (var_13)))));
                        }
                        var_34 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) arr_29 [i_6] [i_7 + 2])), (arr_40 [i_7 + 1] [i_6] [i_5 + 3] [i_5 + 1] [i_5] [i_6] [i_5]))), (arr_40 [i_7 + 2] [i_6] [i_5 + 1] [i_5 + 3] [i_5 - 1] [i_6] [i_5])));
                    }
                }
            } 
        } 
    } 
}
