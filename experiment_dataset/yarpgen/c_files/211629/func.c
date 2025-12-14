/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211629
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_2 - 1])) ? (arr_3 [i_1 - 1] [i_2 - 1]) : (arr_3 [i_1 + 2] [i_2 - 2]))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [1ULL])) ? (3842244439U) : (((/* implicit */unsigned int) arr_4 [i_1 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (arr_3 [2U] [i_2])))));
                    var_11 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) arr_4 [i_0])) : (arr_3 [i_1 + 2] [i_1 + 2])))) ? ((~(arr_2 [i_0] [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0] [i_0])))))) ? (max((arr_0 [i_0 - 1] [i_2]), (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (arr_2 [i_0] [i_1 - 1] [i_2]) : (arr_2 [i_2] [i_1] [i_0 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [0U]))));
                    var_12 = ((/* implicit */signed char) arr_6 [0U] [0U]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_3)) : (var_7)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2ULL) <= (((/* implicit */unsigned long long int) var_5))))))))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (max((((/* implicit */unsigned long long int) var_1)), (var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_4)))) ? (var_6) : (var_3))))));
    var_14 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_2)) : (var_0))) >> (((((((/* implicit */_Bool) var_5)) ? (var_4) : (var_1))) - (105218483U))))), (var_8)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
    {
        var_15 *= ((/* implicit */unsigned int) arr_4 [i_3 - 1]);
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 398163371308716925ULL)) ? (arr_3 [10] [i_3]) : (arr_6 [i_3] [i_3])))) ? (arr_3 [i_3] [i_3]) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (1484633505U) : (arr_2 [i_3 - 1] [i_3] [i_3])))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3 - 1] [(signed char)10])) ? (398163371308716914ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_3 [i_3] [i_3]) : (arr_0 [(signed char)10] [i_3]))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 706819926U)) ? (arr_1 [i_3]) : (25783978U)))) ? ((-(arr_8 [i_3]))) : (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3]))) : (arr_2 [i_3] [i_3 - 2] [i_3])))));
    }
    for (signed char i_4 = 2; i_4 < 12; i_4 += 1) 
    {
        var_19 = ((unsigned int) max((arr_10 [i_4]), (arr_10 [i_4 - 2])));
        var_20 = ((((((((/* implicit */_Bool) arr_9 [i_4] [i_4])) && (((/* implicit */_Bool) arr_9 [i_4 + 2] [i_4 + 2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [13U] [13U])) ? (arr_9 [i_4] [i_4]) : (arr_9 [i_4] [i_4 + 2])))))) ? (((((/* implicit */_Bool) arr_10 [i_4])) ? (((((/* implicit */_Bool) arr_10 [1U])) ? (arr_10 [i_4]) : (arr_9 [i_4] [i_4 + 1]))) : (((unsigned int) arr_9 [2] [i_4])))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_4]))))), (arr_9 [i_4 - 2] [i_4 - 2]))));
        var_21 = min((((/* implicit */unsigned long long int) 4269183314U)), (18048580702400834701ULL));
        /* LoopSeq 4 */
        for (signed char i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            arr_14 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_4]), (((/* implicit */unsigned int) arr_11 [i_4] [i_5] [2U]))))) ? (min((arr_9 [i_5] [i_4]), (arr_13 [i_4 + 2]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [12U] [i_4] [9])))))))) ? ((-(arr_9 [i_4] [i_5 + 1]))) : ((~(min((arr_10 [9U]), (arr_13 [i_4 - 1])))))));
            var_22 = ((/* implicit */signed char) (+(1354973861U)));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 4) 
            {
                var_23 = ((/* implicit */signed char) (-(((/* implicit */int) arr_17 [i_4 - 1] [i_4]))));
                var_24 = ((/* implicit */unsigned int) min((var_24), ((+(((((/* implicit */_Bool) 4029923109U)) ? (911134531U) : (arr_20 [i_4] [i_4])))))));
                /* LoopSeq 3 */
                for (int i_8 = 1; i_8 < 12; i_8 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_7 - 4] [i_4] [i_8] [i_8])) ? (arr_23 [i_7 - 1] [i_4] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3)))));
                    var_26 |= ((((/* implicit */_Bool) arr_20 [i_8 + 2] [i_7])) ? (arr_9 [10U] [i_6]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [6U] [6U] [6U] [i_7])) ? (((/* implicit */int) arr_17 [i_4 + 1] [i_7])) : (arr_18 [i_7 - 4] [i_7 - 4] [i_4])))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        arr_26 [i_4] [i_4] [i_7] [9U] [i_9] [i_7 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 44251193U)) ? (18048580702400834724ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (arr_18 [i_4] [i_7] [i_8]) : (((/* implicit */int) (signed char)-27))))) : (arr_22 [i_8 + 1] [i_9] [i_9] [i_4])));
                        var_27 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned long long int) 25783991U)) : (arr_23 [i_4] [i_7] [i_7] [i_7]))));
                    }
                    var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_8] [i_7] [i_8] [i_8 + 2])) ? (arr_23 [i_8] [i_7] [i_8] [i_8 + 1]) : (((/* implicit */unsigned long long int) 2159691217U))));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4 - 2])) ? (arr_12 [i_4] [i_4 - 2]) : (arr_12 [i_4] [i_4 + 2])));
                }
                for (int i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [10] [10])) ? (arr_28 [i_10] [i_7] [i_6] [i_6] [i_4] [13U]) : (arr_21 [i_10])))) ? (((((/* implicit */_Bool) arr_28 [2ULL] [i_6] [i_6] [i_7 + 2] [i_10] [i_10])) ? (((/* implicit */unsigned int) arr_28 [i_7] [i_4] [i_7] [i_6] [i_4] [i_4])) : (arr_10 [i_6]))) : (arr_20 [i_4 + 1] [i_4])));
                    arr_29 [i_4] [2U] [i_6] [i_4] = ((/* implicit */unsigned int) ((signed char) (signed char)22));
                }
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    var_31 = (-(((/* implicit */int) arr_17 [i_4 - 1] [i_4])));
                    arr_32 [i_4] [i_4] [i_7 + 1] [i_11] = (i_4 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_4])) >> (((((/* implicit */int) arr_15 [i_4])) - (83)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_15 [i_4])) + (2147483647))) >> (((((((/* implicit */int) arr_15 [i_4])) - (83))) + (111))))));
                }
            }
            for (unsigned int i_12 = 1; i_12 < 11; i_12 += 2) 
            {
                arr_37 [i_4] [(signed char)10] [i_4] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_23 [i_12 + 2] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41))) : (arr_35 [i_6]))));
                var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_4] [i_6] [i_12])) || (((/* implicit */_Bool) arr_11 [i_4] [(signed char)6] [i_12])))))));
                arr_38 [i_4] [i_4] [i_4] [i_4] = 0U;
                arr_39 [i_4] [i_6] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-14)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101)))));
                /* LoopSeq 3 */
                for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
                {
                    var_33 = ((((/* implicit */_Bool) arr_42 [i_4] [i_6] [i_4])) ? (arr_42 [i_4] [i_12] [i_4]) : (arr_42 [i_4] [i_6] [i_4]));
                    var_34 = ((/* implicit */unsigned int) ((signed char) arr_15 [i_4]));
                    var_35 *= ((((((/* implicit */_Bool) 8200120090152955792ULL)) ? (1000993483U) : (0U))) ^ (((arr_19 [i_12] [4] [6] [i_13]) & (arr_16 [4U]))));
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((arr_33 [0U] [i_12 - 1] [4U]) > (arr_33 [(signed char)4] [i_12 - 1] [i_13]))))));
                }
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
                {
                    var_37 |= ((/* implicit */int) arr_34 [i_14] [i_6]);
                    arr_45 [8U] [i_4] [i_6] [i_12 - 1] [i_14] &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_44 [4]) != (((/* implicit */unsigned int) arr_21 [i_4])))))));
                    var_38 = ((((/* implicit */_Bool) (signed char)-58)) ? (arr_36 [i_4 + 2] [i_4] [i_12 + 1]) : (arr_36 [i_4 - 1] [i_4] [i_12 + 1]));
                }
                for (signed char i_15 = 3; i_15 < 10; i_15 += 4) 
                {
                    arr_48 [12U] [i_4] [12U] [i_15 + 1] [i_15 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_4 + 2] [i_12 + 1] [i_4] [i_15])) ? (arr_24 [i_4 + 2] [i_12 + 2] [i_4] [i_12]) : (arr_24 [i_4 + 1] [i_12 - 1] [i_4] [i_4])));
                    /* LoopSeq 3 */
                    for (signed char i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        var_39 = ((((/* implicit */_Bool) ((unsigned int) arr_44 [i_4]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_4]))))) : (arr_49 [i_16] [i_4] [i_4] [i_6] [i_4]));
                        var_40 = arr_11 [i_12 + 1] [i_12] [i_12];
                    }
                    for (unsigned int i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        var_41 &= ((((/* implicit */_Bool) (signed char)26)) ? (arr_16 [i_15 + 4]) : (arr_16 [i_15 + 1]));
                        var_42 = ((/* implicit */unsigned int) (+(arr_50 [i_12 + 3] [i_6] [i_4 - 2] [i_15] [i_15 + 4] [i_6])));
                        arr_54 [i_4] [i_15 + 1] [i_15 + 1] [i_4] [i_17] [i_12 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_12] [i_17])) ? (arr_27 [i_4] [i_4] [i_12] [i_15] [i_4]) : (arr_34 [i_12 + 2] [i_15 - 1])));
                    }
                    for (int i_18 = 1; i_18 < 13; i_18 += 4) 
                    {
                        var_43 = (+(arr_49 [i_4 - 2] [i_4] [i_4] [i_18 - 1] [0ULL]));
                        arr_57 [i_4] [0U] [i_12] [i_6] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4 + 1])) ? (arr_13 [i_4 - 1]) : (arr_13 [i_4 + 1])));
                        var_44 = ((((/* implicit */_Bool) arr_20 [i_4 - 2] [i_12 + 2])) ? (((/* implicit */int) arr_15 [6U])) : (((/* implicit */int) arr_15 [0U])));
                    }
                }
            }
            var_45 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_51 [(signed char)12] [(signed char)12] [(signed char)12] [i_6] [i_6])) ? (arr_56 [4U] [i_4] [i_6] [i_6] [i_4] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_4] [i_4 - 2] [i_4 + 2] [i_4] [9] [i_6] [i_6]))))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 2) 
        {
            arr_61 [(signed char)10] [i_19] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_28 [i_4] [i_4] [i_4] [i_19] [i_19] [i_19])), (min(((~(arr_58 [i_4]))), (max((11ULL), (arr_58 [12])))))));
            var_46 = ((/* implicit */unsigned long long int) arr_44 [i_4]);
            var_47 &= ((/* implicit */unsigned int) arr_55 [i_4] [i_4] [i_4 + 2] [i_19] [i_4 + 2] [i_4]);
        }
        for (unsigned int i_20 = 0; i_20 < 14; i_20 += 1) 
        {
            arr_65 [i_4] [4U] = ((/* implicit */int) arr_46 [i_20] [i_4 - 2] [i_20] [i_20] [i_4 - 2]);
            /* LoopNest 2 */
            for (unsigned int i_21 = 2; i_21 < 12; i_21 += 3) 
            {
                for (unsigned int i_22 = 0; i_22 < 14; i_22 += 2) 
                {
                    {
                        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_21 - 1] [i_22] [10] [i_22] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_27 [i_21 - 2] [i_22] [i_22] [i_22] [i_4]) >= (arr_27 [i_21 - 1] [i_22] [i_22] [i_22] [i_4]))))) : (min((arr_27 [i_21 + 2] [i_22] [i_21 + 2] [4ULL] [i_4]), (arr_27 [i_21 - 1] [i_22] [i_21 - 1] [i_22] [i_4])))));
                        arr_71 [i_4] [i_21 + 1] = (-(1524373932U));
                        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_59 [i_21 - 1] [6U] [i_4 - 1]))) ? (((((/* implicit */_Bool) arr_52 [i_4] [i_20] [i_21 + 2] [i_21] [i_21 + 2])) ? (((((/* implicit */unsigned long long int) arr_33 [i_22] [i_20] [i_21])) ^ (13252218948176035531ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_4] [i_4] [i_21] [i_22] [9U]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_27 [i_4] [12U] [i_21] [i_22] [i_22])) ? (arr_22 [i_22] [i_21] [i_20] [i_22]) : (arr_49 [i_4] [i_4] [i_22] [i_22] [i_20]))), (((/* implicit */unsigned int) max((arr_41 [i_20] [i_22]), (((/* implicit */int) (signed char)87)))))))))))));
                        var_50 = ((/* implicit */int) min((min((((((/* implicit */_Bool) 4269183318U)) ? (arr_34 [i_4] [i_20]) : (((/* implicit */unsigned int) arr_18 [i_4 + 1] [i_20] [i_21 + 2])))), (((((/* implicit */_Bool) arr_25 [i_22] [i_20])) ? (arr_33 [i_4] [i_21] [(signed char)10]) : (((/* implicit */unsigned int) arr_60 [i_22])))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_25 [i_21] [i_22])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_22] [i_21] [1ULL] [i_4] [i_4]))) : (2268662025U))) != (((((/* implicit */_Bool) arr_28 [i_4] [i_4] [i_4 + 1] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) arr_18 [i_4] [i_20] [i_20])) : (arr_34 [i_4] [i_21 + 2]))))))));
                        var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)6)), (1524373945U)))) ? (18446744073709551613ULL) : (((((/* implicit */_Bool) arr_62 [i_4] [i_4 - 2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) : (13525515291957007410ULL)))));
                    }
                } 
            } 
        }
    }
}
