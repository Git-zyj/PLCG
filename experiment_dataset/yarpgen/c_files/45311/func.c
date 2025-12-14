/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45311
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((((((long long int) arr_2 [i_0] [i_0])) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_7)))) - (1821824165042740842ULL))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 3; i_3 < 9; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) var_0);
                        var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)20264))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (unsigned int i_5 = 4; i_5 < 9; i_5 += 1) 
                {
                    {
                        arr_17 [i_0] [i_1] [i_4] [i_5 - 4] = ((/* implicit */unsigned int) arr_6 [i_1] [i_1]);
                        arr_18 [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_11 [i_5 - 4]));
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_19 ^= ((/* implicit */unsigned long long int) 1227959050490537581LL);
                        var_20 ^= (~(arr_4 [9] [i_8]));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_7 [i_8])) / ((~(-1954067265603709826LL)))));
                    }
                } 
            } 
            arr_27 [i_0] [i_6] = ((/* implicit */signed char) (-((-(var_7)))));
            var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [i_0] [i_6] [i_6] [i_0] [i_6] [i_6]))));
        }
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) arr_19 [i_0] [i_9]);
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (signed char)0))) ? ((~(((/* implicit */int) (unsigned short)23628)))) : (((/* implicit */int) ((short) (short)-8)))));
                var_25 -= (~(((/* implicit */int) var_15)));
                arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_21 [i_0])) ? (52382205) : (((/* implicit */int) arr_5 [i_0])))) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))));
            }
            for (signed char i_11 = 1; i_11 < 9; i_11 += 2) 
            {
                arr_38 [i_11] [i_9] [i_9] [(unsigned char)6] = ((/* implicit */long long int) 4U);
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_29 [(unsigned char)7] [i_9] [i_11]))))) ^ (((/* implicit */int) (unsigned char)51))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) var_15))) <= (arr_23 [i_0] [i_9] [i_9] [i_9])));
                arr_41 [i_0] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */int) (~(arr_23 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_12])));
            }
            arr_42 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) 5664283927748194959ULL)) ? (2019087820) : (((/* implicit */int) (signed char)123))));
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) 
            {
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (unsigned char)209))));
                arr_45 [(_Bool)1] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_15))));
            }
        }
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
        {
            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))) : (arr_4 [i_0] [i_14])));
            /* LoopSeq 2 */
            for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_0] [i_14])))))));
                arr_51 [(short)0] [i_14] [i_15] = ((/* implicit */unsigned char) ((long long int) var_15));
                var_31 = ((/* implicit */short) (-(((/* implicit */int) arr_6 [i_14] [i_14]))));
            }
            for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_4 [i_14] [i_16])) ? (arr_7 [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)88))))))))));
                var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_14]))));
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                {
                    for (unsigned short i_18 = 2; i_18 < 9; i_18 += 1) 
                    {
                        {
                            arr_62 [i_16] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_26 [i_17] [i_14] [0U] [i_17] [i_18] [i_17])) : (((/* implicit */int) arr_61 [i_18] [i_14] [i_14] [(unsigned short)3] [i_17] [(unsigned short)3] [i_18]))))) ? (((/* implicit */int) arr_16 [i_0] [i_14] [i_16] [i_18])) : (((/* implicit */int) arr_10 [i_0] [i_0] [0LL] [i_18] [i_18] [i_18]))));
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0]))) + (var_0))))))));
                            var_35 += ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_14]))) : (568702036U));
                            var_36 |= ((/* implicit */unsigned int) (~(6205457300215702039LL)));
                            var_37 = ((/* implicit */int) ((((1472890761U) == (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_0] [i_14]))) : (var_3)));
                        }
                    } 
                } 
            }
            arr_63 [i_14] [i_14] [i_0] = ((/* implicit */unsigned short) ((_Bool) -1));
            var_38 *= ((/* implicit */unsigned short) (short)-32751);
            var_39 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        }
        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)82))))) : ((~(arr_36 [i_0] [i_0] [i_0]))))))));
    }
    for (unsigned long long int i_19 = 2; i_19 < 8; i_19 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_20 = 0; i_20 < 10; i_20 += 1) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((short) ((unsigned int) var_10))))));
            /* LoopNest 2 */
            for (short i_21 = 0; i_21 < 10; i_21 += 1) 
            {
                for (unsigned char i_22 = 0; i_22 < 10; i_22 += 4) 
                {
                    {
                        arr_75 [i_22] [i_22] [i_21] [i_21] [i_20] [i_19 - 1] = ((/* implicit */int) (~(min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (arr_2 [i_19] [i_19]))), (((/* implicit */unsigned long long int) max((arr_11 [i_19 + 2]), (var_15))))))));
                        var_42 = ((/* implicit */_Bool) ((unsigned short) (~(arr_30 [i_19 + 2] [i_19 + 2]))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_23 = 0; i_23 < 10; i_23 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */signed char) ((unsigned long long int) arr_19 [i_19] [i_23]));
            var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) 7ULL))));
        }
        /* vectorizable */
        for (unsigned char i_24 = 0; i_24 < 10; i_24 += 1) /* same iter space */
        {
            var_45 = ((/* implicit */long long int) 888336100);
            arr_81 [i_19 + 2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 501416772689001657ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (long long int i_25 = 1; i_25 < 9; i_25 += 4) 
            {
                for (unsigned long long int i_26 = 2; i_26 < 6; i_26 += 1) 
                {
                    {
                        var_46 = ((/* implicit */unsigned long long int) arr_43 [i_19] [i_19] [i_25] [i_26]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_27 = 1; i_27 < 7; i_27 += 4) 
                        {
                            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1236396774)) ? (((/* implicit */int) (unsigned short)43669)) : (((/* implicit */int) (_Bool)1))))) ? (((var_14) | (arr_19 [i_19] [i_19]))) : (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32745))) : (7932537632392851030ULL)))));
                            var_48 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_27 + 1])) : (((/* implicit */int) (_Bool)1))));
                        }
                        var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((short) (unsigned short)49152)))));
                    }
                } 
            } 
        }
        arr_90 [i_19] [i_19] = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_19] [(_Bool)1]))))))));
        var_50 = ((/* implicit */signed char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_19]))) != (6801708942744176064ULL))) ? (18446744073709551587ULL) : (((/* implicit */unsigned long long int) ((long long int) var_5))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (1532683392893006178ULL)))));
        var_51 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2023215973U)) ? (((/* implicit */int) arr_71 [i_19 - 1] [4])) : (-2125535658))) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-31792)), ((unsigned short)51628)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [4U] [i_19 + 2] [i_19]))))) : ((-(arr_8 [i_19 - 1] [i_19 + 2] [i_19 - 1] [i_19 - 2]))));
    }
    for (long long int i_28 = 1; i_28 < 22; i_28 += 4) 
    {
        var_52 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)20764)) ? (min((((((/* implicit */_Bool) var_5)) ? (83632758U) : (((/* implicit */unsigned int) 1738372340)))), (((/* implicit */unsigned int) ((unsigned short) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
        var_53 = ((/* implicit */int) ((((long long int) max((18446744073709551596ULL), (((/* implicit */unsigned long long int) (unsigned short)24159))))) * (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_15)), ((unsigned char)29)))))));
    }
    var_54 = ((/* implicit */unsigned short) var_7);
}
