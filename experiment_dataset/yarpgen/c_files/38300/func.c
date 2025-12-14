/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38300
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min(((unsigned short)50907), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))))))))));
                                var_19 += ((/* implicit */unsigned int) arr_0 [i_1] [i_1]);
                                arr_14 [i_0] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                    arr_15 [i_0 + 4] [10ULL] [i_2] [5] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_1 + 1])) ? (((/* implicit */long long int) var_5)) : (arr_3 [i_2])))) || ((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))))))), ((~(((/* implicit */int) min(((short)-1), (((/* implicit */short) var_6)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_20 [4] [i_2] [4] [i_2] [i_2] [12ULL] = ((/* implicit */unsigned short) (signed char)121);
                                var_20 += ((/* implicit */short) var_13);
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)25655))))) : ((+(((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_2] [i_0] [i_6])))))), (((-1290058151) - (((/* implicit */int) (_Bool)1)))))))));
                                var_22 = ((/* implicit */long long int) arr_9 [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) (((~(2659624073229180489LL))) * (((/* implicit */long long int) ((((((/* implicit */_Bool) -6988777840431257907LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1))) : (var_11))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0 - 1] [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] [i_8]))))))));
                                arr_27 [i_2] [i_1 - 1] [i_1] [i_2] [i_7 + 1] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_24 [i_1 + 1] [9U] [5LL] [1] [i_7 + 2])) >> ((((~(((/* implicit */int) arr_24 [i_1 + 1] [i_1 + 1] [i_7] [(short)6] [i_7 + 2])))) + (136)))));
                                arr_28 [i_2 + 1] [i_2] [i_2] [8U] [i_2] [(signed char)0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) - ((+(arr_26 [(short)2] [i_2] [i_2] [i_2] [i_8]))))) != (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)7523)) > (((/* implicit */int) (short)9463)))) ? (-346303468) : (((((/* implicit */_Bool) 6514199247142558306LL)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (short)10648)))))))));
                            }
                        } 
                    } 
                    arr_29 [i_0 + 3] [i_0 + 3] [i_2] [i_2] = ((/* implicit */int) min(((~(min((var_9), (((/* implicit */unsigned int) arr_22 [i_0 - 1] [1U] [i_0 - 1] [i_0 - 1] [5U])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)11)) || (((/* implicit */_Bool) arr_21 [i_2] [i_0 + 2] [i_0 - 1] [i_1 - 1] [i_2 - 2])))))));
                }
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 4; i_10 < 12; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                        {
                            {
                                arr_39 [i_0] [(short)12] [i_9] = ((/* implicit */signed char) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [7U] [i_10] [i_9] [i_9] [i_1] [10ULL])) ? (((/* implicit */int) arr_5 [(short)4])) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) -3855511016796545359LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_10] [i_1 + 1])))) : (((/* implicit */int) arr_34 [i_0 - 1]))))));
                                var_24 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2274117850U)), (arr_35 [i_0] [i_0] [i_9] [(short)1])))) ? ((((_Bool)0) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_22 [3] [i_1] [i_1] [i_10] [i_11])))) : (((/* implicit */int) arr_12 [i_0] [i_1 + 1] [(short)0] [(signed char)6] [i_9])))));
                                arr_40 [7] [(unsigned short)13] [7] [i_0] = ((/* implicit */unsigned int) (+(min((arr_19 [i_0] [i_0 + 4] [i_0 + 1] [i_1 + 1] [i_10 + 2]), (((/* implicit */int) arr_33 [i_1 - 1] [i_10 + 2] [i_10]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            {
                                arr_45 [i_0] [i_0] [9LL] [i_1 - 1] [4U] [1LL] [i_13] = ((/* implicit */short) min(((-(((/* implicit */int) ((short) (unsigned short)54668))))), (((/* implicit */int) var_13))));
                                var_25 = min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29196))) - (min((((/* implicit */unsigned int) var_17)), (2274117850U)))))), (((((/* implicit */long long int) ((/* implicit */int) (short)20750))) - (((long long int) 9098897866534219152LL)))));
                                arr_46 [i_0] [i_1 - 1] [i_9] [i_13] [(signed char)9] [i_1 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-29196)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                                arr_47 [i_0 + 2] [i_0] = ((/* implicit */short) (((((-(min((((/* implicit */int) (unsigned short)14621)), (arr_19 [i_0 + 4] [i_1] [8] [i_0 + 4] [i_0 + 4]))))) + (2147483647))) >> (((/* implicit */int) (signed char)23))));
                            }
                        } 
                    } 
                    arr_48 [i_9] = ((/* implicit */unsigned short) (short)20089);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 12; i_14 += 3) 
    {
        for (long long int i_15 = 0; i_15 < 12; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 1; i_16 < 11; i_16 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        for (short i_18 = 0; i_18 < 12; i_18 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-6)) ? (min((((((/* implicit */_Bool) 7989543314601175901LL)) ? (9963905242290200655ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_14] [i_15] [i_15]))))), (((/* implicit */unsigned long long int) ((arr_1 [(unsigned short)4]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(short)11] [i_17] [i_17] [i_16] [(signed char)13] [(signed char)13])))))))) : (((((/* implicit */_Bool) (signed char)-6)) ? (min((6003328380081116038ULL), (((/* implicit */unsigned long long int) (signed char)-7)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-28)) + (2147483647))) >> (((1161798512U) - (1161798508U))))))))));
                                var_27 = ((/* implicit */unsigned int) ((unsigned short) 2703011132057327175LL));
                                arr_65 [10] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_16 - 1])) ? (((((arr_35 [i_16 + 1] [i_16 - 1] [i_16 + 1] [(signed char)10]) + (9223372036854775807LL))) >> (((arr_35 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_14]) + (3718355093253248421LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_16 - 1])) ? (((/* implicit */int) arr_44 [i_16 - 1])) : (((/* implicit */int) arr_44 [i_16 + 1])))))));
                            }
                        } 
                    } 
                    arr_66 [(signed char)7] [(signed char)7] [i_14] = ((/* implicit */long long int) arr_11 [i_14] [3] [i_14] [3] [(unsigned short)8] [i_14]);
                    var_28 = ((/* implicit */long long int) min((var_28), (((((/* implicit */_Bool) (~(arr_3 [i_16 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)45402)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (short)5594))))) : ((+(arr_3 [i_16 + 1])))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */short) var_7);
}
