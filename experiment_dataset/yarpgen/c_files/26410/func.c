/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26410
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
    var_10 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((_Bool) arr_6 [i_0] [i_0] [i_2]));
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_1] [i_2]) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))), (((((/* implicit */_Bool) 0ULL)) ? (var_3) : (((/* implicit */long long int) var_5))))))))))));
                    var_13 = ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) min(((unsigned char)102), (((/* implicit */unsigned char) var_6))))), (min((var_3), (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) < (((/* implicit */int) var_2))))), (((983126744U) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) arr_3 [i_0]);
        arr_9 [(_Bool)1] [i_0] = ((/* implicit */unsigned short) var_6);
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
            {
                arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(max((((((/* implicit */int) var_9)) - (((/* implicit */int) var_6)))), (((/* implicit */int) var_6))))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) min((2123103650U), (((/* implicit */unsigned int) var_6)))))) ? ((((~(((/* implicit */int) arr_4 [i_0] [i_3] [i_4])))) | (((/* implicit */int) (unsigned short)15510)))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_3))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((_Bool) min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) arr_3 [i_4]))))))));
                            var_18 = ((/* implicit */unsigned long long int) var_0);
                            var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_13 [i_0] [i_4] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_4] [i_5] [(_Bool)1]))) : (var_5))), (var_5)));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [6U] [i_0] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) || (((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_3] [i_4]))))))) ? (((/* implicit */int) min((arr_13 [i_4] [i_5] [i_4] [i_3]), (((/* implicit */unsigned short) arr_4 [i_0] [i_3] [i_0]))))) : (((/* implicit */int) (signed char)122))));
                        }
                    } 
                } 
            }
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
            {
                var_20 ^= ((/* implicit */unsigned int) ((((((3311840552U) > (var_0))) ? (((/* implicit */unsigned int) ((arr_17 [i_0] [i_3] [i_3] [i_7]) ? (((/* implicit */int) arr_10 [i_7])) : (((/* implicit */int) var_9))))) : (min((var_4), (var_7))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) var_3))))))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        {
                            arr_32 [i_8] [i_3] = var_6;
                            var_21 = max((max((min((var_4), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_3] [i_7] [i_3])) ? (((/* implicit */int) arr_19 [i_0] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_19 [i_0] [i_3] [i_3] [i_0]))))));
                            var_22 = ((/* implicit */int) (-((~(min((((/* implicit */unsigned int) var_1)), (var_7)))))));
                            var_23 -= min((min((((/* implicit */unsigned int) arr_18 [i_8 - 1])), (var_5))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (var_2)))) ? ((~(arr_25 [i_0] [i_9] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0]))))));
                            arr_33 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */signed char) arr_28 [i_3] [i_3]);
                        }
                    } 
                } 
            }
            var_24 = ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15510)) ? (((/* implicit */int) var_2)) : (1546249432)))), (max((((/* implicit */unsigned int) (unsigned short)5532)), (var_4))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0]))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (+(((/* implicit */int) ((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0])))))))))));
        }
        for (unsigned char i_10 = 2; i_10 < 20; i_10 += 2) 
        {
            var_26 = ((/* implicit */int) 4276739524U);
            arr_36 [i_0] [i_10] [i_10] = ((/* implicit */long long int) min((arr_31 [(_Bool)1] [i_10] [i_10] [i_10 + 1]), (min((var_4), (((/* implicit */unsigned int) ((unsigned char) var_8)))))));
            arr_37 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_5 [i_10 - 1])), (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_10 - 1] [i_10 - 2] [i_10])) ^ (((/* implicit */int) arr_24 [i_10 - 2] [i_10 + 1] [i_10]))))) : (((unsigned long long int) arr_27 [i_10 - 2] [i_10 - 1] [i_10] [i_10 + 1]))));
        }
        var_27 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
    }
    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
    {
        arr_41 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_28 [i_11] [i_11]), (((/* implicit */long long int) (unsigned short)15507))))) ? (((((/* implicit */_Bool) arr_28 [i_11] [i_11])) ? (arr_28 [i_11] [i_11]) : (arr_28 [i_11] [(_Bool)1]))) : (min((arr_28 [i_11] [i_11]), (arr_28 [i_11] [i_11])))));
        arr_42 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_15 [i_11] [i_11]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_11] [i_11]))) : (var_7)))) ? ((+(((/* implicit */int) arr_5 [i_11])))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_11] [i_11])) : (((/* implicit */int) var_1)))) < (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-96)))))))));
        var_28 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_39 [i_11])) ? (var_7) : (arr_39 [i_11]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_11])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 2) 
    {
        arr_46 [i_12] = ((/* implicit */long long int) (-(3260490312021540743ULL)));
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        arr_57 [i_12] [i_15] [i_15] [i_12] [i_13] [i_12] = (i_12 % 2 == zero) ? (((/* implicit */signed char) ((((arr_53 [i_12] [i_14] [i_12]) + (9223372036854775807LL))) << (((13877246440129147712ULL) - (13877246440129147712ULL)))))) : (((/* implicit */signed char) ((((((arr_53 [i_12] [i_14] [i_12]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((13877246440129147712ULL) - (13877246440129147712ULL))))));
                        arr_58 [i_12] [i_13] [i_14] [i_15] [i_13] = ((/* implicit */unsigned short) (+(arr_56 [i_15] [i_14] [i_13] [i_12] [i_12 + 2])));
                        arr_59 [i_12 - 1] [i_12] = ((/* implicit */unsigned long long int) (-(var_7)));
                        var_29 = ((/* implicit */int) 3311840551U);
                    }
                    for (long long int i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        arr_63 [i_12] [i_13] [i_14] [i_14] [i_12] [i_16] = ((/* implicit */unsigned int) var_2);
                        var_30 = ((/* implicit */long long int) arr_44 [i_14]);
                    }
                    for (unsigned long long int i_17 = 3; i_17 < 24; i_17 += 2) 
                    {
                        arr_66 [i_17] [i_14] [i_14] [i_12] &= ((/* implicit */unsigned short) var_4);
                        arr_67 [i_12 + 1] [i_13] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3)));
                        arr_68 [i_13] [i_12] [i_17] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1680889716843679381ULL)) ? (((/* implicit */int) arr_51 [i_17] [i_14] [i_13] [i_12])) : (((/* implicit */int) (unsigned char)218)))) * (((/* implicit */int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_12] [i_13] [i_13] [i_17]))))))));
                        var_31 = ((/* implicit */unsigned short) arr_55 [i_12 + 2] [i_17] [i_14] [i_17] [i_14]);
                        var_32 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_64 [i_17] [i_17] [i_17] [i_17])))))));
                    }
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_53 [i_12 - 1] [i_12 + 1] [i_12])) ? (arr_52 [(signed char)12] [i_12 - 1] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))));
                }
            } 
        } 
        var_34 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15504))) : (((long long int) 554422845U))));
        arr_69 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_12] [(unsigned char)18])))))) : (((((/* implicit */_Bool) arr_51 [i_12] [i_12] [i_12] [i_12])) ? (var_3) : (arr_53 [i_12] [i_12 + 1] [i_12])))));
    }
    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) var_3))));
    var_36 = ((/* implicit */unsigned short) var_1);
}
