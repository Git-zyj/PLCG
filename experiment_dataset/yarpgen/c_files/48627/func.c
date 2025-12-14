/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48627
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [8LL] [i_0] [i_0] [i_0] [(short)18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)12] [i_1]))) : (-322382079287209453LL)))) ? (((((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))))) >> (((min((arr_4 [i_2] [i_0] [i_0]), (arr_4 [(short)20] [i_2] [i_0]))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_9 [i_0]))))))));
                            arr_11 [i_3] [i_0] [i_0] [i_0] = ((short) arr_1 [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (_Bool)0))));
                            var_20 ^= var_5;
                            arr_16 [i_0] [i_0] = ((/* implicit */_Bool) max((((((arr_8 [i_4] [(short)3] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_7)))) / (((/* implicit */int) max((arr_3 [i_0] [i_0] [i_0]), (arr_0 [i_4])))))), (((/* implicit */int) arr_9 [i_5]))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) ((short) 5153856533947290699LL)))))) ? (((long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_4] [23LL] [i_4] [23LL] [i_1] [23LL])) : (((/* implicit */int) arr_3 [i_1] [(short)3] [i_1]))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) << (((/* implicit */int) (_Bool)1)))))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) (((_Bool)1) || (((_Bool) 4258858716459561966LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_8 = 3; i_8 < 21; i_8 += 1) 
                {
                    for (long long int i_9 = 1; i_9 < 22; i_9 += 3) 
                    {
                        {
                            var_22 = ((max((((/* implicit */long long int) (_Bool)1)), (((var_3) * (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8] [i_7] [i_6]))))))) % (((((/* implicit */_Bool) arr_7 [i_8] [i_8 - 3] [i_8] [i_8 - 3] [i_8 - 3] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_8] [i_8 + 2] [i_8 + 2] [i_8] [i_8] [i_8]))) : (arr_25 [i_8] [i_8 + 2] [i_8]))));
                            arr_31 [i_6] [i_7] [i_6] [i_6] [i_6] [i_6] = min((max((((((/* implicit */int) arr_23 [i_8] [i_8] [i_8 - 1])) < (((/* implicit */int) arr_4 [i_6] [i_6] [i_6])))), (arr_0 [i_7]))), (arr_21 [0LL]));
                            var_23 = ((/* implicit */short) min((((((/* implicit */int) (short)31302)) / (((/* implicit */int) ((_Bool) 2353385530775936145LL))))), (((/* implicit */int) ((_Bool) arr_30 [i_8] [i_8 + 2] [i_8] [i_8 + 2] [(_Bool)1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_10 = 2; i_10 < 22; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min(((_Bool)1), (min((arr_9 [i_10 - 1]), (((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_11]))) < (var_16))))))))));
                            arr_36 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_12 [i_11] [i_10] [i_6]), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((_Bool) arr_35 [i_6] [i_6] [i_6] [i_6]))) : (((((/* implicit */int) arr_1 [i_10 - 1])) >> (((((/* implicit */int) arr_23 [i_10 - 1] [i_10 + 1] [i_10 + 1])) - (16387)))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_10 + 1])) ? (((/* implicit */int) arr_20 [i_10 + 2])) : (((/* implicit */int) arr_20 [i_10 + 2]))))) || (((/* implicit */_Bool) min((((arr_15 [i_6] [i_6] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_8 [i_10] [i_10] [i_7])))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        {
                            arr_41 [i_7] [i_12] [i_7] [i_7] = max((var_16), (((/* implicit */long long int) var_6)));
                            arr_42 [i_12] [i_7] = ((min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL)))), (((arr_38 [i_12] [i_6] [i_6]) / (var_10))))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((arr_5 [i_12] [i_6]), (arr_5 [i_12] [(_Bool)1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    for (long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                    {
                        {
                            arr_56 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((arr_48 [i_14] [i_14] [i_14]) ? (((/* implicit */int) arr_53 [i_17] [i_16] [i_14])) : (((/* implicit */int) arr_53 [i_14] [i_14] [i_14])))))));
                            arr_57 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) ((short) (_Bool)1));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_18 = 1; i_18 < 16; i_18 += 4) 
                {
                    for (short i_19 = 2; i_19 < 19; i_19 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) ((-9175969655406106272LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_63 [i_19 - 1] [i_18] [i_15] [i_14] = ((((((/* implicit */int) arr_44 [i_14])) / (((/* implicit */int) arr_44 [i_15])))) == (((/* implicit */int) arr_61 [i_15] [i_15] [13LL] [i_15])));
                            var_27 = ((((/* implicit */_Bool) min((((arr_40 [i_19 - 2] [i_18]) >> (((/* implicit */int) arr_8 [i_14] [i_14] [i_14])))), (var_5)))) ? (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) -8755096353991125467LL)))) / (min((((/* implicit */long long int) var_1)), (var_12))))) : (((((min((var_2), (((/* implicit */long long int) (short)24647)))) + (9223372036854775807LL))) >> (((((((-1LL) + (9223372036854775807LL))) >> (((arr_25 [2LL] [2LL] [i_15]) + (2396339680302960727LL))))) - (1073741819LL))))));
                            arr_64 [(short)1] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_0), (((/* implicit */short) (_Bool)1))))) ^ ((((_Bool)1) ? (((/* implicit */int) arr_55 [i_14])) : (((/* implicit */int) (_Bool)1))))))) ? (((((((/* implicit */_Bool) arr_26 [i_19])) ? (arr_45 [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_27 [i_14] [i_14]) || ((_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_53 [i_14] [i_14] [i_14])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (short i_21 = 0; i_21 < 20; i_21 += 3) 
                    {
                        {
                            arr_69 [i_14] [i_14] [i_14] [(_Bool)1] [i_14] [i_14] |= ((max((max((7641166700360991359LL), (((/* implicit */long long int) arr_43 [i_14])))), (min((((/* implicit */long long int) (short)6602)), (arr_45 [i_14]))))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_21] [i_14] [i_15] [i_14]))) / (6LL))) / (((arr_40 [i_14] [i_14]) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((short) arr_7 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))))) : (arr_5 [i_14] [i_14])))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((long long int) arr_47 [i_21] [i_20]))));
                            arr_70 [i_14] [i_14] [i_14] [i_20] [i_14] = ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_22 = 0; i_22 < 20; i_22 += 1) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */short) ((((max((-1987431321511498400LL), (7861574239688156317LL))) << (((/* implicit */int) ((arr_51 [(short)8] [(short)8] [(short)8] [i_23]) <= (((/* implicit */long long int) ((/* implicit */int) (short)16920)))))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_58 [i_14] [i_14] [i_14] [i_14])), (arr_40 [i_22] [(_Bool)1])))) ? (((/* implicit */int) ((short) arr_61 [(_Bool)1] [i_22] [i_14] [i_14]))) : (((/* implicit */int) ((short) (_Bool)1))))))));
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_7 [i_23] [i_15] [(_Bool)1] [(_Bool)1] [i_15] [i_14])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_74 [i_14] [i_14] [i_14]))) < (((var_12) / (arr_39 [i_22] [i_22] [i_22] [i_22])))))))))));
                            arr_75 [i_23] [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */short) ((long long int) ((_Bool) ((_Bool) var_7))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_24 = 2; i_24 < 19; i_24 += 3) 
                {
                    for (short i_25 = 3; i_25 < 19; i_25 += 3) 
                    {
                        {
                            arr_82 [i_25] [i_25] [i_25] [i_25] [i_14] [i_14] = ((/* implicit */_Bool) max((((/* implicit */long long int) (((_Bool)1) || (((((/* implicit */_Bool) arr_43 [i_14])) && (arr_48 [i_14] [i_14] [i_14])))))), (var_10)));
                            var_32 = arr_25 [i_25 - 2] [i_24] [i_15];
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (_Bool)0))));
                        }
                    } 
                } 
            }
        } 
    } 
}
