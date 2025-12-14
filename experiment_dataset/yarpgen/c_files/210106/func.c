/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210106
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
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_1 + 3]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_4 [i_4] [i_2]) < (var_17)));
                                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((126611788), (1867400357)))) ? (((2548505393187594693ULL) * (((/* implicit */unsigned long long int) -929391736)))) : (((/* implicit */unsigned long long int) (+(var_9)))))) / (var_4)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_2 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1 + 2])) ? (arr_18 [i_1 + 2] [i_1] [i_1 + 1] [i_1] [i_1]) : (arr_18 [i_1 - 1] [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 4])));
                        var_23 |= ((/* implicit */signed char) var_6);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (+(arr_20 [i_6 + 1] [2U] [i_6 + 1] [(signed char)16]))))))))));
                        arr_22 [i_0] [i_2] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [i_0])) : (arr_12 [i_2] [i_2])))) >= (2963511295U))) ? (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))), (max((var_8), (((/* implicit */unsigned int) arr_16 [i_2 + 1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((929391736) <= (-929391736)))))));
                        var_25 = ((/* implicit */unsigned int) ((-1362501938) & (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_9 [i_6] [i_0] [i_6] [i_6 + 1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 3; i_9 < 15; i_9 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_10 = 2; i_10 < 17; i_10 += 3) 
                    {
                        var_26 = ((/* implicit */int) max((var_26), ((((-(((/* implicit */int) var_3)))) - (((/* implicit */int) ((406658643484194348LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25))))))))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((arr_17 [i_8]) * (((arr_17 [i_8]) - (arr_17 [i_8]))))))));
                    }
                    for (int i_11 = 2; i_11 < 15; i_11 += 3) /* same iter space */
                    {
                        arr_39 [17] [i_11] [i_11] [i_7] = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_7 + 1] [i_9] [i_11])) && (((/* implicit */_Bool) arr_12 [i_11] [i_8])))))) : ((~(max((((/* implicit */unsigned int) var_7)), (arr_26 [5] [i_8] [i_7]))))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_27 [i_11] [i_9] [0ULL]))));
                        var_29 += ((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_20 [24] [i_8] [i_9] [12U]) | (((/* implicit */long long int) 929391727))))) ? (((/* implicit */long long int) (~(arr_29 [(unsigned short)14])))) : (-406658643484194349LL))) != (((/* implicit */long long int) var_1))));
                    }
                    for (int i_12 = 2; i_12 < 15; i_12 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_13 = 3; i_13 < 14; i_13 += 4) 
                        {
                            arr_44 [i_13 + 1] [i_8] [i_8] [i_8] [i_8] [i_7] |= ((/* implicit */unsigned short) var_6);
                            var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_24 [14] [i_12 - 1])) ? (arr_38 [i_7] [i_8] [i_9 - 1]) : (((/* implicit */unsigned long long int) var_6)))) << (((((((/* implicit */_Bool) var_3)) ? (arr_38 [i_13] [4U] [i_7]) : (((/* implicit */unsigned long long int) arr_4 [i_7] [i_7 + 1])))) - (1707686614929642327ULL)))));
                        }
                        var_31 = ((/* implicit */int) ((-7) > (((/* implicit */int) (_Bool)1))));
                        var_32 *= (-(((/* implicit */int) ((var_9) > (((/* implicit */int) ((_Bool) arr_3 [i_8] [i_9 + 2] [i_8])))))));
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 15; i_14 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */int) (((!(((/* implicit */_Bool) -591307891)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [(signed char)2] [i_14 + 1] [i_9 - 1])) ? (((/* implicit */unsigned int) 8)) : (var_12))))));
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) 31)) ? (((18446744073709551615ULL) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))));
                        var_35 = ((((/* implicit */_Bool) (unsigned short)65506)) ? (-389168190928480178LL) : (((/* implicit */long long int) 3044971378U)));
                        var_36 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)36878)) < (((/* implicit */int) arr_42 [i_9 + 2] [i_14 + 1] [i_14]))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_15 = 4; i_15 < 17; i_15 += 2) 
                    {
                        for (int i_16 = 1; i_16 < 17; i_16 += 3) 
                        {
                            {
                                arr_53 [i_16] [i_15 - 3] [i_9 - 3] [12ULL] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) -852077174)) | (255U)));
                                var_37 *= ((/* implicit */int) min((((/* implicit */unsigned short) ((arr_10 [i_16 - 1] [i_16]) < ((-(((/* implicit */int) var_5))))))), (((unsigned short) ((long long int) arr_4 [i_8] [i_8])))));
                                var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) max((9223372036854775807LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((3044971377U) < (((/* implicit */unsigned int) -852077174))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) + (arr_51 [i_16 + 1] [i_15] [i_9] [i_8] [i_7])))))))))));
                                var_39 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> ((((-(((/* implicit */int) ((signed char) var_18))))) + (37)))));
                                var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (max((arr_36 [i_16 + 1] [i_8] [12] [i_16 - 1] [i_8] [i_16 - 1]), (((/* implicit */unsigned int) arr_32 [i_16] [i_16] [i_16] [i_16 + 1] [i_16 - 1] [i_9])))))))));
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) var_9))));
                    var_42 = ((/* implicit */signed char) arr_49 [i_7]);
                }
                arr_54 [i_8] [i_7] [i_7] = ((/* implicit */signed char) ((int) arr_37 [(signed char)7] [i_7 + 1] [i_8] [i_8]));
            }
        } 
    } 
}
