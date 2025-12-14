/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213556
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_1 - 1] = ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        arr_15 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_11 [i_1]) ? (((/* implicit */int) arr_11 [i_1])) : (((/* implicit */int) arr_11 [i_1]))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            var_10 = ((/* implicit */_Bool) ((short) arr_10 [i_0] [8ULL] [i_2] [i_1 - 1]));
                            var_11 = ((/* implicit */unsigned int) ((unsigned long long int) (+(arr_10 [i_4] [i_4] [i_0] [i_0]))));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 2) 
                        {
                            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) 633695078613411963ULL))))))));
                            var_13 = ((/* implicit */unsigned long long int) var_7);
                            var_14 = ((/* implicit */_Bool) (+((~(var_3)))));
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~(arr_17 [i_5 - 3] [i_5] [i_5] [i_5 + 2] [i_5] [i_5 - 2] [i_5]))))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_6 = 2; i_6 < 23; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_6] [i_1])) ? (((/* implicit */int) (unsigned short)14574)) : (((/* implicit */int) arr_18 [i_0] [i_1 - 1] [i_6] [i_7] [i_6 + 2] [i_1]))))) : (17813048995096139650ULL)));
                            var_17 -= ((/* implicit */unsigned int) var_1);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 1; i_9 < 24; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    {
                        var_18 *= ((/* implicit */unsigned long long int) arr_21 [i_10 + 1] [i_0] [i_9] [i_10]);
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(arr_22 [(unsigned char)0] [i_0] [i_1 - 1] [i_0]))))));
                    }
                } 
            } 
            var_20 -= ((/* implicit */_Bool) (+(17813048995096139652ULL)));
        }
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            arr_34 [i_0] [i_0] = ((/* implicit */short) arr_33 [(signed char)4]);
            /* LoopSeq 2 */
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                /* LoopSeq 4 */
                for (short i_13 = 1; i_13 < 24; i_13 += 3) 
                {
                    arr_39 [i_0] [i_11] [i_12] = ((/* implicit */unsigned long long int) arr_30 [i_0] [i_11] [i_12] [(short)22]);
                    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) arr_9 [17LL] [i_12] [i_13 - 1]))));
                }
                for (short i_14 = 1; i_14 < 24; i_14 += 3) 
                {
                    arr_42 [i_14] [i_11] [i_12] [i_14] = ((((/* implicit */int) arr_35 [3ULL] [i_11] [1ULL] [1ULL])) % (((/* implicit */int) arr_35 [i_14] [i_14] [i_12] [i_14])));
                    var_22 = ((/* implicit */short) ((var_1) ? (((((/* implicit */_Bool) arr_38 [i_0] [i_11] [i_11] [(signed char)16] [i_14] [i_14])) ? (((/* implicit */int) (_Bool)0)) : (-1963849642))) : (arr_13 [i_0] [i_11] [i_14 - 1] [i_14 + 1])));
                    var_23 ^= ((/* implicit */short) arr_36 [i_12] [i_0] [i_0]);
                    var_24 = ((arr_16 [i_14 - 1] [i_14 - 1] [i_14 - 1] [16LL] [i_14 + 1]) >= (arr_16 [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_14] [i_14 - 1]));
                    arr_43 [i_12] [i_11] [i_12] [i_14 + 1] = ((/* implicit */_Bool) 12317230513382261419ULL);
                }
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    arr_48 [i_15] [i_12] [i_12] [i_0] = ((/* implicit */short) ((_Bool) var_4));
                    var_25 = ((/* implicit */short) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_33 [i_0]))));
                }
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)21494)))))));
                    arr_51 [i_12] [i_0] [i_0] [i_12] [i_12] [i_16] = ((/* implicit */_Bool) (~(264241152)));
                }
                /* LoopNest 2 */
                for (short i_17 = 2; i_17 < 23; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) arr_30 [i_11] [i_11] [i_11] [i_17 - 1])) : (((/* implicit */int) arr_19 [i_0] [i_12] [i_12] [i_17 - 1] [i_18] [i_17]))))));
                            var_28 = ((/* implicit */int) (unsigned short)28672);
                        }
                    } 
                } 
                var_29 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) 3955443894087265691ULL))));
            }
            for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 2) 
            {
                var_30 *= ((/* implicit */short) (((_Bool)1) ? (var_3) : (((/* implicit */unsigned int) arr_31 [i_11] [i_19]))));
                var_31 ^= ((/* implicit */short) 2657039960325547339LL);
            }
        }
        for (unsigned short i_20 = 2; i_20 < 23; i_20 += 2) 
        {
            var_32 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (arr_10 [i_20 + 1] [22U] [i_20 - 1] [i_20])));
            arr_61 [i_20 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2072651425)) ? (((/* implicit */int) arr_36 [i_20 + 1] [5U] [i_20 - 2])) : (((/* implicit */int) arr_36 [i_20 + 2] [i_20 - 2] [i_20 - 2]))));
            /* LoopNest 2 */
            for (unsigned char i_21 = 2; i_21 < 24; i_21 += 3) 
            {
                for (unsigned short i_22 = 3; i_22 < 24; i_22 += 3) 
                {
                    {
                        arr_68 [i_0] [i_20] [i_21] [i_21] |= ((/* implicit */unsigned char) arr_0 [i_22]);
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (-(((/* implicit */int) arr_57 [i_20 - 2] [i_20 - 2] [i_20 - 2] [i_20 + 1])))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_23 = 1; i_23 < 22; i_23 += 2) 
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_54 [i_23] [i_23] [i_23 + 3] [i_23])) % (-8489383352644975618LL)));
                var_35 += ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_23 [i_20 + 1] [i_20 + 2] [i_20 + 1] [i_20 - 2] [i_20 - 2] [5U])) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (15980137818038125198ULL)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 1) 
                {
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_27 [i_20 - 2] [i_23] [i_23])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 17534756134438835204ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))) : (arr_17 [i_20] [i_20 - 1] [6ULL] [i_24] [i_20 - 1] [(short)11] [i_20])))));
                    arr_75 [i_23 - 1] [i_23] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (arr_52 [i_23 + 3])));
                    var_37 |= ((((/* implicit */_Bool) arr_63 [i_20] [i_20 - 2] [i_20])) ? (((/* implicit */int) arr_4 [i_20 + 2] [i_23 + 2] [i_23 - 1])) : (((/* implicit */int) ((_Bool) var_2))));
                    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_41 [i_23 - 1])))))));
                }
            }
            for (int i_25 = 2; i_25 < 24; i_25 += 1) 
            {
                /* LoopNest 2 */
                for (int i_26 = 3; i_26 < 22; i_26 += 2) 
                {
                    for (unsigned int i_27 = 1; i_27 < 24; i_27 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) var_9);
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (4294967295U)));
                            arr_86 [i_0] [i_0] [i_25 + 1] [i_26] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2657039960325547339LL)) ? (((/* implicit */int) arr_49 [i_26] [i_25] [i_25 - 2] [i_25 - 2])) : (((/* implicit */int) arr_49 [i_26] [i_20 + 1] [i_20 - 2] [i_25 - 2]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    var_41 ^= var_8;
                    var_42 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2657039960325547350LL))));
                    var_43 = arr_28 [i_28];
                    var_44 = ((/* implicit */unsigned long long int) arr_56 [i_28] [i_28] [i_25 + 1] [i_0] [i_0]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_29 = 0; i_29 < 25; i_29 += 3) 
                    {
                        var_45 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_20] [i_28] [1ULL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)128))));
                        var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((unsigned long long int) arr_20 [i_25 - 1] [i_20] [i_20 - 2] [i_20] [i_20])))));
                        arr_91 [i_0] [i_20] [i_20] [i_28] [i_29] [(_Bool)1] |= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (arr_25 [i_25 + 1] [i_25 + 1] [i_25 - 2] [i_25] [i_29]) : (((/* implicit */int) (unsigned char)142))));
                    }
                    for (unsigned long long int i_30 = 0; i_30 < 25; i_30 += 2) 
                    {
                        var_47 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_81 [i_28] [i_20] [i_28] [i_28] [i_30] [i_0])))));
                        arr_96 [i_0] [i_0] [i_28] [i_28] [i_30] [i_30] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) 4294967295U));
                        var_48 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25])) ? (((/* implicit */int) arr_40 [2ULL] [i_25 - 2] [i_25 - 2] [(short)24])) : (((/* implicit */int) arr_40 [i_25] [i_25 - 1] [i_25 + 1] [i_25]))));
                    }
                    for (signed char i_31 = 0; i_31 < 25; i_31 += 3) 
                    {
                        var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_28]))))) ^ (((/* implicit */int) ((_Bool) arr_93 [i_20] [i_20] [i_0]))))))));
                        var_50 = ((/* implicit */short) arr_47 [i_0] [i_0] [i_0] [i_0]);
                    }
                }
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
                    {
                        arr_103 [i_33] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (1760383826U)))) : (((((/* implicit */_Bool) 13647353681403898345ULL)) ? (arr_102 [i_0] [i_0] [i_0] [i_25] [i_32] [i_32] [i_33 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_33 - 1] [i_25 - 2] [i_0])))))));
                        var_51 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_33 - 1] [i_20 - 1]))) % (((((/* implicit */long long int) arr_20 [i_20] [i_20] [i_25] [i_0] [i_20])) ^ (2966403070423302516LL)))));
                        var_52 = ((/* implicit */int) (((_Bool)1) ? (((unsigned int) arr_101 [i_33] [i_25] [i_25] [i_25])) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)27332)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_34 = 3; i_34 < 23; i_34 += 2) 
                    {
                        arr_106 [(_Bool)1] [i_20] [i_25] [i_32] [i_34] = ((/* implicit */int) (-(arr_70 [i_25 - 2] [i_20 + 2] [i_25 - 2])));
                        var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) var_1))));
                        var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) var_5))));
                    }
                }
            }
        }
        for (unsigned short i_35 = 1; i_35 < 24; i_35 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_36 = 1; i_36 < 22; i_36 += 4) 
            {
                var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) (~(arr_100 [i_35 + 1] [i_36 + 2] [i_36 - 1]))))));
                /* LoopNest 2 */
                for (signed char i_37 = 0; i_37 < 25; i_37 += 4) 
                {
                    for (unsigned long long int i_38 = 0; i_38 < 25; i_38 += 4) 
                    {
                        {
                            var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) var_4))));
                            var_57 = ((/* implicit */short) (+(((((/* implicit */_Bool) 795050881)) ? (arr_118 [i_0] [i_37]) : (((/* implicit */int) (unsigned char)136))))));
                            arr_119 [3] [i_35] [i_35] [i_35 - 1] [i_35 + 1] [i_35] [i_35 + 1] = 13647353681403898345ULL;
                            var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_35 - 1] [i_35 + 1] [i_35] [i_36 - 1])) ? (((/* implicit */int) arr_30 [i_35 - 1] [i_35 - 1] [i_35] [i_36 + 3])) : (((/* implicit */int) arr_30 [i_35 - 1] [i_35 - 1] [i_35] [i_36 + 3]))));
                        }
                    } 
                } 
                var_59 &= ((/* implicit */unsigned int) ((unsigned long long int) (~(((/* implicit */int) var_2)))));
            }
            for (short i_39 = 2; i_39 < 24; i_39 += 2) 
            {
                var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) ((unsigned char) ((unsigned short) arr_70 [(_Bool)1] [(_Bool)1] [i_0]))))));
                /* LoopNest 2 */
                for (short i_40 = 3; i_40 < 23; i_40 += 3) 
                {
                    for (int i_41 = 1; i_41 < 23; i_41 += 2) 
                    {
                        {
                            var_61 = ((/* implicit */int) (short)32767);
                            var_62 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_81 [i_35] [i_35 + 1] [i_35] [19ULL] [i_35 - 1] [i_35]))));
                        }
                    } 
                } 
            }
            arr_129 [i_35] [i_35] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)76))));
        }
        var_63 = ((/* implicit */_Bool) (~(((unsigned int) var_2))));
        arr_130 [i_0] = ((/* implicit */unsigned long long int) arr_88 [i_0] [i_0] [22ULL] [i_0] [(short)19] [i_0]);
        arr_131 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_105 [i_0] [i_0] [i_0] [(unsigned char)13] [i_0])) ^ (((/* implicit */int) (_Bool)1))));
        var_64 = ((/* implicit */unsigned int) min((var_64), (((/* implicit */unsigned int) 10280842971757308508ULL))));
    }
    /* LoopNest 3 */
    for (signed char i_42 = 1; i_42 < 21; i_42 += 2) 
    {
        for (int i_43 = 3; i_43 < 24; i_43 += 2) 
        {
            for (int i_44 = 0; i_44 < 25; i_44 += 1) 
            {
                {
                    var_65 = ((/* implicit */unsigned int) max((((arr_118 [22U] [i_44]) <= ((~(((/* implicit */int) arr_47 [i_42] [i_43 - 3] [i_42] [i_42])))))), (((((unsigned int) 2657039960325547350LL)) > (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)112), (((/* implicit */signed char) (_Bool)1))))))))));
                    var_66 = ((/* implicit */short) max((var_66), (((/* implicit */short) ((int) min((min((((/* implicit */unsigned short) arr_26 [i_42] [i_42] [i_42] [i_42] [i_42])), ((unsigned short)31158))), (((/* implicit */unsigned short) ((_Bool) arr_110 [i_42] [i_43] [i_44])))))))));
                    arr_138 [i_42 + 1] [(short)0] &= ((/* implicit */short) ((int) (_Bool)1));
                }
            } 
        } 
    } 
    var_67 = ((/* implicit */signed char) min((((((/* implicit */_Bool) -1)) ? (((((/* implicit */int) (unsigned short)56348)) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)69)))), (((/* implicit */int) (short)14861))));
    var_68 = ((/* implicit */unsigned long long int) max((var_68), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_0)) | (((/* implicit */int) (_Bool)1))))))))));
}
