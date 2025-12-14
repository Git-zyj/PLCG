/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28254
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
    var_18 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(-6933621225930846724LL))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))) + (arr_1 [i_0])));
        var_19 = ((/* implicit */unsigned char) ((((arr_0 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_8))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2182668974578680473LL))))))));
        var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) var_6);
            var_22 = (unsigned char)223;
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 + 3] [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 2])) : (((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 2]))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 2])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
            }
            for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_12 [i_3] [i_1] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)223))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_25 = var_2;
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_0] [i_3] [i_1] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)17)) > (((/* implicit */int) (unsigned char)107))))) : (arr_19 [i_1 + 3] [i_1 + 3] [i_4 - 1])));
                            var_27 = ((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_16))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8] [i_8] [7U]))));
                            var_29 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_1 - 1]);
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((unsigned long long int) var_11)))));
                            var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */int) arr_0 [i_0]);
            }
            /* LoopSeq 2 */
            for (unsigned int i_9 = 3; i_9 < 10; i_9 += 2) 
            {
                var_33 = ((/* implicit */unsigned long long int) ((arr_3 [i_9 - 1] [i_9 - 2] [i_9 - 1]) << (((arr_3 [i_9 - 3] [i_9 - 3] [i_9 - 2]) - (6951920383706223725LL)))));
                /* LoopNest 2 */
                for (signed char i_10 = 3; i_10 < 8; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        {
                            var_34 -= ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
                            var_35 = arr_8 [i_10 + 3] [i_10 + 3] [i_9 - 3] [i_10];
                            arr_36 [i_9] [i_1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40))) : (2266308155U)))) < (((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_1)))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */signed char) 8175309839952792088ULL);
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    for (unsigned int i_13 = 3; i_13 < 10; i_13 += 1) 
                    {
                        {
                            arr_42 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_9])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? ((-(((/* implicit */int) var_16)))) : (((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_34 [i_9]))))));
                            var_37 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_1])) ? (arr_28 [i_1]) : (arr_28 [i_0])));
                            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [3LL] [i_0])))))));
                            var_39 ^= ((/* implicit */unsigned int) (unsigned char)138);
                        }
                    } 
                } 
                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 3])) || (((/* implicit */_Bool) arr_17 [i_9 - 3] [i_9] [i_1 - 1]))));
            }
            for (unsigned char i_14 = 3; i_14 < 7; i_14 += 2) 
            {
                var_41 -= ((/* implicit */signed char) ((arr_30 [i_1] [i_1 + 3]) - (arr_30 [i_1] [i_1])));
                var_42 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_1] [i_1])))) << (((((((/* implicit */_Bool) -2250118293859961126LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-10))) : (-4550694556506710300LL))) + (13LL)))));
            }
        }
        for (long long int i_15 = 2; i_15 < 8; i_15 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                var_43 = (-(19078152473956519ULL));
                var_44 = ((/* implicit */unsigned int) arr_32 [i_0] [i_0] [i_0] [i_0]);
            }
            for (int i_17 = 1; i_17 < 9; i_17 += 2) 
            {
                arr_54 [i_17] [9LL] [i_17] = ((/* implicit */unsigned long long int) var_15);
                /* LoopSeq 3 */
                for (signed char i_18 = 0; i_18 < 11; i_18 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_19 = 2; i_19 < 9; i_19 += 3) /* same iter space */
                    {
                        arr_62 [i_0] [i_0] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)73)) * (((/* implicit */int) (unsigned char)165))));
                        var_45 = ((unsigned char) arr_15 [i_17] [i_15 + 3] [i_17] [i_18] [i_17] [i_19 - 2]);
                    }
                    for (unsigned long long int i_20 = 2; i_20 < 9; i_20 += 3) /* same iter space */
                    {
                        arr_66 [i_20 - 1] [i_20 - 1] [i_20] [i_17] [i_20] [6ULL] [i_20] = ((/* implicit */unsigned char) ((signed char) arr_25 [i_0] [i_0] [i_0] [i_0] [i_17] [i_0] [i_0]));
                        var_46 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [(unsigned char)9] [i_15] [i_15] [i_20])) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)87)))))));
                    }
                    for (signed char i_21 = 1; i_21 < 10; i_21 += 2) 
                    {
                        var_47 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_57 [(unsigned char)2] [i_17] [i_15 + 2] [i_17])) >= (arr_22 [i_15] [5ULL] [i_15 + 2] [i_17])));
                        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4550694556506710301LL)) && (((/* implicit */_Bool) var_4)))) && (((((/* implicit */_Bool) arr_0 [4U])) && (((/* implicit */_Bool) (unsigned char)201)))))))));
                        arr_70 [i_0] [i_15 + 3] [i_17] [i_17] [(signed char)1] = ((/* implicit */long long int) arr_32 [i_15] [i_15 - 1] [i_15 + 1] [i_17 + 1]);
                    }
                    for (short i_22 = 0; i_22 < 11; i_22 += 3) 
                    {
                        var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) * (9959752814921048324ULL))))));
                        arr_73 [i_17] [i_17] [(signed char)3] [i_17] [i_17] [i_17 + 1] [i_17] = ((((/* implicit */_Bool) arr_29 [i_17 + 2] [i_15 + 3] [i_17 + 2])) ? (arr_29 [i_17 + 2] [i_15 + 3] [i_22]) : (arr_29 [i_17 + 2] [i_15 + 1] [i_17]));
                        var_50 = ((/* implicit */unsigned char) (+(((arr_55 [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)130)))))));
                    }
                    var_51 = ((/* implicit */unsigned int) arr_6 [i_0] [i_17 + 2] [i_18]);
                    arr_74 [i_17] = var_9;
                }
                for (long long int i_23 = 1; i_23 < 9; i_23 += 4) 
                {
                    var_52 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_17 + 1] [i_23 - 1])) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))));
                    var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) arr_64 [i_15]))));
                    var_54 = ((/* implicit */signed char) ((((((/* implicit */int) var_2)) == (((/* implicit */int) var_15)))) ? (((12305831379571241059ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_23 + 2] [i_23] [i_23] [i_23] [i_23] [i_15 + 1] [i_0])))));
                }
                for (unsigned char i_24 = 0; i_24 < 11; i_24 += 4) 
                {
                    var_55 = ((/* implicit */int) max((var_55), (((/* implicit */int) ((long long int) (~(((/* implicit */int) (unsigned char)249))))))));
                    arr_79 [i_0] [8] [i_17] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_23 [i_24] [i_24] [i_17]) : (-3050954449986218144LL)))) ? (((/* implicit */int) ((arr_61 [(unsigned char)4] [i_15] [1U] [i_15] [i_15 + 3] [(unsigned char)1]) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)73)))))));
                    arr_80 [i_0] [i_15 + 1] [i_0] [i_17] [(unsigned char)8] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((-3580009305190479907LL) != (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_24]))))))));
                    var_56 = ((/* implicit */long long int) arr_44 [i_17 + 2] [i_24] [i_15 + 1] [(unsigned char)3]);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 4; i_25 < 10; i_25 += 3) 
                {
                    for (unsigned long long int i_26 = 1; i_26 < 10; i_26 += 4) 
                    {
                        {
                            var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_17] [i_26 + 1] [i_17])) ? (((/* implicit */int) var_8)) : (var_6)));
                            var_58 = ((/* implicit */unsigned char) var_7);
                            var_59 = ((/* implicit */signed char) min((var_59), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)224)) / (((/* implicit */int) arr_26 [i_0] [i_0] [i_17 + 2] [i_17 + 2] [i_26]))))) % (arr_22 [i_0] [i_15] [i_0] [i_0]))))));
                            arr_85 [i_17] = ((/* implicit */short) ((((/* implicit */int) var_16)) * (((/* implicit */int) arr_41 [i_15 + 3] [i_15] [i_15] [i_15] [i_26]))));
                            var_60 = ((/* implicit */signed char) (~(((/* implicit */int) arr_45 [4LL] [4LL] [i_0] [i_15 - 2]))));
                        }
                    } 
                } 
            }
            for (unsigned int i_27 = 0; i_27 < 11; i_27 += 1) 
            {
                arr_90 [i_27] [i_27] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_1)) : (6140912694138310556ULL))));
                arr_91 [i_27] = ((/* implicit */unsigned long long int) var_6);
                arr_92 [i_27] [i_27] = ((/* implicit */signed char) (+(var_13)));
                var_61 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_27])) ^ (((/* implicit */int) arr_64 [i_27]))))) ? (((/* implicit */long long int) arr_76 [i_0] [i_15 - 2] [i_15 - 2] [i_15 + 2])) : (((long long int) (unsigned char)232))));
                arr_93 [i_0] [i_0] &= ((/* implicit */unsigned char) ((6140912694138310557ULL) * (((/* implicit */unsigned long long int) arr_83 [i_0] [i_15 + 1]))));
            }
            var_62 += ((/* implicit */signed char) 2152495650U);
        }
        for (unsigned char i_28 = 0; i_28 < 11; i_28 += 2) /* same iter space */
        {
            var_63 += ((/* implicit */unsigned char) ((long long int) (unsigned char)247));
            var_64 = ((/* implicit */signed char) ((long long int) var_12));
        }
        for (unsigned char i_29 = 0; i_29 < 11; i_29 += 2) /* same iter space */
        {
            var_65 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (12305831379571241059ULL) : (12305831379571241049ULL)));
            var_66 = ((/* implicit */int) min((var_66), (((/* implicit */int) ((short) ((unsigned char) arr_32 [i_0] [2ULL] [(unsigned char)6] [i_29]))))));
            arr_98 [i_29] [i_29] = ((/* implicit */signed char) var_14);
            var_67 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])) > (4698769816397167053ULL)));
        }
    }
    for (unsigned char i_30 = 0; i_30 < 11; i_30 += 2) /* same iter space */
    {
        var_68 = ((/* implicit */unsigned long long int) ((int) arr_51 [i_30] [i_30]));
        var_69 = ((/* implicit */int) ((unsigned char) arr_41 [i_30] [i_30] [i_30] [i_30] [i_30]));
        arr_101 [i_30] = ((/* implicit */unsigned long long int) arr_16 [i_30] [i_30] [i_30] [i_30]);
    }
}
