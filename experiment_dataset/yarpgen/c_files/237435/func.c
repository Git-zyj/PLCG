/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237435
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) & (arr_0 [i_0]));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_21 = ((/* implicit */short) var_9);
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) var_14);
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_5 [i_0] [i_1] [i_2] [i_2]))));
                    arr_11 [6U] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned long long int) arr_9 [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_2]));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) % ((-(((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_0]))))));
                    var_24 -= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_2] [i_1] [i_2] [i_3 - 1]))));
                }
                for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    var_25 ^= ((/* implicit */signed char) (+(((((/* implicit */int) var_19)) ^ (((/* implicit */int) (unsigned short)59182))))));
                    var_26 = ((short) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_4]))));
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) arr_5 [(signed char)18] [(signed char)18] [i_2] [i_4]);
                        var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-27))));
                        var_29 -= ((/* implicit */signed char) arr_15 [i_0] [i_1] [i_0] [i_4] [i_5]);
                    }
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_4] [i_6])) : ((-(((/* implicit */int) var_4))))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_4])) ^ (((/* implicit */int) arr_4 [i_1] [i_4]))));
                    }
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) >> (((((/* implicit */int) arr_16 [i_7] [i_4] [i_2] [i_2] [(signed char)7] [i_0])) - (25818))))) >> (((((/* implicit */int) ((unsigned char) arr_4 [i_1] [i_7]))) - (60)))));
                        var_33 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)97))))));
                    }
                    var_34 -= ((/* implicit */unsigned char) var_4);
                }
                arr_21 [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_2] [i_2] [i_1] [i_0]);
                /* LoopSeq 1 */
                for (unsigned char i_8 = 2; i_8 < 18; i_8 += 1) 
                {
                    var_35 = ((/* implicit */short) arr_5 [(unsigned short)6] [i_2] [(unsigned char)10] [i_0]);
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_12 [i_0] [(signed char)6] [i_0] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_2] [i_8] [i_1])))))))));
                }
                var_37 -= ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [17LL]))));
            }
            for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_24 [i_9] [i_1]))));
                arr_29 [(unsigned short)11] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_1]))) & (arr_5 [i_9] [i_1] [i_1] [i_0])));
                var_38 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)97));
            }
            for (short i_10 = 2; i_10 < 19; i_10 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                    var_40 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (signed char)44))))));
                }
                for (unsigned int i_12 = 3; i_12 < 19; i_12 += 2) 
                {
                    arr_36 [10ULL] [i_1] [i_10] [i_12] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_12])))) ? ((~(((/* implicit */int) (unsigned char)97)))) : ((-(((/* implicit */int) (short)32767))))));
                    var_41 -= ((/* implicit */long long int) var_15);
                    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_22 [i_0] [i_0]))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_16 [i_10] [i_10] [i_10 - 2] [i_10] [i_10] [i_10]))));
                }
                arr_37 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_35 [12ULL])) >> (((arr_3 [i_1] [i_1]) - (2171160698U)))));
            }
            for (unsigned char i_13 = 2; i_13 < 19; i_13 += 3) 
            {
                var_43 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_13 - 1] [i_13 + 1] [i_13 + 1])) ? (((/* implicit */int) arr_14 [i_13] [i_0] [i_13 + 1] [i_13] [i_13 - 1])) : (((/* implicit */int) arr_19 [i_13] [i_13] [i_13] [i_13] [i_13 - 1] [i_13 - 1]))));
                /* LoopSeq 2 */
                for (short i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 2; i_15 < 17; i_15 += 3) 
                    {
                        var_44 *= ((/* implicit */short) arr_2 [i_14]);
                        var_45 = ((/* implicit */unsigned long long int) arr_23 [i_15 + 1] [i_14] [i_0] [i_13] [i_1] [i_0]);
                        var_46 = ((/* implicit */int) (unsigned char)159);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) <= (var_16))))) <= (7818980145307085409ULL)));
                        arr_54 [i_0] [i_0] [i_0] [i_14] [i_16] = ((/* implicit */unsigned char) var_12);
                    }
                }
                for (int i_17 = 2; i_17 < 19; i_17 += 1) 
                {
                    var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) (-(var_10))))));
                    var_49 = ((/* implicit */int) arr_17 [i_0] [i_0] [(signed char)4] [i_0] [i_0]);
                    var_50 = ((/* implicit */short) ((((/* implicit */_Bool) (short)7782)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) >= (6097676325493642346ULL))))) : ((~(4294967295U)))));
                    var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_13 + 1] [i_13 + 1])) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))));
                }
            }
            var_52 = ((/* implicit */int) max((var_52), (((/* implicit */int) ((unsigned int) arr_1 [i_1])))));
        }
        var_53 = arr_57 [i_0] [i_0] [i_0] [i_0];
        /* LoopSeq 1 */
        for (unsigned int i_18 = 1; i_18 < 19; i_18 += 2) 
        {
            var_54 -= ((/* implicit */signed char) ((long long int) (signed char)-1));
            var_55 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_18 - 1] [i_18] [i_18 - 1] [i_18 - 1] [i_18 + 1]))) >= (18446744073709551615ULL)));
        }
    }
    var_56 = ((/* implicit */unsigned char) 325253698U);
}
