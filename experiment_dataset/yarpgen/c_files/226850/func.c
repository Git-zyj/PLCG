/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226850
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0])))))))), (((long long int) min((((/* implicit */unsigned int) var_13)), (arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */long long int) 26U);
            var_18 = ((/* implicit */short) min((arr_5 [i_1] [i_0]), (((/* implicit */long long int) ((unsigned short) min((arr_1 [i_1]), (arr_1 [i_1])))))));
            var_19 = ((/* implicit */unsigned char) ((arr_0 [i_0]) ? (((/* implicit */int) min((arr_0 [i_0]), (var_5)))) : (((/* implicit */int) min(((unsigned char)9), (((/* implicit */unsigned char) arr_0 [i_1])))))));
            var_20 = var_12;
            arr_7 [i_0] [(signed char)20] = ((/* implicit */signed char) min((((arr_0 [i_0]) ? (((/* implicit */long long int) var_16)) : (min((arr_5 [6U] [(short)0]), (((/* implicit */long long int) var_14)))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)245)) ? (arr_1 [i_0]) : (3157716776U)))) : (1008LL)))));
        }
    }
    for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    arr_17 [i_2] [1LL] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_5 [i_2 - 2] [i_4]), (((/* implicit */long long int) var_14))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_21 = ((/* implicit */_Bool) arr_5 [i_3] [i_3]);
                    arr_18 [i_2] [i_2] = ((/* implicit */int) min((18446744073709551595ULL), (((/* implicit */unsigned long long int) 268173312U))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 -= ((/* implicit */int) var_1);
                        arr_21 [i_2] [i_2] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) var_8))))) ? (arr_14 [i_2]) : (((((/* implicit */_Bool) (unsigned char)128)) ? (arr_11 [i_2] [i_2]) : (4294443008U)))));
                        var_23 = ((/* implicit */long long int) arr_12 [i_2 - 1] [i_2 - 1]);
                        var_24 = ((/* implicit */int) arr_12 [i_4] [i_5]);
                        var_25 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)203))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_13))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_2]), (arr_0 [i_2]))))) == (min((3900297672U), (((/* implicit */unsigned int) arr_13 [i_2]))))))) / (((int) ((((/* implicit */_Bool) 1110694680)) ? (arr_5 [10LL] [i_2]) : (((/* implicit */long long int) 4294967282U)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                {
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((_Bool)1), (var_13))))))) ? (((/* implicit */unsigned int) var_17)) : (845550420U)));
                    var_28 += ((/* implicit */unsigned char) arr_11 [i_6] [i_6]);
                    var_29 = ((/* implicit */short) var_0);
                    arr_27 [10U] [i_2] [i_2] [1] = ((((/* implicit */_Bool) ((unsigned char) arr_24 [i_6] [i_6] [i_2]))) ? (((((/* implicit */_Bool) -8597034301109012887LL)) ? ((+(3153568290U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_22 [i_2 + 1]))))))) : ((((+(2340389760U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_14 [i_2])))))));
                    arr_28 [i_6] [i_2] [i_6] = ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            for (unsigned int i_10 = 1; i_10 < 13; i_10 += 4) 
            {
                {
                    var_30 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((arr_32 [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) : (var_16)))) ? (min((((/* implicit */long long int) arr_1 [i_8])), (1152358554653425664LL))) : (((/* implicit */long long int) arr_29 [i_8] [i_8])))), (((/* implicit */long long int) ((short) min((3587383650U), (((/* implicit */unsigned int) (unsigned char)244))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 2; i_11 < 12; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            {
                                arr_44 [i_8] [i_11] [i_10 + 2] [i_9] [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_33 [i_9] [(unsigned short)13] [i_10 + 1]) ? (((/* implicit */int) arr_33 [i_8] [i_8] [i_10 + 3])) : (((/* implicit */int) arr_33 [i_8] [i_12] [i_10 + 1]))))), (((((/* implicit */_Bool) arr_30 [i_8] [i_12])) ? ((+(var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                                var_31 = ((/* implicit */int) ((((/* implicit */int) min((arr_37 [i_8]), (((/* implicit */unsigned short) arr_0 [i_11 - 1]))))) == (((/* implicit */int) arr_43 [i_8] [(signed char)12] [i_8] [i_12]))));
                            }
                        } 
                    } 
                    var_32 = min((var_6), (((arr_30 [i_8] [i_9]) - (((/* implicit */int) min(((unsigned char)41), (((/* implicit */unsigned char) (_Bool)1))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) 
    {
        arr_49 [i_13] = ((/* implicit */_Bool) ((min((((((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_13]))) | (var_2))), (((/* implicit */unsigned int) ((unsigned short) var_17))))) - (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_48 [i_13] [i_13])))), (((/* implicit */int) var_5)))))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 1; i_14 < 12; i_14 += 4) 
        {
            for (signed char i_15 = 0; i_15 < 15; i_15 += 2) 
            {
                {
                    var_33 += ((/* implicit */short) var_16);
                    arr_57 [i_13] [i_14] [i_13] = ((/* implicit */short) min((min((var_6), (((/* implicit */int) arr_54 [i_13] [i_14 - 1] [i_15])))), (((/* implicit */int) min((arr_54 [i_13] [i_14 + 2] [i_15]), (arr_54 [i_14] [i_14] [i_13]))))));
                }
            } 
        } 
        arr_58 [i_13] [i_13] = ((/* implicit */_Bool) min((((var_5) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) var_0)))), (min((((((/* implicit */_Bool) arr_4 [i_13] [i_13])) ? (((/* implicit */int) arr_54 [i_13] [i_13] [1LL])) : (((/* implicit */int) arr_55 [i_13] [i_13])))), (((/* implicit */int) (_Bool)1))))));
        var_34 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (arr_50 [i_13])))), (arr_30 [4] [4])));
    }
    for (signed char i_16 = 0; i_16 < 19; i_16 += 3) 
    {
        arr_61 [i_16] = ((/* implicit */signed char) (~(min((((long long int) var_12)), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)20732)) - (arr_3 [i_16]))))))));
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)192)))), (((/* implicit */int) ((signed char) arr_4 [i_16] [i_16])))))) ? (min((min((var_11), (((/* implicit */long long int) arr_0 [i_16])))), (arr_5 [i_16] [i_16]))) : (arr_59 [i_16])));
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 19; i_17 += 4) 
        {
            for (short i_18 = 0; i_18 < 19; i_18 += 1) 
            {
                {
                    var_36 = ((/* implicit */long long int) var_6);
                    var_37 = ((/* implicit */_Bool) (-2147483647 - 1));
                }
            } 
        } 
    }
}
