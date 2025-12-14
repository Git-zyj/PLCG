/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37143
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
    var_14 = ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] [i_3] = ((/* implicit */_Bool) var_5);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (((-(((/* implicit */int) var_9)))) >> ((((((~(var_11))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -5944753494742095211LL)))))))) - (3870957497U))))))));
                            arr_14 [i_3] [(unsigned char)16] [3U] [(unsigned char)16] [i_2] [(unsigned char)16] [i_2] = ((/* implicit */long long int) var_4);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            arr_17 [i_5] [i_5] = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_12)))) != (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_12)))))));
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_3), (((/* implicit */unsigned short) (unsigned char)13))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)5441))))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) ((3048249380U) <= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)38)), ((unsigned short)51125))))))))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)14420))))));
                        }
                    } 
                } 
            } 
            arr_29 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) (~(((-5752030209959796235LL) + (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_5] [i_5 + 1])))))));
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    arr_36 [i_9] [i_5] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / ((-(arr_34 [i_5])))));
                    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    arr_39 [(short)5] [i_5] [(short)5] = ((/* implicit */_Bool) var_5);
                    var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_5 + 1] [i_9] [i_11]))))) ? ((((_Bool)1) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62663))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) || (var_6)))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((int) (unsigned char)243)))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)51116))))) + (3048249380U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_20 [i_0] [i_5 + 1] [i_0]))))))))));
                }
                /* vectorizable */
                for (unsigned short i_12 = 2; i_12 < 22; i_12 += 2) 
                {
                    var_21 = ((/* implicit */_Bool) ((arr_10 [i_0] [i_5 + 1] [i_0] [i_12 + 2] [i_12 - 1] [i_5]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5428)))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_37 [i_0] [i_5 + 1] [i_5 + 1] [i_9] [i_5 + 1]) : (arr_37 [i_0] [i_0] [i_5 + 1] [i_5 + 1] [i_5])));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 2; i_13 < 20; i_13 += 2) 
                    {
                        var_23 &= ((/* implicit */unsigned int) 5234458300633317199LL);
                        arr_46 [i_12] [i_0] [i_12] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */short) var_4);
                    }
                }
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    var_24 = ((/* implicit */short) (+(-6058973608546622352LL)));
                    arr_50 [i_0] [i_5] [i_5 + 1] [i_9] [(unsigned char)17] = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_8 [i_5] [i_5 + 1] [i_5] [i_5])))) >> (((((((/* implicit */int) var_13)) + (((/* implicit */int) (unsigned char)159)))) - (110)))));
                    var_25 = var_7;
                }
                arr_51 [i_5] [i_5] [i_9] [i_9] = ((/* implicit */unsigned char) ((min((6058973608546622352LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)62676)) || (((/* implicit */_Bool) (unsigned char)32))))))) == (((((-7757126306030417684LL) / (((/* implicit */long long int) var_11)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_5] [i_5] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7783))) : (959970510U))))))));
                arr_52 [i_5] [i_5] [i_5] = var_10;
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 4) 
                    {
                        {
                            arr_57 [i_0] [i_5] [i_5] [i_5] [i_16] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_7))))) * ((~(((/* implicit */int) var_12))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)1))))))) == (((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                        }
                    } 
                } 
            }
        }
        var_27 = ((/* implicit */short) ((((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_40 [(short)18] [(short)18] [i_0] [i_0]))));
    }
    for (long long int i_17 = 0; i_17 < 12; i_17 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_18 = 2; i_18 < 11; i_18 += 2) 
        {
            for (int i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_21 = 0; i_21 < 12; i_21 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51125)) ? (7757126306030417696LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                            var_29 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_12)))) + (var_11))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
                        }
                        for (long long int i_22 = 0; i_22 < 12; i_22 += 2) /* same iter space */
                        {
                            var_30 = (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6))))));
                            arr_74 [i_17] [i_17] [i_18] [(_Bool)1] [i_20] [i_20] = ((/* implicit */short) -7757126306030417664LL);
                        }
                        var_31 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (arr_3 [i_18 - 1]))));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_10 [i_18 - 2] [i_18 - 2] [i_18] [i_20] [i_19] [i_19]))))))))));
                        arr_75 [i_17] [i_18] [i_18] [i_20] [i_17] [i_20] = ((/* implicit */short) (+(((((7757126306030417665LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14436))))) / ((+(7757126306030417663LL)))))));
                        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) (((-(((/* implicit */int) var_1)))) + (((/* implicit */int) arr_16 [i_18 + 1]))))))))));
                    }
                } 
            } 
        } 
        arr_76 [i_17] [5ULL] = ((/* implicit */long long int) ((((/* implicit */int) arr_73 [i_17] [i_17] [(_Bool)0] [10U] [i_17])) <= (((/* implicit */int) (_Bool)1))));
    }
    var_34 *= ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_10)))) + (((/* implicit */int) var_0)))) / (((/* implicit */int) var_3))));
    var_35 = ((/* implicit */unsigned long long int) var_1);
}
