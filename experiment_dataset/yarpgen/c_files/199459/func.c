/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199459
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0 + 3] [i_0 + 2] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 3]))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_14 = (_Bool)1;
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 |= ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_2] [i_3]);
                        var_16 *= ((/* implicit */short) (_Bool)1);
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned char) arr_7 [(unsigned char)10] [(unsigned char)10] [17] [i_1]);
            arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)504)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0 + 3]))) : (arr_4 [i_1] [i_0 + 2])));
        }
        for (long long int i_4 = 3; i_4 < 23; i_4 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) ((var_6) && (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0])) & (((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 23; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    {
                        var_19 = ((/* implicit */short) (((~(((/* implicit */int) arr_9 [i_0] [i_0])))) ^ (((/* implicit */int) (unsigned short)1812))));
                        arr_19 [i_0] [i_0] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((2147483647) / (((/* implicit */int) (short)-24544))));
                        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 4; i_7 < 23; i_7 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) var_1);
            var_22 |= (-(((/* implicit */int) ((((/* implicit */_Bool) -3637976157204919931LL)) || (((/* implicit */_Bool) arr_15 [i_0] [i_7] [i_0]))))));
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) (short)31264);
            var_23 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_13)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_17 [i_7 - 4]))));
            arr_24 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        }
        for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-19774)) + (19775)))));
            arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) arr_15 [i_8] [i_0 + 4] [i_0 - 2]);
        }
        var_25 = (+(-17));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            for (int i_11 = 3; i_11 < 10; i_11 += 2) 
            {
                {
                    arr_40 [(_Bool)1] [i_11] |= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)164)) : (0)));
                    arr_41 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (short)19773)) | (arr_29 [i_11 + 3])));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_13 = 2; i_13 < 20; i_13 += 2) 
        {
            /* LoopNest 3 */
            for (short i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    for (long long int i_16 = 2; i_16 < 19; i_16 += 1) 
                    {
                        {
                            var_27 *= ((/* implicit */int) ((((/* implicit */_Bool) 4395899027456ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_12] [i_12] [i_12] [i_12])) && ((_Bool)0))))) : (4395899027464ULL)));
                            var_28 = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_12] [i_12])) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) arr_1 [i_12]))))) & (((var_1) ? (arr_26 [i_14] [(unsigned short)24]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))));
                            var_29 |= ((/* implicit */unsigned short) arr_1 [i_12 - 1]);
                            arr_52 [(unsigned short)1] [i_13] [(short)13] [i_15] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (arr_0 [i_12 - 1] [i_13 - 2]) : (arr_0 [i_12 - 1] [i_13 - 1])));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-31289))))) + (15ULL)));
                        }
                    } 
                } 
            } 
            arr_53 [i_12] [i_12] [i_13] = ((((/* implicit */int) arr_18 [i_13 - 1] [i_13 + 1] [i_13 - 1])) / (((/* implicit */int) (unsigned char)65)));
        }
        for (unsigned long long int i_17 = 4; i_17 < 20; i_17 += 3) 
        {
            arr_56 [i_12] = ((/* implicit */unsigned short) (unsigned char)120);
            var_31 ^= ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_16 [i_12])) : (((/* implicit */int) arr_14 [i_17 - 1])))) < (((((/* implicit */int) (unsigned short)13)) - (((/* implicit */int) (_Bool)1)))));
        }
        /* LoopSeq 2 */
        for (int i_18 = 4; i_18 < 17; i_18 += 2) 
        {
            var_32 = ((/* implicit */unsigned short) (-(2013626148389202639LL)));
            var_33 = ((/* implicit */short) (unsigned char)120);
            arr_60 [(_Bool)1] [i_18] = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) arr_9 [i_12] [i_12 - 1])))));
        }
        for (int i_19 = 1; i_19 < 20; i_19 += 2) 
        {
            var_34 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) arr_57 [i_12] [i_19])) : (arr_0 [i_19 - 1] [i_19 + 1])));
            var_35 = ((/* implicit */unsigned char) arr_10 [i_12 - 1] [i_12 - 1] [i_19] [i_19]);
        }
        arr_63 [i_12] [i_12] &= ((/* implicit */short) arr_25 [i_12 - 1]);
        var_36 -= (unsigned short)55869;
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 21; i_20 += 2) 
        {
            for (unsigned char i_21 = 2; i_21 < 20; i_21 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_22 = 0; i_22 < 21; i_22 += 4) 
                    {
                        arr_74 [13] [i_20] = ((/* implicit */long long int) (_Bool)0);
                        var_37 = ((((/* implicit */int) arr_10 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1])) != (((/* implicit */int) (unsigned short)0)));
                        arr_75 [i_12] [i_20] [(_Bool)1] [i_22] [i_20] = (unsigned char)101;
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_51 [i_21] [i_21 - 2] [i_21 - 2] [i_21] [i_21 - 1]))));
                        var_39 = ((/* implicit */short) (-(arr_4 [i_12] [i_12 - 1])));
                    }
                    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (signed char)-97)) ? (arr_55 [i_12]) : (1687851465))) : ((+(((/* implicit */int) (unsigned char)152))))));
                    arr_76 [i_21 - 1] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) (short)19773);
                }
            } 
        } 
    }
    var_41 = ((/* implicit */unsigned short) var_8);
    var_42 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)138)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) 853238731))));
    var_43 = ((/* implicit */unsigned short) (signed char)-82);
}
