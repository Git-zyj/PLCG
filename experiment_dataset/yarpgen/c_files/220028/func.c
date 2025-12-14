/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220028
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
    var_15 = ((/* implicit */short) (((~(min((var_14), (((/* implicit */unsigned int) var_13)))))) << (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-125))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = (!(((/* implicit */_Bool) (signed char)-4)));
        var_16 = ((/* implicit */signed char) (-(var_3)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)-119))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-(((unsigned long long int) var_9)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) >> (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_14))) - (19U))))))));
                var_19 -= ((/* implicit */unsigned short) var_0);
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)194))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((var_5) ? (((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                        var_23 = ((/* implicit */unsigned int) var_10);
                        var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)118))));
                    }
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_6))));
                        var_26 = ((/* implicit */long long int) ((unsigned short) var_11));
                        var_27 = ((((/* implicit */_Bool) 160795876U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3));
                    }
                }
                for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    arr_20 [i_6] [i_2] [i_2] [i_0] [i_1] [i_0] = (-(((/* implicit */int) var_1)));
                    var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-120))));
                    arr_21 [i_2] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        arr_24 [i_0] [i_1] [i_0] [i_1] [i_7] = ((/* implicit */short) (-(((/* implicit */int) var_6))));
                        var_29 = ((/* implicit */unsigned char) ((var_5) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))));
                    }
                }
                arr_25 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) var_12);
            }
        }
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                arr_31 [i_8] = ((/* implicit */unsigned char) (~((-(var_10)))));
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) var_0))));
                            arr_37 [i_8] = ((/* implicit */unsigned int) min((459250552783772986ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((int) var_12)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    for (short i_13 = 4; i_13 < 9; i_13 += 4) 
                    {
                        {
                            var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) var_13))))) << (((((/* implicit */int) var_12)) - (16)))))) : (var_10)));
                            var_33 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_7)) << (((/* implicit */int) var_9))))));
                            var_34 |= ((/* implicit */signed char) ((((((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_0))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (signed char)32)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) - (2786677451U)))));
                        }
                    } 
                } 
            }
            arr_42 [i_0] [3ULL] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-7396))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-4))))))) : ((-(((/* implicit */int) var_8))))));
            arr_43 [i_8] = ((/* implicit */unsigned char) (-((~((+(var_14)))))));
        }
    }
    var_35 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 11608059196499982387ULL)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) (signed char)-122)))) : (((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))))));
    /* LoopNest 2 */
    for (unsigned int i_14 = 1; i_14 < 20; i_14 += 3) 
    {
        for (unsigned long long int i_15 = 1; i_15 < 21; i_15 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_18 = 4; i_18 < 20; i_18 += 4) 
                        {
                            var_36 = ((/* implicit */signed char) ((long long int) var_3));
                            var_37 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_0)))));
                            var_38 = ((/* implicit */short) var_10);
                        }
                        arr_58 [1ULL] [i_14] [i_16] [i_14] [i_14] = ((/* implicit */_Bool) ((long long int) var_3));
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 4; i_19 < 20; i_19 += 3) 
                        {
                            arr_62 [i_14] [(unsigned char)4] [i_16] [i_17] [(unsigned char)19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                            var_39 |= ((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_13))));
                            arr_63 [i_14] [i_15] [i_16] [i_14] [i_16] = ((/* implicit */unsigned long long int) (signed char)42);
                        }
                        arr_64 [i_14 + 1] [i_15] [i_17] [(unsigned short)19] [i_14] [i_14 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_5))));
                    }
                    var_40 = ((/* implicit */unsigned int) var_9);
                    arr_65 [i_14] [i_14 - 1] [i_15] [i_14 - 1] = ((/* implicit */_Bool) ((unsigned long long int) var_7));
                }
                var_41 *= ((/* implicit */unsigned int) var_11);
                arr_66 [(unsigned short)14] [i_14] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(var_5))))));
            }
        } 
    } 
    var_42 = var_5;
}
