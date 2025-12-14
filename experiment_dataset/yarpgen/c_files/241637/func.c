/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241637
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 &= ((/* implicit */int) arr_5 [i_0]);
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_1]))) ? (((((/* implicit */_Bool) (~(4291512838U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((~(arr_0 [(unsigned char)22]))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 949093123)) ? (((/* implicit */int) (short)-20006)) : ((+(((/* implicit */int) arr_2 [i_2] [i_2]))))))));
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
        {
            var_20 *= ((/* implicit */_Bool) arr_8 [i_2]);
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65531))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned int i_6 = 2; i_6 < 8; i_6 += 1) 
                    {
                        {
                            arr_20 [i_2] [i_2] [i_4] [i_5] [i_6] [i_4] = ((/* implicit */long long int) (~(16487338121890115313ULL)));
                            var_22 = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) (~(var_1)))) - ((+(var_11))))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (short)-1))));
                            arr_21 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1431192894U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(var_14))))));
                            var_24 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)5497))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_24 [i_2] [i_3] [i_3] [i_2] &= ((/* implicit */signed char) ((unsigned long long int) 2147483647));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_7]))));
            }
            var_26 ^= ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_11))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_3])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_28 [i_8] [i_9]))))));
                    var_28 += (-(((/* implicit */int) ((signed char) var_6))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_31 [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)23575))));
                    var_29 = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_3]))));
                    arr_32 [i_2] = ((((/* implicit */_Bool) (unsigned short)34999)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                    var_30 -= ((/* implicit */long long int) (+(var_9)));
                }
                for (long long int i_11 = 1; i_11 < 8; i_11 += 4) 
                {
                    arr_37 [i_2] [i_3] [i_3] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? ((+(((/* implicit */int) (signed char)-104)))) : ((-(((/* implicit */int) var_12))))));
                    var_31 = ((/* implicit */signed char) var_6);
                    var_32 ^= ((/* implicit */int) ((((/* implicit */int) arr_30 [i_3] [i_3] [i_3] [i_11 - 1])) >= (((/* implicit */int) arr_30 [i_8] [i_11] [i_3] [i_11 + 2]))));
                    var_33 = ((/* implicit */unsigned int) var_15);
                    arr_38 [i_2] [i_3] [i_8] [i_2] = ((/* implicit */unsigned int) var_15);
                }
                arr_39 [(unsigned short)6] [i_3] |= ((((/* implicit */_Bool) 9223372036854775787LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6)));
                arr_40 [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_34 [i_2] [i_2] [1LL] [i_2] [i_3] [(_Bool)1]);
                var_34 += ((/* implicit */unsigned long long int) (short)-5506);
            }
        }
        for (signed char i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned short) (-((-(arr_14 [i_2])))));
            var_36 = ((/* implicit */_Bool) (-((((((~(((/* implicit */int) (unsigned short)1)))) + (2147483647))) >> (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_4))))))));
        }
        arr_45 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) 213511001813613537LL)))));
    }
    /* vectorizable */
    for (signed char i_13 = 2; i_13 < 12; i_13 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */short) (signed char)-112);
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            for (unsigned short i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                {
                    arr_54 [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (short)32757))) ? (((((/* implicit */_Bool) arr_5 [i_13])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16)))))));
                    var_38 = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
                    var_39 -= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned short)10))))));
                }
            } 
        } 
    }
    for (signed char i_16 = 2; i_16 < 12; i_16 += 1) /* same iter space */
    {
        var_40 = ((/* implicit */signed char) ((long long int) arr_3 [i_16 + 1]));
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 13; i_17 += 1) 
        {
            for (short i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                {
                    arr_63 [i_16] [4] |= ((/* implicit */unsigned int) (-((~(((((/* implicit */_Bool) (short)23487)) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) var_10))))))));
                    var_41 = ((((/* implicit */_Bool) (unsigned short)13147)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1))) : (8542892805763566874LL));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_19 = 0; i_19 < 13; i_19 += 3) 
                    {
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (+(((/* implicit */int) var_3)))))));
                        var_43 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)12))));
                        arr_66 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) var_13);
                        var_44 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_53 [i_16] [i_16] [i_16])) ^ (((/* implicit */int) var_12)))));
                    }
                    /* vectorizable */
                    for (long long int i_20 = 0; i_20 < 13; i_20 += 4) 
                    {
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_58 [i_16 - 1] [i_16 - 1])) ? (((/* implicit */int) arr_4 [i_16 - 1] [i_16 - 1])) : (((/* implicit */int) arr_4 [i_16 + 1] [i_16 + 1]))));
                        var_46 ^= ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                    }
                    var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)61)))))))));
                    var_48 = ((/* implicit */unsigned int) (~(928931942)));
                }
            } 
        } 
    }
}
