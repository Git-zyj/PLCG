/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201130
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
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0)))))));
                            arr_14 [i_3] [i_3] [i_3] [6] |= ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))));
                            arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_2 + 1] [i_0]))))))));
                            var_16 = (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_2] [i_1 - 1] [(signed char)10]))))), (min((arr_0 [i_0]), (((/* implicit */long long int) var_9))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_24 [i_0] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 14096137197890547893ULL)) ? (((/* implicit */unsigned long long int) arr_17 [i_0])) : (4350606875819003710ULL)))) ? (((unsigned long long int) (signed char)(-127 - 1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_4] [i_5]))))) ^ (((/* implicit */unsigned long long int) (~(((arr_0 [i_0]) ^ (var_12))))))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (max(((unsigned short)65521), (((/* implicit */unsigned short) (unsigned char)117))))));
                                arr_25 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)65514);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_9 = 2; i_9 < 9; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 4; i_11 < 10; i_11 += 3) 
                        {
                            {
                                var_18 = ((((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) var_9)), (var_8))))) << (((/* implicit */int) (((!(((/* implicit */_Bool) -2254980966152298936LL)))) || (((/* implicit */_Bool) 4350606875819003710ULL))))));
                                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) arr_37 [i_11 - 2] [i_11 - 3] [i_11 + 2] [i_11 - 3] [i_11 - 3])))));
                                var_20 = ((861915893U) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [7ULL])) || (((/* implicit */_Bool) arr_33 [i_9 + 1] [i_7] [i_9] [i_10])))))));
                                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((-660021863933306865LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    for (unsigned short i_13 = 1; i_13 < 11; i_13 += 3) 
                    {
                        {
                            arr_47 [(unsigned short)6] [i_7] [i_7] [(unsigned short)6] [i_7] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) arr_42 [i_8] [i_7] [i_7] [i_7]))))))))) - (((((/* implicit */_Bool) max((arr_29 [i_7] [i_7]), (((/* implicit */int) arr_33 [i_7] [i_7] [i_12] [i_13]))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [(unsigned char)2] [i_13 - 1] [(unsigned char)2] [i_7] [i_13 + 1] [9LL])))))));
                            var_22 = ((/* implicit */unsigned int) (+(-7825207164536280246LL)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
    {
        for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    for (short i_17 = 2; i_17 < 9; i_17 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_17 - 2] [i_17 - 2] [i_17] [i_17 - 2])) ? (((/* implicit */int) arr_45 [i_17 - 1] [i_17] [i_17] [i_17 - 2])) : (((/* implicit */int) arr_45 [i_17 + 1] [i_17 + 1] [i_17] [i_17 + 1]))))) ? (((((/* implicit */_Bool) ((short) var_7))) ? (((660021863933306864LL) + (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_14] [i_16] [i_15] [i_14]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_14]))))) : (((((/* implicit */int) var_6)) << (((/* implicit */int) arr_51 [i_15] [i_15])))))))));
                            var_24 = ((((/* implicit */_Bool) (+(452599127U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_14] [i_15] [i_14]))))) : (((int) arr_18 [i_17 - 2] [i_17 + 1] [i_16] [(signed char)3])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    for (unsigned int i_19 = 0; i_19 < 10; i_19 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_14] [i_19])) ? (arr_4 [i_14] [i_14]) : (arr_4 [i_14] [i_19])))) ? (660021863933306859LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_30 [i_14]), (((/* implicit */unsigned short) arr_53 [i_14] [i_19]))))))));
                            arr_65 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) var_11);
                            var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-57))));
                            var_27 = ((/* implicit */unsigned int) arr_31 [i_14] [i_14]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_20 = 0; i_20 < 10; i_20 += 3) 
                {
                    for (int i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        for (int i_22 = 0; i_22 < 10; i_22 += 3) 
                        {
                            {
                                arr_74 [i_14] [i_14] [i_14] [6ULL] = ((/* implicit */unsigned char) ((unsigned int) (+(arr_29 [i_15] [i_20]))));
                                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_19 [i_14] [i_15] [i_14] [i_21] [(unsigned short)5] [i_21]) | (((/* implicit */int) (!(((/* implicit */_Bool) -55263861)))))))) ? (((((/* implicit */_Bool) ((int) var_2))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_14] [i_20] [i_21] [i_22]))) / (18446744073709551610ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)42)))))))) : (((/* implicit */unsigned long long int) (+(arr_5 [(_Bool)1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_23 = 2; i_23 < 9; i_23 += 3) 
                {
                    for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                    {
                        for (short i_25 = 1; i_25 < 7; i_25 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) ((short) arr_80 [i_14] [i_15] [i_15] [i_23 - 2] [i_24] [(unsigned char)8] [i_24 + 1]));
                                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) max(((-(-660021863933306875LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((1618289001U) - (((/* implicit */unsigned int) arr_19 [i_14] [(unsigned char)4] [(short)10] [(short)10] [i_24 + 1] [(short)10]))))) ? ((-(((/* implicit */int) (signed char)-106)))) : ((+(((/* implicit */int) (unsigned char)254))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_26 = 0; i_26 < 18; i_26 += 3) 
    {
        for (long long int i_27 = 1; i_27 < 15; i_27 += 3) 
        {
            for (int i_28 = 1; i_28 < 17; i_28 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_29 = 1; i_29 < 16; i_29 += 3) 
                    {
                        for (int i_30 = 0; i_30 < 18; i_30 += 3) 
                        {
                            {
                                var_31 = ((((_Bool) min((arr_89 [i_26] [i_26] [(unsigned char)10] [i_26] [i_26] [i_26]), (((/* implicit */unsigned long long int) arr_85 [i_27] [i_27] [i_27]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)223), (((/* implicit */unsigned char) (signed char)-101))))))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_86 [i_26] [i_27] [7LL]))))), (var_12))));
                                arr_93 [i_29] [i_27] [13LL] = ((/* implicit */unsigned char) arr_85 [i_27] [i_26] [i_26]);
                                var_32 = ((/* implicit */short) arr_84 [i_27] [i_28 + 1] [i_29]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_31 = 0; i_31 < 18; i_31 += 3) 
                    {
                        for (int i_32 = 1; i_32 < 17; i_32 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */int) (+(max((((unsigned int) arr_95 [i_26] [i_26] [i_27] [i_32 + 1])), (((arr_83 [i_32 - 1] [i_26]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)16138)))))))));
                                arr_101 [i_26] [i_31] [i_27 + 2] [i_32] [i_27] [i_26] = ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) var_1)))));
                                var_34 -= ((/* implicit */long long int) ((signed char) 6913637231987036250LL));
                                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_88 [i_26] [i_26] [i_26] [i_26]), (arr_83 [i_26] [i_28])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)14931)) << (((((((/* implicit */int) arr_81 [i_26])) + (50))) - (5)))))) : (((unsigned int) arr_81 [i_31]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_33 = 3; i_33 < 17; i_33 += 3) 
                    {
                        for (unsigned int i_34 = 0; i_34 < 18; i_34 += 3) 
                        {
                            {
                                arr_107 [i_27] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (arr_103 [i_27] [i_27 + 3] [i_27 + 2] [i_27] [i_27])))) ? (((((/* implicit */_Bool) var_13)) ? (arr_92 [i_27] [i_27 + 3] [(_Bool)1] [i_28] [i_33] [i_34] [i_34]) : (((/* implicit */int) arr_105 [3U] [i_27] [i_27] [i_27] [i_33] [i_34])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)193)) : (arr_87 [i_26] [i_27 - 1] [i_27] [13LL]))))));
                                arr_108 [i_26] [i_27] [i_28 - 1] [i_27] [i_33] [i_27] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_81 [i_34]))));
                                var_36 = ((/* implicit */int) ((unsigned int) (!((_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_35 = 0; i_35 < 18; i_35 += 3) 
                    {
                        for (signed char i_36 = 2; i_36 < 16; i_36 += 3) 
                        {
                            {
                                arr_115 [i_27] = (i_27 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_96 [i_27] [13U] [i_36] [i_36 - 1] [i_27]))))) << (((max((arr_103 [i_27] [i_36] [i_36] [i_36 + 2] [i_27]), (arr_103 [i_27] [i_36 + 2] [i_36] [i_36 + 1] [i_27]))) + (19361249)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_96 [i_27] [13U] [i_36] [i_36 - 1] [i_27]))))) << (((((max((arr_103 [i_27] [i_36] [i_36] [i_36 + 2] [i_27]), (arr_103 [i_27] [i_36 + 2] [i_36] [i_36 + 1] [i_27]))) + (19361249))) + (1776845351))))));
                                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_98 [i_26] [i_26] [i_27 + 2] [i_27] [i_27 + 2] [i_28 - 1] [i_36])))) ? (((((/* implicit */_Bool) arr_98 [i_26] [i_27] [i_27 - 1] [(signed char)11] [(_Bool)1] [i_28 - 1] [i_36 + 1])) ? (arr_98 [i_26] [i_26] [i_27 - 1] [i_27] [i_27] [i_28 - 1] [i_36]) : (arr_98 [(_Bool)1] [i_26] [i_27 + 1] [i_26] [i_28] [i_28 + 1] [i_26]))) : (((arr_98 [i_26] [i_27] [i_27 + 2] [i_28] [i_27 + 2] [i_28 - 1] [i_36]) ^ (arr_98 [i_26] [i_27] [i_27 + 1] [i_28 - 1] [i_28] [i_28 - 1] [(_Bool)1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
