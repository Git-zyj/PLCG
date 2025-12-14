/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3964
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
    var_16 = ((/* implicit */int) ((unsigned int) var_15));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) var_9);
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((int) var_1))));
                /* LoopSeq 1 */
                for (signed char i_3 = 2; i_3 < 24; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -361727589)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [(signed char)15] [i_0])))));
                        var_19 = ((/* implicit */short) (~(((long long int) (unsigned char)201))));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_3 - 2] [i_0]);
                        var_21 = ((/* implicit */unsigned char) (_Bool)1);
                        var_22 = ((/* implicit */unsigned short) var_9);
                        var_23 = var_0;
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 2; i_6 < 24; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)45)) - (361727576)));
                        var_25 = ((/* implicit */unsigned long long int) var_13);
                        arr_21 [i_0] [i_1] [i_2] [i_3 - 1] [5U] [5U] = ((/* implicit */unsigned long long int) ((361727591) >> (((arr_3 [i_0 - 1]) - (1626896614U)))));
                    }
                    for (long long int i_7 = 2; i_7 < 22; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) | (var_14))) : (32640LL)));
                        var_27 = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_0]))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_0] [i_0] [i_2] [i_3] [i_0])) % (1184203674)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((~(4294967295U)))));
                        var_29 = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)184));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_3 - 1] [i_0]))) + (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_8])) ? (-582017971301606803LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                    }
                }
            }
            for (unsigned char i_9 = 1; i_9 < 22; i_9 += 4) 
            {
                arr_32 [i_0 - 1] [i_0] = ((/* implicit */int) (+(var_5)));
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -582017971301606803LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_34 [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_0]))));
                    var_32 = ((/* implicit */_Bool) ((int) (_Bool)0));
                    arr_35 [i_0 - 1] [(signed char)2] [i_9] [i_0] = ((/* implicit */_Bool) ((arr_22 [i_0] [i_0 + 1] [13U] [i_0 + 1] [i_0 + 1] [i_9 + 2] [(unsigned char)13]) % (arr_22 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_9 + 1] [6])));
                    arr_36 [i_0] [i_1] [i_9 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((-1917097905) + (2147483647))) >> (((((/* implicit */int) (signed char)-120)) + (129)))))) ? (((/* implicit */int) arr_20 [i_0])) : (-1522644291)));
                }
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_12 = 2; i_12 < 23; i_12 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */int) arr_25 [(unsigned char)17] [i_1] [i_9 + 1] [i_1] [i_9 + 1])) >> (((/* implicit */int) (_Bool)0))));
                        var_34 = ((/* implicit */short) ((((/* implicit */int) (short)-1)) >= (((/* implicit */int) arr_37 [i_0 + 1] [i_0 + 1] [i_9 - 1] [i_11] [i_12]))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_0 - 2] [i_0] [i_9 + 3])) ? (((/* implicit */int) arr_33 [i_0 + 1] [i_0] [i_9 + 2])) : (((/* implicit */int) var_11))));
                    }
                    for (signed char i_13 = 2; i_13 < 23; i_13 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned int) var_13);
                        var_37 = ((((/* implicit */_Bool) var_13)) ? (arr_6 [i_0 + 1] [i_0] [i_11]) : (((/* implicit */int) (unsigned char)201)));
                        arr_44 [i_0] [i_9] [i_11] = ((/* implicit */long long int) ((short) arr_23 [i_0]));
                        var_38 = ((/* implicit */unsigned short) (+((-9223372036854775807LL - 1LL))));
                    }
                    for (signed char i_14 = 2; i_14 < 23; i_14 += 1) /* same iter space */
                    {
                        var_39 = ((/* implicit */_Bool) ((var_14) - (arr_29 [i_0])));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_11] [i_0])) ? (-1522644299) : (((/* implicit */int) arr_10 [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (-1))))) : (((((/* implicit */_Bool) var_7)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_0] [(short)11] [23LL] [i_14])))))));
                        arr_47 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)10242)) * (((/* implicit */int) arr_39 [i_0 - 1] [i_1] [i_1] [i_1] [i_0] [i_14 + 1]))));
                        var_41 = ((/* implicit */unsigned short) ((4294967285U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-20959)))));
                    }
                    var_42 = ((/* implicit */long long int) -780776456);
                }
            }
            for (short i_15 = 2; i_15 < 24; i_15 += 3) 
            {
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_15])) ? (arr_22 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_15] [i_15]) : (((/* implicit */int) var_11))));
                var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_24 [(unsigned short)22] [(short)11] [i_0] [i_0 - 2] [i_15 - 2] [i_15 - 2]))));
            }
        }
        for (short i_16 = 0; i_16 < 25; i_16 += 3) /* same iter space */
        {
            var_45 = ((/* implicit */long long int) (~(var_9)));
            var_46 = ((long long int) ((((/* implicit */_Bool) arr_29 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)48))) : (arr_50 [i_0] [i_16] [i_16])));
            /* LoopSeq 4 */
            for (short i_17 = 2; i_17 < 22; i_17 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_47 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (4294967295U)))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)9]))) : (arr_3 [i_18]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))));
                    var_48 = ((unsigned long long int) arr_34 [i_0] [i_0] [i_0] [i_17] [i_0]);
                    var_49 = ((/* implicit */unsigned long long int) var_15);
                }
                arr_58 [i_0 - 2] [i_0] [i_16] [i_17] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)6))));
            }
            for (unsigned char i_19 = 1; i_19 < 23; i_19 += 2) 
            {
                var_50 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                var_51 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])))));
            }
            for (unsigned short i_20 = 0; i_20 < 25; i_20 += 4) 
            {
                var_52 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_40 [(short)1] [(short)1] [i_0] [7LL] [7LL] [i_20])) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) var_2))))));
                var_53 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)1)) >= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned short)65535))))));
            }
            for (int i_21 = 3; i_21 < 23; i_21 += 2) 
            {
                var_54 = ((/* implicit */signed char) 4294967290U);
                var_55 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) % (var_0)));
                var_56 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
                arr_66 [18LL] [i_0] [i_0] [i_21] = ((/* implicit */unsigned long long int) var_2);
            }
        }
        var_57 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)2048)) ? (((/* implicit */int) (unsigned short)18939)) : (((/* implicit */int) (unsigned char)25))));
    }
    var_58 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)249))));
}
