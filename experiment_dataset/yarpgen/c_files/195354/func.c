/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195354
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)101)), ((short)-24861)))) ? (((var_4) + (min((870639086), (((/* implicit */int) (short)24860)))))) : (((/* implicit */int) (_Bool)1))));
    var_16 = ((/* implicit */short) var_3);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (~(arr_0 [i_0]))))));
        var_18 *= ((/* implicit */_Bool) (-(arr_0 [i_0])));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (var_7)));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) arr_5 [i_2] [i_2] [i_2]);
                        var_19 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 2]))))) ? (428162696564730864LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) (((+(((((/* implicit */int) (_Bool)1)) / (var_13))))) < (((/* implicit */int) var_14))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1015650070)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17394511461229109722ULL)));
        arr_14 [i_4] = ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_4 + 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_5 [i_4 + 2] [i_4 + 1] [i_4 - 1])))) * (((arr_5 [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (((/* implicit */int) arr_5 [i_4 + 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) (short)31991)))));
        var_22 = ((/* implicit */int) ((min((((var_11) * (((/* implicit */unsigned long long int) 230206842)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31991)) ? (var_1) : (((/* implicit */int) var_9))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
        {
            var_23 &= ((/* implicit */int) (short)24847);
            var_24 ^= ((/* implicit */int) ((_Bool) var_3));
            var_25 += ((/* implicit */long long int) arr_6 [i_4] [i_4] [i_4 + 1]);
            arr_17 [i_4] [i_5] = ((/* implicit */int) arr_3 [i_4] [11ULL] [i_5]);
            arr_18 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_4] [i_4] [i_5]))))), (arr_7 [i_4] [i_5] [17ULL]))))) & (min((((/* implicit */unsigned long long int) arr_4 [i_4] [i_4] [i_4 - 1])), (max((5670295213279142907ULL), (((/* implicit */unsigned long long int) arr_6 [(unsigned char)9] [i_5] [i_5]))))))));
        }
        for (int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                var_26 = ((/* implicit */int) ((-1015650070) <= (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_22 [i_4] [i_6] [18ULL])))))))));
                var_27 = ((/* implicit */int) (-(var_7)));
                var_28 ^= ((/* implicit */short) ((min((((/* implicit */int) arr_21 [i_4 - 1])), (var_5))) + (((/* implicit */int) (short)(-32767 - 1)))));
            }
            var_29 = ((/* implicit */short) min((((((/* implicit */int) arr_5 [i_4] [i_6] [i_4 - 1])) * (((/* implicit */int) arr_5 [i_6] [i_6] [i_4 - 1])))), (((/* implicit */int) max((arr_5 [i_4] [i_6] [i_4 + 1]), (arr_5 [i_4] [i_4] [i_4 + 2]))))));
            /* LoopNest 3 */
            for (short i_8 = 4; i_8 < 21; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (long long int i_10 = 1; i_10 < 19; i_10 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) min((arr_0 [i_4]), (min((((/* implicit */int) arr_21 [i_6])), (-1015650078))))))));
                            var_31 ^= ((/* implicit */_Bool) arr_4 [i_10 + 3] [i_8 + 1] [i_4 - 1]);
                            var_32 -= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_26 [i_4])))) + (((((/* implicit */int) arr_27 [i_6] [i_6] [i_9] [i_10 + 3])) | ((~(((/* implicit */int) (unsigned char)240))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_11 = 3; i_11 < 10; i_11 += 4) 
    {
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) var_10))));
        arr_36 [i_11] [i_11] = max((arr_3 [i_11 + 1] [i_11 + 2] [i_11 - 1]), (arr_3 [i_11 - 2] [i_11 + 1] [i_11 - 3]));
        arr_37 [i_11] = ((/* implicit */unsigned char) arr_13 [i_11 + 1] [i_11]);
        /* LoopNest 3 */
        for (int i_12 = 3; i_12 < 11; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((((/* implicit */int) (short)-31991)) + (2147483647))) << (((((5670295213279142907ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))))) - (5670295213279143109ULL))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 3) 
                        {
                            var_35 *= ((/* implicit */_Bool) (short)31991);
                            var_36 ^= (!(((/* implicit */_Bool) arr_20 [i_11 - 3])));
                        }
                    }
                } 
            } 
        } 
        var_37 -= ((/* implicit */_Bool) arr_16 [i_11 + 2] [9]);
    }
    /* vectorizable */
    for (unsigned char i_16 = 1; i_16 < 9; i_16 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (int i_18 = 2; i_18 < 10; i_18 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 11; i_19 += 1) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)189))))) : ((-2147483647 - 1))));
                                var_39 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0)) * (16070813296974798601ULL))))));
                            }
                        } 
                    } 
                    var_40 &= ((/* implicit */_Bool) ((unsigned char) (unsigned char)67));
                    arr_64 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 16070813296974798601ULL)) ? (7256623942542172449LL) : (((/* implicit */long long int) ((/* implicit */int) (short)24837))))) ^ (((/* implicit */long long int) ((arr_13 [(unsigned char)0] [i_18 - 1]) / (arr_22 [i_16] [i_16] [6ULL]))))));
                    /* LoopSeq 1 */
                    for (int i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_22 = 3; i_22 < 10; i_22 += 3) 
                        {
                            var_41 = ((/* implicit */long long int) -1049468722);
                            var_42 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(short)16] [i_22]))) - (var_3))));
                        }
                        for (int i_23 = 0; i_23 < 11; i_23 += 4) 
                        {
                            var_43 = ((/* implicit */short) -1405995675845003476LL);
                            var_44 |= ((/* implicit */_Bool) var_4);
                            var_45 += ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_16 - 1])) ? (var_1) : (arr_0 [i_16 + 2])));
                            var_46 = (i_16 % 2 == 0) ? (((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_46 [i_18 - 1] [i_18] [i_18] [i_18] [(short)7])) ? (((/* implicit */long long int) var_1)) : (arr_43 [i_17] [i_17] [i_17] [i_17]))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) arr_47 [i_23] [i_23] [i_16] [i_23] [4] [i_23])))) - (1043)))))) : (((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_46 [i_18 - 1] [i_18] [i_18] [i_18] [(short)7])) ? (((/* implicit */long long int) var_1)) : (arr_43 [i_17] [i_17] [i_17] [i_17]))) + (9223372036854775807LL))) >> ((((((~(((/* implicit */int) arr_47 [i_23] [i_23] [i_16] [i_23] [4] [i_23])))) - (1043))) + (15995))))));
                        }
                        for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                        {
                            var_47 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [6ULL] [i_18 - 1]))));
                            var_48 = (+(((17394511461229109722ULL) & (270215977642229760ULL))));
                        }
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            var_49 &= ((/* implicit */unsigned char) (_Bool)1);
                            var_50 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 17394511461229109722ULL)) ? (((/* implicit */int) arr_59 [(unsigned char)2] [i_17] [i_16] [i_21])) : (((/* implicit */int) (short)-1)))));
                        }
                        var_51 = ((/* implicit */long long int) ((int) 17394511461229109722ULL));
                    }
                }
            } 
        } 
        arr_79 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_16 + 2] [i_16] [i_16 - 1] [i_16 - 1] [i_16 - 1])) ? (arr_30 [i_16] [i_16] [i_16 + 2] [i_16 - 1] [i_16 + 1]) : (((/* implicit */int) (short)-1038))));
        var_52 = ((/* implicit */int) min((var_52), (var_0)));
    }
}
