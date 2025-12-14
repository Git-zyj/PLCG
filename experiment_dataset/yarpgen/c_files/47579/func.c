/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47579
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
    var_14 = ((/* implicit */short) var_2);
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) max((var_16), (min((((/* implicit */int) arr_3 [i_2] [i_3] [i_4])), (((((/* implicit */_Bool) arr_3 [i_3] [i_1] [(signed char)4])) ? (((/* implicit */int) arr_3 [i_4] [i_3] [i_0])) : (((/* implicit */int) (short)-1))))))));
                                var_17 = ((/* implicit */int) (signed char)83);
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (signed char)85))));
                                var_19 = (signed char)28;
                                var_20 &= ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                    var_21 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) var_9)))), (((/* implicit */int) max((((/* implicit */short) arr_5 [i_2] [i_1] [i_0])), (var_3))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])) ? ((+(12395488958848407446ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
                    var_22 = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (arr_2 [i_0]) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_2])))), (((/* implicit */int) var_13))));
                }
                var_23 -= ((/* implicit */int) 4ULL);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_24 = ((/* implicit */int) var_10);
        var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((/* implicit */int) arr_15 [i_5] [i_5])) : (((/* implicit */int) var_10))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        var_26 = ((/* implicit */int) (signed char)-65);
        var_27 = var_0;
        var_28 = ((((/* implicit */_Bool) (short)1656)) ? (17) : (504));
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            var_29 -= ((/* implicit */signed char) arr_17 [i_6]);
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) (short)-8199)) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) arr_18 [i_7])))))));
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) 12352446505214752838ULL)) ? (((/* implicit */int) (short)-8417)) : (((/* implicit */int) arr_17 [i_7]))));
        }
        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 1) 
        {
            var_32 = ((/* implicit */signed char) max((var_32), (var_5)));
            var_33 = arr_21 [i_8];
        }
    }
    for (int i_9 = 1; i_9 < 23; i_9 += 4) 
    {
        var_34 = ((/* implicit */short) arr_26 [i_9]);
        var_35 = max((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) var_4))))), (min((((/* implicit */unsigned long long int) min((arr_25 [i_9]), (-2012549772)))), (4ULL))));
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
    {
        var_36 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [10ULL])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_10])))));
        /* LoopSeq 1 */
        for (int i_11 = 1; i_11 < 20; i_11 += 1) 
        {
            var_37 = (short)0;
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (-1332528521) : (var_2)))) : (14431962226699265552ULL)));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            var_39 = ((/* implicit */int) (+(var_12)));
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
            {
                var_40 = var_0;
                /* LoopNest 2 */
                for (signed char i_14 = 1; i_14 < 22; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) var_4))));
                            var_42 = ((/* implicit */short) ((4597002995947342919ULL) * (arr_37 [i_10] [i_12] [i_14])));
                            var_43 = var_12;
                        }
                    } 
                } 
            }
            for (signed char i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                var_44 += ((/* implicit */signed char) (-(((/* implicit */int) (signed char)13))));
                var_45 = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10]))) : (var_1)));
                var_46 = (short)-1579;
            }
        }
        for (signed char i_17 = 0; i_17 < 23; i_17 += 4) 
        {
            var_47 = -2018243939;
            /* LoopNest 2 */
            for (short i_18 = 4; i_18 < 21; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 3; i_19 < 22; i_19 += 4) 
                {
                    {
                        var_48 = arr_29 [i_10] [i_18];
                        var_49 -= ((/* implicit */short) var_2);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_20 = 0; i_20 < 23; i_20 += 2) 
            {
                var_50 = ((/* implicit */int) max((var_50), (((/* implicit */int) var_6))));
                var_51 = ((/* implicit */short) (~(((/* implicit */int) arr_46 [i_10] [i_10] [i_10] [i_10]))));
                var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) var_10))));
            }
            for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 4) /* same iter space */
            {
                var_53 = var_4;
                var_54 = (~(706435166));
            }
            for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 4) /* same iter space */
            {
                var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_17] [i_10])) && (((/* implicit */_Bool) var_3)))))));
                var_56 += ((/* implicit */signed char) var_7);
                /* LoopSeq 3 */
                for (int i_23 = 0; i_23 < 23; i_23 += 2) 
                {
                    var_57 -= ((/* implicit */short) arr_54 [(signed char)17] [i_17] [(signed char)17] [i_22] [i_22] [i_23]);
                    var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1217898281)) ? (((/* implicit */int) (signed char)127)) : (-709876030)));
                    var_59 = ((/* implicit */short) (-(((/* implicit */int) arr_30 [i_10]))));
                }
                for (unsigned long long int i_24 = 0; i_24 < 23; i_24 += 2) /* same iter space */
                {
                    var_60 |= ((/* implicit */unsigned long long int) var_10);
                    var_61 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_22]))));
                }
                for (unsigned long long int i_25 = 0; i_25 < 23; i_25 += 2) /* same iter space */
                {
                    var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_65 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (short)19654))));
                    var_63 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_10] [i_25])) ? (((/* implicit */int) var_9)) : (966947288)))) ? (((((/* implicit */_Bool) -1004032340)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_35 [i_10] [i_10] [(short)22]))));
                    var_64 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_60 [i_10] [i_22]))))) <= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))));
                    var_65 = ((/* implicit */unsigned long long int) var_2);
                }
                var_66 |= arr_38 [16] [6] [i_17] [i_10];
                var_67 = ((/* implicit */signed char) var_2);
            }
            var_68 = ((/* implicit */short) max((var_68), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37))) < (var_12))))));
        }
    }
}
