/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197230
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7))))))), (max((((/* implicit */unsigned long long int) ((_Bool) var_5))), (var_9)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) max((var_13), (arr_1 [(short)1])));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((arr_1 [i_0]) && (((/* implicit */_Bool) arr_0 [i_0]))))) : (var_7)));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        var_14 *= ((/* implicit */_Bool) ((((unsigned long long int) arr_4 [6U])) * (arr_12 [(short)0] [i_1] [i_2] [i_3 + 2] [i_1] [i_2])));
                        var_15 = ((((unsigned long long int) arr_9 [i_0] [i_0] [i_0])) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (20348196))))));
                        arr_14 [6ULL] [i_0] [i_0] [(short)1] = ((/* implicit */_Bool) var_2);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-27384)) : (((/* implicit */int) (_Bool)1))))) - (var_3))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) arr_13 [i_0]))));
                            arr_18 [i_0] [i_4] = ((/* implicit */unsigned short) ((20348202) != (((/* implicit */int) (_Bool)1))));
                            var_18 += ((/* implicit */unsigned short) ((arr_11 [i_4] [i_4] [i_3 + 1] [i_3 + 1]) != (arr_11 [i_3] [i_3] [2] [i_3 + 1])));
                            arr_19 [i_0] [i_1] [i_2] [i_1] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_1] [i_1]))) << (((var_3) - (1137264133U)))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                        {
                            arr_24 [i_5] [i_3] [i_0] [i_1] [5ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_11) < (((/* implicit */int) var_10))))) << (((((/* implicit */int) var_2)) - (4396)))));
                            arr_25 [i_0] [i_1] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_21 [i_0] [6ULL] [i_0] [i_0] [i_0]))));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (arr_8 [0ULL] [(_Bool)1] [i_3] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            arr_28 [i_6] [i_3] [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) arr_22 [i_6] [i_0] [i_2] [i_0] [i_0])) ? (arr_22 [i_0] [i_0] [5] [i_3] [i_6]) : (arr_22 [i_0] [i_0] [(short)8] [i_3] [i_6]));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [8ULL])) ? (var_5) : (((/* implicit */int) arr_1 [9])))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            arr_31 [i_7] [i_7] [i_3] [i_0] [i_2] [(short)4] [i_0] = ((/* implicit */int) (-(var_0)));
                            var_22 -= ((((unsigned long long int) arr_1 [i_0])) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8)))))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_8))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 3; i_8 < 9; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((unsigned int) arr_9 [i_8 - 2] [i_1] [i_2]));
                                arr_36 [0U] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [(_Bool)1]) >> (((arr_22 [i_9] [i_0] [i_2] [i_0] [(unsigned short)9]) - (5039479430816114137ULL)))))) || (((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2]))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [(_Bool)1]) >> (((((arr_22 [i_9] [i_0] [i_2] [i_0] [(unsigned short)9]) - (5039479430816114137ULL))) - (8584988014140305019ULL)))))) || (((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_25 = ((/* implicit */_Bool) arr_21 [i_11] [i_10] [i_0] [i_0] [i_0]);
                arr_42 [i_0] [2] = ((/* implicit */unsigned int) var_0);
                var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (arr_8 [(unsigned short)0] [i_0] [i_11] [(_Bool)1])));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (-(((/* implicit */int) var_2)))))));
                            var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_10] [i_11] [(short)1] [i_13] [i_0]))) ^ (((arr_30 [i_0] [0ULL] [(_Bool)1]) ^ (((/* implicit */unsigned long long int) var_5))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 2; i_14 < 8; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (((-(((/* implicit */int) var_6)))) + (((arr_53 [i_0] [i_10]) ? (((/* implicit */int) var_2)) : (arr_26 [i_0] [i_10] [i_14] [i_15] [i_10]))))))));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((int) var_3)))));
                        arr_55 [i_15] [i_10] [i_10] [i_10] [(_Bool)1] &= ((/* implicit */unsigned long long int) arr_23 [i_0] [i_10] [i_10] [i_14 + 1] [i_15] [i_15]);
                        arr_56 [i_0] [i_10] [i_0] [i_15] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_51 [i_0] [1U] [i_14] [i_15])) : (arr_12 [i_0] [i_0] [i_0] [i_14] [i_14] [i_15]))) * (((/* implicit */unsigned long long int) arr_13 [i_0]))));
                    }
                } 
            } 
            arr_57 [i_0] [i_0] = ((/* implicit */int) ((arr_12 [i_0] [i_10] [i_10] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
            var_31 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((arr_38 [i_0] [i_0]) << (((arr_38 [i_0] [i_0]) - (2664538688665791701ULL)))))) : (((/* implicit */signed char) ((arr_38 [i_0] [i_0]) << (((((arr_38 [i_0] [i_0]) - (2664538688665791701ULL))) - (7159957604119619530ULL))))));
        }
    }
    for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) 
    {
        arr_61 [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((var_7), (var_5))), (min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) min((((/* implicit */short) ((signed char) (short)384))), ((short)-30766)))) : (((((/* implicit */int) min((var_10), (var_10)))) >> (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_9)))))));
        arr_62 [20] &= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_59 [i_16] [14])), (min((var_0), (((/* implicit */unsigned long long int) var_8)))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_60 [i_16])) ^ (((/* implicit */int) arr_60 [i_16]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_16]))) : (((unsigned long long int) arr_60 [i_16]))))));
        /* LoopNest 2 */
        for (unsigned int i_17 = 4; i_17 < 19; i_17 += 3) 
        {
            for (int i_18 = 4; i_18 < 20; i_18 += 1) 
            {
                {
                    arr_69 [i_16] [i_17 - 2] [i_16] [i_16] = ((/* implicit */unsigned short) ((_Bool) var_4));
                    arr_70 [(unsigned short)16] [i_17 - 2] [i_16] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((arr_66 [4ULL] [i_16]), (arr_59 [(_Bool)1] [i_18])))))) * (((unsigned long long int) (-(((/* implicit */int) arr_58 [i_17])))))));
                    var_32 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_68 [i_16])), (max((min((var_0), (var_1))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_60 [i_17])), (var_5))))))));
                    arr_71 [i_18] [i_16] [i_16] [i_16] = max((((/* implicit */unsigned long long int) max((((-20348199) | (((/* implicit */int) (short)-27131)))), (((/* implicit */int) (short)18705))))), (var_1));
                }
            } 
        } 
    }
    for (int i_19 = 1; i_19 < 14; i_19 += 3) 
    {
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_63 [i_19 + 2]), (arr_63 [i_19 + 1])))) ? (arr_63 [i_19 + 2]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_19 - 1])) || (((/* implicit */_Bool) arr_63 [i_19 + 2])))))));
        arr_74 [15] = min((max((max((((/* implicit */unsigned long long int) var_6)), (var_1))), (var_0))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_6), (var_2))))))));
        arr_75 [i_19 + 1] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */int) arr_59 [i_19 + 1] [i_19])) + (var_11))) != (((/* implicit */int) max((arr_60 [i_19 + 2]), (((/* implicit */unsigned short) arr_58 [i_19 + 3])))))))), (((int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)60355)) : (-20348177))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_20 = 4; i_20 < 18; i_20 += 4) 
    {
        for (short i_21 = 0; i_21 < 22; i_21 += 3) 
        {
            for (int i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                {
                    var_34 = ((/* implicit */short) var_0);
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((min((min((2147483648U), (((/* implicit */unsigned int) (short)312)))), (((/* implicit */unsigned int) max((2147483647), (2078755967)))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_63 [i_20 - 1]), (var_5)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-6294)), (7453067665493142294ULL)))))))))))));
                    var_36 = (-(((/* implicit */int) arr_66 [i_20] [i_22])));
                }
            } 
        } 
    } 
}
