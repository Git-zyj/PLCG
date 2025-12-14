/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30687
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
    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [(_Bool)0]))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : ((~(((/* implicit */int) arr_1 [6U]))))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0 - 3]))) : (min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (_Bool)1))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)0);
        var_17 = -6165502996635503668LL;
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0 - 3]);
        arr_4 [i_0] [i_0 - 3] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (signed char i_1 = 1; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_1]))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)30739))))) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)-33)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_1])))))))));
                var_19 = ((/* implicit */_Bool) (signed char)40);
                arr_11 [i_1 + 1] [i_1] [i_3] [11LL] = ((/* implicit */short) min((((/* implicit */unsigned int) ((arr_0 [i_3 + 2]) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_2]))))), (((arr_0 [i_1 - 1]) ? (2570092844U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1])))))));
                arr_12 [i_1] [(unsigned short)2] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_9 [i_1] [i_2]))))));
            }
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))))) ? (((((/* implicit */_Bool) (short)-24466)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-64)))) : ((+(((/* implicit */int) arr_5 [i_1]))))));
            /* LoopSeq 4 */
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                arr_15 [i_1] [(unsigned char)3] [i_1] = ((arr_7 [i_1] [i_1]) ? (((/* implicit */int) ((signed char) arr_5 [i_1]))) : (((int) (_Bool)1)));
                var_21 = ((/* implicit */_Bool) min((var_21), ((!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-591309337822176827LL))))))));
            }
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                arr_18 [i_1] [i_2] [1ULL] = ((/* implicit */long long int) (~(((((_Bool) (_Bool)1)) ? ((~(((/* implicit */int) arr_17 [i_1] [i_2] [i_2] [i_5 + 1])))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))))));
                arr_19 [12U] [i_1] [i_5 + 1] = ((/* implicit */unsigned char) arr_13 [i_1] [(signed char)3] [i_1]);
                arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_0 [i_2]);
                arr_21 [i_1] [i_1] [i_1] [i_5 + 1] = (+(((((/* implicit */_Bool) arr_16 [i_5])) ? ((((_Bool)1) ? (arr_16 [i_5]) : (-302628033214463249LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1 - 1] [i_1 - 1] [i_5 + 1]))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)83))))) ? (201349009U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1]))))) ? (((int) (unsigned short)9480)) : (((((/* implicit */_Bool) (unsigned short)6858)) ? (((/* implicit */int) arr_14 [i_5] [i_2] [i_2] [i_1])) : (((/* implicit */int) arr_1 [i_1])))))))));
            }
            for (short i_6 = 2; i_6 < 12; i_6 += 3) 
            {
                var_23 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3677331603727011297ULL)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) arr_9 [(unsigned char)0] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [18ULL])))) : (4288675565650339605ULL)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 3; i_8 < 11; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-26272)) ? (arr_10 [i_1] [i_6 + 1] [i_6] [i_7]) : (arr_10 [i_1] [i_6 + 1] [(unsigned char)9] [(unsigned char)9])));
                        arr_30 [i_8] [i_1] [i_6 - 2] [8ULL] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_1 + 1] [i_1] [i_6]))));
                        var_25 = ((/* implicit */signed char) (~((~(arr_13 [i_1] [i_2] [i_1])))));
                        arr_31 [i_1 + 1] [i_2] [i_1 + 1] [i_1] [i_2] = ((/* implicit */signed char) ((unsigned char) arr_25 [i_8 + 3] [i_8] [i_1 + 1] [i_8 + 3] [i_1 + 1]));
                    }
                    var_26 = ((/* implicit */long long int) min((var_26), (((((/* implicit */_Bool) (-(12550685767850850018ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_7] [i_7]))) : ((~((-9223372036854775807LL - 1LL))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_10 = 3; i_10 < 11; i_10 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (signed char)-58))))));
                        var_28 = ((/* implicit */unsigned long long int) (+(-807992294)));
                        var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-52)), (arr_17 [i_9] [i_9] [i_6] [i_9])))), (((((/* implicit */_Bool) arr_28 [i_1] [i_1] [(signed char)8] [(signed char)8] [i_10])) ? (arr_33 [i_1 - 1]) : (arr_13 [i_1 - 1] [i_1 - 1] [i_9])))))) ? (((((/* implicit */_Bool) arr_36 [i_1 + 1] [i_6 - 2] [i_6 + 2] [i_10 - 1] [i_10])) ? (((((/* implicit */_Bool) (signed char)127)) ? (5896058305858701597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2539169749610642940ULL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_27 [i_1 - 1] [i_2] [i_6 + 1] [i_9] [i_10 + 1]))))));
                        var_30 = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_1] [i_2] [i_1] [i_9] [i_10 - 3]))))), ((-(((/* implicit */int) arr_17 [i_1] [(_Bool)1] [i_10] [(_Bool)1])))))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (signed char)(-127 - 1)))));
                    }
                    for (long long int i_11 = 3; i_11 < 11; i_11 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */int) max(((+((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_16 [i_9])) : (549755813887ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1])))))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((unsigned int) (~(((((/* implicit */_Bool) 1697191308U)) ? (((/* implicit */int) arr_32 [i_1] [i_2] [i_2] [i_9] [i_11 + 1])) : (((/* implicit */int) (unsigned short)53217))))))))));
                        arr_40 [i_1] [i_2] [i_1] [i_9] [i_1] = ((/* implicit */long long int) min(((-(638799851))), ((~((~(((/* implicit */int) (unsigned char)105))))))));
                    }
                    var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)74))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        var_35 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)24226))));
                        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (!(((/* implicit */_Bool) 3332321076899216290ULL)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_45 [i_1] [8ULL] [i_6] [8ULL] [i_1] = ((/* implicit */signed char) ((unsigned long long int) arr_39 [12ULL] [i_2] [i_9] [i_13 - 1] [i_13 - 1]));
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1] [i_6] [i_9])) : (((/* implicit */int) arr_1 [i_9])))))));
                        arr_46 [i_1] [i_9] [i_6] [i_2] [i_1] = ((/* implicit */unsigned int) ((unsigned short) arr_24 [i_1] [i_13 - 1] [i_2] [(unsigned short)0] [i_1]));
                        arr_47 [i_1] [i_9] [(signed char)10] [i_9] [i_1] [i_1 + 1] = ((/* implicit */short) arr_7 [i_1 + 1] [i_1]);
                        var_38 = ((/* implicit */unsigned short) ((unsigned int) arr_17 [i_1] [i_6 - 2] [7ULL] [7ULL]));
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1] [(unsigned short)11])) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_26 [i_1 + 1] [i_6 + 1] [i_6 + 1] [i_6] [i_14 - 1] [i_1])) : (((/* implicit */int) arr_26 [i_1 - 1] [i_6 + 1] [i_14] [(unsigned short)11] [i_14 - 1] [i_1])))) : ((-(((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned short)34302))))))));
                        arr_52 [i_2] [i_6 - 1] [i_1] = max(((~(5896058305858701604ULL))), (((/* implicit */unsigned long long int) arr_48 [i_1] [i_1] [i_9] [i_14 - 1])));
                    }
                    var_40 = 7642794638652136772LL;
                }
            }
            for (short i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                var_41 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49493)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (signed char)-69))))) ? ((+(12682914853568097857ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_1 + 1] [i_1])))))) ? (((/* implicit */int) arr_8 [i_1] [i_2] [i_15])) : (((/* implicit */int) arr_5 [i_15]))));
                arr_55 [i_15] [i_1] [i_1] [i_1 - 1] = ((((/* implicit */_Bool) arr_38 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_1] [i_1 + 1] [i_2] [i_2] [i_15])) ? (arr_10 [i_1 - 1] [i_1 - 1] [8ULL] [i_15]) : (((/* implicit */int) arr_24 [i_1] [i_2] [i_15] [i_1 + 1] [i_1 + 1]))))) : ((~(14378652749412034880ULL))));
            }
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_42 = ((_Bool) -1504951);
            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) (-(max(((+(((/* implicit */int) (unsigned short)49153)))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [(_Bool)0])), (arr_28 [i_1 - 1] [i_16] [i_16] [i_16] [i_16])))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_17 = 1; i_17 < 12; i_17 += 2) 
            {
                var_44 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [1LL] [i_1])) ? (arr_25 [i_1 - 1] [3] [i_16] [(unsigned char)10] [i_17 + 2]) : (((/* implicit */unsigned long long int) arr_58 [i_1] [2] [(signed char)12]))))) ? (((/* implicit */int) arr_23 [i_1] [i_17])) : ((+(((/* implicit */int) (short)17956))))));
                arr_60 [i_1] [i_1] [i_16] [i_17] = ((/* implicit */short) (((!((_Bool)1))) ? (((/* implicit */int) arr_28 [i_1 - 1] [i_1 - 1] [i_17 + 1] [i_17 + 1] [i_17 + 2])) : (((/* implicit */int) (_Bool)1))));
            }
            var_45 = ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) arr_23 [9LL] [i_16])))) ? (((((/* implicit */_Bool) -194252274)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_16]))) : (arr_59 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_16] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [(unsigned char)3])))))));
        }
        arr_61 [i_1] = ((/* implicit */short) arr_10 [i_1] [i_1] [8ULL] [i_1]);
        arr_62 [i_1 + 1] [i_1] = ((/* implicit */unsigned short) min((4968041991322046940LL), (((/* implicit */long long int) (unsigned char)176))));
    }
    /* vectorizable */
    for (signed char i_18 = 1; i_18 < 13; i_18 += 4) /* same iter space */
    {
        arr_66 [(unsigned char)4] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 932217920U)))) ? (((/* implicit */int) arr_44 [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18] [i_18 + 1] [i_18 - 1] [(short)8])) : (((/* implicit */int) arr_42 [i_18] [i_18 + 1] [i_18] [3LL]))));
        var_46 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)21911))));
    }
    var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((signed char) var_12))) : (((/* implicit */int) var_3))))) : (var_9)));
}
