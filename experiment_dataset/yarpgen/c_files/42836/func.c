/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42836
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [15LL] [i_1])) ? (((/* implicit */int) (short)-23752)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) max((var_16), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))) : (((arr_4 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (short)-30254))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_3 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (long long int i_3 = 3; i_3 < 12; i_3 += 1) 
        {
            for (signed char i_4 = 2; i_4 < 11; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_4] [i_4] [i_6])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_3 - 2]) >= (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 - 2] [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))))))))) : (((long long int) var_13))));
                                var_22 = ((/* implicit */signed char) arr_7 [i_7]);
                            }
                        } 
                    } 
                    var_23 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) % (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [(unsigned char)3] [i_4 + 2] [8] [(unsigned short)4] [i_2])) : (var_7)))) | (min((((/* implicit */unsigned long long int) var_12)), (var_8)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) arr_13 [i_9] [i_10] [i_11])) : (var_13))))));
                    var_25 = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_15 [i_9] [i_9] [i_9] [i_10] [i_9]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 10; i_13 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_9] [i_10] [i_13 + 1])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_9])) : (((/* implicit */int) (signed char)-4)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_11] [i_10])) : (((/* implicit */int) var_10)))))))));
                                arr_40 [i_9] [i_10] [i_11] [i_9] [i_13 - 1] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((unsigned char) 0)))))) - (((((/* implicit */_Bool) (signed char)115)) ? ((~(-8884251257080242317LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45)))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
                    {
                        arr_43 [i_9] [i_11] [i_11] &= ((/* implicit */signed char) max(((unsigned short)62057), (((/* implicit */unsigned short) (short)(-32767 - 1)))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10337431836303634197ULL)) ? (((/* implicit */int) (short)-6935)) : (((/* implicit */int) (short)30253))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_41 [i_10] [i_10] [i_10] [i_10] [(short)1]), (arr_41 [i_9] [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */int) ((((/* implicit */int) arr_41 [i_9] [i_10] [(signed char)4] [i_11] [i_14])) == (((/* implicit */int) arr_41 [i_9] [i_10] [i_10] [i_10] [i_14]))))) : (((/* implicit */int) min((arr_41 [(signed char)6] [i_10] [i_11] [i_14] [i_11]), (arr_41 [i_9] [i_9] [i_10] [i_11] [i_14])))))))));
                    }
                    for (short i_15 = 0; i_15 < 11; i_15 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned short) arr_41 [i_9] [(unsigned char)7] [i_10] [i_11] [i_15]);
                        arr_46 [i_9] [i_9] [i_9] = ((((/* implicit */_Bool) (+(var_9)))) ? ((~((-(arr_26 [i_15]))))) : (max((((/* implicit */int) var_10)), (((((/* implicit */int) (signed char)-44)) ^ (((/* implicit */int) (unsigned char)20)))))));
                    }
                    for (short i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_17 = 1; i_17 < 10; i_17 += 3) 
                        {
                            arr_52 [i_9] [i_9] [(signed char)8] [i_16] [i_16] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-26039))));
                            arr_53 [i_9] [i_10] [i_10] = (-(((/* implicit */int) (unsigned char)255)));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 1) /* same iter space */
                        {
                            var_30 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)3)) * (((/* implicit */int) arr_14 [i_9] [i_9])))))))), (((((/* implicit */_Bool) min((var_2), (var_2)))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_39 [i_16] [i_16])) : (var_16)))) : ((-(2065643889U)))))));
                            arr_57 [i_9] [i_9] [i_10] [i_10] [i_11] [i_9] [i_9] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))) ? ((((!(((/* implicit */_Bool) arr_33 [i_9])))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_10])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) <= (2249726856U))))));
                            var_31 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */unsigned int) min((var_9), (arr_48 [i_9] [i_9])))) : (2249726856U))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 1) /* same iter space */
                        {
                            var_32 = ((((((/* implicit */int) var_10)) == (((/* implicit */int) ((short) arr_48 [i_9] [i_19]))))) ? (((/* implicit */int) arr_0 [i_9])) : (((/* implicit */int) arr_44 [i_9] [i_10] [i_11] [i_16] [i_19])));
                            arr_60 [i_9] [i_9] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_39 [i_9] [i_9])) : (((/* implicit */int) min((arr_0 [i_9]), (arr_0 [i_10])))));
                            var_33 = ((/* implicit */unsigned short) arr_20 [6ULL] [i_10] [i_11] [i_9]);
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_16])) ? (((/* implicit */int) arr_39 [i_9] [i_9])) : (arr_26 [i_9])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65512)) ? (((((/* implicit */_Bool) (unsigned short)21827)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (short)30253)))) : (((/* implicit */int) (unsigned short)65535))))) : (((((_Bool) arr_38 [i_19] [i_16])) ? (((/* implicit */unsigned long long int) arr_9 [i_19] [i_11] [i_10])) : (arr_59 [i_9] [(short)2] [i_11] [i_16] [i_9] [i_19] [i_19])))));
                        }
                        var_35 = ((/* implicit */signed char) max((((unsigned long long int) min((-1LL), (((/* implicit */long long int) arr_37 [i_9] [i_10]))))), (((/* implicit */unsigned long long int) ((short) arr_47 [i_9] [(signed char)4] [i_10] [i_10] [i_11] [i_16])))));
                        arr_61 [i_9] [10U] [i_9] [i_16] = ((/* implicit */short) arr_39 [i_9] [i_9]);
                        var_36 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (short)31495)) ? (arr_50 [(signed char)3] [i_9] [(unsigned char)9] [i_11] [i_9] [i_16] [i_16]) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) (short)-31495)) - (((/* implicit */int) var_15)))))) | (((((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) max((((/* implicit */short) arr_24 [i_16])), (var_4))))))));
                    }
                }
                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) max((-1194820874), ((~((+(-219142585))))))))));
                /* LoopNest 3 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (long long int i_21 = 0; i_21 < 11; i_21 += 2) 
                    {
                        for (signed char i_22 = 0; i_22 < 11; i_22 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 474075839U)) ? (((/* implicit */unsigned long long int) min((arr_50 [i_9] [i_10] [i_10] [i_20] [i_9] [i_22] [i_22]), (-1865527584)))) : ((+(0ULL)))))) ? (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_10))))) == (arr_35 [i_9] [i_9] [i_20] [i_21] [i_20] [i_20])))) : (((/* implicit */int) arr_2 [8] [8] [8]))));
                                var_39 = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) arr_36 [i_9]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned short) (short)20535);
}
