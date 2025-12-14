/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35710
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
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((min((var_4), (((/* implicit */long long int) var_13)))), (min((1209980446121932052LL), (((/* implicit */long long int) var_8))))))) > (max((max((1121501860331520ULL), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_3))))));
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = (i_2 % 2 == zero) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_0] [7] [i_4])) && (((/* implicit */_Bool) var_10))))) >> (((arr_12 [i_0] [i_2] [i_2]) - (1206957724)))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) ((9025337117526387332ULL) >= (((/* implicit */unsigned long long int) var_4)))))) ^ (var_1))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_0] [7] [i_4])) && (((/* implicit */_Bool) var_10))))) >> (((((arr_12 [i_0] [i_2] [i_2]) - (1206957724))) + (112579052)))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) ((9025337117526387332ULL) >= (((/* implicit */unsigned long long int) var_4)))))) ^ (var_1)))));
                                var_17 &= ((/* implicit */short) ((max((3158078595774097777ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) >= (((((var_1) / (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_2])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((1209980446121932052LL) > (1209980446121932052LL)))))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((1121501860331520ULL), (((/* implicit */unsigned long long int) -515209934)))))));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_9), (var_9)))), (max((((/* implicit */unsigned long long int) var_4)), (var_12)))))) ? (1209980446121932052LL) : (((arr_9 [i_0] [i_0] [i_0] [i_0]) & (-615895008367446271LL))))))));
                                arr_14 [i_1] [i_2] [2] = ((/* implicit */int) var_7);
                            }
                        } 
                    } 
                    var_20 = arr_10 [i_0] [i_1] [i_1] [i_2];
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        arr_17 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [6])) ? (arr_2 [i_1]) : (arr_3 [i_5]))), (min((arr_2 [i_5]), (((/* implicit */unsigned long long int) arr_11 [i_0]))))));
                        var_21 = ((/* implicit */_Bool) arr_1 [i_0]);
                        arr_18 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */short) (_Bool)1);
                        arr_19 [i_2] [i_1] = ((/* implicit */int) ((long long int) var_7));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_12 [6] [i_0] [i_0])), (((max((var_1), (((/* implicit */unsigned long long int) var_3)))) % (arr_7 [i_0] [i_1] [i_2])))));
                        arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((-1209980446121932059LL) != (((/* implicit */long long int) arr_5 [6ULL] [i_1] [i_1])))), (((((/* implicit */_Bool) -1209980446121932045LL)) || (((/* implicit */_Bool) arr_2 [i_0])))))))) + (var_7)));
                        var_23 = ((/* implicit */long long int) max((var_0), (((/* implicit */int) ((_Bool) min((arr_2 [i_1]), (((/* implicit */unsigned long long int) var_2))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_7 = 2; i_7 < 21; i_7 += 2) 
    {
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */long long int) arr_24 [i_7 + 1] [i_7 + 1])) <= (((((1209980446121932052LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (var_4))))))));
        arr_26 [i_7] [1LL] = ((/* implicit */_Bool) var_10);
        var_25 = ((((/* implicit */long long int) ((/* implicit */int) ((((arr_25 [i_7]) || (((/* implicit */_Bool) 5719794518933925497ULL)))) && (((_Bool) arr_25 [15])))))) >= (((((/* implicit */long long int) ((/* implicit */int) ((615895008367446270LL) > (-7737916674839374689LL))))) + (1209980446121932052LL))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7 + 2]))) > (1121501860331549ULL)))) << (((262144) - (262117)))));
    }
    /* LoopNest 2 */
    for (long long int i_8 = 2; i_8 < 20; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                arr_32 [8ULL] [i_9] [i_8] = ((((/* implicit */int) (_Bool)1)) >> (((((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (1209980446121932032LL))) - (83LL))));
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 4) 
                    {
                        {
                            arr_39 [i_9] [i_9] [i_10 - 1] [i_11 - 1] [i_10 - 1] [(_Bool)1] = max((min((max((arr_28 [i_9]), (((/* implicit */int) arr_31 [i_9] [i_9] [i_11])))), (((((/* implicit */int) var_3)) | (((/* implicit */int) var_6)))))), (max((min((var_0), (((/* implicit */int) arr_25 [i_9])))), (((/* implicit */int) min(((short)-29098), (((/* implicit */short) (signed char)94))))))));
                            var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) max((((/* implicit */int) arr_31 [i_9] [i_10 - 1] [i_9])), (arr_28 [(short)12])))) ? (((arr_35 [i_11] [i_10] [i_9] [i_8]) + (((/* implicit */unsigned long long int) arr_28 [13ULL])))) : (max((11789570750185785185ULL), (((/* implicit */unsigned long long int) (short)17637))))))));
                            /* LoopSeq 4 */
                            for (long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                            {
                                var_28 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) arr_30 [i_8] [9LL] [i_10])), (var_7))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_29 = ((/* implicit */short) ((arr_29 [i_8 + 1]) >= (((arr_29 [i_8 - 2]) & (arr_29 [i_10])))));
                                arr_43 [i_9] = ((/* implicit */int) arr_37 [(short)4] [i_8] [5] [(_Bool)1]);
                                arr_44 [(_Bool)1] &= ((/* implicit */long long int) arr_29 [i_8]);
                            }
                            for (int i_13 = 0; i_13 < 21; i_13 += 2) 
                            {
                                var_30 = ((/* implicit */signed char) ((_Bool) min((2949734282742140209LL), (-2230427928282046997LL))));
                                arr_48 [i_9] [i_11] [3ULL] [i_10] [2] [2] [i_9] = ((/* implicit */short) (_Bool)1);
                                arr_49 [i_9] [i_8] [i_9] = max((((/* implicit */unsigned long long int) -265500350)), (min((min((6197097811723730111ULL), (((/* implicit */unsigned long long int) 2949734282742140209LL)))), (((/* implicit */unsigned long long int) 2230427928282046997LL)))));
                                var_31 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_11))) & (((/* implicit */int) ((arr_42 [i_13] [10ULL] [(signed char)8] [(_Bool)1] [i_8]) > (((/* implicit */long long int) ((/* implicit */int) var_8))))))))) != (max((arr_36 [9] [i_8]), (((/* implicit */unsigned long long int) max((arr_45 [i_9] [i_9] [i_9] [i_9] [i_13] [i_10]), (((/* implicit */int) arr_34 [i_13])))))))));
                                arr_50 [i_8 - 2] [19] [10ULL] [10ULL] [9] [10ULL] [i_9] = ((max((((arr_35 [i_11 + 1] [i_9] [6] [i_11]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [11ULL]))))), (((unsigned long long int) arr_35 [i_9] [i_10] [(signed char)12] [i_9])))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-60)) <= (((/* implicit */int) var_6))))) << (min((var_1), (((/* implicit */unsigned long long int) arr_33 [i_9] [(_Bool)1] [i_9] [i_9]))))))));
                            }
                            /* vectorizable */
                            for (long long int i_14 = 3; i_14 < 20; i_14 += 2) 
                            {
                                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */int) arr_47 [i_8] [i_8] [i_8] [i_8] [i_8])) < (((/* implicit */int) arr_46 [i_8 - 1] [i_10] [i_10 - 1] [i_11 + 1])))))));
                                var_33 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_3)) + (((/* implicit */int) arr_40 [i_8] [i_9] [i_10 - 1] [i_9] [i_14])))) + (2147483647))) << (((/* implicit */int) var_3))));
                            }
                            for (unsigned long long int i_15 = 4; i_15 < 18; i_15 += 1) 
                            {
                                var_34 = min((((int) ((((/* implicit */_Bool) arr_36 [i_10] [i_10])) && (((/* implicit */_Bool) arr_41 [i_8 - 2] [i_9] [i_8 - 1] [i_8] [i_8 - 1]))))), (((/* implicit */int) ((_Bool) var_3))));
                                arr_55 [i_9] [(_Bool)1] [i_10] [(short)20] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (((((/* implicit */_Bool) -8648066761094741551LL)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-1690655165)))) : (max((((/* implicit */unsigned long long int) 8648066761094741551LL)), (6415195525850485967ULL)))))));
                            }
                        }
                    } 
                } 
                var_35 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) < (var_13))) && (((/* implicit */_Bool) min((((/* implicit */int) var_2)), (var_9))))))), (arr_38 [i_8] [i_8] [(_Bool)1])));
                arr_56 [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (min((max((var_7), (((/* implicit */unsigned long long int) (-2147483647 - 1))))), (((/* implicit */unsigned long long int) var_8))))));
            }
        } 
    } 
}
