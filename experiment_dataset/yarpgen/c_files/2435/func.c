/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2435
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_7))));
    var_21 = ((/* implicit */short) (_Bool)1);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32757))) : (var_2)))) ? (var_16) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-32758)), (var_6))))))) ? (var_3) : (((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)-32758)) : (((/* implicit */int) (_Bool)1)))), (((int) (unsigned char)175)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-105)) && (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)-18765)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (short)32766))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) (unsigned char)193))));
            arr_6 [8] [i_1] &= ((/* implicit */unsigned long long int) ((long long int) (short)-32758));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        arr_14 [i_0] [20] [(short)12] [i_4] [i_3 + 1] [20] |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) -8555442519737811533LL)) ? (0ULL) : (2715020187830662628ULL)))));
                        var_25 = ((/* implicit */unsigned int) var_18);
                        arr_15 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-32759);
                        var_26 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 22; i_5 += 3) 
            {
                for (int i_6 = 1; i_6 < 21; i_6 += 3) 
                {
                    {
                        arr_23 [i_0] [19LL] [i_2] [i_0] = ((int) ((((/* implicit */_Bool) -9223372036854775803LL)) ? (192270312U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)22))) : (4765031735336089828LL))) > (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32735)) ? (-5152577096769393560LL) : (((/* implicit */long long int) var_2))))) > ((+(9370390670283184508ULL)))));
                        var_29 = ((/* implicit */short) ((unsigned char) ((min((((/* implicit */long long int) (short)32758)), (var_10))) < (var_3))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)27956)) : (var_19)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9327707231910996522ULL))))) : (((/* implicit */int) (unsigned char)81))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    for (unsigned short i_9 = 4; i_9 < 23; i_9 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (unsigned char)7)))))) ? (2800825593U) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))) < (12311897426912025645ULL)))) - (var_19)))))))));
                            arr_31 [i_8] [i_8] [i_8] [i_7] [i_8] [i_8] [i_8] |= ((/* implicit */long long int) 1456779042775520083ULL);
                        }
                    } 
                } 
                arr_32 [i_0] [(short)12] [i_7] = ((/* implicit */unsigned long long int) var_14);
                /* LoopNest 2 */
                for (short i_10 = 2; i_10 < 22; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        {
                            arr_38 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)-91);
                            arr_39 [i_0] [i_2] [i_7] [i_10] [i_7] [i_0] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (signed char)-86)) ^ (((/* implicit */int) var_5)))))) + ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))) : (7ULL)))))));
                        }
                    } 
                } 
            }
            for (short i_12 = 1; i_12 < 23; i_12 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 3; i_13 < 23; i_13 += 1) 
                {
                    var_32 *= ((/* implicit */unsigned long long int) (short)-32766);
                    arr_44 [i_0] [i_0] [(unsigned short)3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 2057614451099016922ULL)) ? (2057614451099016930ULL) : (2057614451099016922ULL)))));
                    var_33 = ((/* implicit */int) var_17);
                }
                arr_45 [i_0] [i_2] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_18))));
            }
        }
        for (short i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                var_34 = ((((/* implicit */_Bool) 2139156682)) ? (((/* implicit */long long int) ((int) ((signed char) 2057614451099016922ULL)))) : (((((/* implicit */_Bool) (short)-21636)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5152577096769393560LL))));
                var_35 = ((/* implicit */long long int) max((var_35), ((~(3297864308748957475LL)))));
            }
            arr_50 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) var_8));
            arr_51 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (3235484201862233298ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13)))))) ? (((/* implicit */int) (signed char)-5)) : (((((/* implicit */int) var_9)) / (((/* implicit */int) (short)-32747))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                arr_54 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) -1702430410)) | (18446744073709551615ULL)));
                arr_55 [(unsigned char)0] [i_16] [i_14] [(unsigned char)0] |= ((/* implicit */long long int) (signed char)-115);
                /* LoopSeq 1 */
                for (short i_17 = 2; i_17 < 23; i_17 += 3) 
                {
                    var_36 = ((/* implicit */unsigned int) ((long long int) 3512874377210050436ULL));
                    var_37 = ((/* implicit */unsigned long long int) var_12);
                    var_38 = ((/* implicit */int) (short)-32757);
                    var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7053375604125569113LL)) ? (((/* implicit */int) (short)-17736)) : (((/* implicit */int) (short)-32765))))) ? (((/* implicit */int) (short)-32736)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                }
                var_40 *= ((/* implicit */short) 16410834893397232984ULL);
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    for (int i_19 = 3; i_19 < 21; i_19 += 1) 
                    {
                        {
                            arr_64 [i_0] [i_0] [i_16] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (short)17735)) / (((/* implicit */int) (short)17729)))));
                            var_41 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)17)) ? (((unsigned long long int) -3297864308748957476LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85)))));
                        }
                    } 
                } 
            }
        }
        arr_65 [(unsigned short)14] &= ((/* implicit */int) ((_Bool) -964430299406213382LL));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_20 = 2; i_20 < 23; i_20 += 3) 
        {
            arr_69 [i_0] = ((/* implicit */unsigned char) 5152577096769393560LL);
            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) 2147483647))));
            var_43 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned char)85)))));
        }
    }
    for (unsigned short i_21 = 0; i_21 < 14; i_21 += 1) 
    {
        arr_72 [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)32761)) : (-2147483644)))) ? (((((/* implicit */_Bool) (unsigned char)198)) ? (1005145697733750236ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned long long int) 5152577096769393560LL))));
        var_44 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 4020719327423224525ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)189)))) : (var_2)));
        /* LoopNest 3 */
        for (long long int i_22 = 0; i_22 < 14; i_22 += 2) 
        {
            for (unsigned short i_23 = 0; i_23 < 14; i_23 += 3) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 14; i_24 += 2) 
                {
                    {
                        var_45 = ((/* implicit */unsigned int) (unsigned char)80);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_25 = 1; i_25 < 12; i_25 += 3) 
                        {
                            var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) 17441598375975801380ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((3635049911U) - (3635049923U)))))) : (((((/* implicit */_Bool) min((1357269492), (((/* implicit */int) (unsigned short)41425))))) ? (((/* implicit */unsigned long long int) min((-5152577096769393560LL), (((/* implicit */long long int) 1357269492))))) : (((((/* implicit */_Bool) 562949953421311LL)) ? (1005145697733750236ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))))));
                            var_47 = ((/* implicit */short) (-(((/* implicit */int) ((short) ((unsigned long long int) var_6))))));
                            arr_87 [i_25] [i_22] [i_25] [i_25] [i_25] &= ((/* implicit */int) var_2);
                            var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 1005145697733750210ULL)) ? (0ULL) : (4020719327423224525ULL))))) ? (((/* implicit */int) ((1005145697733750222ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) : (1660096446)));
                            var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) 743354675061740649ULL))));
                        }
                        for (long long int i_26 = 2; i_26 < 13; i_26 += 1) 
                        {
                            var_50 |= ((((/* implicit */_Bool) ((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3)))))) ? (var_10) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-17721))))));
                            arr_90 [i_23] [i_22] = ((/* implicit */_Bool) 2063023928852768895ULL);
                            var_51 &= ((/* implicit */short) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) 7220882952321395200LL))))) || (((/* implicit */_Bool) var_6))));
                            arr_91 [i_23] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (-5152577096769393560LL))))) | (((((/* implicit */_Bool) (short)-17762)) ? (-3530329985383152813LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned char i_27 = 0; i_27 < 14; i_27 += 1) 
                        {
                            var_52 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6832741553800311149ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)17736))))) ? (((((/* implicit */_Bool) (unsigned short)58767)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58766))))) : (3530329985383152829LL)));
                            arr_94 [i_22] [i_24] [i_24] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6564564911578782839ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_16)))) ? (min((((/* implicit */int) (short)127)), (var_19))) : ((+(((/* implicit */int) (short)7073))))));
                        }
                        arr_95 [10ULL] [i_22] [i_22] [6U] [i_22] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) 1420515969977533497LL)) ? (((/* implicit */int) (unsigned char)57)) : ((-(((/* implicit */int) (unsigned short)65526))))));
                        arr_96 [i_22] [(short)12] [i_22] [i_22] &= ((/* implicit */unsigned short) 18446744073709551615ULL);
                    }
                } 
            } 
        } 
    }
}
