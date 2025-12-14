/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39903
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
    var_16 = ((/* implicit */signed char) var_12);
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) var_3);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((arr_10 [i_0] [i_0 - 1] [i_1] [i_0] [i_0 - 1] [i_3] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0 - 3]))) : (((18446744073709551600ULL) + (((/* implicit */unsigned long long int) 2852750171U))))));
                            arr_13 [i_0] [i_0 - 4] [i_0 - 1] [(signed char)4] [i_0] = ((/* implicit */signed char) var_0);
                            var_19 &= ((/* implicit */_Bool) var_13);
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (_Bool)1))));
                            var_21 |= arr_3 [i_3];
                        }
                        var_22 = ((/* implicit */long long int) (~(var_6)));
                        var_23 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25085)) ? (((/* implicit */long long int) 1056964608U)) : (9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) != (18446744073709551615ULL))))) : (arr_14 [i_0] [i_0 - 4] [i_2] [i_3] [i_3] [9LL])))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        var_24 = ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned short)0)))))) : (((/* implicit */int) var_3)));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2049192003)) * (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_6])) >> (((arr_17 [i_6] [12U]) - (2215848533U)))))), (((arr_20 [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (17710885621159464226ULL)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_6] [i_7] [i_7])) >> (((((/* implicit */int) var_8)) / (((/* implicit */int) var_8))))));
            var_27 = ((/* implicit */long long int) ((int) (-(((/* implicit */int) var_14)))));
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_28 -= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_28 [i_7 + 3] [i_7 - 1])) : (((/* implicit */int) arr_28 [i_7 + 4] [i_7 - 1]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 1; i_10 < 12; i_10 += 2) 
                    {
                        var_29 = var_9;
                        var_30 = arr_31 [i_6] [i_6] [10ULL];
                        var_31 = ((/* implicit */short) (+(var_13)));
                        var_32 ^= ((/* implicit */unsigned long long int) var_10);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_31 [i_11] [i_9] [i_6])) == (var_5))))) == (((((/* implicit */unsigned long long int) -9223372036854775788LL)) | (7ULL)))));
                        var_34 = ((/* implicit */_Bool) var_1);
                        arr_35 [i_7] [i_7] [i_7 + 4] [i_7 + 4] [i_7] = ((/* implicit */unsigned char) var_7);
                        var_35 = ((/* implicit */unsigned long long int) 240518168576LL);
                    }
                }
                var_36 -= ((/* implicit */signed char) 735858452550087389ULL);
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_7 - 1] [i_7] [i_6] [i_6])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        var_38 = ((/* implicit */long long int) (signed char)6);
                        var_39 = ((/* implicit */short) (_Bool)1);
                        var_40 = ((/* implicit */unsigned int) ((arr_39 [i_7 + 1] [i_7 + 3] [i_7 + 3] [i_7] [i_7 + 3]) | (((/* implicit */unsigned long long int) (-(var_2))))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        var_41 ^= ((/* implicit */unsigned long long int) ((long long int) arr_37 [i_6] [i_7] [i_7] [i_14]));
                        arr_44 [i_12] [i_12] [i_8] [i_7] [i_14] [i_7 + 4] = ((/* implicit */long long int) ((arr_32 [i_6] [i_7 + 4] [i_8] [i_12] [i_14] [i_12]) != (((/* implicit */unsigned long long int) ((unsigned int) var_2)))));
                        var_42 = 6082005726577499651LL;
                    }
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned int) ((var_12) == (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_15 + 1] [i_7 + 2])))));
                        var_44 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-16LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) || (((/* implicit */_Bool) arr_42 [i_6] [i_7 + 4] [i_6] [9U] [i_8] [i_12] [i_15])));
                    }
                }
                for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    arr_50 [i_7] [i_8] [i_7 - 1] [i_7] = ((/* implicit */long long int) -472601520);
                    var_45 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 2049192003)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6]))) : (var_2))));
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(16352U)))) | (((((/* implicit */_Bool) arr_33 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (var_6) : (var_0))))))));
                        var_47 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)2))) - (var_9))) - (6829004928761870276LL)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 2) 
                    {
                        var_48 ^= ((/* implicit */short) var_13);
                        arr_56 [i_6] [i_18] [4U] [i_8] [i_16] [i_18] &= ((/* implicit */short) var_1);
                    }
                    for (long long int i_19 = 0; i_19 < 13; i_19 += 4) 
                    {
                        arr_59 [i_19] [i_7] [i_7] [(unsigned short)0] [i_7 + 4] &= ((/* implicit */unsigned int) var_2);
                        var_49 = ((/* implicit */signed char) (_Bool)1);
                    }
                    var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) ((arr_26 [i_7 + 3] [i_7 + 4] [i_7 + 2]) == (2380289843U))))));
                }
            }
            for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 3) 
            {
                var_51 |= ((16352U) | (((/* implicit */unsigned int) ((/* implicit */int) var_3))));
                arr_62 [10ULL] [i_7] [i_7] &= ((/* implicit */signed char) ((((/* implicit */int) var_10)) >> (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_21 = 0; i_21 < 13; i_21 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_22 = 2; i_22 < 10; i_22 += 3) 
                {
                    var_52 |= ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_22 + 2] [1LL] [i_7 + 1])) | (((/* implicit */int) arr_29 [i_22 + 2] [i_7] [i_7 + 1]))));
                    var_53 = ((/* implicit */short) var_9);
                    /* LoopSeq 2 */
                    for (unsigned int i_23 = 0; i_23 < 13; i_23 += 1) 
                    {
                        var_54 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_58 [i_22 + 1] [(_Bool)0] [i_21] [i_22 + 2] [(unsigned char)10]))));
                        arr_72 [i_6] [i_6] [i_6] [i_7] [i_6] = ((/* implicit */_Bool) var_3);
                        var_55 += ((/* implicit */unsigned long long int) arr_47 [(signed char)10] [10U] [i_7 + 3] [(signed char)10]);
                    }
                    for (signed char i_24 = 2; i_24 < 10; i_24 += 2) 
                    {
                        arr_76 [i_24] [i_22] [i_7] [i_7 - 1] [(unsigned short)9] = (-(((/* implicit */int) var_14)));
                        arr_77 [i_21] [i_22 - 1] [2] [i_22 - 2] [i_22 - 2] [i_7] = ((/* implicit */_Bool) var_5);
                        arr_78 [i_24] [i_7] [i_21] [i_7] [i_6] = ((/* implicit */_Bool) 562949953421248LL);
                        var_56 = (signed char)-72;
                        var_57 |= ((/* implicit */short) -1333611522);
                    }
                }
                for (unsigned char i_25 = 0; i_25 < 13; i_25 += 1) /* same iter space */
                {
                    var_58 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [10LL] [i_7 + 4] [10LL]))));
                    var_59 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
                }
                for (unsigned char i_26 = 0; i_26 < 13; i_26 += 1) /* same iter space */
                {
                    var_60 ^= arr_58 [i_6] [i_6] [i_6] [i_6] [4ULL];
                    arr_83 [i_6] [i_7 + 4] [i_21] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)53630)) != (((/* implicit */int) arr_53 [i_6] [i_7 + 1] [i_21] [i_7 + 2]))));
                    arr_84 [0] [i_7 + 1] [i_21] [i_26] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-96)))) == (((((/* implicit */_Bool) arr_33 [i_6] [i_7 + 3] [7LL] [i_21] [i_26])) ? (var_0) : (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
                    var_61 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_26 [i_7] [i_7 + 2] [i_7 + 3]) : (arr_26 [i_7] [i_7 + 2] [7LL])));
                }
                arr_85 [i_7] [i_7] = ((/* implicit */signed char) (~(var_9)));
                var_62 = ((/* implicit */unsigned long long int) ((-1574186553909447250LL) != (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_6])))))));
            }
            for (unsigned short i_27 = 0; i_27 < 13; i_27 += 4) 
            {
                var_63 = ((/* implicit */long long int) var_3);
                /* LoopSeq 2 */
                for (unsigned short i_28 = 0; i_28 < 13; i_28 += 3) 
                {
                    var_64 |= ((/* implicit */unsigned int) -1LL);
                    var_65 = ((/* implicit */unsigned long long int) (-(arr_52 [i_28] [i_7 + 1])));
                    var_66 += ((/* implicit */signed char) var_15);
                }
                for (short i_29 = 0; i_29 < 13; i_29 += 4) 
                {
                    arr_95 [i_6] [i_7] [i_27] [11ULL] = ((/* implicit */short) ((((/* implicit */int) var_3)) * (((/* implicit */int) ((short) var_1)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_30 = 2; i_30 < 10; i_30 += 2) 
                    {
                        var_67 = ((/* implicit */long long int) ((unsigned short) var_6));
                        arr_99 [i_7] = ((/* implicit */short) var_2);
                        var_68 = ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_12)) == ((-9223372036854775807LL - 1LL)))))) : (var_12));
                        arr_100 [i_6] [i_7] [i_27] [i_29] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((var_5) - (182432937)))));
                        var_69 = ((/* implicit */unsigned int) ((-3LL) | (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7 + 4] [i_30 + 1])))));
                    }
                    var_70 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_65 [i_7]) ? (((/* implicit */int) arr_27 [i_6] [i_7 + 4] [i_27] [i_27] [i_7])) : (((/* implicit */int) arr_90 [i_6] [i_6] [i_6] [i_6]))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_21 [i_7] [i_7])))))));
                    var_71 = ((/* implicit */int) ((arr_24 [i_7 + 2] [i_7] [i_27] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                }
                arr_101 [i_6] [(unsigned short)6] [i_27] [i_7] = ((/* implicit */unsigned int) arr_29 [i_7 + 2] [i_27] [i_7 + 4]);
                var_72 = 16352U;
            }
        }
        /* vectorizable */
        for (unsigned long long int i_31 = 1; i_31 < 9; i_31 += 4) /* same iter space */
        {
            var_73 = ((/* implicit */unsigned int) arr_97 [i_6] [8ULL] [i_6] [i_6] [7U] [i_6] [i_31]);
            var_74 &= ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
            var_75 = ((/* implicit */unsigned long long int) ((int) var_4));
        }
        for (unsigned long long int i_32 = 1; i_32 < 9; i_32 += 4) /* same iter space */
        {
            var_76 = ((/* implicit */long long int) ((0LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_77 = ((/* implicit */long long int) ((((_Bool) arr_54 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)40622)) : (((/* implicit */int) (_Bool)1))));
        }
        var_78 = ((/* implicit */unsigned short) ((((unsigned int) var_4)) * (((/* implicit */unsigned int) ((/* implicit */int) arr_98 [i_6] [i_6] [i_6])))));
    }
}
