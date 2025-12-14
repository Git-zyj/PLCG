/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2488
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
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) (~(0U)));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2 + 2] [i_2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_9))))));
                            arr_12 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) var_10)))))) << ((((+(((/* implicit */int) arr_0 [i_3] [i_0 - 2])))) - (48761)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        for (long long int i_5 = 4; i_5 < 21; i_5 += 3) 
        {
            for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) 
            {
                {
                    arr_20 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) + (max((((/* implicit */unsigned int) arr_0 [i_4] [23])), (1134219456U)))))));
                    arr_21 [4U] [i_5] [4U] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) << (((/* implicit */int) ((max((((/* implicit */long long int) arr_8 [i_5 - 3])), (var_14))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-17580)) : (((/* implicit */int) var_10))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_25 [1] [(short)3] [(short)3] [i_5] [i_4] [i_4]) % (arr_25 [i_8] [i_7] [i_6] [i_6 + 1] [i_5 - 3] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_0)));
                                var_19 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) arr_10 [i_6 + 1] [i_6] [i_6] [i_5 - 2])) : (((/* implicit */int) (short)17579))))) < (((((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_6 + 1] [i_7]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_4)) > (var_9))))))));
                                var_20 = ((/* implicit */short) (-(((/* implicit */int) (short)-17580))));
                                arr_28 [i_4] [i_5 + 1] [i_6 + 1] [i_5 + 1] [i_8] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_4 [i_6 - 1])))) ? (((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (min((arr_5 [i_5] [i_6 + 2] [i_8]), (((/* implicit */int) var_11)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5 - 4] [i_7] [i_8])))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (short)17579)) % ((~(var_15)))))) & (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_19 [i_7]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 66060288U)) ? (((/* implicit */int) (unsigned short)42851)) : (arr_5 [(unsigned char)3] [i_8] [i_8]))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_6 + 2] [i_5] [i_5 + 1] [10U]))))) ? (arr_23 [i_6 - 1] [(signed char)3] [i_5 - 1] [i_6 - 1] [i_5]) : (((arr_23 [i_6 - 1] [i_6 - 1] [i_5 + 1] [i_5 - 2] [i_4]) >> (((((/* implicit */int) arr_16 [i_6 + 2] [i_5] [i_5 - 2])) - (151)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (signed char i_11 = 1; i_11 < 12; i_11 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((arr_29 [3U]) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_11 - 1] [i_11 + 1] [i_11 + 1])) >= (((((/* implicit */int) arr_34 [i_9] [(unsigned short)8])) - (((/* implicit */int) var_2))))))) : (((/* implicit */int) arr_16 [i_9] [i_9] [10LL]))));
                    arr_40 [i_9] [i_10] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (min((((/* implicit */long long int) arr_18 [i_9] [i_9] [i_9])), (var_14)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        var_24 = ((/* implicit */short) ((signed char) arr_10 [i_12] [i_12] [i_12] [i_12]));
                        arr_43 [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-17580)) > (((/* implicit */int) var_10))));
                        arr_44 [i_9] [i_10] [i_9] [i_12] |= ((/* implicit */int) ((unsigned int) arr_24 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_11 - 1]));
                    }
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        arr_48 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((4239297606U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-17580))))) / (var_4)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) (!(((/* implicit */_Bool) 55669689U))))) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_13])) : (((/* implicit */int) arr_3 [i_10])))) + (2229)))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_5))));
                            arr_52 [i_9] [i_10] [i_9] [i_10] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9] [i_9]))) + (((arr_30 [i_11 - 1]) >> (((/* implicit */int) ((((/* implicit */int) arr_22 [i_9] [i_10] [i_11 + 1] [i_13] [(_Bool)0])) > (var_15))))))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (+(55669689U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_15])) >= (((/* implicit */int) arr_3 [i_13]))))) : (((arr_29 [i_9]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_29 [i_9]))))));
                            var_27 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_18 [i_11 - 1] [i_11] [i_11 + 1])) + (((/* implicit */int) var_1))))));
                            arr_55 [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65171)) >> (((((/* implicit */int) (unsigned char)32)) - (22))))) | (((/* implicit */int) (unsigned char)118)))))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
                        {
                            arr_58 [i_16] [i_11] [i_10] [i_9] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_33 [i_11 - 1] [i_11 - 1] [i_11 - 1])) : (((/* implicit */int) arr_3 [i_9])))));
                            arr_59 [i_9] [i_9] [i_11] [i_13] [i_16] = arr_22 [i_16] [i_13] [i_10] [i_10] [i_9];
                            var_28 = ((/* implicit */_Bool) var_3);
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 13; i_17 += 2) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 13; i_18 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_26 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_61 [i_9] [i_9])))), (((/* implicit */int) (short)-16787))))), (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) (unsigned char)33)) - (33)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -6239676711131472707LL)) ? (((/* implicit */int) arr_16 [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_51 [i_9] [i_10] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (arr_19 [i_9])))))));
                                arr_66 [i_9] [i_9] [i_9] [i_9] [i_9] [(short)1] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_25 [i_9] [(_Bool)1] [1LL] [i_17] [i_11 - 1] [i_11])) ? (var_9) : (((((/* implicit */_Bool) arr_56 [i_18] [i_17] [i_17] [i_9] [i_10] [i_10] [i_9])) ? (arr_30 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))) > (((/* implicit */long long int) arr_27 [i_9] [i_10] [i_11] [i_17] [i_17] [i_17]))));
                                var_30 = ((((/* implicit */_Bool) (~(0U)))) ? (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3))) >> (((((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) - (3914913389918830959LL))))) : (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_42 [i_11 + 1] [i_11 - 1] [i_11]))));
                                arr_67 [i_9] [i_10] [i_11] [i_10] [i_18] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_56 [i_9] [i_11 - 1] [i_11 + 1] [i_17] [i_18] [i_10] [i_11 + 1])))));
                                arr_68 [i_18] [i_17] [i_10] [i_10] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (arr_41 [(unsigned char)6] [i_11] [(unsigned char)6] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_9] [i_9] [i_11 - 1])))))) ? (max((min((((/* implicit */long long int) (_Bool)1)), (-5943742171146999632LL))), (((/* implicit */long long int) arr_4 [i_10])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_38 [11] [i_11 + 1] [i_17])) >> (((var_9) + (193631057345378869LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_19 = 0; i_19 < 14; i_19 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_19]))));
        var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_19]))));
        arr_71 [i_19] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) arr_26 [i_19] [(short)10] [i_19] [(unsigned short)15] [i_19] [i_19] [i_19])) : (((/* implicit */int) var_1)))))))) >> (((((((/* implicit */int) arr_18 [i_19] [i_19] [i_19])) + (((/* implicit */int) arr_18 [i_19] [i_19] [i_19])))) - (163)))));
        var_33 = ((/* implicit */signed char) (((+(((var_15) | (((/* implicit */int) var_6)))))) & (((/* implicit */int) var_13))));
    }
}
