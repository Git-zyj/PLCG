/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225391
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
    var_13 = ((/* implicit */long long int) (-(((/* implicit */int) (((((_Bool)0) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) == (((/* implicit */long long int) var_3)))))));
    var_14 = ((/* implicit */signed char) var_12);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (_Bool)1))));
                    var_16 = ((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967289U)));
    /* LoopSeq 4 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_9)))) ? ((-(arr_3 [i_3] [i_4 + 2] [i_3]))) : (((arr_3 [i_3] [i_4 + 2] [i_3]) << (((((arr_9 [i_3] [i_4] [i_4 + 2] [i_3]) + (5855621721279971566LL))) - (5LL)))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */long long int) var_9)) < (min((arr_4 [i_4 - 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-1)))))))))));
                }
            } 
        } 
        arr_18 [i_3] = ((/* implicit */long long int) min((max((0U), (((/* implicit */unsigned int) arr_10 [i_3] [i_3] [i_3] [i_3])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3])))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3])) ? (arr_13 [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) min(((_Bool)0), (arr_10 [19ULL] [i_3] [i_3] [i_3])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))) : (var_6)));
        var_21 *= ((/* implicit */signed char) (-((+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_13 [i_3] [i_3] [12LL])))))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(min((var_4), (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3])))))))));
    }
    for (unsigned int i_6 = 3; i_6 < 23; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            for (signed char i_8 = 1; i_8 < 21; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (short)(-32767 - 1)))))))) ? ((+((-(6U))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_9]))))))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6] [i_9] [i_6]))))))))));
                        var_25 = ((/* implicit */_Bool) max((var_2), (((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32757))) : (arr_23 [i_6 + 1] [i_8] [i_6])))) ? (arr_19 [i_6]) : (arr_27 [i_9] [1] [i_6] [i_6] [i_6] [i_6])))));
                    }
                } 
            } 
        } 
        var_26 ^= ((/* implicit */long long int) (-(((var_5) / (((/* implicit */unsigned int) var_4))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            for (int i_11 = 3; i_11 < 21; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            {
                                arr_39 [(short)22] [i_6] [i_11 - 1] [i_12] = ((/* implicit */short) var_2);
                                var_27 = ((max((var_6), (((/* implicit */unsigned long long int) arr_22 [i_6 - 2] [i_6] [i_6])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) (signed char)-9)), (72057594037927935LL)))));
                    var_29 = ((/* implicit */int) ((((4294967289U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)32751))))) ? ((+((-(var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                }
            } 
        } 
    }
    for (unsigned int i_14 = 3; i_14 < 20; i_14 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_15 = 0; i_15 < 22; i_15 += 4) 
        {
            var_30 = ((/* implicit */long long int) (-(arr_42 [i_14 + 1] [i_15])));
            /* LoopSeq 3 */
            for (unsigned long long int i_16 = 2; i_16 < 20; i_16 += 1) 
            {
                var_31 = ((/* implicit */long long int) ((arr_34 [i_16] [i_16 - 1] [i_16 - 1] [i_16] [i_16 - 1]) < (((/* implicit */long long int) arr_26 [i_16 + 2] [i_15] [i_16]))));
                arr_47 [i_14] [i_16] [i_14] = ((/* implicit */long long int) (-(((/* implicit */int) arr_36 [i_14] [i_15] [i_15] [i_14 - 2] [i_16 - 2] [i_16 - 2] [i_14 + 1]))));
                arr_48 [i_16] [i_16 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (var_10)));
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) ((29360128U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                            var_33 = ((/* implicit */int) ((var_11) ? (arr_53 [i_17 + 1] [i_17 + 1] [i_17 + 1] [5ULL] [i_17 + 1]) : (((/* implicit */long long int) var_3))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    arr_59 [i_14] [i_15] [i_16] [i_14] = ((((/* implicit */int) (short)32751)) == (((/* implicit */int) (short)(-32767 - 1))));
                    var_34 = ((/* implicit */signed char) ((int) (+(((/* implicit */int) arr_41 [i_16])))));
                    arr_60 [i_14] [i_16] [i_14 - 3] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_29 [i_14 + 2] [(short)1])) : (((/* implicit */int) arr_29 [i_14 - 1] [i_14 + 2]))));
                }
            }
            for (short i_20 = 0; i_20 < 22; i_20 += 2) 
            {
                arr_65 [i_15] = (-(arr_27 [i_14] [i_15] [i_15] [i_15] [i_14] [i_14 + 2]));
                arr_66 [i_20] [i_15] [i_14] = ((/* implicit */unsigned long long int) var_0);
                var_35 = ((/* implicit */_Bool) ((18446744073709551615ULL) & (arr_42 [i_14 - 2] [i_20])));
            }
            for (signed char i_21 = 0; i_21 < 22; i_21 += 4) 
            {
                arr_69 [i_21] [3LL] [3LL] [18LL] = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_14] [i_14 - 2] [i_15])) - (((/* implicit */int) arr_35 [i_15]))));
                /* LoopSeq 1 */
                for (long long int i_22 = 0; i_22 < 22; i_22 += 1) 
                {
                    arr_73 [i_14 + 1] = ((/* implicit */short) (~(((/* implicit */int) (!(arr_41 [6U]))))));
                    var_36 = ((/* implicit */_Bool) max((var_36), ((!(((/* implicit */_Bool) var_4))))));
                    arr_74 [i_14] = ((/* implicit */unsigned long long int) ((arr_57 [i_14 - 2] [i_15] [(_Bool)1] [i_14 - 3] [i_15] [i_14 - 3]) ? (arr_31 [i_15] [20U] [i_14 - 1]) : (arr_31 [i_21] [i_14] [i_14 + 2])));
                    arr_75 [i_22] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_14 - 3]))) & (4294967275U)));
                }
            }
            var_37 = ((/* implicit */int) arr_49 [i_15] [i_15] [i_14 + 2] [i_14] [i_15]);
        }
        var_38 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_72 [i_14] [i_14] [i_14 + 2] [i_14])) : (((/* implicit */int) arr_21 [4U]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [(_Bool)1] [i_14 - 1] [i_14 + 2] [i_14])) ? (arr_50 [i_14] [i_14] [i_14 - 3] [i_14 - 1]) : (arr_50 [i_14 - 2] [i_14] [i_14 - 2] [i_14 - 2])))) : (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (arr_19 [(short)14])))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [(signed char)12] [i_14] [i_14 + 2] [i_14]))) : (var_1)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_23 = 2; i_23 < 20; i_23 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_24 = 1; i_24 < 19; i_24 += 4) 
            {
                var_39 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((1ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7))))))) < (var_8))) ? ((((-(var_1))) >> (((arr_50 [i_23 - 2] [i_24 + 3] [i_24 + 3] [i_14 - 1]) + (2799176739452554415LL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_24] [i_23 - 1] [i_24])) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-1))))) : ((+(-1LL))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 0; i_25 < 22; i_25 += 2) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 22; i_26 += 2) 
                    {
                        {
                            var_40 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_81 [i_23 + 2] [i_24 - 1] [i_25])) ? (arr_81 [i_23 + 2] [i_24 - 1] [i_26]) : (arr_81 [i_23 + 2] [i_24 - 1] [i_26])))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (18446744073709551615ULL)))));
                            arr_87 [i_14 - 3] [i_23 + 2] [i_24] [i_14 - 3] [i_26] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_24] [i_24] [i_24 + 1] [i_24] [i_25])) ? (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_14] [i_23] [i_24 + 1] [i_24 + 3]))) : ((-9223372036854775807LL - 1LL)))))));
                        }
                    } 
                } 
                arr_88 [i_23] [i_23] [i_24] = ((/* implicit */unsigned int) (_Bool)1);
            }
            for (long long int i_27 = 0; i_27 < 22; i_27 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_28 = 0; i_28 < 22; i_28 += 2) 
                {
                    for (long long int i_29 = 0; i_29 < 22; i_29 += 4) 
                    {
                        {
                            var_41 ^= ((/* implicit */unsigned int) (_Bool)1);
                            var_42 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_1))) * (((/* implicit */int) arr_32 [i_14] [i_23] [i_14] [i_28]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_27])) ? (((/* implicit */unsigned int) var_3)) : (var_9)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)32742))))) : (var_12))) : (((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) * (((long long int) (signed char)9))))));
                            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                {
                    for (unsigned int i_31 = 2; i_31 < 21; i_31 += 3) 
                    {
                        {
                            arr_103 [i_30] [i_30] [i_14 - 2] [i_30] [i_27] = arr_71 [i_14] [20LL] [i_27] [20LL];
                            var_44 = arr_40 [i_14 + 1];
                        }
                    } 
                } 
                var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967279U)) && (((_Bool) arr_22 [i_14 + 1] [i_27] [i_14 - 1]))));
                arr_104 [i_14 - 3] [i_14 - 3] [i_23 + 2] [16ULL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
            }
            var_46 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((-1LL) + (9223372036854775807LL))) << (((((-4LL) + (58LL))) - (54LL)))))) ? (((/* implicit */long long int) 0U)) : (arr_91 [i_23 - 2] [i_14] [i_14 - 1] [i_14 - 1]))) << ((((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_98 [i_14] [(signed char)14] [(signed char)14] [i_14] [i_14 + 2]))))))) + (64)))));
            /* LoopSeq 1 */
            for (_Bool i_32 = 0; i_32 < 0; i_32 += 1) 
            {
                var_47 = ((/* implicit */short) (+(max((var_6), (((/* implicit */unsigned long long int) arr_26 [i_32 + 1] [i_23 + 2] [18ULL]))))));
                /* LoopNest 2 */
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                {
                    for (long long int i_34 = 0; i_34 < 22; i_34 += 4) 
                    {
                        {
                            var_48 *= ((/* implicit */long long int) ((((arr_43 [i_23] [i_23 - 1]) + (arr_43 [i_23 + 2] [i_23 + 1]))) / ((+(arr_43 [i_23] [i_23 + 2])))));
                            var_49 = ((/* implicit */_Bool) ((signed char) arr_100 [i_14 + 1]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_35 = 0; i_35 < 22; i_35 += 1) 
                {
                    for (int i_36 = 0; i_36 < 22; i_36 += 4) 
                    {
                        {
                            var_50 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_35 [i_35]))))));
                            var_51 ^= min((var_2), (((((/* implicit */_Bool) arr_92 [i_32 + 1] [(_Bool)1] [i_23 + 1])) ? (arr_92 [i_32 + 1] [i_23 - 2] [i_23 + 2]) : (arr_92 [i_32 + 1] [i_23] [i_23 - 2]))));
                            var_52 += ((/* implicit */signed char) (_Bool)1);
                            arr_118 [i_14 + 2] [(_Bool)1] [i_14] [i_14 - 3] [i_35] = ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-17)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_32]))) - (arr_27 [i_14 - 3] [19ULL] [i_14] [i_35] [i_14 - 3] [i_14 + 2])))))) && (((/* implicit */_Bool) min((arr_37 [i_35] [i_23] [i_23] [i_23] [(_Bool)1] [i_36] [(_Bool)1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
                        }
                    } 
                } 
            }
            arr_119 [i_23] [i_14] = (~(((((/* implicit */_Bool) -31LL)) ? (567453553048682496LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
        {
            arr_122 [i_14] [i_14] = -1LL;
            var_53 = ((/* implicit */_Bool) arr_53 [i_14 + 2] [i_37] [i_14 + 2] [i_14 - 3] [i_14 + 2]);
        }
    }
    for (unsigned int i_38 = 3; i_38 < 20; i_38 += 3) /* same iter space */
    {
        arr_126 [i_38] = ((/* implicit */int) (~(min((4294967289U), (((/* implicit */unsigned int) (_Bool)0))))));
        arr_127 [(_Bool)1] [i_38] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_115 [i_38 - 1] [i_38] [i_38] [i_38 + 1]))))))))));
    }
}
