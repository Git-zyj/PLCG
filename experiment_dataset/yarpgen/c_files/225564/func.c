/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225564
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    var_10 -= ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_3 [i_0]))) >> (((((/* implicit */int) (unsigned short)51180)) - (51169)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_11 |= ((/* implicit */unsigned short) ((1700361145U) > (2594606138U)));
                        var_12 = ((/* implicit */short) (-(arr_2 [i_0 - 1] [i_0 + 1])));
                        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (unsigned short)29)) : (((/* implicit */int) (unsigned char)129)))))))));
                    }
                    for (unsigned int i_4 = 3; i_4 < 8; i_4 += 4) 
                    {
                        arr_12 [i_0] [(signed char)10] [i_0 - 2] [i_2] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) ((_Bool) (signed char)44)))))));
                        arr_13 [i_4 + 3] [i_2] [i_2] [i_2] [i_0 - 1] [i_0 + 3] = (((!(((/* implicit */_Bool) max(((unsigned short)26416), (((/* implicit */unsigned short) arr_6 [i_2 + 1] [i_2]))))))) ? (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) + (arr_5 [i_0] [i_0] [i_0] [i_0 + 1])))), (-2051390605926786870LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)39131))))));
                    }
                    arr_14 [i_0] [i_2] [(short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_0] [i_0] [0LL] [i_0])) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned short)32899))))) : (((((/* implicit */unsigned long long int) 9223372036854775807LL)) & (18446744073709551609ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2632927048113054072ULL)) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1 + 1] [i_2] [i_2 - 2])) : (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 + 1] [i_0 - 1] [i_2 + 1])), (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 1] [i_0] [i_1 - 2] [i_1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_2])))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    {
                        var_14 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)65535)))));
                        arr_23 [i_7] [i_6] [i_5] [i_0] = (unsigned short)39120;
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (2594606151U))))));
        var_16 = ((/* implicit */signed char) min((((long long int) (_Bool)1)), (((/* implicit */long long int) (~(3589910279U))))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 3237075784U))));
        arr_26 [i_8] [i_8] = ((/* implicit */unsigned short) ((unsigned char) arr_24 [i_8]));
    }
    for (signed char i_9 = 1; i_9 < 16; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (arr_32 [i_11] [i_10] [i_11] [i_10])));
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (short)32748))))) ^ (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) : (320667701U))) << (((((((/* implicit */unsigned long long int) 3974299594U)) & (4220600502220839806ULL))) - (2292210488ULL)))))));
                        arr_35 [i_9 - 1] [i_10] [i_11] [i_12] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_9 - 1] [i_9 - 1] [(short)9] [i_9 + 1]))))) | (((((/* implicit */unsigned long long int) -3120749646000530533LL)) / (arr_31 [i_9 - 1] [i_10] [i_12]))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_14 = 2; i_14 < 15; i_14 += 2) 
                        {
                            arr_42 [i_9] [i_10] [i_11] [i_13] = ((/* implicit */unsigned short) (short)-32748);
                            var_20 = ((/* implicit */signed char) ((unsigned short) arr_32 [i_14 + 2] [i_9 - 1] [15U] [i_9 + 1]));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) ((unsigned int) ((int) (+(((/* implicit */int) (_Bool)1))))));
                            arr_45 [i_9] [i_9 + 1] [i_9] [i_9 + 1] [i_9] [i_15] [i_9 + 1] = ((/* implicit */short) ((unsigned int) ((unsigned short) (~(((/* implicit */int) var_1))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((1039328347U), (((/* implicit */unsigned int) arr_29 [i_13]))))))) : (max((((/* implicit */long long int) var_4)), (((long long int) (short)128))))));
                        }
                        arr_46 [i_9 + 1] [i_10] [i_11] [(unsigned short)4] = ((/* implicit */unsigned int) (short)-129);
                    }
                    /* vectorizable */
                    for (unsigned int i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            arr_52 [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_9 + 1] = ((/* implicit */unsigned int) (-(arr_31 [i_9 + 1] [i_9 - 1] [i_9 - 1])));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)128)) ? (((((/* implicit */_Bool) var_6)) ? (7056732987939870443LL) : (-8309891589414446379LL))) : (8309891589414446379LL)));
                            arr_53 [i_17 + 1] [i_16] [(unsigned short)12] [i_10] [i_9 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775793LL)) ? (((9223372036854775807LL) & (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) arr_49 [i_9 + 1] [i_17 + 1] [i_11] [i_16] [i_17]))));
                        }
                        for (int i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_57 [i_9 + 1])) << (((-855697624095510271LL) + (855697624095510273LL)))));
                            var_25 = ((/* implicit */signed char) (((~(var_3))) << (((((/* implicit */int) ((unsigned short) (signed char)(-127 - 1)))) - (65379)))));
                            var_26 ^= ((/* implicit */_Bool) (+(-3120749646000530533LL)));
                            arr_58 [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 1] [i_9] = ((/* implicit */signed char) ((long long int) 3065493417U));
                            arr_59 [16LL] [i_10] [i_11] [i_16] = ((/* implicit */unsigned long long int) ((unsigned int) arr_33 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]));
                        }
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)20920)) & (-2147483644)))) - (((2594606148U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_11] [3U] [i_9 + 1] [i_16] [i_9])))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_19 = 4; i_19 < 15; i_19 += 4) 
                        {
                            var_28 |= (((_Bool)1) || (((/* implicit */_Bool) (signed char)-52)));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)60)))))));
                            var_30 = ((/* implicit */_Bool) (-((((_Bool)0) ? ((-9223372036854775807LL - 1LL)) : (-1366770036127676430LL)))));
                            var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)32748))));
                            arr_64 [i_9 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_33 [i_19] [i_19] [i_19 - 3] [i_19 - 1]))));
                        }
                        for (unsigned short i_20 = 0; i_20 < 17; i_20 += 3) 
                        {
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9] [i_9] [i_9 + 1])) ? (((var_2) + (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (-(arr_30 [16ULL] [(short)11] [i_11]))))));
                            var_33 = ((/* implicit */unsigned int) (+(9223372036854775807LL)));
                        }
                        for (short i_21 = 0; i_21 < 17; i_21 += 1) /* same iter space */
                        {
                            arr_72 [i_9] [3LL] [i_21] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)3934))));
                            arr_73 [5LL] [i_10] [4LL] [i_16] [i_9] [i_10] [16] = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                            var_34 = ((/* implicit */long long int) ((unsigned long long int) ((int) (unsigned short)60451)));
                            arr_74 [15] [i_10] [i_10] [6] [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((unsigned short) (short)-24877));
                            arr_75 [i_9 - 1] [i_10] [i_9] [i_10] [(_Bool)1] [i_10] = ((/* implicit */unsigned short) (short)27858);
                        }
                        for (short i_22 = 0; i_22 < 17; i_22 += 1) /* same iter space */
                        {
                            var_35 *= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (19ULL))));
                            arr_78 [i_22] = ((/* implicit */short) ((855697624095510271LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) (short)4349)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (_Bool)0)))))));
                            var_36 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_30 [i_9 + 1] [i_10] [(signed char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3893))) : (1700361145U)))));
                            var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)57118))));
                        }
                        arr_79 [i_9] [i_9] [(unsigned short)0] [i_9 - 1] = (-(arr_49 [i_16] [i_16] [i_9] [i_9 - 1] [i_9 + 1]));
                    }
                    var_38 += ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)24877))) / (((arr_76 [i_9 - 1] [i_10] [(short)10] [i_10] [i_10] [i_9 - 1] [i_11]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111)))))))));
                }
            } 
        } 
        arr_80 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) 32767U))))))) ? (((((/* implicit */_Bool) arr_70 [i_9 + 1] [i_9] [i_9 + 1] [i_9 - 1] [i_9])) ? (((/* implicit */int) arr_70 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9])) : (((/* implicit */int) arr_70 [i_9 + 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9])))) : (arr_30 [i_9] [6] [5ULL])));
        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) (short)4349))))) || (((/* implicit */_Bool) -6746416507223690037LL)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))))), (((unsigned short) (short)-5519))))))))));
    }
    var_40 *= ((/* implicit */_Bool) (-(((((/* implicit */long long int) 874286397)) - (9223372036854775807LL)))));
    var_41 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) <= (((unsigned int) (unsigned short)61602)))))) : ((~(var_2))))))));
}
