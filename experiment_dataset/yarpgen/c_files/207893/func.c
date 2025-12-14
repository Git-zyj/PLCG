/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207893
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_3 [i_0] [0LL] [i_0 + 3])))), (((/* implicit */int) min((((short) -4783960614101535746LL)), (((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_3]))))))))));
                                arr_13 [i_4] [i_4] [12] [i_2] [i_1] [i_4] [i_4] &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)255)), (min((arr_8 [i_2] [i_0 + 3] [i_2] [i_3] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 + 2]))))));
                                var_15 = ((/* implicit */long long int) min(((+(arr_4 [i_3 - 1] [i_0 + 2]))), (((/* implicit */unsigned long long int) ((int) arr_4 [i_3 - 1] [i_0 - 1])))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) / (18446744073709551609ULL)))));
                                var_17 = ((/* implicit */unsigned char) (+(-4783960614101535746LL)));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) < (1740622937U))) ? (13353636325810623141ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)9636), ((unsigned short)11718))))))) / (((/* implicit */unsigned long long int) (-(arr_2 [i_1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_6 = 2; i_6 < 9; i_6 += 3) 
        {
            arr_20 [i_5] = ((/* implicit */_Bool) ((long long int) arr_2 [i_6 + 2]));
            var_19 = ((/* implicit */long long int) ((short) (~(((/* implicit */int) arr_3 [i_6 + 3] [i_6 - 2] [i_6 + 2])))));
        }
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) min((arr_18 [i_7]), (((/* implicit */unsigned long long int) arr_1 [i_5]))))) && (((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [i_5])))))));
            var_21 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_5] [(short)8] [i_7] [i_7]))) / (arr_5 [i_5])))));
            var_22 = ((/* implicit */_Bool) 5580221633384223931LL);
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_8] [i_8] [i_8] [i_5])) * (((/* implicit */int) var_8)))))));
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */int) (signed char)-49)) <= (((/* implicit */int) (unsigned short)53802)))))));
        }
        arr_28 [4U] = ((/* implicit */signed char) min(((~(min((arr_17 [(unsigned short)1] [i_5]), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) (~(3071786003003539322LL))))));
    }
    for (signed char i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_10 = 3; i_10 < 11; i_10 += 1) 
        {
            for (unsigned short i_11 = 2; i_11 < 10; i_11 += 3) 
            {
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    {
                        var_25 = ((/* implicit */signed char) ((((((arr_12 [i_9] [i_10] [i_11 - 2] [i_12] [i_12] [i_12]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_22 [i_9])))) & (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775805LL)) || (((/* implicit */_Bool) 1740622910U))))))) + (((/* implicit */int) (((+(234881024))) != (((/* implicit */int) arr_19 [i_10 - 2])))))));
                        arr_38 [i_10] [i_10] [i_11 - 2] [i_11] = ((/* implicit */unsigned short) min(((((~(9223372036854775799LL))) / (min((((/* implicit */long long int) var_12)), (arr_29 [i_12]))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -234881026))))), (var_11))))));
                        var_26 = min((((unsigned short) (!(((/* implicit */_Bool) arr_8 [i_10] [(unsigned char)1] [i_10] [i_10 + 1] [i_10]))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [8U] [i_10])))))))));
                        arr_39 [i_9] [i_9] [(unsigned short)6] [i_9] [i_9] &= ((/* implicit */unsigned short) ((1086105269U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) arr_0 [i_9] [i_9])) * (var_10))), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_9]))))) : (min((((arr_1 [i_9]) - (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_9] [i_9]))))), (arr_16 [i_9] [i_9])))));
    }
    for (signed char i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
    {
        var_28 -= ((/* implicit */unsigned short) min((9223372036854775807LL), (((/* implicit */long long int) 744314873))));
        arr_42 [7U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_13] [i_13])) ? (((var_11) >> (((((((/* implicit */_Bool) arr_25 [i_13] [i_13] [i_13])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))) - (33))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_13] [i_13] [i_13] [i_13] [i_13])))));
    }
    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_15 = 0; i_15 < 18; i_15 += 3) 
        {
            arr_48 [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_44 [i_15]))));
            /* LoopSeq 3 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 1; i_17 < 16; i_17 += 2) 
                {
                    for (unsigned short i_18 = 2; i_18 < 16; i_18 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) ((((/* implicit */int) arr_44 [i_14])) <= (((/* implicit */int) arr_44 [i_14]))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((arr_53 [i_18] [i_18 + 2] [i_17 - 1] [i_17] [i_15]) << (((arr_53 [9LL] [i_18 + 2] [i_17 - 1] [i_16] [i_15]) - (2249690506U))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned short) (+(arr_46 [i_14] [i_14])));
                var_32 = ((/* implicit */_Bool) arr_52 [7] [i_15] [i_15] [i_15]);
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
            {
                arr_57 [i_19] [6ULL] [i_14] = ((/* implicit */signed char) ((long long int) arr_47 [i_19]));
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 2) 
                {
                    for (unsigned short i_21 = 0; i_21 < 18; i_21 += 2) 
                    {
                        {
                            arr_63 [i_14] = ((/* implicit */long long int) var_4);
                            var_33 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_49 [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_54 [i_14])) : (((/* implicit */int) var_2))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned short) (-(arr_47 [i_14])));
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 3; i_22 < 17; i_22 += 4) 
                {
                    for (short i_23 = 3; i_23 < 17; i_23 += 4) 
                    {
                        {
                            arr_71 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_64 [i_22 - 2] [i_22] [i_23] [i_23 - 1]))));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_61 [i_23 + 1] [i_23 - 1] [i_23 - 1] [i_23 + 1] [i_22 - 2]))) / (arr_51 [8LL] [i_23 - 2] [i_23 - 3] [i_22 - 1])));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_53 [i_14] [i_14] [i_15] [i_19] [i_14])) ? (arr_68 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */long long int) arr_53 [i_14] [i_14] [i_14] [i_14] [i_14]))));
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
            {
                var_37 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_69 [i_14] [i_15] [i_14] [i_15] [i_24] [i_24])) >= ((-(var_10)))));
                arr_74 [i_14] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)9456))));
            }
        }
        var_38 = ((/* implicit */unsigned char) var_1);
    }
    var_39 = ((/* implicit */unsigned int) var_6);
}
