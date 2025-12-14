/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223173
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
    var_11 ^= ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)50131)) : (((/* implicit */int) (short)-2483))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 1073740800U)) || (((/* implicit */_Bool) (signed char)-77))))), (((((/* implicit */_Bool) 1210073343784386523LL)) ? (-1210073343784386523LL) : (-1210073343784386528LL)))))));
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) max((max((-1702710362), (((/* implicit */int) (short)32175)))), (arr_0 [i_0])))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_6 [i_1] [8ULL] = max((((/* implicit */int) ((signed char) ((unsigned long long int) var_0)))), (((((/* implicit */int) var_10)) << (((arr_0 [i_1]) - (1280362013))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_13 = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_1]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 3) 
                {
                    arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_3 + 3] [i_3 - 2])) ? (arr_0 [i_3 + 2]) : (((/* implicit */int) arr_8 [i_3 - 3] [i_3 - 1] [i_3 + 2]))));
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((long long int) arr_9 [i_3 - 1] [i_3 - 3] [(short)5])))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    arr_16 [i_0] [i_1] [i_1] [i_0] [(unsigned short)11] [i_4] = ((/* implicit */unsigned short) max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)54)))))));
                    var_15 *= max((((/* implicit */unsigned long long int) ((short) ((unsigned short) (signed char)112)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_4])) : (((/* implicit */int) arr_8 [i_1] [4LL] [i_4]))))) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) min((-1702710362), ((-2147483647 - 1))))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 4; i_5 < 13; i_5 += 4) 
                    {
                        arr_21 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_4] [i_4])))))), (((long long int) arr_8 [i_5 - 4] [i_5 - 1] [i_5 - 4]))));
                        var_16 += ((/* implicit */short) arr_11 [i_5 - 3]);
                        var_17 ^= ((/* implicit */_Bool) ((((/* implicit */int) (short)32175)) - (((/* implicit */int) (short)2482))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (((((/* implicit */unsigned long long int) 329982944991338516LL)) - (15183695522989516770ULL)))))) ? (((int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? (var_0) : (((/* implicit */unsigned int) var_7))))) : (((/* implicit */int) min(((unsigned short)62357), (((/* implicit */unsigned short) (signed char)-112)))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */short) ((signed char) ((((/* implicit */int) (short)25657)) | (((/* implicit */int) (short)32197)))));
                        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_9 [i_6] [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_4] [i_6])))))) : (max((arr_22 [i_6] [i_1] [i_2] [i_2] [i_6]), (((/* implicit */unsigned long long int) var_4))))));
                    }
                    for (short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 8796093022207ULL)) ? (((/* implicit */int) (short)-32202)) : (1022198739)));
                        var_22 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_15 [i_1] [i_2] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_1]))) : (var_8))), (((/* implicit */unsigned long long int) ((4611684918915760128LL) + (((/* implicit */long long int) ((/* implicit */int) (short)0))))))));
                    }
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(unsigned short)1] [(short)7]))) - (var_4))), (((/* implicit */long long int) ((signed char) arr_0 [6LL])))))) + (max((max((14086344992781636925ULL), (((/* implicit */unsigned long long int) 1210073343784386528LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8] [i_8]))) | (var_0))))))));
                        var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((0), (((/* implicit */int) (unsigned short)0))))) ? (min((9630733731092250554ULL), (((/* implicit */unsigned long long int) 2031616U)))) : (((/* implicit */unsigned long long int) ((int) arr_26 [3] [i_1] [i_2] [(signed char)8])))));
                        arr_33 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((arr_31 [i_0] [i_1] [4] [i_8] [(short)5] [i_9]), (((/* implicit */long long int) var_5))))), (((unsigned long long int) ((short) arr_28 [(short)5] [i_1] [i_2])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((arr_32 [i_0]) + (((/* implicit */int) arr_29 [i_10] [i_1] [i_1] [i_1] [i_10]))));
                        var_26 = arr_22 [i_0] [i_1] [i_2] [i_8] [i_0];
                        var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_10])) ? (var_8) : (var_1))) >= (arr_1 [i_8])));
                        arr_36 [i_1] [i_1] [i_8] [i_10] = ((/* implicit */short) ((unsigned long long int) arr_10 [i_1]));
                    }
                    var_28 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((signed char) ((short) (_Bool)1)))), (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (arr_34 [(signed char)0] [(unsigned short)2] [i_2] [i_2] [(signed char)0] [i_2] [(unsigned short)1]))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                }
                for (int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_12 = 1; i_12 < 10; i_12 += 3) 
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) max((min((arr_30 [i_0]), (min((((/* implicit */unsigned short) (short)-24248)), ((unsigned short)0))))), (((/* implicit */unsigned short) ((((((var_4) + (9223372036854775807LL))) << (((((/* implicit */int) arr_19 [i_0])) - (28490))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0] [i_12 + 1] [i_0] [(short)6] [i_12])))))))))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(var_8))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [(unsigned short)7] [i_0] [i_0])))))) ? (max((max((((/* implicit */unsigned int) arr_10 [i_1])), (var_0))), (((/* implicit */unsigned int) arr_25 [i_0] [i_1] [i_2] [(short)2] [i_12] [i_1] [i_12 + 3])))) : (((/* implicit */unsigned int) min((((/* implicit */int) (short)(-32767 - 1))), (2147483647))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_13 = 1; i_13 < 13; i_13 += 3) 
                    {
                        arr_47 [i_0] [i_1] |= ((short) min((arr_31 [i_1] [i_2] [i_2] [i_13 + 1] [i_13 - 1] [i_13 - 1]), (arr_31 [i_1] [i_0] [i_1] [i_13 + 1] [i_13] [i_13 - 1])));
                        arr_48 [(short)0] [(short)0] [i_1] [(short)0] [(unsigned short)1] = ((/* implicit */long long int) ((short) (-(var_7))));
                        arr_49 [i_0] [i_1] [i_2] [i_1] [i_11] [i_13] [i_13] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((min((arr_18 [i_0] [i_0] [i_2] [5ULL] [i_13]), (arr_42 [i_1] [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */signed char) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))));
                    }
                    for (short i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        arr_52 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1)))) - (max((((((/* implicit */int) (signed char)23)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) var_2)))))));
                        arr_53 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) ((short) arr_0 [(short)10]))) : (((int) var_3))))) ? (((/* implicit */int) arr_19 [i_0])) : ((~(((/* implicit */int) arr_29 [i_0] [i_1] [11LL] [i_1] [i_14]))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        arr_56 [i_0] [i_0] [i_11] [i_1] = ((/* implicit */signed char) ((unsigned long long int) arr_30 [i_1]));
                        var_31 = arr_7 [i_0] [i_11];
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((signed char) arr_4 [i_2] [i_11] [i_2])))));
                        var_33 = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) var_6)))));
                    }
                    for (long long int i_16 = 2; i_16 < 10; i_16 += 3) 
                    {
                        arr_61 [8LL] [i_1] [8LL] [i_1] [i_16] = ((/* implicit */_Bool) ((int) ((unsigned int) ((((/* implicit */long long int) var_7)) ^ (var_4)))));
                        var_34 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_11] [i_1] [i_2] [i_11] [i_16] [i_0])) + (((/* implicit */int) arr_43 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2]))))), (((max((((/* implicit */unsigned int) arr_5 [i_1] [i_1])), (var_0))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [(short)6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_37 [i_2] [i_2] [i_2] [i_2] [i_2])))))))));
                        arr_62 [i_0] [i_0] [i_2] [i_1] [i_16] [(short)13] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_19 [i_2])) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) var_2)))))));
                        var_35 = ((/* implicit */_Bool) var_1);
                    }
                    var_36 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (+(2147483647)))) ? (-6956214950867091889LL) : (6956214950867091889LL))));
                }
            }
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_37 = (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_31 [i_17] [i_1] [i_1] [i_0] [i_1] [i_0])))));
                var_38 = ((/* implicit */int) ((signed char) max((arr_11 [i_17]), (arr_11 [i_1]))));
            }
            /* vectorizable */
            for (unsigned short i_18 = 2; i_18 < 13; i_18 += 4) 
            {
                arr_68 [i_18] [i_18] [i_18] [i_1] = ((/* implicit */long long int) ((unsigned long long int) arr_60 [i_18 + 1] [i_18 + 1] [i_18 - 2] [12ULL] [i_18 - 1]));
                var_39 = (~(arr_55 [i_1] [i_1] [i_18 + 1] [11LL] [(unsigned short)7] [i_18] [(short)3]));
            }
        }
        for (int i_19 = 0; i_19 < 14; i_19 += 4) 
        {
            arr_71 [i_19] = max((((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_19] [i_19] [(short)2])) ? (((/* implicit */int) arr_42 [i_19] [i_19] [i_19] [i_0] [i_0])) : (((/* implicit */int) var_10)))), (((((-223921792) + (2147483647))) << (((((/* implicit */int) (short)7)) - (7))))));
            var_40 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) 4360399080927914689ULL)) || (((/* implicit */_Bool) 0ULL))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-27106))))) ? (((/* implicit */int) min((arr_27 [(short)4] [i_19] [(unsigned short)13] [(unsigned short)13]), (var_3)))) : (((/* implicit */int) ((short) var_0)))))));
            arr_72 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) (+(((/* implicit */int) ((signed char) arr_45 [i_0] [i_0] [i_19] [(unsigned short)4] [i_0]))))));
            var_41 += ((/* implicit */signed char) ((long long int) max((296246534381017811ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))));
        }
        var_42 = ((/* implicit */long long int) ((unsigned short) ((unsigned long long int) (signed char)20)));
    }
    for (short i_20 = 0; i_20 < 20; i_20 += 4) 
    {
        arr_75 [i_20] |= ((/* implicit */signed char) max((((unsigned long long int) ((long long int) -7096579698359776928LL))), (((/* implicit */unsigned long long int) 0LL))));
        arr_76 [(signed char)1] [i_20] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((signed char) var_8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) arr_74 [i_20] [i_20])) : (((/* implicit */int) arr_73 [i_20]))))) : (((((/* implicit */unsigned long long int) -238766957)) + (402133972069852354ULL))));
    }
    var_43 = ((/* implicit */short) var_9);
}
