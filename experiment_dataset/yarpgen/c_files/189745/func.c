/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189745
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
    var_10 ^= ((/* implicit */short) var_8);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_4 [i_0 - 2] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))) >= ((((!(arr_3 [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) (signed char)54)) ? (3131825708U) : (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */signed char) 2147483647);
                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) max(((~(max((var_3), (((/* implicit */unsigned int) (signed char)4)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)52))))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_12 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_0 - 2]))));
                /* LoopSeq 2 */
                for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_1] [i_1])))))) < (arr_1 [i_0 - 2] [i_4 + 1])));
                        var_15 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_4 - 2] [i_0 - 1] [i_0 - 1]))));
                    }
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59)))))) ? (((unsigned int) 12812725055971216423ULL)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-24)))))));
                        arr_19 [i_0 + 1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1] [i_1] [i_4 + 1]))));
                        arr_20 [i_1] = ((/* implicit */unsigned long long int) (~(((unsigned int) (_Bool)1))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_23 [i_0 - 2] [i_0] [i_1] [i_1] [i_4 + 2] [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_1] [i_0 + 1] [i_0 - 2] [i_4 - 1]))));
                        arr_24 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551597ULL))));
                        arr_25 [i_0] |= (~(18446744073709551611ULL));
                    }
                    /* LoopSeq 4 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) var_2);
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_0 + 1] [6ULL])) || (((/* implicit */_Bool) ((int) 12812725055971216423ULL)))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)126)))))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((arr_6 [0U] [i_4] [i_4 - 1] [i_4 + 1]) >> (((arr_6 [i_4] [2ULL] [i_4 - 1] [i_4 - 1]) - (12561076484520528459ULL))))))));
                    }
                    for (int i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                    {
                        arr_30 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [5] [i_1] [i_3] [0] [i_9] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))) : (arr_18 [8] [i_9] [i_9] [i_9] [10U] [(signed char)0])));
                        arr_31 [i_1] [i_3] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1] [i_9]))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_26 [i_9] [i_4 - 2] [i_4] [i_4 - 2] [i_3] [i_1] [i_0 - 1]))));
                    }
                    for (int i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_1] [8ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0 - 1] [i_4 + 2] [i_10])) + (((/* implicit */int) ((signed char) 0U)))));
                        arr_35 [i_1] [i_3] [(short)9] [i_1] = ((/* implicit */short) 18446744073709551608ULL);
                    }
                    for (int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                    {
                        var_21 = ((unsigned long long int) ((((/* implicit */int) (short)-23930)) > (((/* implicit */int) var_9))));
                        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((((/* implicit */int) (short)23929)) - (23918))))))));
                        arr_40 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-123)) ? (18118754549171765551ULL) : (8ULL)));
                        arr_41 [i_11] [i_1] [i_3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */short) 24771974U);
                    }
                    var_23 = ((/* implicit */int) ((((((((/* implicit */int) arr_8 [i_0] [i_3] [i_3])) + (2147483647))) >> (((((/* implicit */int) var_9)) + (15141))))) > (((/* implicit */int) var_9))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_12])) << (((arr_39 [i_0 - 2] [i_1] [i_3] [i_3] [i_12]) - (440379118636558444ULL))))))));
                    arr_44 [i_1] = ((signed char) ((unsigned long long int) var_0));
                }
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */int) arr_18 [9ULL] [i_1] [i_1] [i_3] [9ULL] [(_Bool)1]);
                            var_26 = -284964652;
                            var_27 = ((/* implicit */int) 1627361631U);
                            var_28 += ((/* implicit */signed char) ((((_Bool) var_3)) || (((/* implicit */_Bool) arr_22 [i_3] [i_1] [i_1] [i_1]))));
                        }
                    } 
                } 
            }
        }
        arr_50 [3] [i_0 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (signed char)(-127 - 1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)1175)))))) : (arr_42 [i_0] [i_0] [i_0 - 2] [i_0 + 1] [i_0 - 1])));
        arr_51 [i_0] = 14486491330529083519ULL;
    }
    /* LoopSeq 2 */
    for (short i_15 = 0; i_15 < 12; i_15 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_15 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) (+(arr_1 [i_15] [3U])))) : (arr_18 [i_15] [8ULL] [2] [i_15] [5ULL] [5ULL]))), (((unsigned long long int) 820831423))));
        var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_42 [i_15] [i_15] [i_15] [i_15] [i_15])) && (((((/* implicit */_Bool) 2267932258U)) || (((/* implicit */_Bool) 1202309046908388834ULL)))))) ? (max((5634019017738335192ULL), (((/* implicit */unsigned long long int) (signed char)-34)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)11), (((/* implicit */signed char) arr_3 [i_15] [i_15] [i_15])))))))))));
        var_31 = (+(((/* implicit */int) arr_27 [(signed char)4] [1ULL] [i_15] [i_15])));
        arr_54 [i_15] [i_15] = ((/* implicit */int) ((unsigned long long int) max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)24)))))));
        var_32 = ((/* implicit */short) max((((arr_2 [i_15] [3U]) - (arr_2 [i_15] [i_15]))), (((/* implicit */unsigned long long int) ((short) 2667605664U)))));
    }
    /* vectorizable */
    for (short i_16 = 0; i_16 < 12; i_16 += 2) /* same iter space */
    {
        arr_57 [(short)3] [(signed char)1] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_9))))));
        arr_58 [10ULL] = ((/* implicit */unsigned long long int) ((unsigned int) var_2));
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 12; i_17 += 2) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                {
                    arr_63 [i_18] |= ((/* implicit */short) ((((/* implicit */int) ((arr_32 [i_18] [1U] [i_18] [i_17]) != (0ULL)))) <= (((/* implicit */int) ((signed char) var_0)))));
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)-71)))))));
                        var_34 = ((/* implicit */unsigned long long int) (~(arr_21 [i_16] [i_17] [i_18])));
                    }
                    for (signed char i_20 = 0; i_20 < 12; i_20 += 1) 
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_16] [i_16])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_55 [i_16] [i_16]))));
                        arr_70 [i_16] [i_17] [i_18] [i_20] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 2451453675U)) && (((/* implicit */_Bool) (signed char)-64)))))));
                    }
                    arr_71 [7ULL] [i_16] [i_17] [i_16] = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-121)) : (((-1375763800) / (((/* implicit */int) var_5)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_21 = 4; i_21 < 10; i_21 += 1) 
        {
            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (arr_32 [5ULL] [i_21 - 3] [5ULL] [i_21]) : (arr_32 [i_16] [i_21 - 1] [i_16] [i_21 - 4])));
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (~(arr_29 [i_21] [i_21] [i_16] [i_16]))))));
        }
        for (int i_22 = 0; i_22 < 12; i_22 += 4) 
        {
            var_38 = (~((~(var_2))));
            arr_76 [i_16] [i_22] = ((/* implicit */short) ((signed char) (+(arr_53 [i_22]))));
            /* LoopNest 2 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    {
                        arr_83 [i_16] [i_22] [i_23] [i_16] = ((/* implicit */short) ((2516156564U) >> (((14232049584099179110ULL) - (14232049584099179087ULL)))));
                        var_39 += ((/* implicit */unsigned long long int) ((short) ((int) arr_43 [i_16] [i_16] [i_16])));
                        var_40 = ((/* implicit */short) (~(arr_61 [i_16] [i_22] [i_23])));
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (~(240538535U))))));
                        arr_84 [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_62 [i_16] [i_16] [i_16] [i_16])) : (((/* implicit */int) (signed char)-83))));
                    }
                } 
            } 
            arr_85 [i_16] = ((/* implicit */int) (-(13889526216315379947ULL)));
            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((arr_18 [i_16] [5ULL] [i_16] [4] [(signed char)5] [i_22]) + (arr_18 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))));
        }
    }
}
