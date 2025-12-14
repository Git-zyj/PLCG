/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25026
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
    var_19 |= var_9;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) -8308191261767603357LL)) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (-8308191261767603357LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((unsigned long long int) 54942351)))), (((/* implicit */unsigned long long int) 8308191261767603356LL))));
        var_20 = ((/* implicit */signed char) var_18);
        var_21 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((long long int) arr_2 [i_0] [(_Bool)1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_1) : (var_1)))))) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    }
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) 8308191261767603357LL);
                                var_23 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_12 [i_1] [i_2] [i_3 + 2] [i_4]))))) ? (arr_1 [i_1 + 2]) : (((/* implicit */unsigned long long int) 282900224)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1]))) * (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_3 + 3]))) * (var_9)))) ? (((unsigned long long int) 8742103408509928063LL)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (-8308191261767603357LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_6 = 1; i_6 < 15; i_6 += 3) 
        {
            for (unsigned int i_7 = 1; i_7 < 16; i_7 += 3) 
            {
                for (int i_8 = 2; i_8 < 16; i_8 += 4) 
                {
                    {
                        arr_26 [i_1] [4] [i_1] [i_8 - 2] = ((/* implicit */long long int) arr_22 [i_1] [i_6 - 1] [i_7 + 1]);
                        arr_27 [i_1] [i_1] [i_7] [i_8 + 1] = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_1)) : (8308191261767603356LL))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) 1951734443)), ((-(arr_7 [15U] [(unsigned short)7]))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_9 = 1; i_9 < 16; i_9 += 2) 
        {
            arr_30 [i_1] [i_1] [i_9 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_0))))) ? ((+(var_7))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (var_6)))) * (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (var_9))))))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                arr_34 [i_1] [i_1] [i_9] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) max((var_10), (arr_0 [11] [24ULL])))), (((((/* implicit */long long int) -1054100225)) - (1017145034698742072LL))))), (((/* implicit */long long int) var_12))));
                var_25 = ((/* implicit */int) 3432494891U);
                /* LoopNest 2 */
                for (unsigned short i_11 = 1; i_11 < 14; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_9] [i_9]))))), ((~(var_9))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((var_4) + (((/* implicit */long long int) arr_5 [i_1 - 2])))))))));
                            var_27 = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) ((var_5) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_1 + 1] [i_1] [i_1])))))));
                        }
                    } 
                } 
            }
            arr_42 [i_1] [i_9 - 1] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) 862472404U)) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_18 [i_9] [i_9 + 1] [i_1] [i_9] [i_1] [i_9 + 1])))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_12))))))), (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_13 [i_1 + 4] [i_1] [i_1] [i_1 + 4]))))))))));
            arr_43 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_8)))) ? ((~(3257734787U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1 + 4])))))) : (max((((/* implicit */unsigned long long int) ((var_14) >> (((((/* implicit */int) var_11)) - (52)))))), (((((/* implicit */_Bool) arr_37 [i_1] [i_1] [(unsigned char)16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9] [i_9] [i_9 + 2]))) : (arr_9 [i_9] [i_1])))))));
        }
        arr_44 [i_1] = ((/* implicit */unsigned long long int) max((((unsigned int) (-(var_6)))), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-100)), (((var_17) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)127)))))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_14 = 0; i_14 < 11; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 9; i_16 += 2) 
                {
                    {
                        arr_57 [i_14] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((14099883079524272558ULL), (((/* implicit */unsigned long long int) arr_10 [i_13])))), (((/* implicit */unsigned long long int) ((int) var_18)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_16] [i_16 + 2] [i_13] [i_13] [i_16 - 1] [i_16 + 2])) - (((/* implicit */int) arr_20 [i_13] [i_15]))))) : (((((/* implicit */_Bool) var_15)) ? ((+(arr_51 [i_13] [i_15] [i_15]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (arr_38 [17ULL] [i_14] [17ULL] [i_15] [i_16 - 1])))))))));
                        var_28 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_13] [i_13] [i_15] [i_15])) ? (arr_8 [i_13] [i_13] [(short)11]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (arr_7 [i_13] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_14]), (((/* implicit */unsigned char) arr_36 [i_13] [i_13] [i_14] [i_13] [i_16 + 2] [i_16])))))))));
                        arr_58 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) & (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) arr_41 [i_13] [(signed char)13] [i_15] [i_13] [i_14] [i_15])))))));
                        arr_59 [i_13] [i_13] [i_15] [i_13] = ((/* implicit */signed char) 1390205783U);
                    }
                } 
            } 
        } 
        arr_60 [i_13] [i_13] = ((/* implicit */unsigned long long int) arr_55 [i_13] [(signed char)7] [i_13] [(unsigned char)5] [i_13]);
    }
    for (long long int i_17 = 3; i_17 < 13; i_17 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_14)) : (var_16))) : (((/* implicit */unsigned long long int) (+(var_4))))))));
        var_30 = ((/* implicit */unsigned char) var_8);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_18 = 0; i_18 < 16; i_18 += 3) 
        {
            var_31 = ((/* implicit */unsigned long long int) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)123)) >= (((/* implicit */int) var_2))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 1) 
            {
                for (unsigned int i_20 = 0; i_20 < 16; i_20 += 1) 
                {
                    {
                        var_32 = ((/* implicit */short) arr_66 [i_17] [(_Bool)1]);
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((arr_2 [i_19] [(unsigned short)21]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_68 [i_17] [i_17 - 1])) - (((/* implicit */int) arr_68 [i_17] [i_17 - 1]))));
                    }
                } 
            } 
        }
    }
    for (long long int i_21 = 3; i_21 < 13; i_21 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned int) (~(max(((-(14401763953796374477ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) + (min((((/* implicit */long long int) ((990049451997132357LL) == (((/* implicit */long long int) var_13))))), ((~(arr_19 [(signed char)0] [i_21] [i_21])))))));
    }
}
