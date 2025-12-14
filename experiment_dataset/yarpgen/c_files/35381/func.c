/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35381
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
    var_13 = ((/* implicit */signed char) var_11);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (var_9) : (((/* implicit */long long int) var_11))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) var_10);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((var_4) & (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-16476))) - (var_9)))) ? (((/* implicit */int) (short)-16479)) : ((+(((/* implicit */int) (signed char)-64))))))));
            arr_8 [1LL] [i_1] [i_0] = ((/* implicit */signed char) (short)16474);
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) ? (-678911907389809885LL) : (((/* implicit */long long int) arr_3 [i_0] [(signed char)3] [(signed char)3])))))))) : (((/* implicit */int) var_2)))))));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_17 = ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (((((((/* implicit */long long int) var_11)) - (var_5))) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))))));
        arr_11 [i_2] [i_2] = ((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-16474))));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */int) ((((arr_14 [i_3]) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        var_18 = ((/* implicit */unsigned long long int) (((-(((var_12) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)-16479))))))) >= (((/* implicit */long long int) ((((/* implicit */int) ((arr_9 [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) | (((/* implicit */int) ((((/* implicit */long long int) 1400582100U)) < (arr_14 [i_3])))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)235)) && (((/* implicit */_Bool) (signed char)80)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (short)17826)) ? (var_5) : (-1595201081428527578LL))))))));
            arr_21 [i_3] [i_4] [i_4] = ((/* implicit */int) arr_17 [i_3] [i_3]);
            var_20 -= ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)40))))));
        }
        arr_22 [i_3] [i_3] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) : (arr_15 [(short)15] [i_3]))) ^ (((((/* implicit */_Bool) arr_17 [i_3] [i_3])) ? (arr_9 [i_3]) : (1400582100U))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_3] [i_5]))) % (arr_15 [i_3] [i_3])));
            arr_26 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_5]))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_19 [i_3] [i_3])))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) arr_12 [i_5]);
                            arr_34 [i_3] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((((/* implicit */_Bool) 8380491146707499398LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8))) : (var_9)));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [8U] [i_9])) || (((/* implicit */_Bool) arr_18 [10LL] [i_3]))));
            /* LoopSeq 3 */
            for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                var_24 = ((/* implicit */int) arr_24 [i_3] [i_10]);
                arr_40 [i_3] [i_9] [i_10] = ((/* implicit */signed char) ((arr_30 [12LL] [i_10] [i_10] [i_3] [i_10]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_3]))))))));
                arr_41 [i_3] [14LL] [i_3] [i_3] = ((/* implicit */unsigned int) arr_18 [i_3] [11LL]);
            }
            for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */short) arr_9 [i_3]);
                            var_26 = ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_5)))) ? (arr_33 [i_11]) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)16479))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) ((arr_14 [i_3]) - (arr_12 [i_11])));
            }
            for (long long int i_14 = 3; i_14 < 15; i_14 += 2) 
            {
                arr_52 [i_3] [i_9] [i_3] [i_14] = (~(((/* implicit */int) ((2733390538U) <= (arr_9 [i_3])))));
                arr_53 [i_3] [i_9] [i_3] = ((short) ((((/* implicit */_Bool) var_5)) ? (8065242157149756601LL) : (((/* implicit */long long int) arr_29 [i_3] [i_3] [i_3]))));
            }
        }
        for (short i_15 = 0; i_15 < 17; i_15 += 1) 
        {
            var_28 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) == (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) 1599377140))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-59))) ^ (arr_19 [i_3] [i_15])))));
            arr_56 [i_3] [i_3] = ((/* implicit */short) ((arr_38 [i_3] [i_3] [i_15] [i_15]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [9] [i_3] [i_15])) ? (((/* implicit */int) ((8065242157149756601LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-16463)))))) : (2051186910))))));
            var_29 = ((/* implicit */unsigned short) max(((+(((((/* implicit */long long int) arr_33 [i_3])) + (var_5))))), (((/* implicit */long long int) arr_37 [i_3]))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_17 = 0; i_17 < 17; i_17 += 1) 
            {
                for (unsigned short i_18 = 2; i_18 < 15; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 17; i_19 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (-2051186929)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_5)))) ? (((/* implicit */int) arr_50 [i_3] [i_16] [i_3])) : ((~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_9 [i_3])))))))));
                            var_31 = ((/* implicit */signed char) ((((((/* implicit */int) arr_64 [i_3] [i_18] [i_18] [i_18] [i_18 + 2])) <= (((/* implicit */int) ((((/* implicit */int) (signed char)-35)) <= (((/* implicit */int) arr_59 [i_3] [i_16] [i_17]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_19]))) : (10026057071413546937ULL)));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */long long int) (!(((arr_36 [i_3] [i_16]) <= (arr_36 [i_3] [i_16])))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32744)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16505))) : (1556868628U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_3] [i_3] [5U] [7LL] [i_3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-16489))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45730))) / (arr_60 [i_16] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
        }
    }
}
