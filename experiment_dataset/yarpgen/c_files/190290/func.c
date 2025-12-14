/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190290
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
    var_12 = ((/* implicit */unsigned short) var_4);
    var_13 &= ((/* implicit */long long int) var_4);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (4422817808112437540ULL)));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (+(((/* implicit */int) var_10)))))));
            var_16 = ((/* implicit */long long int) var_7);
        }
        for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) /* same iter space */
        {
            var_17 -= ((/* implicit */short) arr_6 [i_0]);
            var_18 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)-25647)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 - 2] [i_2 - 2] [i_2 - 2])))));
        }
        for (unsigned char i_3 = 3; i_3 < 20; i_3 += 3) 
        {
            var_19 ^= ((/* implicit */_Bool) ((signed char) arr_11 [i_3 - 2]));
            arr_12 [i_0] [i_3] = ((/* implicit */unsigned int) 1213065529084312023ULL);
            /* LoopSeq 1 */
            for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
            {
                arr_15 [i_0] [i_3 - 3] [i_0] [i_3] = arr_7 [i_0] [(short)1] [i_0];
                arr_16 [i_0] [i_3] [i_3] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)53683)) : (((/* implicit */int) (_Bool)0))))));
                var_20 -= ((/* implicit */unsigned long long int) ((long long int) arr_9 [i_3 + 1]));
            }
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 4; i_6 < 19; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */long long int) ((14023926265597114076ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6] [i_6 - 2] [i_6])))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 1; i_8 < 20; i_8 += 3) /* same iter space */
                        {
                            var_22 ^= 4422817808112437550ULL;
                            arr_28 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-65)) + (2147483647))) >> (((((long long int) var_8)) + (3249937736993187701LL)))));
                            arr_29 [i_0] [i_5] [(unsigned short)7] [i_5] [i_8] [10] [i_6] = ((/* implicit */unsigned char) (signed char)-62);
                        }
                        for (signed char i_9 = 1; i_9 < 20; i_9 += 3) /* same iter space */
                        {
                            arr_34 [i_0] [i_5] [i_6] [i_5] [i_9] = ((((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (unsigned char)32)))) ? (((/* implicit */int) arr_32 [i_6 - 3] [i_5] [i_0] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_21 [i_0] [i_5] [i_6])));
                            arr_35 [i_0] [(unsigned short)18] [i_5] [i_7] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14023926265597114067ULL)) ? (((/* implicit */int) arr_10 [i_0] [i_5])) : (((/* implicit */int) var_1))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61)))));
                            arr_36 [(unsigned char)9] [i_5] [i_7] [i_6] [i_5] [i_0] = ((/* implicit */unsigned short) ((unsigned char) var_11));
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((_Bool) arr_10 [i_0] [(_Bool)1])))));
        }
    }
    for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 3) /* same iter space */
    {
        var_24 -= ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) var_4))));
        /* LoopSeq 2 */
        for (signed char i_11 = 1; i_11 < 22; i_11 += 2) 
        {
            var_25 = ((/* implicit */_Bool) max((var_25), (((((((/* implicit */_Bool) (unsigned short)39720)) ? (((((/* implicit */_Bool) arr_40 [8LL] [i_10] [2LL])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2573))) : (arr_37 [i_10 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_10] [(unsigned short)15] [i_10 + 1])))))))) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
            /* LoopNest 2 */
            for (signed char i_12 = 1; i_12 < 24; i_12 += 1) 
            {
                for (int i_13 = 3; i_13 < 24; i_13 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_14 = 1; i_14 < 24; i_14 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((short) (short)-1))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [(short)16]))) | (var_4))) : (((/* implicit */unsigned long long int) ((32749709) | (((/* implicit */int) arr_38 [i_10]))))))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)62))))) ? (((/* implicit */unsigned long long int) arr_49 [i_10 + 2] [i_10 - 1] [i_10 + 2] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10])) : (arr_40 [(short)10] [i_12] [i_12])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7989)) ? (var_2) : (((/* implicit */int) var_0))))) ? (arr_44 [i_10] [i_10] [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_11]))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_5))))))))));
                            var_28 += ((/* implicit */long long int) (signed char)61);
                        }
                        var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (14023926265597114069ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_13 - 3] [i_10] [i_10]))) / (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((unsigned int) -756985722))) : (((((/* implicit */_Bool) arr_47 [i_13 - 2] [i_13 + 1] [i_13 + 1] [i_11])) ? (arr_44 [i_10 + 1] [i_11 + 3] [i_12 + 1] [i_13 - 3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_13 - 3])) ? (1328241556U) : (9U)))))));
                        arr_50 [i_11] [i_11] [24] [i_13] = ((/* implicit */signed char) var_6);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_15 = 1; i_15 < 24; i_15 += 3) 
            {
                for (int i_16 = 3; i_16 < 24; i_16 += 3) 
                {
                    for (short i_17 = 1; i_17 < 24; i_17 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) max(((short)2572), ((short)-13306)))) ? (max((14023926265597114063ULL), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_60 [i_10 + 1] [i_11] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1430427344838665245LL)) ? (14023926265597114074ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */unsigned long long int) min((var_2), (var_11)))) : (((((/* implicit */unsigned long long int) arr_58 [i_10 + 1] [i_11 + 1] [(unsigned char)0] [(unsigned char)0] [i_17 + 1])) % (4422817808112437534ULL)))));
                            arr_61 [i_17 - 1] [(signed char)10] [(signed char)10] [i_10] |= ((/* implicit */unsigned long long int) -187902371);
                            var_31 |= ((/* implicit */long long int) var_4);
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (arr_55 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_45 [i_15] [i_11] [i_10] [i_16 - 1])) / (((/* implicit */int) (short)-13555)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (int i_18 = 2; i_18 < 22; i_18 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_19 = 0; i_19 < 25; i_19 += 4) 
            {
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7756))) : (arr_64 [i_10] [i_10] [i_10]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_10]))))))));
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    for (long long int i_21 = 1; i_21 < 24; i_21 += 2) 
                    {
                        {
                            arr_71 [i_21] [i_20] [i_19] = ((((/* implicit */int) arr_54 [i_10] [i_18 + 3] [i_18 + 3])) - (((/* implicit */int) arr_54 [i_10 - 1] [i_18 + 3] [i_10 - 1])));
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) var_5))));
                        }
                    } 
                } 
                var_35 -= ((8875829175417143632LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-38))));
            }
            /* LoopSeq 3 */
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                arr_76 [i_22] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_74 [i_18] [(unsigned char)19] [(unsigned char)19] [i_18 + 3]) : (((/* implicit */unsigned int) var_11))));
                var_36 = ((/* implicit */signed char) ((unsigned int) 292601991));
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2572)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (short)-2573))));
                arr_77 [(unsigned short)22] [(unsigned short)22] [(unsigned short)22] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_63 [i_10 + 1])) ? (3220697185236371401LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            }
            for (short i_23 = 0; i_23 < 25; i_23 += 2) 
            {
                var_38 = ((/* implicit */short) var_1);
                /* LoopNest 2 */
                for (signed char i_24 = 0; i_24 < 25; i_24 += 1) 
                {
                    for (short i_25 = 0; i_25 < 25; i_25 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) 3253655315U))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_2) : (((/* implicit */int) (short)-7761)))))));
                            var_40 = ((/* implicit */short) arr_68 [(_Bool)1] [i_18] [i_23] [i_24] [i_23] [i_18]);
                            arr_84 [i_10] [i_10 - 1] [i_10] |= ((/* implicit */unsigned short) 1833582411U);
                            arr_85 [i_10] [i_10] [i_18] [i_10] [i_24] [i_24] [i_25] = ((/* implicit */unsigned long long int) arr_54 [i_10 + 1] [i_23] [i_24]);
                        }
                    } 
                } 
            }
            for (unsigned char i_26 = 0; i_26 < 25; i_26 += 1) 
            {
                var_41 = (+(arr_80 [i_10] [12LL] [i_26] [i_26] [i_26]));
                /* LoopSeq 2 */
                for (unsigned long long int i_27 = 0; i_27 < 25; i_27 += 1) 
                {
                    var_42 = (!((!(((/* implicit */_Bool) var_2)))));
                    var_43 = ((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_10] [i_18 - 1] [i_26] [i_10 + 1])) ? (arr_67 [i_10] [i_18 + 1] [i_26] [i_10 + 1]) : (arr_67 [i_18] [i_18 - 1] [i_18] [i_10 - 1])));
                }
                for (signed char i_28 = 0; i_28 < 25; i_28 += 2) 
                {
                    var_44 = ((/* implicit */long long int) 2248535704U);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_29 = 0; i_29 < 25; i_29 += 3) 
                    {
                        arr_99 [i_10] [i_28] |= ((/* implicit */int) 9223372036854775807LL);
                        arr_100 [i_28] [i_26] [i_26] [i_26] [i_26] [i_26] [i_28] = ((((/* implicit */_Bool) arr_86 [i_18 - 1])) ? (arr_68 [i_18 + 1] [i_18 + 2] [i_18 + 2] [i_18 - 2] [i_18] [i_10 - 1]) : (arr_86 [i_18 + 1]));
                        var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_62 [i_10] [i_29])))) ? (((var_9) ^ (4ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        arr_101 [i_28] [i_28] [i_18] [i_18] [i_28] &= ((/* implicit */int) arr_46 [i_18] [i_28]);
                    }
                    arr_102 [i_26] [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 530012492U)) ? (1041311980U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (arr_91 [i_18] [i_18 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9892)))));
                }
                var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 3253655309U)) : (arr_37 [i_18]))) == (((/* implicit */long long int) (+(3253655316U)))))))));
            }
        }
        var_47 &= ((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (1069724989U))) ? (1041311979U) : ((-(1041311981U)))))), (min((((/* implicit */long long int) arr_88 [22ULL] [22ULL])), (((((/* implicit */_Bool) arr_89 [i_10] [i_10] [(signed char)14])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_57 [i_10] [i_10] [i_10] [i_10 + 2] [i_10 - 1] [20LL])))))));
    }
    for (unsigned long long int i_30 = 1; i_30 < 23; i_30 += 3) /* same iter space */
    {
        var_48 = ((/* implicit */unsigned long long int) var_6);
        var_49 = ((/* implicit */short) (_Bool)1);
    }
    for (int i_31 = 2; i_31 < 12; i_31 += 2) 
    {
        arr_109 [i_31] = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_31 - 1] [i_31] [i_31])) ? (1041311981U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), ((~(arr_80 [i_31 - 1] [i_31] [i_31] [i_31 - 2] [i_31]))));
        arr_110 [i_31] = ((/* implicit */int) min((4422817808112437536ULL), (((/* implicit */unsigned long long int) max((530012472U), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-70)), (var_1)))))))));
    }
}
