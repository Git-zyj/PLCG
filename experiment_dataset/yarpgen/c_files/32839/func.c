/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32839
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
    var_10 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) var_1)))) : (((int) (short)-27398)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) - (((/* implicit */int) arr_0 [i_0 - 2]))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2]))) | (arr_1 [i_0 - 2])));
    }
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) (short)27387))));
        arr_8 [i_1] = ((/* implicit */_Bool) (~((-(var_7)))));
        var_13 = ((/* implicit */long long int) 4294967279U);
        arr_9 [i_1] = ((/* implicit */short) ((min((arr_1 [i_1 - 1]), (arr_1 [i_1 + 1]))) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 2])))));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_12 [(short)1] [9] = ((/* implicit */short) var_0);
        /* LoopSeq 2 */
        for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_5 = 3; i_5 < 10; i_5 += 2) /* same iter space */
                {
                    arr_19 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5 - 3] [(signed char)3] [i_5 - 3] [i_5 + 1])) ? (((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4 - 1] [(unsigned short)6])) ? (((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_4 + 1])) : (((/* implicit */int) arr_0 [(short)5])))) : (((((/* implicit */_Bool) arr_10 [i_4 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_13 [(_Bool)1]))))));
                    var_14 = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) var_0)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 3) 
                    {
                        arr_22 [i_3 + 1] [i_4] [i_5 - 3] = ((/* implicit */unsigned char) (short)-27379);
                        var_15 = ((/* implicit */long long int) (-(arr_16 [i_4] [i_6 + 1] [i_6 + 1] [i_5 - 2])));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_4] [i_4 + 1] [i_5 - 2] [i_6 + 1])) * (((/* implicit */int) arr_4 [i_3 - 1] [i_4 - 1]))));
                        arr_23 [i_4] [i_3 - 1] [(unsigned short)10] [i_3 - 1] [i_6] [i_4] = ((/* implicit */int) ((_Bool) var_4));
                    }
                }
                for (unsigned char i_7 = 3; i_7 < 10; i_7 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))), (min((892040363), (((/* implicit */int) (unsigned char)127))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)18337)) / (((/* implicit */int) arr_2 [i_7 - 2])))))) : ((-((+(((/* implicit */int) arr_13 [i_2]))))))));
                    var_18 = ((/* implicit */unsigned int) min((67076096), (((/* implicit */int) (unsigned char)47))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 3; i_8 < 10; i_8 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((var_8) + (2147483647))) << (((((((/* implicit */int) (short)-27402)) + (27414))) - (12))))))));
                    var_20 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (signed char)-103))))));
                    arr_28 [(_Bool)1] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (unsigned char)84)));
                }
                for (unsigned char i_9 = 3; i_9 < 10; i_9 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) ((-1645812257) > (((/* implicit */int) (_Bool)1))));
                    var_22 = ((/* implicit */unsigned char) ((unsigned int) arr_14 [i_2] [i_2]));
                    var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_32 [i_3 + 2] [i_4 + 1] [i_4] [i_9 - 2] [i_9 - 2])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 1; i_10 < 10; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((arr_0 [i_2]), (((/* implicit */unsigned short) arr_24 [i_9] [i_3] [i_4 - 1] [6U]))))) ? (min((((/* implicit */long long int) arr_0 [i_9])), (arr_27 [i_2] [2LL] [i_9] [(short)5]))) : (((/* implicit */long long int) 25U)))), (((/* implicit */long long int) var_0))));
                        arr_35 [i_9] [i_3] [i_10] [i_9 - 3] [(signed char)2] [i_4] [(signed char)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 + 1]))) : (4081637660U)))) && (((((/* implicit */_Bool) arr_0 [i_3 + 2])) && (((/* implicit */_Bool) arr_0 [i_3 + 1]))))));
                        var_25 = ((/* implicit */unsigned short) arr_20 [i_2] [i_4] [i_4 + 1] [i_9 - 1] [i_10] [i_9]);
                        var_26 = ((/* implicit */_Bool) var_9);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) ((short) -343955888561160558LL));
                        var_28 = ((/* implicit */long long int) ((int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (short)27377)))));
                        var_29 = ((((/* implicit */_Bool) arr_25 [i_3] [i_9 - 3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) || (((/* implicit */_Bool) -1)))))) : (2147483647U));
                    }
                }
                var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_6))))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_41 [i_12] [i_3 + 2] [i_3 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2147483651U)) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (var_6)))))) ? (((((/* implicit */int) (_Bool)1)) - (((int) var_7)))) : (((((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (unsigned char)1))))) ^ (((int) arr_36 [i_2] [i_3] [i_12] [9LL] [i_12] [i_2] [i_12]))))));
                var_31 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4184680516016450297LL)) ? (arr_5 [i_12] [(unsigned short)7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) && (((((/* implicit */_Bool) arr_0 [(_Bool)1])) && (((/* implicit */_Bool) arr_36 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_17 [i_12] [i_3 + 2] [i_3 - 1] [i_3 - 1])) != (((/* implicit */int) var_5))))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 1])) != (((/* implicit */int) var_0))))));
                var_32 = ((/* implicit */unsigned short) ((unsigned char) arr_1 [i_12]));
                /* LoopSeq 2 */
                for (int i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    var_33 = ((/* implicit */short) ((unsigned short) (-(var_7))));
                    var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 5598689847191530713LL)), (min((((/* implicit */unsigned long long int) (unsigned char)202)), (((((/* implicit */_Bool) (unsigned short)576)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (8796093022207ULL)))))));
                    arr_46 [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_2] [i_12] [1LL] [i_13]))))) ? (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))))))));
                    arr_47 [i_12] = ((/* implicit */unsigned short) (short)-15613);
                }
                for (signed char i_14 = 2; i_14 < 10; i_14 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 2; i_15 < 7; i_15 += 3) 
                    {
                        arr_54 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((var_4) ? (((/* implicit */int) var_3)) : (var_8))))) && (((_Bool) var_9))));
                        var_35 = ((/* implicit */signed char) ((((max((var_2), (((/* implicit */unsigned long long int) (signed char)127)))) >= (((/* implicit */unsigned long long int) arr_51 [i_2] [i_12] [i_2])))) ? (((/* implicit */unsigned long long int) ((var_7) % (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_12])))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 5598689847191530724LL)) ? (((/* implicit */unsigned long long int) 2147483658U)) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
                    }
                    for (unsigned int i_16 = 1; i_16 < 9; i_16 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) min((-5598689847191530740LL), (7167205797676837336LL)));
                        var_37 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_21 [i_2] [i_12])), (arr_3 [i_12]))))))));
                        var_38 = max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (1868610527050395728ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))) : ((-(9223372036854775807LL))))), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), ((short)11356)))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) (unsigned char)32))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)247)), (var_1))))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) -5291507286881387406LL))))))) || (((/* implicit */_Bool) min((arr_2 [i_2]), (((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) 262143ULL))))))))));
                        arr_61 [i_12] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(1868610527050395716ULL)))) ? (((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) var_0)))) : (((((/* implicit */int) var_5)) / (-200850160)))))) != (((((/* implicit */_Bool) (unsigned char)192)) ? (-9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_3 + 2] [i_12] [i_14 - 2])))))));
                    }
                    var_40 = ((/* implicit */unsigned int) max((((unsigned char) arr_3 [i_2])), (((/* implicit */unsigned char) var_3))));
                    arr_62 [i_2] [i_3 - 1] [i_2] [i_12] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2147483634U))))))) ? ((~(arr_55 [i_2] [i_2]))) : (((/* implicit */int) ((min((15436617542180298963ULL), (((/* implicit */unsigned long long int) 3867442815U)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) arr_31 [i_2] [i_2]))))))))));
                }
                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_31 [i_3 + 2] [i_3 - 1]))) ? (((((/* implicit */int) (unsigned short)47179)) - (((/* implicit */int) var_1)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (480330087551757040LL)))))));
            }
            for (unsigned short i_18 = 1; i_18 < 10; i_18 += 2) 
            {
                var_42 = ((/* implicit */int) (unsigned short)47223);
                var_43 = ((/* implicit */short) ((unsigned long long int) 2013265920));
                var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) 910640442514902078LL))));
                arr_65 [0ULL] [i_3] [i_3] [i_18] = ((_Bool) ((((/* implicit */unsigned long long int) -1222221008943356338LL)) <= (15266941684045942723ULL)));
            }
            for (signed char i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                var_45 = ((/* implicit */unsigned long long int) arr_29 [i_2] [i_19] [i_19]);
                var_46 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_19])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))) > (arr_39 [i_3] [i_3 - 1] [i_19])))), (min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) 11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))))));
                arr_69 [i_2] [5] [i_2] [i_19] = ((/* implicit */signed char) min((((unsigned long long int) ((7167205797676837322LL) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)35687))) / (7167205797676837361LL))))));
            }
            var_47 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 12946941583781173045ULL)) ? (arr_5 [i_3 + 2] [i_3 + 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))) < (((((/* implicit */_Bool) (unsigned char)157)) ? (arr_48 [i_3] [i_3 + 1] [i_3 + 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
            var_48 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((unsigned char) -7167205797676837354LL)))))) != (((/* implicit */int) (signed char)-19))));
        }
        for (int i_20 = 0; i_20 < 11; i_20 += 3) 
        {
            arr_73 [i_2] = ((/* implicit */unsigned long long int) max((((arr_33 [(short)7] [i_20] [i_20] [i_20]) ? (arr_32 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47480))))), (((/* implicit */long long int) ((unsigned char) 2584781005U)))));
            var_49 = ((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) (unsigned char)21)));
            arr_74 [i_2] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned short)47484)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29833))) : (18446744073709551610ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)52961))), (((/* implicit */unsigned short) var_0)))))) : (((((/* implicit */_Bool) (~(arr_70 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29561))) != (var_7))))) : (arr_51 [i_2] [i_2] [i_20])))));
            arr_75 [(short)6] [i_2] = ((/* implicit */unsigned short) ((_Bool) (!(((var_4) || (((/* implicit */_Bool) (short)28)))))));
        }
    }
    var_50 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((var_2), (10623417169653906885ULL))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_8)) : (var_2)))))) ? ((-(max((((/* implicit */long long int) (unsigned short)52936)), (var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_5))))) : (((/* implicit */int) var_4)))))));
}
