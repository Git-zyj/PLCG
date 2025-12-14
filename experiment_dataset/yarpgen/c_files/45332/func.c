/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45332
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
    var_20 = ((/* implicit */unsigned long long int) var_18);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1] [i_1 + 1])) : (arr_2 [i_0 + 1] [3])));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 23; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            arr_13 [i_2] [(signed char)15] [i_4] [8] [i_0 + 1] = ((/* implicit */int) arr_2 [i_3] [i_3]);
                            var_22 = ((/* implicit */unsigned long long int) ((unsigned int) var_3));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_18)) : (1421539553)));
                            arr_14 [i_2] [i_4] [(_Bool)1] [i_3] [i_4] [(short)1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)255))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_21 [i_7] [i_6] [i_7] [i_1] [(short)13] = (~(arr_3 [i_0] [i_1 + 1] [i_6]));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((_Bool) arr_8 [i_1] [i_1 + 1] [i_1 + 1])))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [i_1 + 1])) ? (arr_3 [i_0] [i_0 + 1] [i_1]) : (((/* implicit */int) (unsigned char)243))));
                var_25 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_1 - 1]))));
                var_26 = ((/* implicit */unsigned long long int) var_6);
            }
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_9 = 2; i_9 < 22; i_9 += 1) 
                {
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
                    arr_28 [i_0] [i_8] [i_8] [i_8] = ((/* implicit */long long int) 1421539553);
                }
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    arr_32 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) arr_23 [i_10] [i_8] [i_8] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_10] [i_10] [i_8] [i_1] [i_0] [i_0])))))));
                    arr_33 [i_1] [i_1] [i_8] = ((((/* implicit */_Bool) arr_8 [i_1 - 1] [11LL] [i_0])) ? (arr_8 [i_1 - 1] [i_1] [(short)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 1]))));
                    arr_34 [i_8] = ((/* implicit */short) (~(670268086230906732ULL)));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_38 [i_8] [i_1 - 1] = arr_4 [i_1] [i_1 + 1] [i_1 + 1];
                    arr_39 [i_0] [i_1] [i_0] [i_8] = ((/* implicit */short) ((((int) (unsigned char)255)) & (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_6)))))));
                    arr_40 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1023)) ? (((/* implicit */int) var_7)) : (881122008)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1 + 1]))) : (((((/* implicit */_Bool) var_13)) ? (arr_5 [i_0] [i_1] [i_8] [i_1]) : (((/* implicit */unsigned long long int) -1))))));
                    var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) ((signed char) var_1)))));
                    arr_41 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_12)))) ? (((/* implicit */int) ((short) (short)18599))) : (((/* implicit */int) ((signed char) 18446744073709551615ULL)))));
                }
                var_29 = ((/* implicit */unsigned short) (+(-1LL)));
                arr_42 [i_8] [i_1] [i_0] [i_8] = (+(((/* implicit */int) arr_26 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_1 - 1] [i_1 + 1])));
                arr_43 [i_8] [i_8] [i_0] [i_8] = ((/* implicit */short) ((((_Bool) var_18)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)137))));
            }
        }
        for (int i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        {
                            var_30 |= ((/* implicit */unsigned short) ((_Bool) arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]));
                            var_31 = (!(((/* implicit */_Bool) var_0)));
                            arr_58 [i_0] [i_0] [i_0] [(_Bool)1] = ((_Bool) var_13);
                            arr_59 [i_0] [i_12] [i_12] [i_14] [i_15] = ((/* implicit */unsigned long long int) var_11);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_16 = 4; i_16 < 21; i_16 += 3) 
                {
                    for (short i_17 = 3; i_17 < 23; i_17 += 2) 
                    {
                        {
                            arr_64 [i_12] [i_12] [i_16] [i_12] [i_12] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_17 - 2] [i_16 - 1] [i_16 - 2] [i_0 + 1])) >= (((/* implicit */int) var_18))));
                            var_32 *= ((/* implicit */signed char) var_4);
                            var_33 = ((/* implicit */long long int) ((int) arr_25 [i_12] [i_16] [i_13]));
                        }
                    } 
                } 
                arr_65 [i_0] [(_Bool)1] [0] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0)))))));
                var_34 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_12] [i_12] [i_13])) ? (((/* implicit */int) var_7)) : (var_19)))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 881121996)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))));
                var_35 = ((/* implicit */unsigned int) (-(((((-1) + (2147483647))) << (((((/* implicit */int) (unsigned char)12)) - (12)))))));
            }
            arr_66 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) -1));
            arr_67 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
            var_36 += 1987085112028252367ULL;
        }
        for (signed char i_18 = 1; i_18 < 21; i_18 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                for (signed char i_20 = 1; i_20 < 23; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 4) 
                    {
                        {
                            arr_80 [i_19] [i_20] [i_19] [i_18] [i_19] [i_19] = ((/* implicit */unsigned long long int) var_4);
                            arr_81 [i_0] [i_19] [i_19] [(unsigned short)3] = ((/* implicit */signed char) var_4);
                            arr_82 [i_0] [i_19] [i_0] [i_18] [i_19] [i_20] [11LL] = ((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */unsigned short) (~(var_5)));
            arr_83 [5] [i_18 + 1] [(_Bool)1] = ((((unsigned long long int) (short)-28561)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_22 = 3; i_22 < 23; i_22 += 3) 
        {
            for (short i_23 = 0; i_23 < 24; i_23 += 4) 
            {
                {
                    var_38 *= ((/* implicit */unsigned char) ((_Bool) -1));
                    arr_88 [(unsigned short)4] [(unsigned short)4] [i_23] [i_23] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0] [(short)0]))));
                }
            } 
        } 
        var_39 ^= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_19)))));
    }
    var_40 = ((/* implicit */int) ((((/* implicit */int) (short)15)) <= (((/* implicit */int) (short)511))));
    /* LoopNest 3 */
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        for (unsigned long long int i_25 = 3; i_25 < 22; i_25 += 2) 
        {
            for (unsigned long long int i_26 = 2; i_26 < 23; i_26 += 1) 
            {
                {
                    var_41 *= ((/* implicit */_Bool) (unsigned char)13);
                    var_42 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)243))));
                }
            } 
        } 
    } 
}
