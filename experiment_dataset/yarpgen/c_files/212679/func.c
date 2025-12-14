/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212679
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (-(min((((/* implicit */unsigned long long int) var_1)), (arr_0 [i_0 - 1]))))))));
            var_13 = ((/* implicit */int) 3781945470U);
            arr_5 [i_0 - 2] [i_0] [i_1 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((1756457682U), (2538509613U))))));
            var_14 &= ((/* implicit */unsigned long long int) arr_4 [0] [i_0] [5U]);
        }
        arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (min((var_6), (((/* implicit */unsigned long long int) arr_3 [i_0]))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (arr_0 [i_0 - 1]))))));
        var_15 -= ((/* implicit */short) ((long long int) ((((/* implicit */int) ((3666907186U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 1])))))) >> (((((/* implicit */int) var_7)) - (20))))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */short) arr_7 [i_2]);
            var_16 ^= ((/* implicit */unsigned int) arr_0 [i_2]);
            arr_10 [i_0 + 1] [i_2] = max((arr_3 [i_2 + 2]), (max(((~(1196666424U))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)28)) & (((/* implicit */int) (short)-18371))))))));
            arr_11 [i_2] = 3666907199U;
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_7)))))) : ((+(((/* implicit */int) var_4))))));
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                var_18 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -842878246)) : (arr_1 [i_3])))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_13 [i_0]))), (((/* implicit */unsigned int) var_2))))) : (((((/* implicit */_Bool) arr_7 [i_4])) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (var_6) : (((/* implicit */unsigned long long int) 2538509613U)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))))));
                arr_17 [i_0 - 2] [i_3] [4U] [i_3] = ((/* implicit */long long int) (+(2538509624U)));
            }
            for (short i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                arr_20 [i_0] [i_3] [i_5] = ((/* implicit */long long int) var_1);
                /* LoopSeq 4 */
                for (long long int i_6 = 4; i_6 < 11; i_6 += 2) 
                {
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((1756457704U), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (unsigned char)44)))))))));
                    /* LoopSeq 2 */
                    for (signed char i_7 = 2; i_7 < 10; i_7 += 2) 
                    {
                        arr_26 [i_0 - 2] [i_3] [i_5] [i_6] [i_7 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18387)) ? (1756457678U) : (((((/* implicit */_Bool) (short)18378)) ? (2538509625U) : (2538509613U)))))) ? (arr_3 [i_0]) : (0U)));
                        var_20 ^= ((/* implicit */signed char) arr_1 [i_5]);
                        arr_27 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2538509609U)) & (var_10)))) : (max((var_11), (((/* implicit */unsigned long long int) var_10)))))))));
                    }
                    for (int i_8 = 2; i_8 < 9; i_8 += 2) 
                    {
                        arr_32 [i_0 + 1] [i_0 + 1] [i_0 - 1] [(unsigned char)10] [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_2) : (var_1)))), (max((((/* implicit */long long int) 2538509634U)), (arr_15 [i_0] [6U] [i_0] [6U])))))) ? (((/* implicit */unsigned int) max((((var_9) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_3])))), (((/* implicit */int) arr_8 [i_5] [i_6 + 1]))))) : (arr_24 [i_0] [i_0] [i_0 - 2] [i_0 + 1] [i_0])));
                        var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (var_2)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10))) : (((((/* implicit */_Bool) 13697044897510370651ULL)) ? (((/* implicit */long long int) 1756457703U)) : (var_10))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)1165)) | (((((/* implicit */_Bool) (signed char)-106)) ? (363500939) : (((/* implicit */int) (unsigned char)62)))))))));
                        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                    }
                }
                for (unsigned char i_9 = 4; i_9 < 10; i_9 += 2) 
                {
                    var_23 += ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_10))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 2; i_10 < 11; i_10 += 1) 
                    {
                        arr_38 [i_0] [i_10] [i_0 - 2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_10) - (((/* implicit */long long int) var_2))))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10 - 2] [i_9 - 1] [i_0 + 1]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_0] [0LL] [i_3] [6ULL] [i_9 - 2] [i_10])))))));
                        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_37 [i_10] [i_9 - 2] [i_10] [i_9 + 1] [i_10] [i_0 - 1] [i_0 + 1])), (var_11))))));
                    }
                }
                for (int i_11 = 4; i_11 < 8; i_11 += 1) 
                {
                    var_25 -= ((/* implicit */unsigned long long int) var_1);
                    var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_3] [i_3] [i_0])) ? (((/* implicit */unsigned long long int) 351450178U)) : (var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)15663)) ? (var_1) : (arr_39 [i_0 + 1] [i_5] [i_0])))) : ((~(var_10)))));
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 1; i_12 < 10; i_12 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((-466168002) + (2147483647))) << (((((/* implicit */int) var_7)) - (36))))))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) max(((~(var_6))), ((+((+(var_6))))))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) arr_41 [i_11 + 3] [i_0] [i_0 - 1] [i_0] [i_0] [i_0]);
                        arr_45 [i_11] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_10);
                        arr_46 [i_0] [i_11] [i_5] [i_0 - 1] [i_13] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((var_8), (arr_28 [i_0] [i_0] [i_3] [i_5] [i_0] [i_0] [i_13])))), (arr_15 [i_0 - 1] [i_13] [i_5] [i_11 - 2])))) ? (arr_23 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    }
                    for (unsigned int i_14 = 1; i_14 < 9; i_14 += 2) 
                    {
                        var_30 = max((min((min((((/* implicit */unsigned long long int) arr_31 [i_0] [i_14 + 1])), (var_6))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_9)))), (max((466168002), (((/* implicit */int) var_4))))))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2538509637U)) ? (max((arr_29 [i_0 + 1] [i_3] [i_5] [i_11 - 3] [i_14 - 1] [i_14 + 2]), (arr_29 [(signed char)11] [i_11] [i_5] [(signed char)0] [i_0] [i_0]))) : (((/* implicit */int) ((short) arr_29 [i_14] [i_11 - 4] [(unsigned char)7] [i_3] [i_0 + 1] [(signed char)10])))));
                        arr_49 [i_0] [i_0] [i_5] [i_11] [i_14] = ((/* implicit */short) ((((var_11) | (((/* implicit */unsigned long long int) 363500939)))) >= (((/* implicit */unsigned long long int) arr_40 [i_14 + 1] [i_3] [i_5] [i_11 - 1] [i_14 + 1] [5U]))));
                        var_32 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_0 + 1] [i_14 + 1] [i_14])), (var_1)))), (((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                    }
                }
                for (unsigned char i_15 = 2; i_15 < 11; i_15 += 4) 
                {
                    var_33 += ((/* implicit */unsigned int) (~(arr_14 [7U] [i_3] [i_3])));
                    var_34 -= ((/* implicit */unsigned int) arr_12 [(short)7] [i_3] [i_3]);
                    var_35 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_47 [i_0 - 2] [6] [0] [i_15 - 2] [i_15] [i_15])))) ? (((((/* implicit */_Bool) arr_21 [i_0] [i_0])) ? (arr_21 [i_5] [i_15]) : (arr_21 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) <= (((/* implicit */int) var_4))))))));
                    arr_53 [i_0] = ((/* implicit */signed char) 2538509618U);
                }
                arr_54 [i_3] [i_3] [i_3] = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_1)) : (628060110U)))) ? ((+(-466168002))) : (774366775)))), (((((/* implicit */_Bool) ((int) -2036440969894322677LL))) ? (arr_15 [i_0 - 2] [i_0 - 2] [i_0] [i_0]) : (((/* implicit */long long int) (-(((/* implicit */int) var_9))))))));
                arr_55 [i_0] [0LL] = ((/* implicit */long long int) (((((+(var_2))) + (2147483647))) << (((min((426531901U), (arr_25 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0]))) - (426531901U)))));
            }
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - ((+(((((/* implicit */_Bool) var_1)) ? (var_2) : (var_2)))))));
            arr_56 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) var_11));
            arr_57 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_5);
        }
        for (long long int i_16 = 1; i_16 < 11; i_16 += 1) 
        {
            arr_60 [i_16] [i_16] [i_16 - 1] = ((/* implicit */unsigned char) var_8);
            /* LoopSeq 3 */
            for (long long int i_17 = 1; i_17 < 10; i_17 += 2) 
            {
                arr_63 [i_0] |= ((/* implicit */unsigned int) var_3);
                arr_64 [i_16] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) % (-2036440969894322648LL)));
                arr_65 [i_0] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? ((+(-2036440969894322648LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
            }
            /* vectorizable */
            for (unsigned int i_18 = 1; i_18 < 10; i_18 += 4) 
            {
                arr_68 [1U] [1U] [i_18 - 1] [i_16] = ((/* implicit */signed char) (((~(22ULL))) * (((/* implicit */unsigned long long int) 2538509628U))));
                var_37 -= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)46))));
                arr_69 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0 - 2] [i_16 - 1] [i_16 + 1] [i_18 - 1])) ? (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_0 - 2] [i_16 - 1] [i_16 + 1] [i_18]))));
            }
            /* vectorizable */
            for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                var_38 ^= ((/* implicit */_Bool) ((long long int) (-(var_1))));
                var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_58 [i_16])))) ? (((int) var_4)) : (((((/* implicit */_Bool) arr_23 [(_Bool)1])) ? (((/* implicit */int) var_9)) : (-363500933)))));
                arr_72 [i_16] [i_16] [i_19] [i_16] = ((/* implicit */unsigned long long int) arr_62 [i_0 - 2] [i_16 + 1] [i_19]);
            }
            arr_73 [i_16] [i_0 - 1] [i_16] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(1756457676U)))), (max((((/* implicit */unsigned long long int) arr_43 [i_0 - 2] [i_0 - 2] [i_16 - 1] [i_0 - 1] [i_16])), (((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            var_40 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((unsigned char) var_9))))));
            arr_74 [i_16] [i_16] [4U] = ((/* implicit */unsigned long long int) -466168002);
        }
    }
    /* vectorizable */
    for (int i_20 = 2; i_20 < 21; i_20 += 1) 
    {
        var_41 += ((/* implicit */long long int) (+(arr_75 [i_20 - 2] [(unsigned char)0])));
        arr_77 [i_20] = 1626833177;
        var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
    }
    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27920)))))))) ? ((+(22U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) >= (var_10)))))));
}
