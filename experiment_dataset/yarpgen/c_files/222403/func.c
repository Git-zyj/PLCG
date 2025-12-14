/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222403
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0 + 1] [i_1] [i_1] = min(((-((-(4294967295U))))), (((((/* implicit */_Bool) var_3)) ? (((unsigned int) arr_1 [i_0])) : (max((1U), (7U))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((unsigned long long int) min((arr_2 [i_0 + 1]), (((/* implicit */unsigned int) arr_1 [i_0 - 1]))))))));
                var_15 -= ((/* implicit */int) ((_Bool) arr_0 [i_0 - 1]));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~(arr_2 [i_0 - 1]))))));
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_3 + 1] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)46)) ? (2333101647U) : (arr_8 [i_0 + 1] [i_3 + 1])));
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))) : (2333101647U))))))));
                                arr_14 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) (-(arr_2 [i_4])));
                                arr_15 [i_0 + 2] [i_1] [i_2] = ((/* implicit */signed char) 1160615923876033084LL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_1] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 + 2]))) : (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0 + 1]) : (arr_8 [i_5] [i_1])))));
                        arr_19 [i_0] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_16 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]))));
                    }
                    arr_20 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12)))) / (1160615923876033104LL)));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_24 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0 + 2] [i_0 + 2])) ? (arr_18 [i_0 + 1] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 4; i_7 < 11; i_7 += 4) 
                    {
                        for (signed char i_8 = 2; i_8 < 10; i_8 += 4) 
                        {
                            {
                                var_19 &= ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 - 1])) >> (((((((/* implicit */_Bool) arr_21 [i_0] [i_0])) ? (-1160615923876033123LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29318))))) + (1160615923876033130LL)))));
                                arr_33 [i_0] [i_6] [i_6] [i_6] [i_7] [i_7] [i_8 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_1] [i_7 - 4] [i_8 + 2] [i_8 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_8]))))) : ((~(var_10)))));
                                arr_34 [i_0 + 2] [i_1] [i_6] [i_6] [i_8] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_6])) - (((/* implicit */int) arr_16 [i_0] [i_6] [i_7] [i_8])))));
                            }
                        } 
                    } 
                    arr_35 [i_6] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_21 [i_0] [i_0]))));
                }
                arr_36 [i_1] = ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_12 [i_0 - 1] [i_0 + 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_4)) : (2047638426U)))))));
    var_21 = ((/* implicit */unsigned long long int) 2305843009213693951LL);
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                arr_45 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3349448383U)) ? (((/* implicit */unsigned long long int) arr_40 [i_9] [i_9])) : ((-(arr_43 [i_9])))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 3; i_11 < 15; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        {
                            arr_50 [i_9] [i_10] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_37 [i_11 - 2])) ? (-1160615923876033123LL) : (2305843009213693950LL)))))) ? (((((/* implicit */_Bool) 0LL)) ? ((~(((/* implicit */int) arr_39 [i_9])))) : (max((((/* implicit */int) arr_41 [i_9] [i_12])), (arr_46 [i_12] [i_10]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_11 - 1])) && (((/* implicit */_Bool) arr_46 [i_11 - 3] [i_11 + 1])))))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_38 [i_9]))));
                            arr_51 [i_9] [i_10] [i_9] [i_11 + 1] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 292883135)) + (2271746698U)))) ? (((arr_48 [i_9] [i_9] [i_11 + 1] [i_10]) / (arr_48 [i_9] [i_9] [i_11 - 3] [i_12]))) : (max((arr_48 [i_9] [i_10] [i_11 - 1] [i_11 - 1]), (arr_48 [i_9] [i_10] [i_11 - 1] [i_12])))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((_Bool) var_2))) : ((~(((/* implicit */int) arr_49 [i_11 + 1] [i_9] [i_9] [i_10]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        {
                            arr_58 [i_9] [i_9] [i_13] [i_14] [i_14] = ((/* implicit */unsigned short) ((arr_42 [i_9] [i_10]) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_9])) << (((arr_56 [i_9] [i_9] [i_9] [i_9] [i_9]) - (3032019323U))))))));
                            arr_59 [i_9] = ((/* implicit */unsigned long long int) ((_Bool) ((4294967294U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20751))))));
                            var_24 = (i_9 % 2 == zero) ? (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((((~(((/* implicit */int) arr_41 [i_10] [i_14])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_41 [i_9] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_9] [i_9]))) : (arr_56 [i_9] [i_10] [i_13] [i_14] [i_10]))) - (37541U))))))))) : (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((((~(((/* implicit */int) arr_41 [i_10] [i_14])))) + (2147483647))) >> (((((((((/* implicit */_Bool) arr_41 [i_9] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_9] [i_9]))) : (arr_56 [i_9] [i_10] [i_13] [i_14] [i_10]))) - (37541U))) - (24123U)))))))));
                        }
                    } 
                } 
                arr_60 [i_9] [i_9] [i_10] = ((/* implicit */_Bool) (~(18446744073709551612ULL)));
                arr_61 [i_9] = ((/* implicit */unsigned short) (((~(min((((/* implicit */unsigned long long int) -292883138)), (14541948599063995655ULL))))) >= (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_55 [i_9] [i_9] [i_10] [i_9])))) & (((/* implicit */int) arr_54 [i_9] [i_9] [i_10] [i_10])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
    {
        for (unsigned int i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            {
                arr_68 [i_15] [i_15] = ((/* implicit */int) arr_67 [i_15] [i_16]);
                var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned short) (unsigned short)59658))), (max((4166261515U), ((-(4294967286U)))))));
                arr_69 [i_16] [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_62 [i_15])) & (((/* implicit */int) arr_64 [i_15])))) ^ (((/* implicit */int) max((arr_63 [i_15]), ((unsigned short)5866))))));
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_62 [i_15])) - (((/* implicit */int) arr_65 [i_15]))))) ? ((+(((/* implicit */int) arr_65 [i_16])))) : (((/* implicit */int) arr_63 [i_15]))))) + (((((((/* implicit */_Bool) arr_64 [i_16])) ? (6586818430510904295LL) : (((/* implicit */long long int) arr_66 [i_15])))) - (((/* implicit */long long int) (-(arr_66 [i_15])))))))))));
                /* LoopSeq 1 */
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_62 [i_16])), ((~(min((((/* implicit */unsigned int) arr_65 [i_15])), (arr_66 [i_15])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 0; i_18 < 25; i_18 += 4) /* same iter space */
                    {
                        var_28 -= ((/* implicit */short) (~(7LL)));
                        arr_75 [i_18] [i_16] [i_17 - 1] [i_18] [i_15] &= ((/* implicit */unsigned char) ((min((arr_74 [i_17 - 1] [i_17] [i_16]), (((/* implicit */long long int) arr_72 [i_17] [i_17 - 1] [i_17 - 1] [i_16] [i_16])))) & (((/* implicit */long long int) (+(((unsigned int) arr_66 [i_15])))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_19 = 0; i_19 < 25; i_19 += 4) /* same iter space */
                    {
                        arr_78 [i_17] [i_19] [i_16] [i_16] [i_17] = ((/* implicit */short) arr_72 [i_15] [i_16] [i_17] [i_16] [i_19]);
                        arr_79 [i_17 - 1] [i_16] [i_16] [i_19] [i_15] &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_64 [i_17])) ? (arr_66 [i_16]) : (arr_76 [i_19] [i_19] [i_19] [i_19])))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((~(1160615923876033122LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)13942))))))))));
                }
            }
        } 
    } 
}
