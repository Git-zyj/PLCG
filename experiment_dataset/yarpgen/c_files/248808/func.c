/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248808
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
    var_18 = ((/* implicit */int) ((short) 4294967295U));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */int) ((unsigned char) arr_0 [(signed char)7]));
        arr_4 [i_0] = ((/* implicit */short) var_12);
    }
    /* LoopSeq 3 */
    for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [i_1] [i_1 + 1]) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1]))))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((arr_6 [i_1 + 1] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_1]))) : (arr_9 [(unsigned char)8] [i_4] [i_4]))) : (((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_0)) + (((/* implicit */int) arr_6 [i_3] [i_2])))))) : (((/* implicit */int) max((arr_6 [i_1] [i_1 + 1]), (arr_6 [i_1] [i_1 - 1])))))))));
                    arr_15 [i_3] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((min((4294967295U), (4294967295U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4908291996724962183ULL)) ? (((/* implicit */int) (short)-10543)) : (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-10543), (((/* implicit */short) (_Bool)1))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) arr_5 [i_3]);
                        arr_20 [i_1] [i_3] [i_1] [i_4] [i_5] = ((((4575657221408423936LL) * (((/* implicit */long long int) ((/* implicit */int) var_3))))) > (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                        var_22 = ((/* implicit */int) (short)8627);
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */int) var_9)) <= (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_15))));
                        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_1] [(unsigned short)19] [i_2] [i_3] [i_4] [i_6]))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) 1U))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_16 [i_2] [i_2] [i_3] [i_1] [i_1 - 1])), (0U)))) : (min((arr_7 [i_1 + 1]), (((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1 + 1]))))));
                        var_27 = ((/* implicit */unsigned short) var_17);
                        var_28 = (-(((/* implicit */int) (_Bool)1)));
                        var_29 = ((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)192)), ((short)-20027)));
                        var_30 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_15)))) >= (((unsigned long long int) 10726634674381188750ULL)));
                    }
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                {
                    arr_31 [i_1] [(signed char)8] [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (unsigned char)112))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [(unsigned short)17] [(unsigned char)6] [i_3] [i_3] [i_8])) && (((/* implicit */_Bool) (unsigned char)254)))))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_3] [(short)7] [i_2] [i_8] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13)))))));
                }
                arr_32 [(unsigned char)1] [i_1] [i_3] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) max((9008107398588129427LL), (((/* implicit */long long int) (_Bool)1))))) ? ((-(((/* implicit */int) (short)-422)))) : (((/* implicit */int) var_0)))));
            }
            for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
            {
                arr_35 [i_1] [i_2] [(short)4] |= ((/* implicit */signed char) min((max((max((((/* implicit */unsigned long long int) var_7)), (var_17))), (((/* implicit */unsigned long long int) max(((signed char)-1), ((signed char)50)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) + (((/* implicit */int) var_9)))) * (((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_9] [(short)6] [i_1])) : (((/* implicit */int) (signed char)-1)))))))));
                arr_36 [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_1] [i_1])) == (((((var_15) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))) >> (((((/* implicit */int) arr_26 [i_1] [i_1])) - (82)))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_1] [i_1])) == (((((var_15) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))) >> (((((((/* implicit */int) arr_26 [i_1] [i_1])) - (82))) - (31))))))));
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    var_32 = ((/* implicit */long long int) arr_34 [i_1] [i_2] [i_2]);
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_34 [i_10] [i_2] [i_9])))))))));
                    var_34 = ((/* implicit */signed char) var_12);
                    var_35 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) arr_12 [i_1] [i_2] [(short)8])) == (((/* implicit */int) arr_23 [i_2] [i_1] [i_9] [i_9] [i_1] [(_Bool)1] [i_9])))) && (((/* implicit */_Bool) (unsigned char)102))))) == (((((/* implicit */int) max((((/* implicit */short) (unsigned char)109)), (var_4)))) - (((/* implicit */int) (short)16933))))));
                }
                for (signed char i_11 = 2; i_11 < 20; i_11 += 4) 
                {
                    arr_44 [i_1] = ((/* implicit */unsigned int) ((int) max((var_2), (((((/* implicit */int) (short)12471)) >= (((/* implicit */int) arr_19 [i_1] [i_1] [19U] [i_1] [i_1] [i_9])))))));
                    arr_45 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15387))))) ? (arr_9 [i_1] [i_2] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) < (10726634674381188747ULL)))))));
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((max((arr_14 [i_12] [i_2] [i_12] [i_1 - 1]), (((/* implicit */int) (short)-22261)))) << ((((-(var_14))) - (607495782U))))))));
                        var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [11U] [i_11]))))) ? (max((4243994886U), (((/* implicit */unsigned int) arr_18 [i_9] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_1])), (arr_43 [i_12] [i_12] [i_1] [i_11 - 1] [i_12] [i_1])))))))) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) 3141818385U)) - (var_17))))));
                        arr_49 [i_1 - 1] [13ULL] [i_9] [7] [i_1] [i_11] [i_11] = ((/* implicit */short) arr_19 [i_1] [i_2] [i_2] [(unsigned short)15] [i_11] [i_12]);
                        var_38 = ((/* implicit */signed char) var_17);
                        arr_50 [i_2] [i_9] [i_1] [i_11 - 1] [i_12] = ((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) max((arr_27 [i_1] [i_2] [i_9] [i_11]), (((/* implicit */short) (unsigned char)1)))))))), (((short) arr_29 [13] [i_2] [i_9] [i_2]))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) arr_24 [i_9] [i_2] [(_Bool)1] [i_9] [i_13] [i_11] [i_2]))));
                        arr_53 [i_1] [i_1] [9ULL] [i_1] [i_11] [i_11] [i_1] = ((/* implicit */unsigned short) var_14);
                    }
                }
            }
            for (int i_14 = 1; i_14 < 19; i_14 += 1) 
            {
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)3123)))) > (((/* implicit */int) min((arr_26 [i_1 + 1] [i_1]), (arr_26 [i_1 + 1] [i_1]))))));
                var_41 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) (unsigned char)84)), ((short)20025)))), ((-(((/* implicit */int) (signed char)1))))))) ? (((arr_7 [i_14 - 1]) & (arr_7 [i_14 - 1]))) : ((-(arr_17 [i_14 - 1] [i_1 + 1] [i_14 - 1] [i_14 - 1] [i_14] [i_2])))));
                var_42 = ((/* implicit */short) ((((/* implicit */long long int) 582079621)) & (-7339543192356501567LL)));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_15] [i_1 - 1] [(_Bool)1]))) <= (((unsigned int) (signed char)0)))))));
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        {
                            arr_66 [i_1] [i_1] [i_1] [i_16] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [(signed char)5] [i_1 - 1] [i_15] [i_1 - 1])) ? (((/* implicit */int) (short)-12469)) : (((/* implicit */int) arr_42 [i_15] [i_1 - 1] [i_15] [i_15]))));
                            var_44 ^= ((/* implicit */short) (+(((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_1] [(_Bool)1] [1U] [i_16] [i_16] [i_1] [i_15]))) : (arr_40 [i_1] [0LL] [(short)10] [0LL])))));
                            arr_67 [i_1] [i_2] [i_1] [i_16] [12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_15] [i_2] [i_15])) ? (arr_37 [i_1 + 1] [i_2] [i_2]) : (arr_37 [i_1 - 1] [i_2] [i_1])));
                        }
                    } 
                } 
                var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)0)) : (67108864)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) var_2)) <= (0))))));
            }
        }
        for (short i_18 = 2; i_18 < 19; i_18 += 1) /* same iter space */
        {
            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 1153148910U))) ? (max((((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (signed char)127)))) : ((-(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_18 [i_18] [1])))))))));
            var_47 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)94)) - (((/* implicit */int) (unsigned short)65535))))) ^ (((arr_69 [i_1]) << ((((-(arr_40 [i_1 + 1] [i_18] [i_1 + 1] [i_1]))) - (825457782U)))))));
        }
        for (short i_19 = 2; i_19 < 19; i_19 += 1) /* same iter space */
        {
            var_48 = ((/* implicit */_Bool) max((var_48), ((!(((((/* implicit */_Bool) arr_47 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1])) && (arr_46 [i_1] [(short)6] [i_19] [i_1] [i_1 + 1] [i_1])))))));
            var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_57 [i_1] [i_1] [i_19] [i_19 - 1]))))), (max((arr_69 [i_1]), (((/* implicit */unsigned long long int) (signed char)-1))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_19 + 2] [i_19] [i_19 + 2] [i_1]))) : (((((/* implicit */_Bool) (unsigned short)19154)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)162))) : (3902394609200829188LL)))));
            var_50 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_19 - 1] [i_19 + 2])) ? (arr_65 [i_1 - 1] [i_19 - 2] [i_19 - 2] [i_1] [(unsigned short)20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 + 1] [i_19 - 1] [i_19])))))));
            var_51 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) arr_27 [i_1] [i_1 - 1] [(short)1] [i_19])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_13 [11ULL] [i_19] [i_1] [i_1] [i_1] [i_1])))))))));
        }
        var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) arr_68 [i_1] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (unsigned char i_20 = 0; i_20 < 16; i_20 += 4) 
    {
        var_53 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) / (3902394609200829194LL)));
        /* LoopSeq 1 */
        for (int i_21 = 0; i_21 < 16; i_21 += 1) 
        {
            arr_77 [i_20] [(unsigned short)3] [(unsigned short)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_20] [i_20])) * (((/* implicit */int) (signed char)-118))))) ? (((arr_59 [i_20]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)4)) <= (((/* implicit */int) (unsigned short)41270)))))));
            arr_78 [i_20] = ((/* implicit */int) var_9);
        }
    }
    for (int i_22 = 2; i_22 < 17; i_22 += 1) 
    {
        var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) var_17))));
        arr_81 [(unsigned char)14] |= ((/* implicit */short) var_11);
        var_55 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)45752)) ? (((/* implicit */int) (unsigned short)45745)) : (((/* implicit */int) arr_10 [i_22 + 1] [i_22] [(unsigned char)5])))) + (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_19 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])) : (((/* implicit */int) (signed char)87))))))) ? (max((((/* implicit */int) arr_58 [i_22] [i_22 - 1] [i_22 + 1] [i_22])), (((((/* implicit */int) var_5)) + (((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) max((var_10), (((/* implicit */short) (signed char)99))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_23 = 0; i_23 < 15; i_23 += 4) 
    {
        arr_85 [(_Bool)1] [(unsigned char)13] = ((/* implicit */unsigned short) var_16);
        /* LoopNest 2 */
        for (long long int i_24 = 0; i_24 < 15; i_24 += 1) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_56 ^= ((/* implicit */unsigned char) var_1);
                        var_57 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28202))) + (18044363804739986541ULL))) + (((((/* implicit */_Bool) arr_13 [i_23] [i_23] [i_24] [i_24] [i_25] [i_25])) ? (((/* implicit */unsigned long long int) 2615497543U)) : (arr_13 [i_23] [i_23] [i_24] [i_23] [i_25] [i_26])))));
                        arr_93 [i_25] [i_25] [i_23] [i_24] [i_25] [i_25] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)125)) ? (2615497541U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21028)))))), (max((-2366642397634560725LL), (((/* implicit */long long int) (unsigned short)28888))))));
                    }
                    var_58 = ((/* implicit */signed char) (-(((/* implicit */int) max(((!(((/* implicit */_Bool) var_17)))), ((_Bool)0))))));
                    var_59 = ((/* implicit */unsigned long long int) max((var_59), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((arr_61 [i_23] [i_24] [i_24] [i_25]) >= (((/* implicit */long long int) arr_68 [i_23] [i_24] [i_23])))) ? (((/* implicit */int) ((signed char) var_16))) : (((((/* implicit */int) arr_39 [i_23] [i_24] [i_23] [i_23] [i_23])) - (((/* implicit */int) var_7))))))))))));
                    var_60 = ((/* implicit */_Bool) max((var_60), (((/* implicit */_Bool) (signed char)-93))));
                }
            } 
        } 
        var_61 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (var_3))))))), (max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_2)))))))));
    }
    var_62 -= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (825022514)))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_1))))));
}
