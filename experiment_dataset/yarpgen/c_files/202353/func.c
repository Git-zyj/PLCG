/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202353
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
    var_18 = ((/* implicit */signed char) var_2);
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        arr_2 [(signed char)7] [i_0] = ((/* implicit */short) (-(((long long int) min((var_13), (arr_0 [i_0] [i_0]))))));
        var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_0 - 4] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (_Bool)0))))) : (min((8076613297203635850LL), (((/* implicit */long long int) (unsigned short)0))))))));
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0 - 3] [(short)7]))));
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_15 [i_2] [4LL] [i_2] = ((/* implicit */long long int) ((0LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_16 [i_1] [i_1] [i_2] [i_2] [i_3] [i_2] [i_5] = min(((((_Bool)0) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2])))), (((var_15) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (_Bool)1)))));
                            var_21 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)61))));
                        }
                        arr_17 [(signed char)14] [i_2] [i_2 - 1] [i_2] [19ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)90))))) ? ((-(((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) (unsigned short)65535))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) arr_0 [i_1] [i_1]);
        arr_18 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_1 - 1])) / (((/* implicit */int) max((arr_12 [i_1 - 1]), (arr_12 [i_1 - 1]))))));
        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) -9LL))) || (((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 1] [14ULL])))))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 2; i_7 < 18; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((min(((+(arr_20 [i_6] [i_8] [i_6]))), (((/* implicit */long long int) ((var_15) || (((/* implicit */_Bool) 0))))))), (((/* implicit */long long int) arr_12 [10])))))));
                        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (arr_6 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (8589933568ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_8])))))) ? (min((-8076613297203635866LL), (((/* implicit */long long int) (signed char)0)))) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)32767))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_10 = 3; i_10 < 12; i_10 += 1) 
        {
            var_26 = ((/* implicit */signed char) arr_12 [i_10]);
            var_27 ^= ((/* implicit */unsigned char) (((-(((/* implicit */int) var_1)))) >= (((/* implicit */int) ((unsigned char) arr_34 [i_9])))));
        }
        for (unsigned short i_11 = 3; i_11 < 9; i_11 += 1) 
        {
            var_28 -= (-(((/* implicit */int) (signed char)26)));
            var_29 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)65535)) << (((8076613297203635850LL) - (8076613297203635837LL))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 1296403046U)) > (arr_6 [i_9])))))))));
        }
        arr_38 [i_9] [i_9] = ((/* implicit */unsigned char) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            for (long long int i_13 = 1; i_13 < 12; i_13 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 2) 
                    {
                        arr_47 [i_14] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)182)) ? (((unsigned int) (+(arr_27 [i_9] [i_12] [i_9] [i_13] [i_14] [i_9])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_9] [i_12] [i_9] [i_9])))));
                        arr_48 [1U] [1U] [i_13 + 1] [i_13] = ((/* implicit */signed char) max((((((/* implicit */int) ((unsigned char) var_17))) <= (((/* implicit */int) max((((/* implicit */short) (signed char)0)), ((short)32767)))))), ((_Bool)1)));
                        arr_49 [i_9] [i_12] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_24 [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_24 [i_13] [i_13] [i_13 - 1]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 323247778)), (arr_40 [i_13] [i_13] [i_13 + 1]))))));
                        var_30 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_21 [i_9] [i_9] [i_14])), (arr_25 [i_9] [12U] [i_14] [i_14] [i_14])));
                    }
                    for (unsigned short i_15 = 1; i_15 < 9; i_15 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 3; i_16 < 10; i_16 += 2) 
                        {
                            var_31 -= ((/* implicit */_Bool) ((signed char) ((((((/* implicit */_Bool) -8076613297203635886LL)) && (((/* implicit */_Bool) -484405672)))) ? (((/* implicit */int) ((-1274482058) == (((/* implicit */int) arr_12 [i_13 - 1]))))) : (((/* implicit */int) arr_41 [i_15 + 2] [i_12] [i_12])))));
                            var_32 = ((/* implicit */int) min((max((6547114804170292131LL), (((/* implicit */long long int) (unsigned char)208)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_32 [i_12] [i_13])), (arr_50 [(unsigned char)11] [i_13] [i_12] [i_9]))))));
                            var_33 = ((/* implicit */short) arr_45 [i_9] [i_15 + 1] [i_13 - 1] [i_15] [i_13 - 1] [i_13]);
                        }
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)19406)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65519)) < (((/* implicit */int) arr_9 [i_9])))))) : (min((max((arr_7 [i_12]), (((/* implicit */unsigned long long int) arr_33 [i_9])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_11 [i_9])) - (46108)))))))))))));
                        var_35 = ((((/* implicit */int) ((signed char) min((((/* implicit */long long int) (short)32760)), (1166513922706061438LL))))) + (((/* implicit */int) var_8)));
                        var_36 -= ((/* implicit */unsigned short) ((arr_27 [i_9] [i_12] [i_12] [i_12] [i_13 + 1] [i_12]) != (max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) arr_4 [i_15 + 2] [i_9]))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_17 = 3; i_17 < 10; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 13; i_18 += 1) 
                        {
                            {
                                var_37 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_28 [i_9]))));
                                arr_60 [i_17] [1] [i_13 + 1] [i_13] [i_18] = ((/* implicit */signed char) arr_6 [i_9]);
                                arr_61 [i_9] [i_12] [i_12] [i_17] [(short)11] [i_13] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_12] [i_13])) >> (((/* implicit */int) arr_21 [16LL] [i_13] [i_12]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 1; i_19 < 11; i_19 += 2) 
                    {
                        for (long long int i_20 = 3; i_20 < 12; i_20 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned char) (-(((2199023255551LL) % (((/* implicit */long long int) 2147483647))))));
                                var_39 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65517)) ? (((((/* implicit */int) (signed char)-15)) + (((/* implicit */int) (short)-25579)))) : (((int) (unsigned short)0)))) + (max((arr_14 [i_12] [i_13 - 1] [i_12] [i_13 - 1] [i_13 - 1] [i_19 + 1] [i_20]), (((((/* implicit */int) arr_66 [i_9])) ^ (((/* implicit */int) (short)32767))))))));
                                var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) var_10))));
                                var_41 = ((/* implicit */short) arr_34 [8ULL]);
                                var_42 ^= ((/* implicit */unsigned long long int) max(((!((!(((/* implicit */_Bool) (unsigned short)65517)))))), (((((/* implicit */_Bool) arr_43 [i_9] [i_9] [i_9] [i_9])) && (((/* implicit */_Bool) -183252619996985511LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_43 -= ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)10] [(unsigned short)10] [i_9] [i_9]))) - (262140U));
        var_44 += ((/* implicit */unsigned int) (unsigned short)65535);
    }
}
