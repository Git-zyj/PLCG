/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22351
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) (signed char)118)), (arr_1 [i_0 + 1]))));
        var_17 = ((/* implicit */long long int) min((var_17), ((~(max((((arr_1 [i_0]) & (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)70)))))));
        var_18 = ((_Bool) (+(((/* implicit */int) max((arr_3 [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned short) arr_4 [i_1] [i_1])))))));
        arr_6 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) -9015264865279036228LL)) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_4))) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)0), ((_Bool)1))))))), (((/* implicit */long long int) arr_3 [16ULL] [16ULL]))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_2] [i_2] [i_5] = ((/* implicit */_Bool) (-(var_4)));
                        var_19 = var_7;
                        arr_20 [i_2] [i_2] [i_3] [i_4] [i_4] [i_5] &= (!(((/* implicit */_Bool) 13996666745751871798ULL)));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_24 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_2])) << (((5107154761420297787ULL) - (5107154761420297768ULL)))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) -2051333244)) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_15)))))));
                        }
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */unsigned long long int) -2044472751)) : (((unsigned long long int) (_Bool)1))));
                            var_22 -= ((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((/* implicit */_Bool) 13339589312289253832ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_3] [i_4] [i_7])))));
                        }
                        for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_7 [i_3])) % (((long long int) 3484112334055497365LL))));
                            var_24 = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_3)));
                        }
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_25 = ((((/* implicit */_Bool) ((arr_29 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */int) arr_10 [i_3] [i_4])) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_15 [i_10] [i_10] [i_10] [i_10]));
                            var_26 = ((/* implicit */signed char) (+(((/* implicit */int) var_16))));
                            arr_36 [i_2] [15ULL] [i_3] [i_9] = ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) arr_22 [i_4] [i_3])) : (arr_15 [i_2] [i_3] [(_Bool)0] [i_10]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_9]))));
                            var_27 = ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_15) : (2570926485917675285ULL)));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_31 [i_2] [(signed char)4] [i_2] [0ULL] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_28 [i_10] [i_2] [i_4] [i_3] [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1989831530019803505ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        /* LoopSeq 3 */
                        for (int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */signed char) arr_3 [i_2] [i_11]);
                            var_30 -= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-89)))));
                            var_31 = ((/* implicit */int) ((unsigned long long int) (((_Bool)1) ? (arr_30 [i_3] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                        }
                        for (int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                        {
                            arr_43 [i_12] [i_12] &= ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_4])) > (((/* implicit */int) (unsigned short)65535))));
                            arr_44 [i_2] [i_3] [i_2] [i_3] [(unsigned short)7] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3] [i_3] [i_2])) ^ (((/* implicit */int) (_Bool)1))))) ? (var_10) : (((((/* implicit */_Bool) arr_39 [i_12] [i_3] [i_4] [i_3] [i_2])) ? (13111100378100078139ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) var_7))));
                        }
                        for (int i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                        {
                            arr_47 [i_2] [2] = ((/* implicit */_Bool) ((9007199254740992ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_31 [i_2] [i_2] [i_2] [i_2] [i_2])) : (arr_21 [i_2] [i_3])));
                            var_34 ^= ((/* implicit */long long int) ((var_13) ? (((/* implicit */int) (_Bool)1)) : (arr_42 [i_2] [i_3])));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            arr_51 [i_2] [i_3] [i_4] [i_4] [i_4] [i_2] [i_3] = ((/* implicit */_Bool) var_12);
                            var_35 = ((var_12) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_48 [i_2] [i_2] [i_2] [17] [i_2])) : (((/* implicit */int) var_1))))));
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((_Bool) arr_13 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (7558298171324869426LL))))) : (((((/* implicit */_Bool) -9015264865279036225LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_4))))))));
                            arr_52 [i_9] [i_9] [i_2] [i_2] [i_14 - 1] = ((/* implicit */unsigned long long int) -1045918794601696212LL);
                        }
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            arr_55 [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7990595727368363545LL)) ? (16481959676432679064ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44888)))))) ? ((+(-565401756))) : (((/* implicit */int) (_Bool)1))));
                            var_37 = ((/* implicit */_Bool) ((((var_8) == (((/* implicit */unsigned long long int) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) : (arr_53 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_2])));
                            arr_56 [i_2] [i_3] [i_3] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) arr_31 [i_2] [(_Bool)1] [3LL] [i_2] [i_15 - 1])) ? (var_2) : (((/* implicit */int) var_9)));
                            arr_57 [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_13))));
                        }
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_3] [i_3] [i_2] [i_4] [i_16])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_26 [i_2]))));
                        arr_61 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)5438))));
                        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) var_9))));
                        var_40 = (i_2 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) var_10))) + (2147483647))) << (((arr_34 [(signed char)7] [i_2] [i_3] [i_2] [i_2]) - (7419220669628976398ULL)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) var_10))) + (2147483647))) << (((((arr_34 [(signed char)7] [i_2] [i_3] [i_2] [i_2]) - (7419220669628976398ULL))) - (17516172499718558956ULL))))));
                    }
                    var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65530)) ^ (((/* implicit */int) (unsigned short)60098)))))));
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) arr_48 [i_2] [i_3] [i_3] [i_3] [i_4]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) 
        {
            arr_64 [i_2] [i_17] = ((/* implicit */unsigned long long int) ((((_Bool) 5222130656439190618ULL)) ? ((~(arr_18 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3384586122045170318LL))))));
            /* LoopSeq 1 */
            for (signed char i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                arr_67 [i_2] [i_2] = ((/* implicit */_Bool) (signed char)127);
                var_43 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) 1864898818105379726LL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
                /* LoopSeq 1 */
                for (int i_19 = 0; i_19 < 18; i_19 += 3) 
                {
                    var_44 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(-757362551781396231LL)))) - (16481959676432679058ULL)));
                    var_45 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_48 [(signed char)1] [i_17] [i_2] [i_17] [17ULL])) ^ (((/* implicit */int) var_3)))) << (((arr_18 [0]) - (990517496223716919LL)))));
                    /* LoopSeq 1 */
                    for (long long int i_20 = 1; i_20 < 17; i_20 += 3) 
                    {
                        var_46 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_42 [i_20 + 1] [i_2])) ? (((/* implicit */int) arr_71 [i_2] [i_2] [i_18] [i_19] [15LL])) : (((/* implicit */int) var_13))))));
                        var_47 ^= ((/* implicit */int) ((((/* implicit */int) arr_27 [i_20 - 1] [i_20 - 1] [i_20 + 1] [i_20] [i_20 - 1])) == (((/* implicit */int) arr_63 [i_20 + 1] [i_20 + 1]))));
                        var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) var_1))));
                        var_49 = ((/* implicit */signed char) (((_Bool)1) ? (arr_42 [i_20] [i_20 - 1]) : (((/* implicit */int) ((var_11) || (((/* implicit */_Bool) var_0)))))));
                        arr_72 [i_2] [i_17] [i_18] [i_19] [i_20 + 1] [i_2] = ((/* implicit */_Bool) ((arr_17 [i_2]) & (arr_17 [i_2])));
                    }
                }
                arr_73 [i_2] [i_17] [i_18] [i_18] &= ((/* implicit */unsigned long long int) ((_Bool) ((arr_46 [i_18] [i_2]) ? (var_14) : (arr_60 [i_2] [i_18]))));
                arr_74 [i_2] [i_2] [i_18] [i_18] = ((/* implicit */_Bool) ((long long int) (_Bool)1));
            }
        }
        arr_75 [(_Bool)1] &= ((((arr_50 [6ULL] [i_2]) ? (arr_42 [2ULL] [i_2]) : (((/* implicit */int) var_9)))) >> (((arr_45 [i_2] [i_2] [i_2] [i_2]) - (2763674888727319070ULL))));
    }
    var_50 = ((/* implicit */unsigned long long int) var_13);
    var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) max((max((12743668748574518185ULL), (((/* implicit */unsigned long long int) ((10197545140706425800ULL) != (((/* implicit */unsigned long long int) 0LL))))))), (((/* implicit */unsigned long long int) var_6)))))));
}
