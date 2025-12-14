/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235705
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
    var_10 = ((/* implicit */short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)31084)), (3835225734U)))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-16384)) + (2147483647))) >> (((1659315145U) - (1659315130U)))))) : (var_6)))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0 + 1] [i_0] |= ((/* implicit */signed char) var_1);
        var_11 *= ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) ((unsigned char) arr_0 [(unsigned short)0]))));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (1966132646U))))) || (((/* implicit */_Bool) arr_0 [i_0]))));
        arr_3 [(signed char)3] = ((/* implicit */int) var_5);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (long long int i_3 = 3; i_3 < 17; i_3 += 3) 
            {
                for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                {
                    {
                        var_13 |= ((/* implicit */signed char) arr_9 [i_1]);
                        var_14 = (signed char)-7;
                        var_15 = ((/* implicit */signed char) 4961048737217822058LL);
                    }
                } 
            } 
        } 
        arr_17 [i_1] [i_1] = min((((((/* implicit */_Bool) ((var_7) ^ (570968521U)))) ? (min((arr_9 [i_1]), (((/* implicit */unsigned int) var_9)))) : (((((/* implicit */_Bool) 2635652131U)) ? (3968884827U) : (arr_11 [i_1] [i_1] [i_1]))))), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (arr_6 [i_1] [i_1]))), (min((4294967280U), (arr_6 [i_1] [i_1]))))));
        var_16 = ((/* implicit */unsigned short) 1659315145U);
        var_17 = ((/* implicit */short) arr_13 [i_1]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 2; i_5 < 18; i_5 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (short)-3287))));
        var_19 = ((((/* implicit */_Bool) arr_14 [i_5 + 2] [i_5 + 1] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(signed char)7] [(signed char)7] [i_5]))) : (((((/* implicit */_Bool) var_8)) ? (arr_6 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))))));
        arr_22 [1LL] [(signed char)11] = ((arr_10 [i_5 + 3] [i_5 - 2]) - (arr_10 [i_5 - 1] [i_5 + 3]));
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (arr_9 [i_7])));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            {
                                arr_35 [i_5 - 2] [i_6] [i_8] [18U] = ((/* implicit */signed char) (+(((unsigned int) arr_20 [i_5]))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (short)-16384))));
                                var_22 *= ((/* implicit */unsigned char) (~(((arr_31 [9] [i_8] [3LL] [i_6] [(signed char)7]) >> (((((/* implicit */int) var_3)) - (59371)))))));
                                var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_8] [i_9] [i_8] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_5 + 3] [i_7] [(signed char)16] [i_8] [i_7] [i_9] [i_9])))))) : (((unsigned int) 134184960U))));
                                var_24 = ((/* implicit */unsigned char) arr_10 [i_8] [i_7]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_10 = 4; i_10 < 20; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                {
                    var_25 = arr_23 [i_5] [i_10];
                    var_26 = ((((/* implicit */_Bool) (short)-13415)) ? (((/* implicit */unsigned int) 517523337)) : (2153376644U));
                    var_27 = ((/* implicit */signed char) arr_31 [i_5] [i_10 - 3] [i_5] [i_11] [i_11]);
                    var_28 = (i_10 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((arr_36 [i_10]) + (2147483647))) >> (((arr_5 [i_11]) - (2462364437U)))))) > (3U)))) : (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((((arr_36 [i_10]) - (2147483647))) + (2147483647))) >> (((arr_5 [i_11]) - (2462364437U)))))) > (3U))));
                }
            } 
        } 
    }
    for (unsigned char i_12 = 2; i_12 < 18; i_12 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_13 = 1; i_13 < 18; i_13 += 3) 
        {
            for (long long int i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                {
                    arr_48 [i_12] [i_13] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-116)) ? (((((/* implicit */_Bool) max((arr_23 [i_12 + 3] [i_14]), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_46 [(unsigned short)4] [i_12] [i_12] [i_14])), (2153376650U)))) : (8486307451872196969LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2871475125U))))))));
                    var_29 = ((/* implicit */long long int) (+(arr_23 [i_12 + 2] [i_12])));
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            {
                                arr_55 [i_12] [i_12 - 2] [i_13] [i_12] [i_12] [i_12 - 1] [(short)15] = max((min((((arr_15 [i_14] [i_14]) << (((var_7) - (2128639919U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_12] [i_15] [(unsigned char)14]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(15U)))) || (((/* implicit */_Bool) ((arr_23 [i_12] [i_13]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))))));
                                arr_56 [i_13] [i_13] = ((/* implicit */unsigned int) (((-((+(var_8))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_15]))) >= (((((/* implicit */_Bool) arr_53 [i_12] [6U] [i_14] [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8)))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */signed char) (+(arr_16 [i_12 - 2] [(short)10] [i_12] [i_12])));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) arr_36 [i_12]))));
        /* LoopSeq 1 */
        for (unsigned int i_17 = 3; i_17 < 20; i_17 += 2) 
        {
            arr_61 [16] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) + (arr_23 [i_12 + 3] [i_12])));
            arr_62 [i_12] [i_12] [i_12] |= ((/* implicit */signed char) var_9);
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967281U)) ? ((~(((unsigned int) var_9)))) : (((/* implicit */unsigned int) arr_12 [i_12] [(short)3] [i_17])))))));
            /* LoopNest 3 */
            for (unsigned int i_18 = 0; i_18 < 21; i_18 += 2) 
            {
                for (unsigned int i_19 = 4; i_19 < 19; i_19 += 1) 
                {
                    for (unsigned int i_20 = 1; i_20 < 19; i_20 += 1) 
                    {
                        {
                            var_33 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((-3983076185721629963LL), (((/* implicit */long long int) arr_58 [i_12] [i_18])))), (((/* implicit */long long int) 1976665102))))) ? (((((/* implicit */long long int) 2635652120U)) + (var_8))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)31100)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5016))) : (arr_33 [i_18] [i_17] [i_18] [i_12] [i_12]))), ((-(0U))))))));
                            var_34 |= ((/* implicit */short) ((((((/* implicit */_Bool) (short)27)) ? (arr_15 [(signed char)0] [i_12 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ^ (((/* implicit */unsigned int) arr_12 [i_12] [i_12] [i_12]))));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)227)) || (((/* implicit */_Bool) arr_70 [i_12]))))), (min(((unsigned char)255), (var_5)))))) << (((arr_33 [i_12] [i_12] [i_18] [i_19 - 1] [i_20]) - (2071173833U)))));
                            arr_72 [i_12] [i_17] [i_12] [i_19] [i_20] [i_12] |= ((/* implicit */long long int) max((((arr_4 [i_20 + 2] [i_17 - 2]) & (arr_4 [i_20 + 2] [i_17 - 2]))), (((arr_4 [i_20 + 1] [i_17 + 1]) | (arr_4 [i_20 + 2] [i_17 - 2])))));
                        }
                    } 
                } 
            } 
        }
        arr_73 [i_12] = ((/* implicit */signed char) 3626045151U);
    }
}
