/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204822
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) (!(((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (short)20460)))))));
            var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)91))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) max((max((arr_3 [i_0] [i_1] [(unsigned char)2]), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) (short)-20461))))))))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_2] [i_3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_2] [i_3]))) : ((-(arr_8 [i_0])))))) ? ((-(arr_6 [i_0] [(unsigned short)12] [i_2] [i_3]))) : (((/* implicit */long long int) var_1))));
                        arr_12 [i_0] [i_2] [i_0] = arr_9 [i_0] [i_2] [i_1] [i_0];
                        arr_13 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_3] [i_3]) ? (((/* implicit */unsigned long long int) arr_8 [i_0])) : (((var_10) | (var_10)))))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_9 [i_0] [i_2] [i_1] [i_0]))))));
                    }
                } 
            } 
            var_13 = ((/* implicit */unsigned char) (short)0);
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_4] [i_5] [i_0])) / (((/* implicit */int) var_8))));
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_0])) % (((/* implicit */int) (_Bool)1))));
                        var_15 += ((/* implicit */int) ((((/* implicit */_Bool) 4225065433068208395LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))) : (arr_23 [i_5] [i_4] [i_5] [6LL] [i_7])));
                        arr_26 [i_7] [(_Bool)1] [i_0] [i_5] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) var_2);
                    }
                    var_16 = ((/* implicit */unsigned long long int) -1606339945);
                    var_17 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_5] [i_4] [i_5]))));
                    arr_27 [i_0] [i_4] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)123))));
                }
                for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_4] [i_0])) ? (((/* implicit */int) arr_17 [i_0] [15U] [i_0] [i_0])) : ((+(((/* implicit */int) arr_10 [i_0] [i_0]))))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(((822276656804912352ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                        var_20 = ((/* implicit */_Bool) ((arr_16 [i_0] [i_5] [i_0]) | (arr_16 [i_0] [i_4] [i_5])));
                        var_21 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_21 [i_0]))))));
                    }
                    for (unsigned char i_10 = 2; i_10 < 14; i_10 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((_Bool) arr_35 [i_0] [i_4] [i_5] [i_0] [7LL]));
                        arr_36 [i_0] [i_8] [i_5] [i_4] [i_0] = ((/* implicit */int) (+(arr_31 [i_10 + 1] [i_10 - 2] [i_10 + 1] [i_0] [i_10])));
                        arr_37 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_32 [i_10] [i_0] [i_10] [i_10] [i_10] [i_0] [i_10 + 1]));
                    }
                    for (signed char i_11 = 3; i_11 < 12; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) -1221257386);
                        var_24 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(-4194630352675360223LL)))) % (arr_2 [i_0] [i_0]))))));
                }
                for (int i_12 = 2; i_12 < 12; i_12 += 3) 
                {
                    arr_45 [i_0] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((_Bool) arr_23 [i_0] [i_4] [i_5] [i_5] [i_12 + 3]));
                    var_27 += ((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned char)0))))));
                }
                for (unsigned short i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) arr_19 [i_0] [i_4] [i_4])) : (-1545077178)))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)4)) / (((/* implicit */int) (signed char)96)))))));
                    arr_48 [i_0] = var_8;
                    var_29 = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_4] [i_4] [2LL] [i_4])) % (((/* implicit */int) (_Bool)1))));
                }
            }
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                arr_53 [i_14 + 1] [i_0] [i_0] = ((/* implicit */long long int) var_3);
                var_30 ^= ((/* implicit */short) (-(((/* implicit */int) var_2))));
            }
            arr_54 [i_0] = ((/* implicit */signed char) var_4);
            var_31 = arr_41 [i_0] [i_4] [i_0];
        }
        for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 4) 
        {
            arr_58 [i_0] = (!((_Bool)0));
            var_32 = var_3;
        }
        for (unsigned int i_16 = 0; i_16 < 16; i_16 += 2) 
        {
            var_33 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (arr_23 [i_0] [i_16] [i_0] [i_0] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) % (18446744073709551615ULL)))));
            var_34 = ((/* implicit */_Bool) (short)2222);
            var_35 = ((/* implicit */long long int) 3584512527U);
            var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) % ((-(min((var_1), (((/* implicit */unsigned int) arr_56 [i_0]))))))));
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_56 [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_16]))) : (var_1))))))));
        }
        arr_63 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-((~(arr_30 [i_0] [i_0] [i_0] [(signed char)1] [i_0] [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (-6881727912260817754LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-24)))))) ? (((/* implicit */unsigned long long int) 976918481)) : (((0ULL) | (((/* implicit */unsigned long long int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        arr_64 [i_0] = max((((((/* implicit */_Bool) arr_44 [(unsigned short)5] [i_0] [(unsigned char)7] [i_0])) ? (6303245897335038428ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)20460))))))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(var_6)))), (arr_5 [i_0] [i_0] [i_0] [i_0])))));
        var_38 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_50 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_50 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_50 [i_0] [i_0] [i_0]))))), (5453073711385254018ULL)));
        var_39 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (signed char)45))))) ? ((-(((/* implicit */int) (unsigned char)41)))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) arr_59 [(signed char)12] [i_0] [(signed char)12]))))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 3) /* same iter space */
    {
        var_40 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_4)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-14)), ((unsigned char)201)))))) ? (((((/* implicit */_Bool) arr_22 [i_17] [i_17] [i_17] [i_17])) ? ((+(((/* implicit */int) arr_60 [(signed char)9] [(signed char)9] [(signed char)9])))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_51 [i_17] [i_17] [i_17])))))) : (((((/* implicit */_Bool) ((arr_41 [i_17] [i_17] [i_17]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (((int) 4636669137020182515ULL)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_17] [i_17] [i_17] [i_17])) && (((/* implicit */_Bool) arr_32 [i_17] [i_17] [i_17] [i_17] [(_Bool)1] [i_17] [i_17])))))))));
        arr_67 [i_17] = ((/* implicit */long long int) (signed char)-46);
        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) max(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (2500693155404711264ULL))))), (((/* implicit */unsigned long long int) arr_43 [i_17])))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_18 = 2; i_18 < 16; i_18 += 4) 
    {
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            {
                var_42 = ((/* implicit */signed char) 1214948747);
                arr_74 [i_18] = ((/* implicit */signed char) arr_69 [i_18]);
                arr_75 [i_18 - 2] [i_19] [i_18 - 1] = ((/* implicit */long long int) 2602747159U);
            }
        } 
    } 
}
