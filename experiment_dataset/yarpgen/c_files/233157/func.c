/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233157
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (~(4036631819U))))) > (((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_4 [i_1] = ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((unsigned long long int) (signed char)29)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))))));
            var_17 = (-(var_11));
        }
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
        {
            arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_2]))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (var_11) : (var_1)));
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
            arr_9 [i_0] [i_0] [i_0] = ((short) ((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        }
        for (long long int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-122))));
            var_20 = (!(((/* implicit */_Bool) var_6)));
            arr_12 [i_0] [i_3] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [2ULL] [i_3]))) ^ (((var_12) ? (var_8) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_3] [i_0])))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_3] [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_3]))))));
        }
        arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_0] [3ULL])) ? (var_5) : (((/* implicit */unsigned long long int) var_9)))) + (((unsigned long long int) arr_5 [i_0] [i_0] [i_0]))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_22 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (arr_14 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3781314949U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_11)))))))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_4] [i_4])))))));
        /* LoopSeq 3 */
        for (long long int i_5 = 3; i_5 < 9; i_5 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_13)))) ? (((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (short i_7 = 3; i_7 < 9; i_7 += 2) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_25 = max((max((-7721624385244345710LL), (((/* implicit */long long int) arr_24 [i_4] [i_5])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(2365591813U)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_13))))))));
                            var_26 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) var_12))))), (((((/* implicit */_Bool) arr_24 [i_4] [i_5 + 3])) ? (((/* implicit */long long int) arr_24 [i_5] [i_7 - 3])) : (var_3)))));
                            var_27 = ((/* implicit */unsigned long long int) var_2);
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) min((((((/* implicit */_Bool) 282095083U)) ? (min((((/* implicit */unsigned long long int) arr_22 [i_4] [i_4] [0ULL] [i_4])), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((long long int) var_6))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_10), (var_12))))))))))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) max((((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) var_10))))) || (((/* implicit */_Bool) (~(var_0)))))), (max((arr_10 [i_5 - 3]), (arr_10 [i_5 - 2]))))))));
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_9])) ? (var_11) : (arr_5 [i_4] [i_4] [i_9])));
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                            arr_38 [i_4] [(signed char)10] [i_4] [i_11] [7ULL] = ((/* implicit */signed char) var_7);
                            var_32 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_4] [i_12] [i_10] [i_11]))));
                            var_33 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) arr_19 [0LL] [i_11] [0LL] [i_11])))));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_9])) + (((/* implicit */int) arr_10 [i_4]))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            var_35 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) arr_31 [i_13] [i_13] [i_13] [i_13])) : (arr_27 [i_4] [i_4] [i_4]))), (((((/* implicit */_Bool) arr_27 [i_4] [6U] [i_13])) ? (arr_27 [i_4] [i_13] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_13])))))));
            /* LoopSeq 3 */
            for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                var_36 |= ((/* implicit */unsigned char) ((long long int) min((14550026105927391300ULL), (((/* implicit */unsigned long long int) var_9)))));
                var_37 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */long long int) arr_6 [i_4] [i_13])) == (arr_18 [i_4] [i_4] [i_14])))), (((var_12) ? (arr_16 [i_4]) : (((/* implicit */long long int) arr_6 [i_4] [10ULL]))))));
            }
            for (unsigned short i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_31 [(_Bool)1] [i_4] [11ULL] [i_4])))) ? (min((((/* implicit */unsigned int) (unsigned char)251)), (var_11))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))))) - (min((arr_40 [i_13]), (((/* implicit */long long int) arr_0 [i_13] [i_4]))))));
                var_39 = ((/* implicit */signed char) 2261224578096913427LL);
            }
            for (unsigned short i_16 = 0; i_16 < 12; i_16 += 1) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned long long int) ((long long int) max((((var_0) == (((/* implicit */unsigned long long int) arr_45 [i_13] [i_13])))), ((!(((/* implicit */_Bool) var_7)))))));
                var_41 -= ((((/* implicit */unsigned int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) arr_42 [i_4])))))) - (((((/* implicit */_Bool) arr_42 [i_4])) ? (arr_42 [i_4]) : (arr_42 [i_4]))));
                arr_50 [(unsigned short)9] [i_13] [(unsigned short)9] [i_13] = ((/* implicit */unsigned int) ((unsigned long long int) (~(((((/* implicit */_Bool) arr_17 [i_13] [i_13])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_32 [i_4] [i_4] [i_4] [i_4])))))));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) 
            {
                for (short i_18 = 1; i_18 < 11; i_18 += 2) 
                {
                    for (unsigned int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        {
                            var_42 -= (+(((((/* implicit */unsigned long long int) max((4413943537650412492LL), (((/* implicit */long long int) arr_32 [i_4] [i_4] [i_4] [i_4]))))) + (min((arr_47 [i_13] [i_17] [i_18] [i_19]), (((/* implicit */unsigned long long int) var_14)))))));
                            var_43 = ((/* implicit */signed char) (-(((var_0) ^ (((/* implicit */unsigned long long int) arr_53 [i_17] [i_17] [i_18 + 1] [i_17]))))));
                            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 667385542U)), (arr_14 [i_19])))) ? ((-(arr_14 [i_19]))) : (var_8)));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 3) 
    {
        arr_63 [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_60 [i_20] [i_20]))))))))) <= ((-(((2360119892U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
        arr_64 [i_20] [i_20] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((long long int) var_2))), (var_5))), (arr_61 [i_20] [i_20])));
    }
}
