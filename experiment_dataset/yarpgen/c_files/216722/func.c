/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216722
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 8854828307303583907LL)), (arr_3 [i_1 + 4]))), (((/* implicit */unsigned long long int) (-(arr_6 [0] [0] [i_1])))))))));
            arr_7 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) -660797408)) - (17038355616386891111ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((arr_10 [i_0] [i_1 + 3] [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */long long int) var_11))))), ((-(arr_3 [i_2])))));
                var_19 ^= ((/* implicit */int) ((_Bool) ((_Bool) ((long long int) var_7))));
                var_20 += ((/* implicit */int) min((((((/* implicit */_Bool) ((-6184581998189427323LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [(_Bool)1])) && (((/* implicit */_Bool) var_16)))))) : (max((((/* implicit */unsigned long long int) 2147483647)), (var_14))))), (9338851577578717778ULL)));
                var_21 += ((/* implicit */long long int) ((_Bool) max((arr_9 [i_1 + 4] [i_2] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) var_16)))));
                var_22 = min((min((arr_9 [i_0] [i_1] [12] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6184581998189427323LL)) && (((/* implicit */_Bool) -1311139279))))))), (((/* implicit */unsigned long long int) 6184581998189427322LL)));
            }
        }
        for (int i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_3])), (var_4)))) ? (((/* implicit */unsigned long long int) arr_13 [i_3 + 1] [i_3 - 1] [i_3 - 1])) : (arr_9 [i_0] [6] [12] [i_3 + 1]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */long long int) (~(209849032)))) : (arr_6 [i_3 + 1] [i_0] [(_Bool)1]))))));
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) 34359738360ULL)) ? (((/* implicit */unsigned long long int) 1209775100)) : (109357394700574492ULL))))));
            arr_14 [i_0] = ((/* implicit */long long int) (-(2428228960934229151ULL)));
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (int i_6 = 4; i_6 < 11; i_6 += 1) 
                    {
                        {
                            arr_22 [i_5] [i_3 + 1] [i_3] [i_3] [0] = ((/* implicit */long long int) 16350011008784089453ULL);
                            arr_23 [i_0] [i_0] [i_0] [i_5] [i_5] [i_4] = ((/* implicit */int) max((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) 862991008067539416LL))))) ? (((/* implicit */unsigned long long int) (~(1686038249)))) : (min((18192166530475418319ULL), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -209849032)) ? (-1727179504) : (-1129681194))))));
                        }
                    } 
                } 
                var_25 = -1686038267;
                arr_24 [i_3] = arr_11 [(_Bool)1] [(_Bool)1] [i_3 + 1];
            }
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    for (long long int i_9 = 1; i_9 < 12; i_9 += 2) 
                    {
                        {
                            arr_34 [(_Bool)1] [10LL] [(_Bool)1] [(_Bool)1] [i_9] [i_0] [i_3] = ((/* implicit */int) var_9);
                            var_26 = ((unsigned long long int) arr_29 [i_0] [(_Bool)1] [i_7] [i_8] [(_Bool)1]);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (int i_10 = 2; i_10 < 12; i_10 += 2) 
                {
                    var_27 = ((/* implicit */int) (-(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] [(_Bool)1])));
                    arr_37 [9] [i_3 + 1] [i_7] [i_10 - 2] = ((int) arr_10 [i_3 + 1] [(_Bool)1] [i_10 - 2]);
                    arr_38 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -2393862946022513242LL)) ? (3919118293525150350ULL) : (((/* implicit */unsigned long long int) -2782929510802354895LL))))));
                    var_28 = (+(var_13));
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((int) (~(arr_13 [(_Bool)1] [5LL] [5LL])))))));
                }
                for (int i_11 = 1; i_11 < 13; i_11 += 2) 
                {
                    var_30 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) == (var_16)));
                    arr_41 [i_11 - 1] [i_7] [(_Bool)1] [i_0] = ((/* implicit */int) ((unsigned long long int) 8854828307303583887LL));
                    arr_42 [i_0] [i_0] [i_7] [i_11] [i_7] [i_7] = ((/* implicit */int) (-(var_0)));
                    var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_32 [i_3] [i_3 + 1] [i_3 - 1] [i_11 + 1] [i_11 + 1])) / (var_4)));
                }
                for (long long int i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
                {
                    arr_45 [i_0] [i_0] [i_0] [i_12] = ((/* implicit */_Bool) var_1);
                    var_32 = ((/* implicit */long long int) min((var_32), (var_2)));
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_12] [i_12] [i_3 - 1]) : (((/* implicit */long long int) arr_44 [i_0] [i_3 + 1] [i_7]))));
                }
                for (long long int i_13 = 0; i_13 < 14; i_13 += 2) /* same iter space */
                {
                    var_34 -= ((/* implicit */_Bool) var_12);
                    /* LoopSeq 4 */
                    for (int i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        var_35 = ((/* implicit */int) 16260860490648788700ULL);
                        var_36 = ((/* implicit */long long int) (_Bool)1);
                    }
                    for (long long int i_15 = 1; i_15 < 11; i_15 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) -7391485531828907148LL);
                        var_38 = ((/* implicit */long long int) min((var_38), (((((/* implicit */_Bool) var_1)) ? (arr_32 [i_3 + 1] [(_Bool)1] [i_3 + 1] [i_3 - 1] [i_3 + 1]) : (arr_32 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])))));
                        var_39 = ((/* implicit */long long int) (-((((_Bool)0) ? (((/* implicit */unsigned long long int) var_3)) : (11698645212201601442ULL)))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_4 [i_3 + 1]))))));
                        var_41 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 390279953)) && (((/* implicit */_Bool) 18446744073709551590ULL))));
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) var_15))));
                        var_43 += ((((/* implicit */_Bool) arr_18 [i_3] [(_Bool)1] [i_3] [i_3] [i_3] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_18 [i_0] [i_3] [i_3 - 1] [12] [i_3] [i_3 - 1]));
                        var_44 -= (!(((/* implicit */_Bool) arr_44 [i_3 - 1] [i_3 - 1] [i_3 + 1])));
                    }
                    for (long long int i_17 = 1; i_17 < 11; i_17 += 4) 
                    {
                        var_45 += ((/* implicit */_Bool) var_6);
                        arr_58 [7] [i_17] [i_0] = ((/* implicit */long long int) 273808593);
                        var_46 = ((/* implicit */int) 17537960218279301797ULL);
                        var_47 = ((/* implicit */long long int) (((_Bool)1) ? (arr_15 [i_17 + 1] [i_3 + 1] [i_17 + 1]) : (arr_15 [i_17 + 1] [i_3 - 1] [i_3 - 1])));
                    }
                }
            }
        }
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_48 = ((/* implicit */long long int) var_14);
            arr_63 [i_18] [i_18] = (-(arr_9 [i_0] [i_18] [i_18] [i_0]));
            var_49 = ((/* implicit */_Bool) ((unsigned long long int) arr_60 [i_0] [i_0]));
        }
        for (long long int i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            var_50 = ((/* implicit */unsigned long long int) max((var_50), (max((max((9107892496130833838ULL), (((/* implicit */unsigned long long int) 12LL)))), (((((/* implicit */_Bool) min((var_8), (arr_61 [i_0])))) ? (min((var_1), (((/* implicit */unsigned long long int) -1)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_62 [(_Bool)1] [i_19] [i_0])), (var_6))))))))));
            var_51 = var_8;
            var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9338851577578717767ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14464150679629236777ULL)));
            var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) arr_56 [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) min((arr_11 [i_0] [3ULL] [i_19]), (arr_11 [i_0] [i_19] [i_0])))) : (arr_2 [i_0])));
        }
        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_16)) : ((((!(((/* implicit */_Bool) arr_31 [0ULL] [i_0])))) ? (((((/* implicit */_Bool) var_13)) ? (arr_47 [i_0] [i_0] [i_0] [i_0]) : (arr_50 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_0] [5ULL])))))));
    }
    var_55 = ((/* implicit */_Bool) var_7);
}
