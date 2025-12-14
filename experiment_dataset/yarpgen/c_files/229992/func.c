/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229992
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
    var_11 += ((/* implicit */unsigned int) 6491205807712390203ULL);
    var_12 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    var_13 *= ((/* implicit */long long int) ((arr_2 [i_1] [i_0] [i_0 + 1]) < (arr_2 [i_0 + 1] [i_0] [i_0 + 1])));
                    arr_7 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_2]))));
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(0))))));
                }
                for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) 32767);
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */long long int) (((((+(((/* implicit */int) (signed char)-32)))) + (2147483647))) >> (((min((((/* implicit */long long int) arr_8 [i_3 + 1] [i_0] [i_0] [i_1])), (var_1))) + (2066232263823785704LL)))));
                        arr_13 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(-1))))));
                        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 - 1] [i_3 - 1] [i_4])) ? (-5546948188996135979LL) : (-214459938651966705LL))) < (((((/* implicit */_Bool) (unsigned short)63226)) ? (9223372036854775807LL) : (((/* implicit */long long int) -30))))));
                        var_18 = ((/* implicit */unsigned int) ((unsigned short) -657379412));
                    }
                    var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)7185)), (((((/* implicit */_Bool) 657379412)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2)) ? (-602143352) : (-765525783)))) : (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (var_9))))) <= (max((((/* implicit */long long int) 2147483644)), (5157533114446719570LL))))) && (((/* implicit */_Bool) var_10))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 14; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 15; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_3)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_7 - 2])) ? (((/* implicit */int) arr_8 [i_1] [i_0] [i_6] [i_7])) : (-32757))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)28067)) : (((/* implicit */int) var_2)))))) ^ (((/* implicit */int) (signed char)32))));
                                var_21 = var_8;
                                var_22 &= ((/* implicit */unsigned char) ((min((arr_2 [i_0 - 1] [i_6 + 3] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_15 [i_0 - 1] [i_6 + 2] [i_7])))) * (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (15))))));
                            }
                        } 
                    } 
                    arr_22 [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5] [i_5])) ? ((-2147483647 - 1)) : ((-(((/* implicit */int) ((_Bool) (short)32767)))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_27 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)24688)) ? (((/* implicit */int) (unsigned short)55267)) : (-21)));
                    var_23 = ((/* implicit */unsigned long long int) ((((_Bool) var_1)) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) (short)-24689))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) (signed char)114)) : (29)));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)55267)) : (((/* implicit */int) (_Bool)1))))) ? (215999130764010954ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_8] [i_0])))));
                        var_26 &= ((/* implicit */_Bool) ((var_7) - (arr_1 [i_0] [i_0])));
                        arr_30 [i_9] [i_0] [i_8] [i_1] [i_0] [i_0 - 1] = ((/* implicit */int) ((((((/* implicit */long long int) -14)) <= (arr_26 [i_0] [i_1] [i_0]))) && (((/* implicit */_Bool) 3241207685U))));
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_8] [i_8])) ? (21) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_10] [i_0 - 1]))))));
                            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
                            var_29 &= ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
                        }
                        for (short i_11 = 1; i_11 < 15; i_11 += 2) 
                        {
                            var_30 = (!((!(((/* implicit */_Bool) -1339781634)))));
                            var_31 |= ((/* implicit */short) (-(((/* implicit */int) (signed char)61))));
                            arr_37 [i_9] [i_1] [i_0] [i_1] [i_9] [i_11] [(short)10] = ((/* implicit */signed char) ((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (unsigned short)65535))))) < ((+(-657379444)))));
                            var_32 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_11 - 1] [i_11] [i_11 + 2] [i_11] [i_11 + 2] [i_11])) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (short i_12 = 2; i_12 < 17; i_12 += 2) 
                        {
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24552)) ? (arr_33 [i_0] [i_0 - 1] [i_12 + 1]) : (-1339781638)));
                            var_34 = ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_12 - 2] [i_0] [i_12 - 1] [i_12])) ? (((/* implicit */unsigned int) (~(var_10)))) : ((-(1053759610U))));
                        }
                        arr_42 [i_1] |= ((/* implicit */signed char) ((((/* implicit */int) arr_35 [i_0 + 1] [i_0 + 1] [i_0 - 1])) <= (((/* implicit */int) (unsigned char)218))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8535))) * (((((/* implicit */_Bool) (short)-9625)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) : (10401686209708928496ULL)))));
                        arr_45 [i_0] [i_1] [i_1] [i_8] [i_13] [i_13] = ((/* implicit */signed char) (_Bool)1);
                    }
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_14 = 0; i_14 < 20; i_14 += 2) 
    {
        /* LoopNest 3 */
        for (short i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            for (unsigned short i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    {
                        var_36 |= ((/* implicit */unsigned short) min((0), (((/* implicit */int) (unsigned char)231))));
                        var_37 += ((/* implicit */signed char) min((max((var_10), (((/* implicit */int) arr_54 [i_16] [i_15] [i_15])))), (((/* implicit */int) ((unsigned char) max((-2005555176), (((/* implicit */int) (short)-24706))))))));
                        arr_57 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-1339781637), (((/* implicit */int) arr_48 [i_16]))))) ? (-1744003569685339632LL) : (((/* implicit */long long int) arr_49 [i_14] [i_16] [i_17]))));
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (7659670747418136544ULL) : (((/* implicit */unsigned long long int) 657379447))))) ? (min((((/* implicit */int) (unsigned short)43440)), (var_10))) : (((/* implicit */int) arr_50 [i_14]))))) : (max((((/* implicit */unsigned long long int) max((1339781646), (((/* implicit */int) arr_52 [i_14]))))), (25769803776ULL)))));
        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 14)) && (((/* implicit */_Bool) arr_47 [i_14] [i_14])))))) != ((~(6375388900998942927LL))))))));
    }
    for (unsigned long long int i_18 = 2; i_18 < 17; i_18 += 1) 
    {
        var_40 = ((short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_18 - 2] [i_18] [i_18 - 1] [i_18] [i_18])) && (((/* implicit */_Bool) arr_40 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))))), (min((((/* implicit */unsigned int) var_6)), (arr_20 [i_18 - 2])))));
        var_41 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)240))) / (min((arr_41 [i_18] [i_18 - 2] [i_18] [i_18 - 2] [i_18] [i_18]), (((/* implicit */long long int) 4054682851U))))));
    }
    /* vectorizable */
    for (short i_19 = 0; i_19 < 13; i_19 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_20 = 3; i_20 < 12; i_20 += 3) 
        {
            for (unsigned char i_21 = 0; i_21 < 13; i_21 += 4) 
            {
                {
                    var_42 = ((/* implicit */unsigned int) ((int) 657379452));
                    var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) (-(-657379447))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_22 = 0; i_22 < 13; i_22 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -6375388900998942934LL)) : (var_3)))) ? ((+(5063427110271424682ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_20 + 1] [i_20 - 1] [i_20 - 1])))))));
                        var_45 = ((/* implicit */long long int) var_8);
                    }
                    arr_71 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)31016)) ? (((/* implicit */int) (_Bool)0)) : (0)));
                }
            } 
        } 
        arr_72 [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_64 [i_19])) ? (arr_64 [i_19]) : (arr_64 [i_19])));
    }
}
