/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204812
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 21; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_15 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89))) : (var_4)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (11423318228867419963ULL))) : (((/* implicit */unsigned long long int) arr_11 [i_3] [i_1 + 2])));
                                arr_13 [i_3] [i_2] [i_2] |= ((/* implicit */short) (-(arr_0 [i_0 - 3])));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) -641439630);
                                var_16 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_3] [i_4 + 1]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) (short)26077);
                    var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (arr_11 [(signed char)20] [16ULL]) : (((/* implicit */int) arr_5 [(short)10] [i_1] [i_2] [(short)10]))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 3])) ? (arr_7 [i_0] [i_0 - 2] [i_0 + 2] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (var_14))))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            arr_19 [i_0] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5] [i_0] [i_0 + 1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)));
            var_20 = (+(((/* implicit */int) var_11)));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_1 [i_5]))));
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((arr_17 [(unsigned char)7] [i_0 - 2] [i_0 - 3]) ? (var_13) : (((/* implicit */unsigned long long int) var_1)))))));
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 20; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44781)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 - 3])))));
                    arr_26 [i_0] [i_6] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65032))) : (var_12)))));
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                }
            } 
        } 
    }
    for (int i_8 = 4; i_8 < 21; i_8 += 3) /* same iter space */
    {
        arr_29 [13ULL] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_8] [i_8] [i_8] [i_8] [i_8 - 3] [i_8])) : ((~(((/* implicit */int) arr_18 [i_8])))))))));
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned short) max((max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)32)) : (arr_22 [i_8] [i_8]))))), (max((arr_27 [i_8 - 3] [i_8 + 2]), (((/* implicit */int) var_3))))));
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)10106)) >= (((/* implicit */int) (unsigned char)255))))) >> (((var_13) - (16496159289628807408ULL))))) < (((((/* implicit */_Bool) max((var_2), (((/* implicit */int) (_Bool)1))))) ? ((~(var_5))) : (var_14))))))));
    }
    for (short i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        for (short i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            {
                                arr_44 [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_10 [i_11] [17] [i_11] [i_10] [i_9] [(unsigned short)8]);
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_9] [i_9])) ? (((/* implicit */int) ((unsigned short) (short)20080))) : ((-(((/* implicit */int) (signed char)0))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_10 [i_9] [i_10] [i_11] [i_14] [i_15] [i_15])) ? (((/* implicit */int) arr_10 [i_9] [i_10] [i_11] [i_14] [i_14] [i_15])) : (((/* implicit */int) arr_49 [i_10] [i_14] [i_11] [i_10] [i_9]))))));
                                arr_52 [i_15] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) arr_25 [i_9] [i_10] [i_9]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_16 = 1; i_16 < 18; i_16 += 4) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    arr_58 [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-15289)) ^ (((/* implicit */int) (_Bool)1))));
                    arr_59 [i_16] [i_16] [(unsigned short)2] = ((/* implicit */long long int) ((_Bool) max((((/* implicit */long long int) arr_39 [i_16 + 2] [(_Bool)1] [i_16] [i_16 + 2] [i_16] [i_16 + 2])), (-5707438450802245600LL))));
                    arr_60 [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) 9223372036854775807LL);
                }
            } 
        } 
        var_28 = max((((/* implicit */unsigned long long int) ((arr_17 [i_9] [i_9] [i_9]) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_33 [(unsigned short)4]))))) : (((/* implicit */int) (unsigned short)35609))))), (arr_20 [11ULL]));
        /* LoopNest 3 */
        for (signed char i_18 = 1; i_18 < 18; i_18 += 3) 
        {
            for (long long int i_19 = 2; i_19 < 18; i_19 += 3) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_68 [i_9] [i_9] [i_19] [i_20] = ((/* implicit */_Bool) arr_35 [i_20] [i_18 + 1] [i_20]);
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))), (32767)))) ? ((((-(arr_20 [i_18]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_9] [i_9] [i_9] [i_9] [(signed char)18] [i_9] [i_20]))))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_7)) != (var_2))))))));
                        arr_69 [i_20] [i_20] [i_20] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) max((arr_64 [i_18 - 1] [i_19 + 2] [i_18 - 1]), (arr_64 [i_19] [i_19 - 2] [i_18 + 1])))) : (((((/* implicit */_Bool) max((((/* implicit */int) arr_18 [16ULL])), (1778912536)))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_18 - 1] [i_18 - 1] [i_19])))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) arr_51 [i_18 + 1] [i_18 + 1] [i_18 + 2] [i_18 + 1] [i_18 + 2]))))) ? (max(((~(var_4))), (((/* implicit */unsigned int) ((signed char) arr_5 [i_20] [i_18 + 1] [(signed char)19] [(unsigned char)17]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((12) > (((/* implicit */int) (_Bool)1))))))))));
                        var_31 = ((/* implicit */long long int) (+((-((-(((/* implicit */int) arr_47 [i_20] [i_20] [i_20] [i_9]))))))));
                    }
                } 
            } 
        } 
        var_32 = -14240310;
    }
    /* LoopNest 3 */
    for (unsigned long long int i_21 = 3; i_21 < 17; i_21 += 1) 
    {
        for (unsigned long long int i_22 = 3; i_22 < 15; i_22 += 2) 
        {
            for (signed char i_23 = 1; i_23 < 18; i_23 += 3) 
            {
                {
                    arr_77 [i_21] [i_23] [i_23 - 1] [i_21] = ((/* implicit */long long int) ((((511ULL) | ((-(var_13))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_21])))));
                    arr_78 [i_21] [i_23] [i_23] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_12 [i_21 - 2] [i_21] [i_22] [i_22 + 3] [i_23 - 1])) ? (var_12) : (((/* implicit */unsigned long long int) arr_12 [i_21 - 2] [i_21] [i_22 - 2] [i_22 - 1] [i_23 - 1])))));
                    var_33 = ((/* implicit */unsigned short) ((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_22 - 3])) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)10)), (var_13))))))))));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */long long int) max((var_2), ((-(((/* implicit */int) var_6))))));
}
