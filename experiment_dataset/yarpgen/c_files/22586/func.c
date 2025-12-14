/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22586
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) (((((-(((/* implicit */int) (unsigned short)65529)))) + (2147483647))) >> (((((unsigned int) var_8)) - (3270166404U)))))) & (max((-5507675447317262324LL), (((/* implicit */long long int) (-(var_2))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [(short)24] = -5507675447317262304LL;
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            var_17 ^= ((/* implicit */unsigned char) var_13);
            var_18 -= ((/* implicit */long long int) ((((/* implicit */int) var_13)) <= ((+((-(((/* implicit */int) var_6))))))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
        {
            arr_10 [14U] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0]))));
            var_19 = ((/* implicit */unsigned char) arr_7 [i_2]);
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 1; i_4 < 24; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_4] = ((((/* implicit */_Bool) 4058010535231453048LL)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (unsigned short)45006)));
                            arr_22 [i_4] = ((((_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_3] [i_3] [i_3] [11] [i_6]))) : ((-(0U))));
                        }
                    } 
                } 
            } 
            arr_23 [i_0] [i_3] [i_0] |= ((/* implicit */short) var_6);
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    {
                        var_20 &= ((/* implicit */signed char) arr_6 [i_0] [i_7] [i_0]);
                        var_21 &= ((/* implicit */unsigned char) ((signed char) (unsigned char)201));
                        arr_29 [i_7] [(signed char)3] [i_0] [i_0] = ((/* implicit */long long int) (short)-1);
                    }
                } 
            } 
            arr_30 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
            arr_31 [i_0] [i_0] [4LL] = ((/* implicit */signed char) ((((-1582891517330421791LL) >= (((/* implicit */long long int) var_5)))) ? (arr_4 [i_3] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_9])) ? (1282912701U) : (((/* implicit */unsigned int) (~(var_15))))));
            arr_36 [i_0] [i_9] &= ((/* implicit */int) (-(var_8)));
            var_23 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_9])) / ((-(((/* implicit */int) (unsigned short)46529))))));
            var_24 = ((/* implicit */_Bool) min((var_24), (arr_12 [i_9] [i_0])));
        }
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 21; i_10 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_12 = 2; i_12 < 22; i_12 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (-4058010535231453048LL) : (((/* implicit */long long int) var_2))));
                /* LoopSeq 2 */
                for (short i_13 = 2; i_13 < 24; i_13 += 2) 
                {
                    var_26 += ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
                    arr_49 [i_12] |= ((/* implicit */_Bool) (unsigned char)58);
                    var_27 += ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)0))) > ((-9223372036854775807LL - 1LL)))) ? ((+(5507675447317262326LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_10 + 2] [i_11] [i_12] [i_12] [i_12 - 2] [i_13 - 2])))));
                    var_28 += ((/* implicit */short) ((((/* implicit */int) arr_8 [i_13] [i_13 - 1] [i_12 + 1])) | (var_15)));
                    var_29 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_16 [i_13] [i_13]))));
                }
                for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    var_30 += ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-32764))));
                    arr_54 [i_10] [i_11] [21] [2] [i_14] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((var_10) ? (arr_26 [i_14] [i_11] [i_12] [i_10 + 1]) : (((/* implicit */int) var_0))))) & (((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */long long int) -684155805)) : (-2612726652896563996LL)))));
                    var_31 += ((/* implicit */signed char) ((arr_26 [4ULL] [(short)11] [i_10 + 4] [i_12 - 2]) + (((/* implicit */int) (short)1023))));
                }
            }
            arr_55 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned int) arr_41 [(unsigned short)15] [i_11] [i_11]))))) || (((/* implicit */_Bool) arr_5 [(short)4] [i_10 - 1] [(short)4]))));
            arr_56 [i_11] = ((/* implicit */short) ((((/* implicit */int) arr_35 [i_10 + 2])) / ((-(((/* implicit */int) (signed char)96))))));
            var_32 = ((/* implicit */unsigned long long int) (signed char)24);
            var_33 = ((/* implicit */unsigned long long int) (unsigned char)255);
        }
        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 3) /* same iter space */
        {
            arr_59 [i_10] [i_10] [(short)21] = ((/* implicit */unsigned int) (-(var_2)));
            /* LoopSeq 2 */
            for (int i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
            {
                var_34 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [(short)0]))));
                var_35 = ((/* implicit */_Bool) (signed char)-85);
            }
            for (int i_17 = 0; i_17 < 25; i_17 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((arr_60 [i_10 + 3] [i_10] [i_10 - 1] [i_10 - 1]) >> (((var_2) % (255))))))));
                var_37 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4058010535231453048LL)))) || (((/* implicit */_Bool) -2612726652896563996LL))));
                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (+(307678672556934523ULL))))));
                var_39 &= ((/* implicit */int) ((arr_15 [i_10] [17ULL] [i_17] [i_10 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_10 + 1] [i_10 + 1] [(signed char)5])))));
            }
            arr_64 [22] [22] [(signed char)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_10] [23ULL] [i_10 + 2] [i_10] [i_10] [i_15])) ? (((/* implicit */int) arr_33 [i_15] [5LL] [i_10 + 2])) : (((/* implicit */int) arr_32 [i_10] [i_15] [i_10 + 2]))));
            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) arr_41 [9U] [i_10] [i_10]))));
        }
        for (unsigned int i_18 = 0; i_18 < 25; i_18 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 25; i_19 += 2) 
            {
                for (signed char i_20 = 1; i_20 < 24; i_20 += 3) 
                {
                    {
                        var_41 = ((/* implicit */short) (!(((var_10) || (((/* implicit */_Bool) var_4))))));
                        arr_77 [i_10] [i_10] [i_18] [i_19] [i_20] = ((/* implicit */int) ((((/* implicit */int) arr_8 [i_20 - 1] [i_20] [i_20])) < (((/* implicit */int) var_0))));
                        var_42 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_10])) ? (arr_51 [i_10 - 3] [i_20 + 1] [i_20 + 1] [i_20]) : (((/* implicit */int) var_9))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_21 = 0; i_21 < 25; i_21 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 25; i_22 += 3) 
                {
                    for (signed char i_23 = 2; i_23 < 24; i_23 += 1) 
                    {
                        {
                            var_43 &= ((/* implicit */signed char) (-(arr_80 [i_10] [i_10 - 3] [i_10 - 1])));
                            var_44 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)72)) - (var_1)));
                        }
                    } 
                } 
                arr_88 [i_10 + 4] = ((/* implicit */unsigned char) (+(arr_82 [i_10 + 3] [i_10 - 3] [i_18] [i_18] [i_18] [i_21])));
                var_45 = ((/* implicit */unsigned long long int) (short)26029);
            }
            var_46 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1282912720U)) || (((/* implicit */_Bool) var_15)))))) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_75 [i_10] [6U] [i_10] [i_18])))));
        }
        arr_89 [17ULL] = ((/* implicit */int) arr_0 [i_10 + 2]);
        var_47 = ((/* implicit */_Bool) (unsigned short)65535);
        var_48 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_10 - 1] [(_Bool)1] [(_Bool)1] [i_10])) ? (arr_4 [i_10 - 2] [i_10 + 3] [i_10 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_49 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) (short)-1)) & (((/* implicit */int) (short)13363)))) : (((/* implicit */int) (unsigned short)59213)))), (var_1)));
    var_50 = ((/* implicit */unsigned int) var_6);
    var_51 = ((/* implicit */int) var_12);
}
