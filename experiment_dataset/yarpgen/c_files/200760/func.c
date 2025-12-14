/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200760
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min(((-(-879539655))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))))) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_3)) : (var_10)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = (~((+(((/* implicit */int) var_14)))));
                    arr_9 [i_0] [i_1 + 3] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2 - 2] [i_1 - 2]))))), (min((((/* implicit */long long int) arr_4 [i_1] [i_1] [i_2 - 2])), (arr_8 [i_2 + 3] [i_1 + 4])))));
                    arr_10 [2] [i_1] [i_1] = ((/* implicit */unsigned char) (+(2147483647)));
                    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 4] [(_Bool)1])) ? (arr_0 [i_1] [i_1 + 2]) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) (-(2113701043U)))) : ((-(arr_0 [i_1 + 3] [i_1 - 2])))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((var_0) ? (arr_11 [i_3]) : (((/* implicit */long long int) (-(((/* implicit */int) (short)8829)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            var_19 += (-(4294967295U));
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4])) ? (arr_5 [i_4]) : (arr_5 [i_4])));
        }
        var_21 = ((((/* implicit */_Bool) ((short) var_14))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) && (((/* implicit */_Bool) arr_8 [i_3] [i_3])))))) : (((((/* implicit */_Bool) arr_8 [11U] [11U])) ? (arr_8 [i_3] [(unsigned short)7]) : (((/* implicit */long long int) var_13)))));
        arr_16 [i_3] = ((/* implicit */long long int) (!((_Bool)1)));
    }
    for (unsigned char i_5 = 2; i_5 < 17; i_5 += 2) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned short) ((int) var_7));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2181266253U))))))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (unsigned int i_9 = 3; i_9 < 19; i_9 += 2) 
                    {
                        {
                            var_24 &= ((/* implicit */unsigned long long int) ((long long int) 14972939465971397737ULL));
                            var_25 *= ((/* implicit */short) ((((/* implicit */unsigned int) 691851593)) - (2181266253U)));
                            arr_28 [i_8] [i_8] [i_7] [i_7] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_5] [i_5] [(unsigned short)8])) << (((((/* implicit */int) var_7)) - (10451)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */short) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((((/* implicit */_Bool) arr_32 [i_5] [i_10] [20ULL])) ? (((/* implicit */unsigned long long int) var_6)) : (var_10))) - (18446744073330069806ULL)))));
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        var_27 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_24 [i_12] [i_12] [(short)4] [i_12])) ? (var_12) : (((/* implicit */int) arr_3 [i_10]))))));
                        arr_38 [i_5] [i_6] [i_6] [i_10] [i_11] [i_11] [i_5] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_24 [i_5] [20] [i_5] [i_5])) >= (((/* implicit */unsigned long long int) ((int) var_1)))));
                    }
                    var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_10))) ? ((-(((/* implicit */int) arr_30 [i_5] [i_6] [i_10])))) : (((/* implicit */int) var_2))));
                    arr_39 [i_11] [i_10] [i_5] = ((/* implicit */long long int) arr_29 [i_5] [i_6] [i_10] [i_11]);
                    arr_40 [i_5 + 3] [i_6] [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (-953988542) : (((/* implicit */int) (short)-12616))));
                    arr_41 [i_5 + 1] [i_5] [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_5 + 2]))));
                }
                for (short i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        var_29 *= ((/* implicit */_Bool) ((arr_4 [i_5 - 1] [i_14] [i_10]) + (((/* implicit */int) ((((/* implicit */int) var_5)) > (var_12))))));
                        var_30 = ((/* implicit */short) min((var_30), (var_2)));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        var_31 ^= ((/* implicit */unsigned int) arr_30 [i_5] [i_5 - 2] [i_5]);
                        arr_49 [i_5] [i_6] [i_10] [i_10] [i_13] [i_15] = ((/* implicit */short) arr_2 [i_5] [1LL]);
                        arr_50 [i_5] [i_5] [i_5] [i_5 - 2] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_15 [i_15])))));
                    }
                    arr_51 [i_5] [i_10] [i_10] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_44 [10ULL] [i_6] [i_6] [10ULL])))));
                    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) arr_2 [i_5] [(short)15]))));
                }
            }
            /* vectorizable */
            for (unsigned short i_16 = 4; i_16 < 20; i_16 += 4) 
            {
                var_33 = ((/* implicit */int) ((((0U) >> (((/* implicit */int) (_Bool)1)))) & (((/* implicit */unsigned int) 691851593))));
                var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_1)))))));
                var_35 += ((/* implicit */unsigned int) ((int) (signed char)14));
            }
            arr_55 [i_6] &= ((/* implicit */short) min(((unsigned short)62969), (((/* implicit */unsigned short) var_0))));
            var_36 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_36 [i_5] [i_6]))));
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (-(953988542))))) ? (((((/* implicit */_Bool) ((arr_13 [(_Bool)1] [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_5] [i_6] [20])))))) ? (((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */int) (short)27143)) : (arr_4 [i_5 + 4] [i_5] [i_5 - 1]))) : ((+(((/* implicit */int) arr_33 [i_5] [i_5] [17])))))) : (((/* implicit */int) var_1))));
            var_38 += ((/* implicit */unsigned int) ((((arr_4 [i_5 + 1] [i_5] [i_5 - 1]) - (arr_4 [i_5 + 3] [i_5] [i_5 + 2]))) + (((((/* implicit */_Bool) 889976562642549373LL)) ? (-1) : (((/* implicit */int) (unsigned short)54313))))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 2) 
        {
            var_39 |= ((/* implicit */int) ((_Bool) min((((((/* implicit */int) (short)3)) / (((/* implicit */int) (short)13119)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)19041))))))));
            arr_58 [8ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2113701043U)) / (((((/* implicit */_Bool) arr_27 [i_5 - 1] [i_5 + 3] [i_5 + 1] [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5 - 1])) ? (11803280443697608738ULL) : (((/* implicit */unsigned long long int) -953988543))))));
        }
    }
    for (unsigned char i_18 = 2; i_18 < 17; i_18 += 2) /* same iter space */
    {
        var_40 ^= ((/* implicit */_Bool) var_13);
        var_41 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_20 [i_18 - 1] [i_18 - 2])) ? (arr_20 [i_18 - 1] [i_18 + 4]) : (arr_20 [i_18 - 2] [i_18 - 2])))));
    }
    var_42 *= 3458764513820540928ULL;
}
