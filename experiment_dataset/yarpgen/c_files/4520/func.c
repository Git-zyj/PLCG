/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4520
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_0])))) : (((long long int) (unsigned char)112)));
        var_11 = ((/* implicit */_Bool) ((signed char) (+(((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_5)))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) var_2);
                        var_13 = ((/* implicit */unsigned long long int) arr_12 [i_1]);
                    }
                } 
            } 
            var_14 = ((/* implicit */int) var_6);
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((35182224605184ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24148))))))));
            var_16 = var_4;
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) ((var_7) > (arr_13 [i_1] [i_1] [i_1] [i_5])));
            var_18 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [4] [i_5]))));
            var_19 ^= ((/* implicit */signed char) ((-1272416779) + (1388108993)));
            var_20 = ((/* implicit */long long int) var_1);
        }
        for (short i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            var_21 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (arr_1 [i_1] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1388109003)) ? (1819364537) : (-1388108993)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                var_22 += ((/* implicit */unsigned long long int) var_7);
                var_23 = ((/* implicit */unsigned short) ((((unsigned long long int) -1388108993)) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_9 = 3; i_9 < 9; i_9 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_1))));
                    var_25 |= ((/* implicit */_Bool) var_1);
                }
                for (unsigned char i_10 = 3; i_10 < 9; i_10 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) var_6);
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_4 [i_10 + 3] [i_6 + 1]))));
                        var_28 = ((/* implicit */unsigned short) arr_31 [i_10 - 1] [i_10] [i_10 + 1] [i_10]);
                    }
                }
                for (unsigned char i_12 = 3; i_12 < 9; i_12 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) var_1))));
                        var_30 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        var_31 = ((arr_23 [i_6 + 1] [i_12 - 2] [i_12 - 2]) - (var_5));
                        var_32 |= ((/* implicit */long long int) arr_34 [i_1] [i_8] [(unsigned short)8]);
                        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_1))))));
                    }
                    for (int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_42 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_12 - 1] [i_12 - 3])) >> (((/* implicit */int) arr_17 [i_12 - 1] [i_6] [i_8]))));
                        var_35 = ((/* implicit */_Bool) (-(-2072866977)));
                    }
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((long long int) var_3)))));
                    var_37 = var_3;
                    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) var_6))));
                }
                for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((1423291188050219590LL) | (var_4))))));
                    var_40 = var_8;
                }
                var_41 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)155))));
                var_42 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1240055788)) != ((-(1101174911U)))));
                var_43 |= ((/* implicit */int) ((arr_35 [i_8] [i_8] [i_8] [i_6 - 1] [i_8]) / (arr_35 [i_8] [i_8] [i_8] [i_6 + 1] [i_8])));
                var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((unsigned char) (short)-22432)))));
            }
            for (int i_17 = 3; i_17 < 10; i_17 += 1) 
            {
                var_45 -= ((/* implicit */short) max(((!(arr_5 [(unsigned short)10] [(unsigned short)10]))), (((((/* implicit */_Bool) -1388108985)) || ((_Bool)1)))));
                var_46 = ((/* implicit */unsigned short) var_5);
                var_47 = ((/* implicit */int) arr_6 [i_1]);
                var_48 = ((/* implicit */unsigned short) var_1);
            }
        }
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_49 &= ((/* implicit */unsigned short) ((arr_9 [i_1] [i_18] [i_1] [i_18]) ^ (((/* implicit */unsigned int) var_7))));
            var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */long long int) arr_43 [i_18] [i_18] [i_1] [i_18] [i_18]))))) ? (((/* implicit */int) arr_4 [i_18] [i_1])) : (((/* implicit */int) arr_20 [i_18]))));
            /* LoopSeq 2 */
            for (short i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                var_51 = ((/* implicit */_Bool) ((((/* implicit */int) ((var_3) <= (((/* implicit */long long int) var_1))))) - (var_5)));
                var_52 = ((/* implicit */unsigned short) (~(var_5)));
                var_53 &= ((/* implicit */long long int) ((var_1) >> (((((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_6))))) - (2026722409959898432LL)))));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_54 = ((/* implicit */unsigned short) (+(var_1)));
                var_55 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
                var_56 = ((/* implicit */unsigned short) ((var_9) & (((/* implicit */unsigned long long int) var_2))));
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (signed char i_22 = 0; i_22 < 12; i_22 += 4) 
                    {
                        {
                            var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_1] [i_1] [i_1])) - (((/* implicit */int) ((unsigned char) var_6)))));
                            var_58 = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)198))) | (-1423291188050219590LL)))));
                            var_59 &= ((/* implicit */unsigned char) ((short) arr_15 [i_22] [i_18] [i_22]));
                        }
                    } 
                } 
                var_60 = ((/* implicit */_Bool) ((int) var_3));
            }
        }
        var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 1388108984))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_57 [0] [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_24 [i_1] [i_1]))))) ? ((+(((/* implicit */int) arr_57 [i_1] [3] [i_1] [i_1] [11])))) : (((/* implicit */int) ((short) var_6)))))));
        var_62 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
    }
    for (int i_23 = 0; i_23 < 16; i_23 += 4) 
    {
        var_63 = ((/* implicit */long long int) max((var_63), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_6)))))))), (((((/* implicit */_Bool) min((var_5), (((/* implicit */int) var_0))))) ? (((var_3) / (var_2))) : (var_2)))))));
        var_64 = ((/* implicit */short) var_6);
        var_65 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) 1240055788))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))));
        var_66 = var_0;
    }
    for (long long int i_24 = 0; i_24 < 12; i_24 += 2) 
    {
        var_67 = ((/* implicit */unsigned short) max((var_67), (((/* implicit */unsigned short) var_2))));
        var_68 ^= ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
        var_69 = ((/* implicit */_Bool) ((unsigned long long int) min((var_4), (((/* implicit */long long int) var_1)))));
        var_70 = ((/* implicit */unsigned long long int) (((~(arr_19 [i_24]))) & (((/* implicit */int) var_0))));
    }
    /* LoopSeq 1 */
    for (long long int i_25 = 0; i_25 < 25; i_25 += 2) 
    {
        var_71 = ((/* implicit */unsigned long long int) var_3);
        /* LoopSeq 1 */
        for (int i_26 = 1; i_26 < 22; i_26 += 2) 
        {
            var_72 = ((/* implicit */long long int) var_7);
            var_73 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_9))) >> (((((/* implicit */int) var_0)) - (18238)))))) ? (((((var_3) ^ (((/* implicit */long long int) var_7)))) / (((/* implicit */long long int) var_1)))) : (arr_68 [(short)21])));
            var_74 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) -1LL)))) || (((/* implicit */_Bool) var_7)))))));
        }
    }
    var_75 = ((/* implicit */short) max((var_75), (((/* implicit */short) (+((-(((/* implicit */int) ((var_4) != (var_2)))))))))));
}
