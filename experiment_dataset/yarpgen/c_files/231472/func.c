/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231472
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), ((~(min((arr_7 [i_1] [i_1] [i_1 - 1] [i_1 + 1]), (min((arr_12 [i_2] [i_3] [i_2]), (((/* implicit */unsigned long long int) arr_10 [i_0]))))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */long long int) (+((-(12945671036884961824ULL)))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1 - 2] [i_0] [i_2] = max(((~(((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1] [i_1 - 1] [i_1 + 1])))), ((+(((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 2] [i_1 - 1] [i_1 - 1])))));
                    var_20 = ((/* implicit */int) var_3);
                    arr_15 [i_2 - 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((arr_9 [i_1] [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) max((234903040396423981ULL), (18211841033313127635ULL)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_6), (((/* implicit */short) (signed char)-23))));
    /* LoopSeq 4 */
    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_14))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5])), (((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (arr_10 [24]) : (((/* implicit */int) var_10))))))) ? (min((((((/* implicit */_Bool) arr_3 [i_5 + 1] [i_5 - 1])) ? (var_11) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 640009861))))))) : (min(((-(var_2))), (((/* implicit */unsigned long long int) (+(3856911915U))))))));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_16)))) ? ((~(arr_12 [i_5] [i_6] [i_6]))) : (max((arr_4 [i_5] [i_6]), (((/* implicit */unsigned long long int) var_4)))))), ((~(((((/* implicit */_Bool) arr_18 [i_5 + 1])) ? (arr_7 [i_5] [i_6] [i_6] [i_5 + 1]) : (arr_12 [i_6] [i_6] [i_5])))))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((234903040396423988ULL), (234903040396423981ULL)))) ? (((((/* implicit */_Bool) arr_6 [20U] [i_6] [i_6])) ? (var_9) : (arr_16 [i_5]))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_17 [i_5])), (arr_11 [(unsigned char)18] [i_5] [i_5] [i_5] [i_5]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_9 [i_5] [i_6])), ((+(arr_18 [i_6])))))) : (max((((((/* implicit */_Bool) arr_8 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (arr_12 [i_6] [i_6] [i_6]))), ((~(18211841033313127659ULL)))))));
            var_26 *= ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_1 [i_5 - 1]))))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_5 - 1])), (min((((/* implicit */unsigned int) arr_2 [i_6] [i_6])), (arr_0 [i_5] [i_7])))))), (arr_12 [i_5 + 1] [i_6] [i_7])));
                arr_23 [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) / (((((/* implicit */_Bool) var_15)) ? (min((var_16), (arr_0 [i_5 + 1] [i_5 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                var_28 |= ((/* implicit */int) (+(arr_4 [i_7] [i_6])));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    for (signed char i_9 = 3; i_9 < 16; i_9 += 1) 
                    {
                        {
                            arr_31 [i_7] [i_6] [i_7] [i_8] [i_5] [i_8] = ((/* implicit */unsigned int) arr_3 [i_6] [i_6]);
                            var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(18211841033313127634ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_17)), (var_18))))))) : (max((((/* implicit */unsigned long long int) var_3)), (max((var_0), (((/* implicit */unsigned long long int) arr_5 [i_5] [i_6] [i_7] [i_8]))))))));
                            arr_32 [i_8] [i_8] = ((/* implicit */unsigned char) ((min(((~(arr_7 [i_5] [i_5] [i_5] [i_5]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))) / (min((((/* implicit */unsigned long long int) max((arr_5 [i_5] [i_6] [i_5] [i_8]), (((/* implicit */unsigned short) var_1))))), (min((var_13), (((/* implicit */unsigned long long int) var_6))))))));
                            var_30 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) arr_0 [i_5 - 1] [i_7])) ? (arr_3 [i_5] [i_6]) : (var_2))) >> ((((~(((/* implicit */int) var_18)))) + (2613))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
                            arr_33 [i_8] = ((/* implicit */long long int) var_0);
                        }
                    } 
                } 
                arr_34 [i_5 + 1] = ((/* implicit */int) var_5);
            }
        }
    }
    for (int i_10 = 0; i_10 < 23; i_10 += 1) 
    {
        arr_37 [i_10] = ((/* implicit */int) var_16);
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */short) (-(arr_41 [i_13])));
                        var_32 = ((/* implicit */unsigned long long int) arr_1 [i_13]);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        arr_49 [i_14] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_11 [i_12] [i_11] [i_12] [i_12] [i_14]))))));
                        var_33 ^= ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) 1439930778U)) ? (2019261502336539423ULL) : (12839116008395922190ULL))), (((/* implicit */unsigned long long int) (+(arr_36 [i_10])))))), (max((min((arr_46 [i_10] [i_12] [i_12] [i_14] [i_12]), (((/* implicit */unsigned long long int) arr_1 [i_10])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)31763)), (4227858432U))))))));
                    }
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_10] [i_11])) ? (min(((-(var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_39 [i_11] [i_11] [i_12]) : (var_4)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((arr_2 [i_10] [i_11]), (var_3)))), (min((arr_40 [i_11] [i_12]), (((/* implicit */unsigned int) var_12)))))))));
                    var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_10])) || (((/* implicit */_Bool) var_15))))), (((((/* implicit */_Bool) arr_39 [i_10] [i_11] [i_12])) ? (((/* implicit */unsigned long long int) arr_0 [i_11] [i_11])) : (arr_7 [i_10] [i_11] [i_10] [i_12])))))) ? (max((arr_45 [i_10] [i_10] [i_10] [i_10] [i_10]), (((/* implicit */unsigned long long int) max((var_17), (arr_8 [i_10] [i_11] [i_12] [i_10])))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)22781))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned int i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                {
                    arr_54 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1063535188482337855ULL)))) ? ((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_15] [i_16])), ((unsigned short)33772)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_15), (var_4)))))))));
                    var_36 = ((((/* implicit */unsigned long long int) max(((-(var_16))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) > (2147483647))))))) - (min((((/* implicit */unsigned long long int) (~(1232112310U)))), (min((17383208885227213761ULL), (10594782478124279650ULL))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_17 = 0; i_17 < 14; i_17 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (unsigned int i_19 = 3; i_19 < 12; i_19 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 2; i_20 < 10; i_20 += 3) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 3) 
                        {
                            {
                                var_37 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32755))));
                                var_38 = ((/* implicit */int) arr_29 [i_19 + 1] [i_19 - 3] [i_20] [i_20] [i_20 - 1]);
                            }
                        } 
                    } 
                    var_39 ^= ((/* implicit */int) (-(arr_41 [i_19 + 2])));
                }
            } 
        } 
        var_40 = ((/* implicit */long long int) (~(arr_45 [i_17] [i_17] [i_17] [i_17] [i_17])));
        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_17]))) | (arr_7 [i_17] [i_17] [i_17] [i_17]))))));
        arr_68 [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [(unsigned char)10])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [6U])))));
    }
    /* vectorizable */
    for (unsigned char i_22 = 0; i_22 < 15; i_22 += 1) 
    {
        var_42 *= (-(arr_41 [i_22]));
        arr_73 [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * ((-(var_16)))));
        var_43 = var_7;
    }
}
