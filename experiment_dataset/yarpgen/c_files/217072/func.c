/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217072
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((1851182531U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_2)), (4135934373U)))))) ? (((/* implicit */unsigned int) 3)) : (((unsigned int) max(((unsigned char)76), ((unsigned char)76)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) var_4)), (2443784791U)))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_8 [i_0 + 3] [(unsigned char)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (var_6))))))) : (arr_2 [i_0] [i_1])));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = max((18112399137511456282ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
                        arr_13 [i_3] [6] [(_Bool)0] [6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)13779)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)113))));
                        var_17 = ((/* implicit */unsigned int) var_7);
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 1) 
                {
                    {
                        var_18 += var_8;
                        var_19 += ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-119))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_0 - 1] [i_5]))) ? (max(((~(((/* implicit */int) var_7)))), (((((/* implicit */int) arr_0 [i_0] [(unsigned char)10])) & (((/* implicit */int) var_0)))))) : (((/* implicit */int) arr_1 [(unsigned short)8]))));
                        var_21 += 1851182504U;
                        arr_21 [i_5] [i_4] [i_4] [(signed char)5] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) arr_12 [i_6] [i_5]))))) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_5])) : (((unsigned long long int) arr_12 [(short)6] [i_5]))));
                    }
                } 
            } 
            arr_22 [i_0] |= ((/* implicit */unsigned long long int) var_13);
        }
        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 1) /* same iter space */
        {
            arr_25 [0U] [i_7] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)9356)) && ((_Bool)1)))), (max((1851182531U), (((/* implicit */unsigned int) arr_11 [10ULL] [i_7] [10ULL] [10ULL]))))))));
            arr_26 [i_7] = max((((/* implicit */unsigned long long int) (((~(arr_15 [i_0] [i_7]))) | (((/* implicit */int) arr_1 [9U]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (1851182531U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7])))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_7 + 2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_2)))))));
        }
    }
    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        arr_29 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */int) var_3)), (arr_7 [i_8] [i_8]))))) ? (((/* implicit */int) ((_Bool) arr_15 [i_8] [i_8]))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)157)), ((unsigned short)11495)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)24))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (2147483647)));
                arr_35 [i_8] [i_8] [i_9] [i_10] = min((((/* implicit */unsigned long long int) max((arr_12 [i_10] [i_10]), (arr_12 [i_10] [i_10])))), (max((var_8), (((/* implicit */unsigned long long int) arr_12 [i_10] [i_10])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_11 = 3; i_11 < 8; i_11 += 2) 
                {
                    var_23 = ((/* implicit */unsigned short) ((unsigned int) arr_2 [i_11 - 1] [i_11]));
                    arr_40 [i_8] [i_9] [i_9] [(unsigned short)2] [i_10] [(unsigned char)4] = ((/* implicit */_Bool) ((unsigned long long int) var_7));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 7023339398289643151ULL))))))))));
                }
                for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(arr_4 [i_12] [i_10 - 2] [i_10]))))));
                    var_26 = ((/* implicit */signed char) var_8);
                }
            }
            for (unsigned char i_13 = 2; i_13 < 6; i_13 += 2) 
            {
                arr_48 [4] [i_8] = ((/* implicit */int) var_9);
                var_27 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 511)) ? (3090169974U) : (((/* implicit */unsigned int) 2147483647))))), (max((var_1), (((/* implicit */unsigned long long int) ((arr_6 [i_9] [i_9 - 1]) > (((/* implicit */int) (_Bool)1)))))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
                        {
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((arr_39 [i_15] [i_9 - 1] [i_9] [i_9] [(short)2] [i_9 - 1]) * (((/* implicit */long long int) ((/* implicit */int) ((short) arr_54 [i_15] [(signed char)0] [(signed char)0])))))))));
                            arr_57 [i_8] [i_9 - 1] [i_14] [i_15] [5U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((unsigned int) 2147483647)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_9))))))));
                            arr_58 [i_8] [i_9] [i_8] [i_14] [3U] [i_16] = ((/* implicit */signed char) ((unsigned int) 2818968675U));
                        }
                        for (unsigned short i_17 = 0; i_17 < 10; i_17 += 2) 
                        {
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) max(((-(max((var_5), (((/* implicit */unsigned long long int) 309890846)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_23 [i_8]), (((/* implicit */long long int) var_0))))) ? ((-(((/* implicit */int) var_12)))) : (-309890828)))))))));
                            arr_61 [i_8] [i_9] [i_14] [i_14] [i_14] [(_Bool)1] [i_9] = ((/* implicit */unsigned int) var_8);
                            arr_62 [(unsigned char)5] [i_9] [i_9] [(unsigned char)2] [i_9] [i_9] = ((/* implicit */unsigned long long int) var_4);
                        }
                        var_30 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) max((arr_15 [4U] [i_9]), (((/* implicit */int) var_10))))), (1248155265U)))));
                        arr_63 [0U] [i_9] [i_9] [(unsigned char)7] [0U] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_9 + 1] [i_9 - 1])) ? (arr_4 [i_8] [i_9] [i_15]) : (((((/* implicit */_Bool) -309890828)) ? ((+(arr_16 [i_14]))) : (((/* implicit */int) min((arr_0 [1U] [i_9]), (((/* implicit */unsigned char) var_10)))))))));
                        var_31 = ((/* implicit */short) ((((/* implicit */long long int) min((((arr_15 [i_8] [i_9]) | (((/* implicit */int) arr_41 [i_8] [i_9] [i_14] [i_15])))), (((((/* implicit */int) var_11)) / (((/* implicit */int) var_10))))))) | (((long long int) (_Bool)1))));
                        var_32 = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) var_2)))));
                    }
                } 
            } 
        }
        var_33 *= ((/* implicit */int) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_4)))) == (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_9 [i_8] [10LL])) : (min((var_1), (((/* implicit */unsigned long long int) arr_34 [i_8]))))))));
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_66 [i_18] [(_Bool)1] = ((/* implicit */unsigned int) arr_65 [i_18]);
        var_34 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    }
    var_35 = ((/* implicit */long long int) var_2);
}
