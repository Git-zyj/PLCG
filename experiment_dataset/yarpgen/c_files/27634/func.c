/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27634
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
    var_16 += ((/* implicit */signed char) ((((/* implicit */int) var_3)) < (((/* implicit */int) (signed char)-20))));
    var_17 = ((/* implicit */int) (signed char)-112);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((1806236402U) < (363373832U)));
        var_18 = ((/* implicit */unsigned int) ((arr_0 [i_0 - 3] [i_0 + 1]) < (arr_0 [i_0 - 3] [i_0 + 1])));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) -1833423948)) : (1303359986820750538ULL)))) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) ((10896433322470982968ULL) != (((/* implicit */unsigned long long int) arr_5 [i_1])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 1) 
        {
            for (signed char i_3 = 3; i_3 < 17; i_3 += 3) 
            {
                {
                    arr_13 [i_3] [i_2] [i_2 - 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((647486572U) >> (((18446744073709551615ULL) - (18446744073709551607ULL)))))) % (((((/* implicit */_Bool) 23U)) ? (((/* implicit */unsigned long long int) -1833423948)) : (0ULL)))));
                    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1833423951)))))));
                    arr_14 [i_1] [i_1 - 1] [i_2] [i_3] = ((/* implicit */signed char) ((((0ULL) + (((/* implicit */unsigned long long int) -1833423948)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 19; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 18; i_5 += 1) 
            {
                {
                    var_20 += ((/* implicit */int) ((((((/* implicit */unsigned long long int) -1208112614)) | (10896433322470982968ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
                    var_21 = ((/* implicit */int) (~(2968270076U)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 19; i_7 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-33)) > (-447055217))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49))) <= (16777215ULL)));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 1; i_8 < 18; i_8 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_1] [i_4] [i_5] [i_8] [i_4] [i_5 + 2]))))) ? (((/* implicit */unsigned int) ((15) << (((18446744073709551598ULL) - (18446744073709551589ULL)))))) : ((-(4183340712U)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 2; i_9 < 18; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) 14374996201226153709ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073692774400ULL)) || (((/* implicit */_Bool) (signed char)12))))) : (((((/* implicit */int) (signed char)12)) / (((/* implicit */int) (signed char)(-127 - 1)))))));
                            var_26 |= ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) (signed char)48)))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_4 + 1] [i_4 - 1] [i_5 + 1])) ? (4183340712U) : (arr_29 [i_4 + 1] [i_4] [i_5 + 1] [i_10 + 2])));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-99)) ? (((((/* implicit */_Bool) (signed char)36)) ? (0U) : (((/* implicit */unsigned int) -482792049)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93)))));
                            var_29 = var_15;
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 1) /* same iter space */
                        {
                            var_30 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (0ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1 + 1] [i_1])) ? (12U) : (arr_29 [i_5] [(signed char)10] [18ULL] [i_8 + 1]))))));
                            var_31 = arr_21 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1];
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) 3055898479243604607ULL))));
                        }
                    }
                    for (unsigned int i_12 = 1; i_12 < 18; i_12 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_4 + 1] [i_12 + 2] [i_12 + 1]))));
                        var_34 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [(signed char)0] [(signed char)0] [i_5 - 1] [i_5] [(signed char)0] [i_5]))))) ? (((/* implicit */unsigned int) (-(arr_16 [i_4 - 1] [i_4 - 1] [i_12])))) : (4183340719U)));
                        var_35 = ((/* implicit */unsigned int) 441302138);
                    }
                    for (unsigned int i_13 = 1; i_13 < 18; i_13 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_14 = 1; i_14 < 19; i_14 += 1) /* same iter space */
                        {
                            arr_42 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned int) 0ULL);
                            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) var_0))));
                        }
                        for (signed char i_15 = 1; i_15 < 19; i_15 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((7426730846528672605ULL) >= (((/* implicit */unsigned long long int) 0U)))))) + (((((/* implicit */_Bool) 11020013227180879011ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) : (8388607ULL)))));
                            arr_45 [i_1] [i_4] [i_5 - 1] [i_13] [i_15] [i_15 + 1] = ((/* implicit */unsigned int) ((unsigned long long int) 4183340717U));
                            arr_46 [(signed char)6] [i_4 - 1] [(signed char)6] [i_13] [i_13] [i_15 + 1] [i_15] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(810097882U)))) ? (3690882222U) : ((-(803040600U)))));
                        }
                        arr_47 [i_1] [i_4] [16] [i_13] &= ((/* implicit */signed char) 604085074U);
                        var_38 = ((/* implicit */signed char) ((((unsigned int) arr_29 [i_1 - 1] [i_4] [i_5] [i_1 - 1])) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_40 [i_1] [i_5]))))));
                        arr_48 [i_4] [i_4] = ((/* implicit */unsigned int) (signed char)38);
                        /* LoopSeq 2 */
                        for (int i_16 = 3; i_16 < 18; i_16 += 4) /* same iter space */
                        {
                            var_39 = (~((+(3934497897U))));
                            var_40 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) < (1661679775U))))) <= (2083128591320027788ULL)));
                            var_41 = ((/* implicit */unsigned long long int) ((((unsigned long long int) (signed char)1)) < (((/* implicit */unsigned long long int) (-(-1365504070))))));
                        }
                        for (int i_17 = 3; i_17 < 18; i_17 += 4) /* same iter space */
                        {
                            var_42 &= ((/* implicit */int) (~(417916456U)));
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_4] [i_5] [(signed char)3] [(signed char)3])) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) (signed char)20))));
                            arr_54 [i_1] [i_1] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((-1365504082) ^ (976134094)))) == (((11020013227180879010ULL) - (((/* implicit */unsigned long long int) 1354926186))))));
                        }
                    }
                    for (unsigned int i_18 = 1; i_18 < 18; i_18 += 4) /* same iter space */
                    {
                        var_44 = ((/* implicit */signed char) (-(((/* implicit */int) arr_49 [i_1] [i_1 - 1] [i_1] [15ULL]))));
                        arr_58 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9080470785369755833ULL)) && (((/* implicit */_Bool) 14114202086892287160ULL))));
                        arr_59 [i_4] = ((/* implicit */signed char) ((2535452823U) << (((2339013113U) - (2339013090U)))));
                        var_45 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)93)))) || ((!(((/* implicit */_Bool) (signed char)113))))));
                        var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_4] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) ((int) -950673962)))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_19 = 2; i_19 < 23; i_19 += 2) 
    {
        for (signed char i_20 = 3; i_20 < 23; i_20 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_21 = 2; i_21 < 23; i_21 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_22 = 2; i_22 < 23; i_22 += 1) 
                    {
                        for (int i_23 = 3; i_23 < 21; i_23 += 1) 
                        {
                            {
                                var_47 = ((signed char) (~(arr_69 [i_21] [i_21] [i_21 - 1] [i_21] [i_21 + 1])));
                                var_48 = ((/* implicit */signed char) (-(var_9)));
                            }
                        } 
                    } 
                    arr_71 [i_21] [i_20 - 3] [20] = ((/* implicit */int) ((max((((unsigned long long int) (signed char)-78)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-45))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)23)))))))));
                    var_49 = ((/* implicit */unsigned long long int) 950673961);
                }
                var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) arr_70 [i_19] [i_19] [i_19] [i_19 - 2] [(signed char)2] [i_19] [3U]))));
            }
        } 
    } 
}
