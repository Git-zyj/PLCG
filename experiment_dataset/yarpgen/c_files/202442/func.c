/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202442
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 2885641055U)) % (var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69)))));
                /* LoopSeq 3 */
                for (signed char i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)4095)), (arr_7 [i_0] [i_1] [i_0] [i_2])))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-4096))) > (2885641079U))))) >= (((1409326252U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)4109))))))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (unsigned short)7223))));
                    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)-22911)), (((((unsigned long long int) 101607306)) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)5787)))))))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                }
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) arr_10 [i_0] [i_0] [i_0] [i_3])));
                    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_3])) >> (((((/* implicit */int) var_1)) - (57104)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) (short)25002))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4100))) : (arr_10 [i_0] [i_0] [i_0] [i_3])))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-9811))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_1] [i_3]))) ? ((+(((/* implicit */int) (unsigned short)59756)))) : (((/* implicit */int) (short)-22911))));
                }
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)5759)) ? ((~(((/* implicit */int) (signed char)-75)))) : (((/* implicit */int) (short)-22911)))), ((-(101607294)))));
                    arr_16 [i_4] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    var_24 = ((/* implicit */_Bool) var_1);
                }
                var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned char) ((unsigned long long int) var_5)))), ((-(arr_4 [i_0] [i_1])))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */short) arr_10 [i_0] [i_1] [i_5] [i_5]);
                                var_26 = ((/* implicit */unsigned short) 414188219);
                                var_27 = ((((9910044138838379060ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))))) ? (max((((/* implicit */unsigned long long int) 1409326255U)), (arr_2 [i_0] [i_7 + 2] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_17), (((/* implicit */short) arr_18 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1])))))));
                                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) arr_1 [i_0] [i_7]))));
                            }
                        } 
                    } 
                } 
                arr_24 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)196)) / (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5797))) / (13326864346589014000ULL)))))) ? (((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) (unsigned short)7716)))) : (((/* implicit */int) arr_13 [i_0]))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_8 = 4; i_8 < 15; i_8 += 1) 
    {
        var_29 -= ((/* implicit */short) min((((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)4102)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)19526)), ((unsigned short)15)))))), (-101607306)));
        var_30 ^= ((/* implicit */unsigned int) arr_26 [i_8 - 1]);
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (((!(arr_1 [i_8] [i_8 - 3]))) && (((((/* implicit */_Bool) 1048575U)) && (((/* implicit */_Bool) arr_2 [i_8] [i_8 + 1] [i_8])))))))));
        var_32 = ((/* implicit */short) ((var_9) >> (((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_8 - 4] [i_8 + 1] [i_8 - 3] [i_8 - 4]))))), (var_0))) - (48ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        var_33 = ((/* implicit */int) ((((unsigned long long int) 562949953420288ULL)) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_10 [i_9] [i_9] [i_9] [i_9]))))))));
        var_34 ^= ((/* implicit */signed char) (short)-4117);
    }
    for (unsigned char i_10 = 3; i_10 < 20; i_10 += 1) 
    {
        arr_32 [i_10] = ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) (unsigned char)1)))))) ? (((((/* implicit */unsigned long long int) 1048575U)) / (var_5))) : (arr_30 [i_10] [i_10]));
        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_10 - 1] [i_10 + 1])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_30 [i_10 - 1] [i_10 + 1])))) ? ((+(((/* implicit */int) (short)22915)))) : (((/* implicit */int) var_1)))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_12 = 4; i_12 < 8; i_12 += 4) 
        {
            var_36 = ((/* implicit */unsigned long long int) -2147483621);
            var_37 = ((/* implicit */unsigned long long int) var_4);
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_12 - 3] [i_12 - 3])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-4117)) && (((/* implicit */_Bool) arr_4 [i_11] [i_12]))))) : (((int) var_16))));
        }
        for (unsigned char i_13 = 3; i_13 < 9; i_13 += 2) 
        {
            var_39 = ((/* implicit */_Bool) arr_19 [i_11] [i_13] [i_11] [i_13]);
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) -101607299))));
            arr_39 [i_11] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_3 [i_11] [i_13])) / (arr_29 [i_11])))));
        }
        for (signed char i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            arr_42 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) (unsigned char)26);
            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) + ((+(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) 1265760798U)) : (var_5))))));
        }
        for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 3) 
        {
            var_42 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_13 [i_15 + 2]))) ? ((~(arr_25 [i_15 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_15 + 2])) != (2147483630)))))));
            var_43 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */signed char) arr_1 [i_15 + 1] [i_15 - 1])), (arr_43 [i_15 + 2] [i_15 + 2]))))));
            arr_46 [i_11] [i_11] &= ((/* implicit */short) ((((/* implicit */int) arr_36 [i_11])) + (((((/* implicit */_Bool) -2147483622)) ? (((/* implicit */int) (signed char)99)) : (((((/* implicit */_Bool) (signed char)-121)) ? (-2147483621) : (((/* implicit */int) (unsigned char)229))))))));
            var_44 = ((/* implicit */unsigned char) (((((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_34 [i_11] [i_11])) : (-1816180807))))) + (2147483647))) >> (((-101607317) + (101607347)))));
        }
        arr_47 [i_11] = ((/* implicit */int) 7379898327841322571ULL);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 4) 
    {
        for (short i_17 = 4; i_17 < 24; i_17 += 2) 
        {
            {
                var_45 = ((/* implicit */_Bool) ((unsigned long long int) -2147483643));
                var_46 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned int) -101607317)) ^ (4217888576U))) : (((/* implicit */unsigned int) var_4))));
                var_47 *= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (short)1))));
                var_48 = ((short) (-(((/* implicit */int) (unsigned char)91))));
            }
        } 
    } 
    var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483630)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_5) % (11651579851550429612ULL)))) && (((/* implicit */_Bool) ((signed char) var_4)))))) : (((/* implicit */int) ((((101607304) >> (((2113471892) - (2113471862))))) < (min((-633893748), (((/* implicit */int) (unsigned char)144))))))))))));
}
