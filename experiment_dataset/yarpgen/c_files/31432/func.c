/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31432
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] = (+(((/* implicit */int) (unsigned char)1)));
                                var_20 = (i_1 % 2 == zero) ? ((!(((/* implicit */_Bool) ((((arr_12 [i_1] [i_1 + 2]) + (9223372036854775807LL))) >> (((arr_12 [i_1] [i_1 + 2]) + (5277635218491824035LL)))))))) : ((!(((/* implicit */_Bool) ((((arr_12 [i_1] [i_1 + 2]) + (9223372036854775807LL))) >> (((((arr_12 [i_1] [i_1 + 2]) + (5277635218491824035LL))) - (4071416169698084318LL))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [2] |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_2] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_3 [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) && (((/* implicit */_Bool) (unsigned char)254)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            for (unsigned int i_6 = 2; i_6 < 15; i_6 += 2) 
            {
                {
                    arr_23 [i_5] [i_5] [i_5] = ((/* implicit */short) (-(959028859)));
                    /* LoopNest 2 */
                    for (long long int i_7 = 3; i_7 < 15; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_21 *= (+(arr_13 [i_0] [i_5 + 1] [i_6] [i_8] [i_8]));
                                arr_28 [i_5] [i_5 + 2] [i_6 - 1] [i_7 - 3] [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17179868160LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (2545158474U)))) ? (((((/* implicit */int) (signed char)-105)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_3 [i_0]))));
                            }
                        } 
                    } 
                    arr_29 [i_5] [i_5] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1296057963U)))) ? (arr_6 [i_5] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6 + 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((_Bool) arr_7 [4U] [4U])))))) : (max((((((/* implicit */long long int) arr_13 [i_5] [(short)6] [i_5 + 2] [i_6] [i_6])) - (arr_17 [i_6] [(_Bool)1] [i_6]))), (((/* implicit */long long int) ((arr_17 [i_6] [i_5] [16U]) == (((/* implicit */long long int) ((/* implicit */int) (signed char)68))))))))));
                    arr_30 [i_0] [i_5] [(short)0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */long long int) 831898990)) : (arr_10 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_5])))) || (((/* implicit */_Bool) min((arr_22 [13LL] [i_6 + 1] [i_6]), (((/* implicit */unsigned int) var_15)))))));
                }
            } 
        } 
    }
    for (long long int i_9 = 1; i_9 < 13; i_9 += 2) 
    {
        var_22 ^= ((/* implicit */unsigned char) var_12);
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((528185100U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_5)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_9] [i_9])) ? (arr_5 [i_9 + 1] [i_9] [i_9]) : (((/* implicit */long long int) -671736023))))) ? ((+(68719476735LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_9] [i_10] [i_11]))))))))));
                    var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [i_9])) ? (arr_21 [i_9]) : (arr_21 [i_9]))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_9] [i_9])))));
                }
            } 
        } 
        arr_42 [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_27 [i_9] [i_9 + 1] [i_9 + 1] [i_9]) ? (arr_10 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9] [i_9 + 1] [i_9] [i_9]))))))));
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (min((var_18), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((int) (_Bool)1)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)12676))));
    /* LoopNest 3 */
    for (long long int i_12 = 2; i_12 < 15; i_12 += 2) 
    {
        for (unsigned int i_13 = 1; i_13 < 14; i_13 += 4) 
        {
            for (unsigned int i_14 = 1; i_14 < 15; i_14 += 3) 
            {
                {
                    arr_52 [i_12] [i_12 + 1] [i_13] [i_14 - 1] = ((((/* implicit */_Bool) min((-2147483642), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_14 + 1]))))) : ((+(((((/* implicit */_Bool) arr_8 [i_12] [i_12] [i_12])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)255)))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_57 [i_16] [i_15] [i_14 + 1] [i_13] [i_12] = arr_9 [i_15];
                                var_26 = ((/* implicit */long long int) var_19);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 1; i_17 < 14; i_17 += 4) 
                    {
                        for (short i_18 = 0; i_18 < 16; i_18 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (0U) : (2248482615U)));
                                var_28 = ((((/* implicit */_Bool) ((short) arr_48 [i_13 - 1] [i_14 + 1] [i_18]))) ? (min(((~(((/* implicit */int) arr_62 [i_17] [i_13] [i_13 + 1] [i_17] [(short)15] [(short)15] [i_18])))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)254)) : (-2147483642))))) : (((((/* implicit */int) (short)24453)) * (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)254)))))));
                                var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)13)) : (125391914)))) <= (arr_55 [i_12] [(unsigned char)1] [i_14] [i_12] [i_18] [i_13 + 2] [i_14])));
                                arr_63 [i_12 - 1] [i_13] [10ULL] [i_17] [14LL] = ((/* implicit */_Bool) arr_19 [i_17] [i_17]);
                                arr_64 [i_12] [i_12] [i_12] [i_17] [i_12] [i_12] = ((/* implicit */short) 11081449094690063555ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */long long int) var_8);
}
