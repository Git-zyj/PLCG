/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200707
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [5] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */unsigned long long int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)5] [i_0])))))), (arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_1 + 2] [i_1] [i_3] [i_1] = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_1 - 3])) / (((/* implicit */int) arr_4 [i_1 - 3])))) / (((/* implicit */int) arr_4 [i_1 + 1]))));
                                var_12 -= ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_9 [i_1 + 2] [(_Bool)1] [(signed char)3] [i_1 - 2] [i_1] [i_1])))));
                                arr_13 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 3] [8ULL] = ((/* implicit */unsigned long long int) arr_5 [i_4] [i_3] [i_2] [i_0]);
                                arr_14 [i_0] [i_0] [8LL] [i_0] [(short)6] [i_0] [(short)6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-1461304534573321048LL) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [11ULL] [i_1] [i_1 - 3] [i_1 - 3] [i_1 - 1] [i_1 - 1])))))) && (((/* implicit */_Bool) (unsigned char)21))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1 - 1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_10 [i_1] [i_1 - 3] [i_1 - 2])) : (((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_1 + 1]))))) ? (min((2147483646), (((/* implicit */int) arr_10 [10ULL] [i_1 + 2] [i_1 - 3])))) : ((+(((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1 - 3]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        for (int i_6 = 3; i_6 < 9; i_6 += 1) 
                        {
                            {
                                var_13 |= arr_18 [i_0] [(signed char)1] [i_6] [i_5 + 1];
                                var_14 = arr_5 [i_1 - 2] [i_5 - 1] [i_5 + 1] [i_6 - 3];
                                var_15 = ((/* implicit */int) min((var_15), ((~(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_16 |= ((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1 - 2] [(short)10] [6ULL]);
                    arr_21 [i_2] [i_1] [(signed char)10] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1 - 3]))) : (var_7))));
                }
            } 
        } 
        var_17 &= ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_9 [i_0] [i_0] [i_0] [(signed char)10] [i_0] [i_0]))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            var_18 &= ((/* implicit */_Bool) 1186951990832656983ULL);
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (int i_10 = 3; i_10 < 10; i_10 += 3) 
                {
                    {
                        var_19 *= ((/* implicit */_Bool) arr_7 [i_9] [i_10 - 3] [i_10 - 1] [i_10 - 2] [(signed char)2] [i_10 - 3]);
                        arr_33 [i_10] [i_8] [i_10] = ((/* implicit */int) arr_10 [i_7] [i_9] [i_9]);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (int i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                arr_37 [i_7] [i_8] [i_11] [7LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1461304534573321048LL)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) 2147483646)), (1150669704793161728ULL))))))));
                var_20 = ((/* implicit */short) (_Bool)1);
                arr_38 [(short)0] [(unsigned char)9] [(unsigned char)9] = ((/* implicit */short) min((var_5), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1461304534573321048LL)) ? (17296074368916389880ULL) : (18446744073709551615ULL)))))));
                arr_39 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) -1461304534573321048LL);
            }
            for (int i_12 = 1; i_12 < 9; i_12 += 3) 
            {
                var_21 = ((/* implicit */long long int) (-(((arr_0 [i_8] [i_12 + 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    var_22 = ((/* implicit */unsigned char) var_2);
                    arr_48 [i_7] [i_7] [i_7] [i_7] [1] = ((/* implicit */short) (-(((/* implicit */int) arr_40 [i_12 + 1] [i_12 + 2]))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_12 + 1] [i_12] [i_12 + 1] [(short)11])) ? (((/* implicit */long long int) var_5)) : (arr_18 [i_12 + 1] [i_12] [i_12] [i_12 + 1]))))));
                    var_24 ^= (!(((/* implicit */_Bool) arr_20 [i_13])));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [(short)3] [i_12 - 1] [(short)3] [(_Bool)1])) || (((/* implicit */_Bool) arr_17 [i_7] [i_12 - 1] [(short)0] [(unsigned char)2]))));
                }
                for (signed char i_14 = 4; i_14 < 9; i_14 += 1) 
                {
                    var_26 = ((/* implicit */int) max((((((/* implicit */_Bool) -1344328121)) ? (1461304534573321032LL) : (-1461304534573321048LL))), (1461304534573321048LL)));
                    var_27 = ((/* implicit */int) min((((/* implicit */short) (!((_Bool)1)))), (min((((/* implicit */short) arr_26 [i_14])), ((short)-14236)))));
                }
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) -2147483647))));
            }
            /* vectorizable */
            for (unsigned long long int i_15 = 1; i_15 < 10; i_15 += 1) 
            {
                arr_54 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_15 - 1] [i_15 + 1] [i_15 - 1])))));
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    for (long long int i_17 = 1; i_17 < 9; i_17 += 1) 
                    {
                        {
                            arr_61 [i_7] [i_8] [i_15 + 1] [2ULL] [i_16] [i_17] [i_17 + 1] = ((/* implicit */signed char) ((var_2) ? (((/* implicit */int) arr_27 [i_15 - 1])) : (((/* implicit */int) var_2))));
                            var_29 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_47 [(_Bool)1] [i_15] [i_15] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [(_Bool)0] [2]))) : (arr_11 [i_7] [i_8] [(unsigned char)2] [(short)2] [i_16])))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_68 [i_7] [(unsigned char)10] [i_19] [i_19] = ((signed char) var_4);
                var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_18 - 1])))));
                arr_69 [i_19] = ((/* implicit */int) var_0);
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    for (int i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        {
                            var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))) : (((((/* implicit */_Bool) arr_62 [i_7] [i_20])) ? (((/* implicit */unsigned long long int) arr_3 [i_7] [i_19] [i_7])) : (var_0)))));
                            arr_74 [i_20] [(_Bool)1] [i_20] [(_Bool)1] [i_19] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)125))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned char) var_6);
            }
            for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 3) 
            {
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)14235)) ? (arr_76 [i_18 - 1]) : (((/* implicit */int) (_Bool)1)))))));
                arr_78 [i_22] [i_22] |= (!(((/* implicit */_Bool) ((var_2) ? (15440632386817306870ULL) : (((/* implicit */unsigned long long int) var_5))))));
            }
            for (signed char i_23 = 0; i_23 < 11; i_23 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 3) 
                {
                    for (int i_25 = 0; i_25 < 11; i_25 += 3) 
                    {
                        {
                            arr_89 [i_25] = ((/* implicit */_Bool) arr_55 [i_7] [2] [i_7] [(signed char)0] [i_7]);
                            var_34 = var_11;
                        }
                    } 
                } 
                arr_90 [i_18] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_86 [i_7] [i_18] [i_18 - 1] [i_18] [i_18 - 1])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_81 [i_7] [i_7])))))));
            }
            arr_91 [i_7] [i_18 - 1] [(short)10] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) (signed char)-23)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 1) 
            {
                arr_94 [i_7] [i_18] [i_26] [i_26] = ((/* implicit */unsigned long long int) arr_59 [i_7] [i_18] [i_26]);
                var_35 = ((/* implicit */int) arr_81 [(_Bool)1] [(unsigned char)6]);
                var_36 = ((/* implicit */short) var_5);
                /* LoopSeq 1 */
                for (unsigned long long int i_27 = 2; i_27 < 10; i_27 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_28 = 2; i_28 < 9; i_28 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned char) arr_29 [i_28] [(signed char)1] [(signed char)1] [i_26] [i_27 - 2]);
                        arr_99 [(unsigned char)8] [1] [i_28] [i_27] [1] [i_27] [i_27] = ((/* implicit */short) ((unsigned char) ((_Bool) arr_29 [i_28] [i_18] [(short)3] [(_Bool)0] [i_28 - 1])));
                    }
                    arr_100 [0] [i_26] [2ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1461304534573321048LL)) ? (var_11) : (((/* implicit */long long int) arr_84 [i_18 - 1] [i_27 + 1] [i_27 - 2]))));
                }
            }
            var_38 = (!(((/* implicit */_Bool) arr_9 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1])));
            /* LoopNest 2 */
            for (short i_29 = 1; i_29 < 9; i_29 += 3) 
            {
                for (short i_30 = 2; i_30 < 8; i_30 += 3) 
                {
                    {
                        var_39 *= ((/* implicit */short) var_2);
                        var_40 = ((/* implicit */_Bool) -7136712244028931420LL);
                        var_41 = ((((/* implicit */_Bool) arr_20 [2])) ? (((/* implicit */int) arr_45 [i_18 - 1] [i_18 - 1])) : (arr_76 [i_18 - 1]));
                        var_42 -= ((/* implicit */unsigned int) arr_88 [(signed char)3] [(signed char)3] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_31 = 0; i_31 < 11; i_31 += 1) 
        {
            arr_107 [i_7] [i_31] [i_7] = var_8;
            arr_108 [i_31] [i_31] = ((/* implicit */long long int) ((17296074368916389887ULL) <= (((/* implicit */unsigned long long int) 1461304534573321049LL))));
            /* LoopSeq 1 */
            for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
            {
                var_43 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_46 [i_7] [i_31] [i_31])))) % (arr_87 [i_32 - 1] [i_32] [i_32 - 1] [i_32 - 1] [i_32 - 1])));
                arr_112 [i_31] [i_31] = ((/* implicit */unsigned long long int) ((var_10) >> ((((-(1412749203))) + (1412749264)))));
                arr_113 [i_31] [i_31] [(short)8] [i_32] = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26277))) * (var_0))));
                arr_114 [7ULL] [i_31] [i_31] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_65 [i_32 - 1]))));
                var_44 = ((/* implicit */int) (short)26276);
            }
            arr_115 [(signed char)2] [6] |= ((/* implicit */int) (~(var_8)));
            var_45 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8751193969593911523ULL)) && (((/* implicit */_Bool) arr_65 [(_Bool)0]))));
        }
        for (int i_33 = 3; i_33 < 10; i_33 += 3) 
        {
            var_46 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_7] [i_7] [i_33 - 3])) | (((/* implicit */int) arr_6 [i_33] [i_33] [i_33 - 1]))))));
            arr_120 [(_Bool)1] [i_33 - 1] [i_33] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-26277)) | (((/* implicit */int) (signed char)-126))))), ((~(arr_93 [i_33 - 2])))));
            var_47 = ((/* implicit */long long int) (~(arr_17 [i_33] [i_33 - 1] [i_33 - 1] [i_33])));
        }
        var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) (short)12634))))) ? (((/* implicit */int) min((arr_36 [i_7] [8ULL] [i_7]), ((short)14218)))) : (((/* implicit */int) arr_79 [i_7] [i_7] [(_Bool)1]))));
        arr_121 [i_7] = ((/* implicit */unsigned long long int) ((signed char) (_Bool)1));
        arr_122 [i_7] = ((/* implicit */unsigned long long int) ((-1461304534573321041LL) != (((/* implicit */long long int) (~(((/* implicit */int) arr_57 [i_7])))))));
        var_49 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_73 [i_7] [i_7] [i_7] [(short)8] [i_7]))))) ? (((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) arr_102 [i_7] [i_7])) ? (((/* implicit */int) arr_102 [i_7] [i_7])) : (((/* implicit */int) arr_102 [i_7] [i_7]))))));
    }
    var_50 = ((/* implicit */unsigned char) -1461304534573321068LL);
    var_51 -= ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_10) > (((/* implicit */long long int) var_5))))), (min((((/* implicit */long long int) var_9)), (1461304534573321048LL)))))) ? (((/* implicit */unsigned long long int) var_10)) : (var_0));
}
