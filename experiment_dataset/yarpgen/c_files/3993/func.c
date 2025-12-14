/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3993
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((5756982145191392387ULL), (((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_1 + 2]))));
                    arr_7 [i_2] [(short)1] [i_1] [i_0] = ((((/* implicit */_Bool) ((unsigned short) 1133707940069846704LL))) ? (max((var_6), (arr_0 [i_1 + 2] [i_2 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11589572501000485227ULL)) && (((/* implicit */_Bool) (unsigned short)57120)))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1] [i_2])))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_1 [i_2 + 2] [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))));
                                var_20 = ((/* implicit */unsigned char) var_5);
                                var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) (unsigned short)12174)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (unsigned short)5556))))))), (((long long int) max(((unsigned short)12192), (((/* implicit */unsigned short) var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 19917140U)))))))) ? (((((/* implicit */_Bool) (signed char)56)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) max(((unsigned short)12174), (((/* implicit */unsigned short) var_9))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_10))))));
                    var_23 = ((/* implicit */unsigned short) var_5);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            arr_23 [(_Bool)0] [i_0] [10ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) ((max((((/* implicit */long long int) var_12)), (arr_0 [i_7] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) ((7268615522251872253LL) != (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0]))))))))))));
            var_24 = ((/* implicit */short) var_2);
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    {
                        arr_29 [i_9] [i_0] [i_7] [i_0] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) 12689761928518159235ULL)))), (((((var_5) % (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0])))) > (((var_5) + (((/* implicit */unsigned long long int) 7380057825024726682LL))))))));
                        arr_30 [i_9] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)53387)))) + (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4242))) : (arr_5 [i_0] [i_7] [i_8] [i_9]))) : (((((/* implicit */_Bool) arr_4 [i_9] [i_8] [i_7] [i_0])) ? (11589572501000485230ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                        var_25 = ((/* implicit */_Bool) var_11);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_10 = 1; i_10 < 17; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)59512)) < (((/* implicit */int) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) : (9223372036854775807LL)));
                    /* LoopSeq 1 */
                    for (signed char i_13 = 1; i_13 < 17; i_13 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12689761928518159237ULL)));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) % (((4398046507008ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225)))))));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_2))));
                    }
                }
                for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)178)) ? (16ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    arr_45 [i_14] [i_14] [i_14] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                    arr_46 [(unsigned short)13] [(unsigned short)13] [i_10] [i_11] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8579383056962975383LL)) ? (((/* implicit */int) (short)-4429)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (short)-4420)) : (((/* implicit */int) var_12))));
                }
                var_31 &= ((/* implicit */unsigned char) (+((-(var_5)))));
                arr_47 [i_11] [i_10 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_10 + 1] [i_10 + 1] [i_10] [i_10])) ? (((/* implicit */int) arr_37 [i_11] [i_10 - 1] [i_10 - 1] [i_10])) : (((/* implicit */int) var_11))));
                /* LoopNest 2 */
                for (short i_15 = 1; i_15 < 17; i_15 += 1) 
                {
                    for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        {
                            arr_54 [i_11] [i_10 - 1] [i_0] = ((/* implicit */unsigned char) (-(var_3)));
                            arr_55 [i_15 + 1] [i_15 + 1] [i_10 + 1] = ((/* implicit */long long int) var_10);
                            var_32 = ((/* implicit */long long int) var_1);
                        }
                    } 
                } 
            }
            var_33 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_19 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)179))))) : (((((/* implicit */_Bool) (unsigned short)59512)) ? (8695985989270406769LL) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_10] [i_10] [i_10 - 1] [i_10] [i_0] [i_0] [i_0])))))));
            var_35 = (+((+(12232738225722247901ULL))));
            arr_56 [i_10] [(unsigned char)1] = ((/* implicit */long long int) ((short) 11589572501000485221ULL));
        }
        /* vectorizable */
        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) 
        {
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) << (((((/* implicit */int) (unsigned short)1554)) - (1544)))));
            arr_60 [i_17] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)-32767)) * (((/* implicit */int) (unsigned char)31))));
        }
        for (short i_18 = 3; i_18 < 16; i_18 += 2) 
        {
            var_37 = ((/* implicit */unsigned char) arr_52 [i_0] [i_18] [i_0] [i_0] [i_0]);
            var_38 = ((/* implicit */unsigned short) (+((+(-3691797753919216032LL)))));
            var_39 = ((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), ((unsigned short)56392)))) ? (((/* implicit */unsigned long long int) var_1)) : (6857171572709066390ULL)))));
            arr_63 [i_18] [i_0] [i_18] = ((((/* implicit */unsigned long long int) -1051121111528159529LL)) ^ (4656623117455806599ULL));
        }
    }
    /* vectorizable */
    for (unsigned int i_19 = 2; i_19 < 12; i_19 += 4) 
    {
        var_40 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)9143)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))));
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)14)) ? (((((/* implicit */_Bool) arr_6 [i_19] [i_19] [(unsigned short)13])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156))))) : (((/* implicit */long long int) 3048280667U))));
    }
    /* vectorizable */
    for (short i_20 = 0; i_20 < 21; i_20 += 4) 
    {
        arr_70 [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)155)) ? (1357901238892265449LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
        var_42 = ((/* implicit */long long int) max((var_42), (((arr_69 [i_20]) - (arr_69 [i_20])))));
        var_43 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_68 [i_20])) > (((/* implicit */int) var_9)))) ? (arr_69 [i_20]) : (((/* implicit */long long int) (+(((/* implicit */int) (short)4506)))))));
    }
    var_44 = ((/* implicit */signed char) ((((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned char)158)))))) - (((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (short i_21 = 0; i_21 < 24; i_21 += 2) 
    {
        var_45 = ((/* implicit */long long int) ((_Bool) min((((/* implicit */long long int) (unsigned char)184)), (9223372036854775807LL))));
        arr_75 [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11883))) : (-3836067894427735274LL)))) ? (((/* implicit */int) (unsigned char)66)) : (((((/* implicit */int) (short)32730)) ^ (((/* implicit */int) (unsigned char)128))))));
    }
    for (long long int i_22 = 0; i_22 < 25; i_22 += 3) 
    {
        var_46 = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) max(((unsigned char)20), ((unsigned char)66)))))));
        /* LoopSeq 4 */
        for (unsigned char i_23 = 0; i_23 < 25; i_23 += 4) 
        {
            var_47 = ((/* implicit */short) (-((((_Bool)0) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned char)54))))));
            var_48 = ((/* implicit */unsigned short) ((unsigned char) (+(16237261762238143208ULL))));
            arr_83 [i_23] = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) var_13))) & (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_78 [i_23])))))));
            /* LoopSeq 2 */
            for (unsigned char i_24 = 0; i_24 < 25; i_24 += 3) 
            {
                arr_87 [i_24] [i_23] [i_24] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_81 [i_24] [i_22])) ? (((/* implicit */int) arr_81 [i_24] [i_22])) : (((/* implicit */int) var_0)))));
                var_49 = ((/* implicit */unsigned char) var_0);
            }
            /* vectorizable */
            for (long long int i_25 = 0; i_25 < 25; i_25 += 4) 
            {
                arr_91 [i_25] [i_23] [i_22] = ((/* implicit */unsigned short) ((6857171572709066388ULL) ^ (((/* implicit */unsigned long long int) arr_90 [i_25] [i_23] [i_22]))));
                arr_92 [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_89 [i_22]))));
            }
        }
        for (short i_26 = 3; i_26 < 24; i_26 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_27 = 1; i_27 < 24; i_27 += 3) 
            {
                var_50 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) var_3)) ? (3836067894427735285LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)86)))))));
                var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65419)) : (((/* implicit */int) arr_86 [2LL] [i_26] [i_22] [2LL])))))))) ? ((-(((/* implicit */int) (unsigned char)192)))) : (((/* implicit */int) ((min((16026917450065863636ULL), (((/* implicit */unsigned long long int) 1143866639047380741LL)))) < (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */long long int) arr_88 [i_22] [i_26 - 1] [i_26] [2ULL]))))))))));
                var_52 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (((-(((/* implicit */int) var_0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_97 [i_22])))))))), (-3932070133625682300LL)));
                var_53 = ((/* implicit */signed char) var_6);
            }
            var_54 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_11)), (arr_76 [i_22])))), (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned long long int) arr_90 [i_22] [i_22] [i_26])) : (((((/* implicit */_Bool) 4398046507008ULL)) ? (6857171572709066418ULL) : (arr_84 [i_22] [i_22] [i_26 - 2] [i_26])))))));
        }
        /* vectorizable */
        for (short i_28 = 0; i_28 < 25; i_28 += 4) 
        {
            /* LoopNest 2 */
            for (short i_29 = 0; i_29 < 25; i_29 += 4) 
            {
                for (long long int i_30 = 0; i_30 < 25; i_30 += 2) 
                {
                    {
                        var_55 = ((/* implicit */unsigned int) ((1134618507495503717LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)54)))));
                        var_56 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)19350)))))) ? (((/* implicit */unsigned long long int) (+(arr_77 [1ULL] [1ULL])))) : (((arr_93 [i_28]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25222)))))));
                        var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (short)32767))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_31 = 3; i_31 < 22; i_31 += 1) 
            {
                for (unsigned int i_32 = 2; i_32 < 21; i_32 += 4) 
                {
                    for (long long int i_33 = 0; i_33 < 25; i_33 += 4) 
                    {
                        {
                            var_58 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_106 [i_31 + 1] [i_31 - 2] [i_28]) : (arr_106 [i_31 - 1] [i_28] [i_28])));
                            var_59 = ((/* implicit */_Bool) arr_88 [i_22] [i_28] [i_31 - 2] [i_32 + 4]);
                            arr_111 [i_28] [i_32 - 1] [i_32 + 2] [i_28] [i_28] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) (unsigned char)66))));
                        }
                    } 
                } 
            } 
            var_60 = (((!(((/* implicit */_Bool) var_9)))) ? ((-(-6350124424464931303LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)10390))));
            /* LoopSeq 1 */
            for (unsigned char i_34 = 0; i_34 < 25; i_34 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_35 = 2; i_35 < 21; i_35 += 4) 
                {
                    for (unsigned short i_36 = 0; i_36 < 25; i_36 += 4) 
                    {
                        {
                            var_61 = ((/* implicit */_Bool) max((var_61), (((/* implicit */_Bool) -5102820303979938657LL))));
                            var_62 += ((/* implicit */long long int) var_13);
                            var_63 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11723084714983282640ULL)) ? (1143866639047380724LL) : (((/* implicit */long long int) 789497679U))))) ? (arr_97 [i_35 + 4]) : (1143866639047380738LL)));
                            arr_121 [i_36] [(short)2] [i_34] [i_22] = ((/* implicit */unsigned long long int) (unsigned short)33477);
                        }
                    } 
                } 
                var_64 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-43))));
                var_65 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_8))));
                var_66 = ((/* implicit */long long int) ((6723659358726268975ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        }
        /* vectorizable */
        for (short i_37 = 0; i_37 < 25; i_37 += 4) 
        {
            var_67 = ((((/* implicit */_Bool) var_1)) ? (arr_78 [i_22]) : (1143866639047380725LL));
            var_68 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_13)) ? (5127452521141411555LL) : (((/* implicit */long long int) ((/* implicit */int) arr_110 [i_37] [i_37] [i_37] [i_22] [i_22])))))));
        }
    }
}
