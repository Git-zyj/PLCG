/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235085
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)1193))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (4148176825792180134LL)))))) ? (max((var_8), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)48)))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 4879394201341617266LL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (-4879394201341617252LL))))))), (((((((/* implicit */int) (short)26058)) != (((/* implicit */int) var_1)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (short)17145)) : (((/* implicit */int) (unsigned char)7))))))));
        var_11 = arr_0 [i_0] [i_0];
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) max((max((((long long int) var_9)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-49))) / (arr_0 [(short)7] [(unsigned char)5]))))), (((/* implicit */long long int) (short)-20057)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            /* LoopSeq 4 */
            for (signed char i_3 = 1; i_3 < 11; i_3 += 3) /* same iter space */
            {
                var_13 = ((/* implicit */short) ((arr_8 [i_1] [i_2] [i_1]) % (arr_8 [i_3] [i_2] [i_3])));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_1] [(signed char)10])) >= (((/* implicit */int) var_1)))) ? ((~(((/* implicit */int) (short)-16670)))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [(unsigned char)11] [i_2])) == (((/* implicit */int) arr_10 [i_3 + 1] [i_2 - 2] [i_1] [i_1]))))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_15 |= ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_2 - 3] [i_1]))));
                            arr_16 [i_1] [i_4] [i_2] [i_2 - 2] [i_1] = ((/* implicit */signed char) (~(var_8)));
                            arr_17 [i_2] [i_2] = ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-29))) * (-1LL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (long long int i_7 = 1; i_7 < 10; i_7 += 4) 
                    {
                        {
                            arr_22 [i_2] [i_6] [i_3] [i_2] [(short)0] [i_2] = var_4;
                            var_16 = ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))) : (((arr_8 [i_2] [i_2] [i_1]) << (((((/* implicit */int) (short)17988)) - (17988))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */signed char) ((short) arr_15 [i_2] [i_2 - 1] [i_2 - 1] [(unsigned char)2] [i_2 + 1] [i_2 + 1] [i_2]));
            }
            for (signed char i_8 = 1; i_8 < 11; i_8 += 3) /* same iter space */
            {
                arr_26 [i_2] [i_2] = arr_3 [i_2 - 1];
                arr_27 [i_2] [i_2] [i_2] = (unsigned char)117;
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (long long int i_10 = 3; i_10 < 10; i_10 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) arr_13 [i_8] [i_10 + 2] [i_10 + 1] [i_10] [i_10] [i_10 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_9] [i_1] [i_9] [i_1] [i_10] [i_8 + 1]))) : (arr_13 [i_9] [i_9] [5LL] [i_10] [5LL] [i_10 + 2])))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10] [i_9] [i_8] [i_1]))) : (arr_13 [i_10] [(short)9] [8LL] [i_1] [i_1] [i_1])))))));
                            arr_32 [i_1] [i_1] [i_8 + 1] [(unsigned char)4] [i_2] = (short)-28864;
                        }
                    } 
                } 
            }
            for (signed char i_11 = 1; i_11 < 11; i_11 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    arr_39 [i_1] [i_2] = ((/* implicit */signed char) (unsigned char)125);
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-32746))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (signed char)12))));
                    var_22 = (signed char)-17;
                }
                for (short i_13 = 4; i_13 < 11; i_13 += 4) 
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((long long int) (signed char)-58))));
                    var_24 = ((/* implicit */short) (~(var_4)));
                    arr_42 [(signed char)9] [i_2] [(signed char)9] [i_11] [i_2] [(signed char)9] = ((/* implicit */unsigned char) (+(-7798703327388423979LL)));
                }
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)30))));
            }
            for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    for (short i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_2 - 2] [i_14] [i_14])) ? (((/* implicit */int) arr_34 [i_2 - 1] [i_16] [(short)9])) : (((/* implicit */int) arr_51 [(signed char)11] [(signed char)11] [(signed char)11] [i_2 - 1] [i_2 - 1] [i_2] [7LL]))));
                            arr_53 [i_1] [i_2] [(unsigned char)2] [i_2] [i_2] [(short)9] = ((short) (signed char)19);
                        }
                    } 
                } 
                var_27 |= ((/* implicit */unsigned char) (signed char)-49);
            }
            var_28 = (short)18228;
        }
    }
    /* vectorizable */
    for (short i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_18 = 2; i_18 < 11; i_18 += 1) 
        {
            for (short i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                for (signed char i_20 = 2; i_20 < 9; i_20 += 4) 
                {
                    {
                        var_29 = ((2752106875214553648LL) | (((/* implicit */long long int) ((((/* implicit */int) arr_54 [i_18 - 1] [i_20])) / (((/* implicit */int) arr_3 [i_19]))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_17] [i_18 - 2])) ? (arr_55 [i_18] [i_18 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)12705)))));
                        /* LoopSeq 3 */
                        for (short i_21 = 0; i_21 < 12; i_21 += 1) 
                        {
                            arr_66 [i_17] [(short)8] [i_19] [(signed char)4] [i_18] [i_21] = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-9)) : (((/* implicit */int) (short)-1)))) > (((/* implicit */int) (short)2268))));
                            var_31 = ((-5381741227196892785LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-49))));
                            var_32 = ((/* implicit */signed char) var_4);
                        }
                        for (signed char i_22 = 0; i_22 < 12; i_22 += 1) 
                        {
                            var_33 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned char)255))))));
                            var_34 += ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)3))));
                            var_35 = ((/* implicit */signed char) arr_49 [(short)10] [i_18] [i_18] [i_17]);
                        }
                        for (unsigned char i_23 = 0; i_23 < 12; i_23 += 3) 
                        {
                            var_36 ^= ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_17] [i_18 - 1]))));
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((unsigned char) (!(((/* implicit */_Bool) var_7)))))));
                            var_38 -= ((/* implicit */long long int) (-(((/* implicit */int) (short)19089))));
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (signed char)-65))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_24 = 1; i_24 < 11; i_24 += 3) 
        {
            for (unsigned char i_25 = 0; i_25 < 12; i_25 += 1) 
            {
                {
                    arr_77 [i_24] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_24 - 1]))));
                    arr_78 [i_25] [i_17] [i_17] [i_17] = ((((/* implicit */_Bool) (signed char)63)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_17] [i_24] [i_25]))) % (arr_21 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)19451)) && (((/* implicit */_Bool) (short)-32764)))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned char i_26 = 1; i_26 < 12; i_26 += 1) 
    {
        for (unsigned char i_27 = 0; i_27 < 13; i_27 += 3) 
        {
            for (unsigned char i_28 = 0; i_28 < 13; i_28 += 1) 
            {
                {
                    var_40 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_26])) ? (((((/* implicit */int) (short)-32046)) & (((/* implicit */int) (unsigned char)18)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)98)), (max((arr_84 [10LL] [i_27] [i_26]), (((/* implicit */short) (unsigned char)198)))))))));
                    var_41 -= ((/* implicit */signed char) max(((short)13), (((/* implicit */short) (unsigned char)12))));
                }
            } 
        } 
    } 
}
