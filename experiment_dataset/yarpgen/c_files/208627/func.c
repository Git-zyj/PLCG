/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208627
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_18 = min((arr_0 [i_0]), (arr_0 [i_0]));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0])) * (((/* implicit */int) arr_3 [i_0]))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 - 1]))));
        }
        var_19 &= ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) min((arr_4 [12U] [12U]), (arr_4 [i_0] [i_0])))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_20 = ((/* implicit */unsigned int) arr_3 [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2611122942U)) ? (3337890626U) : (3337890626U)));
        var_22 = ((/* implicit */signed char) arr_3 [i_2]);
        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (arr_8 [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(_Bool)1])))));
    }
    var_24 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            {
                var_25 |= ((/* implicit */long long int) arr_2 [i_4 + 1]);
                arr_18 [i_4] = ((/* implicit */signed char) arr_10 [i_4]);
                var_26 = ((/* implicit */_Bool) max((var_26), (((((/* implicit */_Bool) (unsigned short)50183)) && (((/* implicit */_Bool) -852724279))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        var_27 -= ((((/* implicit */_Bool) max((arr_20 [i_5]), (arr_20 [i_5])))) ? (arr_20 [i_5]) : (((((/* implicit */_Bool) arr_20 [i_5])) ? (arr_20 [i_5]) : (arr_20 [i_5]))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_5] [i_6] [i_6] [i_7] [i_8])) ? (((/* implicit */int) ((((/* implicit */int) arr_24 [i_8] [i_6] [(signed char)3])) != (((((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_6] [i_5] [i_5])) ? (((/* implicit */int) arr_21 [i_7] [i_7])) : (((/* implicit */int) arr_24 [i_5] [i_6] [i_8]))))))) : (((((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) arr_28 [19LL] [i_6] [i_7] [2])) : (((/* implicit */int) arr_25 [i_5] [i_5] [(unsigned char)21])))) + (((/* implicit */int) arr_28 [i_5] [i_5] [i_6] [i_5]))))));
                        arr_30 [i_6] [i_8] [i_7] [3] = ((/* implicit */int) min((((((/* implicit */_Bool) min((arr_26 [i_5] [i_5] [i_5] [i_6]), (arr_26 [i_6] [(short)7] [i_5] [i_6])))) ? (((((/* implicit */_Bool) arr_23 [i_5] [i_6])) ? (arr_29 [i_5] [i_6] [i_6] [i_7] [i_8]) : (((/* implicit */unsigned long long int) arr_20 [i_5])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_5] [i_6])) <= (((/* implicit */int) arr_23 [i_5] [i_6])))))))), (((/* implicit */unsigned long long int) arr_28 [i_5] [i_5] [i_5] [i_5]))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_7])) && (((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [14] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [7ULL]))) : (arr_20 [(unsigned char)9])))) ? (((/* implicit */int) min((arr_28 [i_5] [i_5] [i_7] [(unsigned char)12]), (((/* implicit */short) arr_21 [i_6] [i_8]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5])) && (((/* implicit */_Bool) arr_26 [i_5] [i_6] [i_6] [(signed char)6]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7] [i_7])) ? (((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_22 [i_5] [(_Bool)1] [i_8]))))) && (((/* implicit */_Bool) arr_21 [18U] [i_7]))))))))));
                        arr_31 [i_5] [i_6] [i_7] [i_6] [i_7] = ((/* implicit */signed char) arr_26 [i_5] [i_6] [i_7] [i_6]);
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_22 [i_5] [(_Bool)1] [i_5]))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)15366)) ? (((/* implicit */unsigned long long int) -229072113)) : (699847809177310431ULL))) > (((/* implicit */unsigned long long int) ((((arr_24 [i_5] [(signed char)22] [i_5]) ? (((/* implicit */int) arr_22 [i_5] [18U] [18U])) : (((/* implicit */int) arr_24 [i_5] [(unsigned char)22] [(unsigned char)22])))) - (((((/* implicit */_Bool) arr_26 [i_5] [(_Bool)0] [i_5] [8])) ? (((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_26 [i_5] [(short)22] [i_5] [(unsigned char)18])))))))));
        arr_32 [i_5] &= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_29 [i_5] [i_5] [12LL] [(unsigned char)4] [(unsigned short)8])) ? (arr_29 [i_5] [i_5] [24LL] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_5]))))), (((/* implicit */unsigned long long int) min((min((arr_27 [i_5] [(signed char)14] [i_5]), (((/* implicit */int) arr_22 [i_5] [18] [18])))), (arr_27 [i_5] [24ULL] [24ULL]))))));
    }
    for (int i_9 = 1; i_9 < 13; i_9 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_10 = 3; i_10 < 10; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 3; i_11 < 12; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    {
                        arr_43 [i_9] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_36 [i_9 + 1] [i_11 - 1])) ? (((/* implicit */int) arr_38 [i_9 - 1])) : (((/* implicit */int) arr_36 [i_9 - 1] [i_11 - 1])))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_9] [i_9])) ? (((/* implicit */int) arr_23 [i_10 + 1] [i_10])) : (arr_39 [i_9])))) ? (((((/* implicit */_Bool) arr_22 [i_9] [i_10] [i_9 + 1])) ? (((/* implicit */int) arr_42 [i_10] [10] [(_Bool)1] [i_11] [13U] [(signed char)10])) : (((/* implicit */int) arr_42 [i_10] [i_10] [i_10] [i_12] [i_12] [i_12])))) : (arr_39 [i_9 - 1])))));
                        arr_44 [i_9] [(unsigned char)2] [i_10] [i_12] [i_9] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_37 [4ULL])) : (((((/* implicit */_Bool) (unsigned short)15366)) ? (((/* implicit */int) (short)-27271)) : (((/* implicit */int) (unsigned short)50181))))))) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_10] [4U])), (arr_2 [16ULL])))) != (((((/* implicit */_Bool) arr_33 [i_11] [i_11])) ? (((/* implicit */int) arr_7 [i_10] [i_10])) : (((/* implicit */int) arr_7 [i_10] [i_10]))))))) : (((/* implicit */int) arr_7 [i_10] [3U]))));
                        var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3337890626U)) | (1ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_42 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) : (arr_27 [i_10] [i_10] [(unsigned char)6])))) : (arr_20 [i_9]))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_11 + 2])) ? (((/* implicit */int) arr_1 [i_11 - 3])) : (((/* implicit */int) arr_1 [i_11 - 1])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_13 = 2; i_13 < 13; i_13 += 1) 
        {
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((arr_35 [i_9 - 1] [i_13 - 1]) ? (((/* implicit */int) arr_35 [i_9 + 1] [i_13 + 1])) : (((/* implicit */int) arr_35 [i_9 + 1] [i_13 - 2])))))));
            /* LoopNest 2 */
            for (unsigned int i_14 = 2; i_14 < 12; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    {
                        arr_57 [i_9] [i_15] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) arr_19 [i_9 - 1] [i_9]);
                        arr_58 [i_9] [i_15] [6] [i_9] [6] = ((/* implicit */unsigned int) arr_35 [i_9 - 1] [i_13]);
                    }
                } 
            } 
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned int i_18 = 2; i_18 < 10; i_18 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_54 [2])) * (((/* implicit */int) arr_62 [i_18] [(_Bool)1] [i_9]))));
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50183)) ? (((/* implicit */unsigned long long int) -229072113)) : (0ULL)))) ? (((arr_35 [i_18 + 2] [i_9 + 1]) ? (((/* implicit */int) arr_35 [i_18 - 2] [i_9 + 1])) : (((/* implicit */int) arr_35 [i_18 + 4] [i_9 - 1])))) : (((/* implicit */int) arr_35 [i_18 + 4] [i_9 + 1]))));
                        var_36 = ((/* implicit */unsigned char) max((((arr_54 [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [2LL]))) : (arr_61 [i_9 + 1] [i_16] [i_18 - 2] [i_18]))), (((/* implicit */long long int) ((arr_54 [6U]) && (((/* implicit */_Bool) arr_28 [i_9 + 1] [i_9] [i_18 + 1] [i_18 + 1])))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [(_Bool)1] [(_Bool)1] [i_9 - 1] [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (3337890628U)))) ? (arr_51 [(_Bool)1] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [7ULL] [i_9] [i_16] [4LL])) ? (arr_41 [i_9] [i_16] [2LL]) : (arr_59 [i_16] [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_9 - 1] [i_9 - 1]))) : (arr_60 [i_16]))))));
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_63 [i_9 + 1] [i_16] [i_16]), (((/* implicit */short) arr_54 [(unsigned char)4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_9 + 1] [(signed char)20] [i_9 + 1])) ? (((/* implicit */int) arr_22 [i_9 - 1] [(signed char)4] [i_9 + 1])) : (((/* implicit */int) arr_22 [i_9 - 1] [18ULL] [i_9 + 1]))))) : (min((((((/* implicit */_Bool) arr_64 [i_9] [i_9] [i_9] [13ULL])) ? (arr_33 [i_16] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9] [i_9]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [2] [(unsigned short)24] [i_16])) ? (arr_55 [i_9] [i_9] [12U] [4U]) : (((/* implicit */int) arr_62 [i_9] [i_16] [i_16])))))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_19 = 0; i_19 < 18; i_19 += 1) 
    {
        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_19] [(unsigned short)16] [i_19]))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (unsigned short)15353)) : (((/* implicit */int) (short)-27260))));
        arr_68 [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 659976625)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (_Bool)1))));
        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_19] [(signed char)4])) ? (((/* implicit */int) arr_25 [i_19] [14U] [i_19])) : (((/* implicit */int) arr_25 [i_19] [i_19] [i_19]))));
        var_41 ^= ((/* implicit */unsigned int) arr_1 [i_19]);
    }
}
