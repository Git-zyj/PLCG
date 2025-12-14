/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21180
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
    var_19 = ((/* implicit */signed char) var_11);
    var_20 = ((/* implicit */signed char) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((int) arr_0 [i_1]));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1] [(signed char)6] [(_Bool)1] = (-(arr_10 [i_2] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4]));
                            arr_14 [i_1] [i_2] [(signed char)5] [i_1] = ((/* implicit */int) (unsigned char)184);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 19; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            arr_20 [i_1] = ((/* implicit */signed char) var_17);
                            var_21 -= ((/* implicit */unsigned int) var_0);
                            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) -985175822))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 3; i_8 < 21; i_8 += 1) 
                    {
                        {
                            var_23 ^= ((2147483647) & (((/* implicit */int) var_8)));
                            arr_28 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17))));
                        }
                    } 
                } 
            }
        }
        arr_29 [i_0] = ((/* implicit */signed char) ((unsigned int) (signed char)42));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 3; i_9 < 20; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                arr_37 [i_0] [i_9] [i_10] [i_10] = ((short) var_9);
                arr_38 [i_9] [i_0] [i_10] [(unsigned char)1] = ((/* implicit */_Bool) var_14);
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_9 + 1])) : (((/* implicit */int) arr_19 [i_10] [i_10] [i_9] [i_10]))));
                /* LoopSeq 3 */
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    arr_42 [(signed char)2] [2LL] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */short) (~(((/* implicit */int) var_6))));
                    arr_43 [i_11] [i_9] [i_9] [i_0] = ((/* implicit */short) arr_15 [i_0] [i_9] [i_10] [i_11]);
                    var_25 -= ((/* implicit */signed char) var_10);
                    arr_44 [i_0] [i_9] [i_10] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)92))));
                    var_26 = ((/* implicit */signed char) min((var_26), (var_1)));
                }
                for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)109))))));
                    arr_47 [i_12] = var_8;
                    arr_48 [i_0] [i_9 + 1] [i_12] = ((/* implicit */unsigned short) var_18);
                }
                for (long long int i_13 = 2; i_13 < 20; i_13 += 3) 
                {
                    arr_52 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    arr_53 [i_9] [i_9] [i_13] [i_9 + 1] [i_9] [i_9] = ((/* implicit */signed char) var_13);
                }
            }
            arr_54 [i_0] = ((/* implicit */short) ((signed char) ((int) (signed char)74)));
            arr_55 [i_0] = ((/* implicit */int) ((short) var_3));
        }
        /* LoopSeq 1 */
        for (short i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            arr_60 [i_0] [i_14] [i_0] = ((/* implicit */unsigned int) var_6);
            arr_61 [(unsigned char)6] [i_0] |= (+(((/* implicit */int) var_2)));
            var_28 = ((/* implicit */unsigned long long int) ((int) (signed char)-109));
        }
        arr_62 [i_0] [i_0] = ((/* implicit */signed char) ((short) (signed char)-75));
    }
    /* vectorizable */
    for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
        {
            var_29 = var_8;
            var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1820046822U)) ? (((/* implicit */int) arr_19 [i_15] [i_16] [i_16] [2U])) : (((/* implicit */int) arr_19 [(signed char)14] [i_16] [(signed char)14] [18]))));
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (signed char)-126))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_36 [i_15] [i_16] [i_16] [i_16])));
        }
        for (int i_17 = 0; i_17 < 11; i_17 += 2) 
        {
            arr_71 [i_15] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) 370335933)) ? (((/* implicit */int) (signed char)74)) : (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-75))))));
            arr_72 [(short)10] [i_17] [i_15] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)231)) >= (((/* implicit */int) arr_34 [i_15] [i_15]))));
            arr_73 [i_15] [i_15] = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
        }
        arr_74 [i_15] = ((/* implicit */short) arr_7 [i_15] [i_15]);
    }
    var_32 = (((!(((/* implicit */_Bool) (signed char)-109)))) ? (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_11))), (var_16))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) - (((/* implicit */int) (signed char)74))))) ? ((~(((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_13)) ? (2098864715) : (((/* implicit */int) var_15))))))));
}
