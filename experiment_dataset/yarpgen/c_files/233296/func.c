/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233296
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
    var_11 = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511))) : (min((((/* implicit */unsigned int) var_6)), (var_7)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) -614670357)) ? (-250945074) : (((/* implicit */int) (short)12052))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((-614670357) + (2147483647))) >> ((((~(((/* implicit */int) arr_1 [i_1])))) + (8)))));
                        arr_11 [i_3] [i_0] [i_1] [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_0 + 1]))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 3) 
                    {
                        var_13 = ((max((((/* implicit */unsigned int) 250945060)), (var_7))) == (((/* implicit */unsigned int) ((/* implicit */int) (short)23169))));
                        arr_15 [i_0] [i_4] [i_2 - 1] [(unsigned short)2] = ((/* implicit */int) arr_7 [i_0] [i_0] [i_2 + 1] [i_2 + 1]);
                    }
                    var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -250945074)) ? (((/* implicit */unsigned long long int) -250945074)) : (5145006876797177584ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */short) arr_4 [i_1])), ((short)-32763)))), ((+(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) (+(min((6516075507376867178LL), (((/* implicit */long long int) (unsigned short)42751))))));
        /* LoopSeq 2 */
        for (signed char i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            var_16 = ((/* implicit */long long int) arr_5 [18] [i_5]);
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - ((-(((/* implicit */int) (signed char)-125))))))) ? (((arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2] [(unsigned short)12]) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) var_2)), (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6616)))));
        }
        /* vectorizable */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                for (unsigned char i_8 = 2; i_8 < 21; i_8 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_13 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 2]))));
                        var_19 = ((/* implicit */unsigned short) arr_27 [i_0] [i_6] [i_6] [i_6]);
                        var_20 = ((/* implicit */unsigned char) arr_14 [i_0 + 2] [i_0 + 2] [i_6] [i_8] [i_0 + 2] [i_8 - 1]);
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) 3719786571U);
        }
    }
    /* vectorizable */
    for (signed char i_9 = 1; i_9 < 20; i_9 += 2) /* same iter space */
    {
        arr_35 [i_9] = ((/* implicit */unsigned int) ((var_5) & (((/* implicit */long long int) ((arr_3 [i_9] [i_9]) ? (((/* implicit */int) arr_8 [i_9] [3ULL] [i_9] [i_9])) : (((/* implicit */int) arr_20 [i_9] [10])))))));
        var_22 = ((/* implicit */unsigned short) arr_1 [i_9 + 1]);
        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) -250945074)) ? (((((/* implicit */_Bool) var_5)) ? (arr_29 [i_9] [i_9] [i_9] [18ULL]) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_9 + 2] [i_9 - 1])))));
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (int i_12 = 3; i_12 < 9; i_12 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_11] [i_11] [i_11] [(unsigned char)18] [i_11] [i_11])) ? (arr_14 [i_10] [i_11] [i_12] [2U] [i_11] [i_11]) : (arr_14 [i_10] [i_10] [i_12] [6] [i_10] [i_12 - 1])))) ? (((/* implicit */int) ((arr_14 [i_11] [i_11] [i_11] [(_Bool)1] [i_12 + 1] [(_Bool)0]) == (arr_14 [i_10] [i_11] [i_11] [16U] [i_11] [i_12])))) : (min((arr_14 [i_12] [6U] [i_10] [16LL] [i_10] [16LL]), (arr_14 [i_11] [i_11] [12] [(short)0] [i_12] [i_11])))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 3; i_14 < 9; i_14 += 3) 
                        {
                            {
                                var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_9 [i_11] [i_11] [i_14 - 2] [i_14 - 2] [i_10] [i_13]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_19 [(unsigned char)4]))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (((((/* implicit */_Bool) arr_23 [i_10] [i_11] [i_10])) ? (((/* implicit */unsigned long long int) arr_27 [i_14] [i_13] [i_11] [i_10])) : (arr_34 [i_10]))))))));
                                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) ((arr_45 [(short)6] [i_11] [(unsigned short)7] [i_13]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63)))))), (-250945064)))) ? (((((/* implicit */_Bool) ((unsigned char) arr_32 [(_Bool)1]))) ? (((((/* implicit */_Bool) 250945074)) ? (var_10) : (4503599627370495LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 1886557941U)))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_14]))))))));
                                var_27 ^= ((/* implicit */signed char) (-((+(arr_45 [4U] [4U] [4U] [i_14 - 1])))));
                                var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_17 [i_12 + 2]))) ^ (((/* implicit */int) ((unsigned short) 13841762497916524268ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 ^= ((/* implicit */int) var_10);
}
