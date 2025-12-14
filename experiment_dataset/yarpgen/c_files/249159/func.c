/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249159
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
    var_13 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0]));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                arr_9 [i_0] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                var_15 = ((/* implicit */_Bool) arr_4 [11U] [i_1]);
                arr_10 [i_0] [i_1] [i_2] [4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [23LL] [i_0] [1LL])) ? (((/* implicit */int) (short)1)) : ((-2147483647 - 1))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_4 = 1; i_4 < 24; i_4 += 4) 
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)13] [i_4 - 1] [i_4 + 1] [i_4 - 1]))) : ((-9223372036854775807LL - 1LL)))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_13 [10ULL] [i_4 - 1] [i_4] [i_4 - 1]) : (((/* implicit */int) (short)20579))));
                }
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_1])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1]))) >= (var_9)))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (303357446) : (((/* implicit */int) var_2))))));
                var_19 = ((/* implicit */unsigned short) (~(var_9)));
                arr_17 [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (arr_14 [i_0] [i_0] [(signed char)12] [(unsigned char)24])));
            }
            var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [(short)11] [i_1] [(short)24])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_0] [20LL] [i_0]))));
        }
        for (unsigned char i_5 = 2; i_5 < 23; i_5 += 4) 
        {
            arr_21 [i_0] [i_5] = ((/* implicit */short) (+(((/* implicit */int) var_12))));
            arr_22 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5] [i_5 + 1] [i_5] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60870))) : (9223372036854775804LL)));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) (+(78617395814332667ULL)));
                        arr_30 [i_0] [0ULL] [i_6] [0ULL] [i_7] = ((/* implicit */long long int) ((unsigned short) ((var_4) / (((/* implicit */unsigned int) -958306396)))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) -9167702659780350484LL))));
            /* LoopSeq 4 */
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                arr_34 [i_0] [i_5 + 2] [i_8] = ((/* implicit */unsigned int) var_2);
                var_23 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -408311572)) ? (((/* implicit */long long int) 3685225879U)) : (1350232624039075337LL)))) : (7117193062986736840ULL)));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) 4294967287U)) != (-2578889448769074537LL)))))))));
                arr_35 [i_0] [3ULL] [3ULL] [i_5] = (!(((/* implicit */_Bool) (-(-1385191232230639358LL)))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) & (((/* implicit */long long int) 551086313U))))) ? (((/* implicit */unsigned int) arr_13 [13] [i_5 - 1] [(short)1] [i_9])) : (((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
                var_26 = ((/* implicit */_Bool) max((var_26), (arr_0 [i_0])));
                var_27 = ((/* implicit */short) arr_4 [i_0] [i_5]);
            }
            for (unsigned short i_10 = 1; i_10 < 22; i_10 += 3) 
            {
                /* LoopSeq 4 */
                for (long long int i_11 = 2; i_11 < 21; i_11 += 4) 
                {
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (!(((/* implicit */_Bool) arr_19 [i_5 + 2] [i_5 - 2])))))));
                    var_29 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2578889448769074537LL)))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) arr_37 [i_0] [i_5] [i_0] [(short)18])) ? (arr_26 [(unsigned short)24] [i_5] [i_5] [i_10 + 2] [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                }
                for (short i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    arr_48 [i_10] = ((/* implicit */unsigned short) arr_1 [i_12]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 1; i_13 < 23; i_13 += 4) 
                    {
                        var_30 &= ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                        var_31 += ((/* implicit */int) ((arr_4 [i_0] [i_5]) <= (arr_4 [i_0] [i_0])));
                        var_32 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_10 + 2]))) ^ (var_4))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_34 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (32767LL)));
                    }
                    for (int i_14 = 4; i_14 < 23; i_14 += 4) 
                    {
                        arr_53 [i_0] [10U] [i_10] [i_10] [i_12] [i_14 - 4] = ((/* implicit */unsigned short) (signed char)1);
                        var_35 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)27986)) || (((/* implicit */_Bool) var_7))))) * (((/* implicit */int) var_1))));
                        var_36 = ((/* implicit */unsigned int) (+(var_5)));
                    }
                    var_37 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                }
                for (short i_15 = 3; i_15 < 22; i_15 += 4) 
                {
                    var_38 = ((/* implicit */unsigned long long int) (short)22568);
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        var_39 -= ((/* implicit */_Bool) var_8);
                        arr_62 [i_0] [(short)20] [(_Bool)1] [(_Bool)1] [i_10] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_51 [i_0] [i_5] [i_10] [(unsigned short)11] [(_Bool)1])) ? (((/* implicit */long long int) var_8)) : (1783285213296892897LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_5 + 2] [3U] [i_10] [i_5 + 2] [9] [i_0])))));
                    }
                    for (unsigned long long int i_17 = 4; i_17 < 23; i_17 += 2) 
                    {
                        arr_65 [i_17 - 1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5466045356591978464LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_5 - 1] [i_10 + 2] [13] [i_17 - 2] [i_17 - 2] [i_17]))) : (((((/* implicit */_Bool) var_9)) ? (-4542728673715717109LL) : (-734520768726568254LL)))));
                        var_40 = ((arr_24 [i_17 - 4] [i_15 + 1] [i_5 - 1] [i_5 + 1]) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_0) : (13U)))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_39 [i_15] [i_15] [i_18] [i_15]))));
                        arr_68 [i_0] [i_10] [i_5 - 2] [i_15 + 1] [(unsigned short)22] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))) % (16051022641756134174ULL)));
                        arr_69 [i_0] [i_5] [(unsigned char)5] [i_15] [i_10] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [i_5 + 2] [i_5 + 2] [17] [(short)0]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_3))))));
                    }
                    var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2742299123933003984LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    var_43 = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (5808272752643976494LL)))));
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_72 [i_10] [i_10 + 2] [21ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1116333109)) ? (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_5 [(unsigned char)24] [i_5 - 2] [i_5] [i_5]))))) : (((/* implicit */int) var_7))));
                    arr_73 [i_10] [i_5 - 1] [i_5] [(_Bool)1] [(unsigned short)17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-9)) : (((/* implicit */int) var_12))));
                    var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_59 [i_10 - 1] [i_10] [i_10 + 2])) : (((/* implicit */int) var_10))));
                    var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) ((int) arr_32 [i_0] [i_0] [i_5 - 1])))));
                    arr_74 [i_0] [i_10] [i_10] = ((/* implicit */_Bool) var_3);
                }
                /* LoopNest 2 */
                for (short i_20 = 1; i_20 < 24; i_20 += 3) 
                {
                    for (long long int i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        {
                            var_46 += ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
                            arr_79 [i_10] [i_5] = ((/* implicit */unsigned char) arr_75 [i_0] [i_0] [i_0] [i_0] [i_10]);
                            arr_80 [(_Bool)1] [22LL] [(_Bool)1] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) (!(var_10)));
                        }
                    } 
                } 
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_47 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)6155)) && (((/* implicit */_Bool) arr_14 [i_5 + 1] [i_5] [(signed char)18] [i_5 + 2]))));
                var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_13 [8LL] [i_0] [7ULL] [i_22])))) ? ((~(((/* implicit */int) (signed char)-14)))) : ((~(((/* implicit */int) (short)3003)))))))));
                var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) (-((~(((/* implicit */int) arr_82 [i_0] [i_22])))))))));
            }
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            arr_85 [i_23] [19U] [(unsigned char)20] = ((/* implicit */long long int) (short)16090);
            var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_82 [i_0] [i_23])))))));
            arr_86 [i_23] [(short)23] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_23] [6ULL])))));
        }
        var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) (~(((/* implicit */int) (unsigned char)5)))))));
        /* LoopNest 3 */
        for (long long int i_24 = 2; i_24 < 23; i_24 += 4) 
        {
            for (signed char i_25 = 1; i_25 < 24; i_25 += 4) 
            {
                for (unsigned int i_26 = 0; i_26 < 25; i_26 += 4) 
                {
                    {
                        var_52 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_67 [i_26] [i_24] [i_24] [i_24 + 1] [i_0]))))));
                        var_53 = ((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) (short)20765))));
                        var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38270)) && (((/* implicit */_Bool) 4294967293U))));
                        arr_97 [i_25] [12LL] [i_25] [i_26] = ((/* implicit */unsigned short) ((var_9) / (-8864521761320509896LL)));
                    }
                } 
            } 
        } 
    }
    var_55 -= ((/* implicit */unsigned short) ((min(((+(var_4))), (((/* implicit */unsigned int) (unsigned short)6570)))) >> (((/* implicit */int) var_10))));
}
