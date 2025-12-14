/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212603
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_11 = arr_1 [i_0 - 1];
        arr_3 [i_0 + 1] = ((/* implicit */unsigned char) ((arr_1 [i_0 - 2]) | (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)231)))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                var_12 = ((/* implicit */long long int) (unsigned char)64);
                var_13 = ((((((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)18] [i_2])) ? (-1927906512293532441LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))) % (arr_0 [i_0 - 2] [i_0 - 2]));
            }
            var_14 = ((/* implicit */unsigned char) ((arr_7 [i_0 - 2] [i_1]) & (((((/* implicit */_Bool) var_3)) ? (var_0) : (arr_0 [i_1 + 2] [i_0])))));
            var_15 = (unsigned char)148;
            var_16 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_0] [i_0 + 1]))) < ((-(8437209152094833509LL)))));
        }
        for (long long int i_3 = 4; i_3 < 23; i_3 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                var_17 ^= (~(var_4));
                var_18 = ((/* implicit */unsigned char) var_9);
                var_19 = arr_15 [i_4];
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) ((arr_0 [i_0 + 1] [i_0]) - (var_7)));
                    var_21 |= ((/* implicit */unsigned char) ((var_9) <= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)92)) / (((/* implicit */int) (unsigned char)116)))))));
                }
                for (unsigned char i_6 = 3; i_6 < 21; i_6 += 3) 
                {
                    var_22 = ((/* implicit */long long int) (unsigned char)130);
                    var_23 = ((((/* implicit */_Bool) (+(var_7)))) ? (((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_8 [i_0] [(unsigned char)14] [i_4]))) : (arr_5 [i_0] [i_3]));
                    arr_22 [i_0] [i_3 - 2] [i_3 - 2] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0 - 2] [i_3 - 1] [i_6])) & (((/* implicit */int) arr_12 [(unsigned char)1] [(unsigned char)1] [i_4]))));
                }
                var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned char)136))));
            }
            for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                var_25 = ((/* implicit */unsigned char) var_9);
                /* LoopSeq 4 */
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) % (((((/* implicit */_Bool) -3333092032850308980LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7]))) : (650894864080897110LL)))));
                    arr_28 [8LL] = ((arr_15 [i_0 - 2]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))));
                }
                for (long long int i_9 = 2; i_9 < 23; i_9 += 3) 
                {
                    arr_32 [(unsigned char)23] [i_9 - 1] [i_9] [i_9] [i_3] [i_0 - 2] = ((/* implicit */long long int) ((arr_23 [i_9 + 1] [i_9 + 1] [i_9] [i_9]) == (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                    arr_33 [i_0] [i_0] [i_9] [i_9] [i_9] [i_0] = arr_1 [i_3];
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        var_27 = (~(arr_25 [i_0] [i_3] [i_7] [i_9 + 1]));
                        var_28 = ((/* implicit */unsigned char) (-(arr_8 [i_9] [i_3 - 1] [i_9 + 1])));
                        var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [11LL] [i_3 + 1] [i_9 + 1]))));
                    }
                    for (long long int i_11 = 3; i_11 < 22; i_11 += 1) 
                    {
                        var_30 = var_6;
                        arr_40 [i_9] [(unsigned char)18] [i_7] [i_9] [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                    }
                    var_31 = ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1]));
                    var_32 = ((/* implicit */long long int) var_5);
                }
                for (long long int i_12 = 3; i_12 < 23; i_12 += 2) 
                {
                    arr_45 [(unsigned char)23] = ((/* implicit */unsigned char) ((((var_9) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) ^ (((((/* implicit */_Bool) (unsigned char)141)) ? (3346231723975961094LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))));
                    arr_46 [i_12] = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)108)))) | (((/* implicit */int) var_1))));
                    arr_47 [i_12] [i_7] [i_3 - 1] [i_0 + 1] [i_0 + 1] = (~(arr_44 [i_0] [i_3 - 1] [i_7] [i_12 - 2]));
                    var_33 = ((arr_25 [i_3 - 2] [i_3 + 1] [i_3] [i_3 - 1]) | ((+(arr_43 [i_0 - 1] [i_3] [i_3] [i_12]))));
                }
                for (long long int i_13 = 3; i_13 < 23; i_13 += 2) 
                {
                    arr_50 [i_0] [i_0] [i_0] [i_0] = ((long long int) -2787788914396484019LL);
                    arr_51 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_48 [i_0 - 2] [i_13 + 1]) < (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                }
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    for (unsigned char i_15 = 3; i_15 < 23; i_15 += 2) 
                    {
                        {
                            arr_59 [i_0] [i_0] = arr_13 [i_0] [i_0] [i_0 + 1];
                            var_34 *= ((/* implicit */unsigned char) ((arr_15 [i_15]) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20)))));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_0 - 2] [i_3 - 2] [i_15 - 3] [i_15] [i_15 + 1] [i_15])) <= (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)120)))))))));
                        }
                    } 
                } 
            }
            for (long long int i_16 = 3; i_16 < 22; i_16 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_17 = 0; i_17 < 24; i_17 += 3) 
                {
                    var_36 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)231)) && (((/* implicit */_Bool) -4367342526519830340LL))));
                    arr_66 [i_17] [i_16] [(unsigned char)14] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_0] [i_3] [i_16 - 2] [i_17])) ? (arr_37 [i_17] [i_3 - 4]) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))))))));
                    /* LoopSeq 3 */
                    for (long long int i_18 = 1; i_18 < 22; i_18 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (-2787788914396484027LL))))));
                        arr_69 [i_0] [i_0] [i_3] [i_17] [i_0] [i_18] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_16])))))));
                        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
                    }
                    for (long long int i_19 = 1; i_19 < 22; i_19 += 1) /* same iter space */
                    {
                        arr_72 [i_17] [i_17] = ((/* implicit */unsigned char) 2853560160546571028LL);
                        arr_73 [i_17] [i_17] = ((/* implicit */unsigned char) ((long long int) arr_57 [i_19 + 1] [i_19] [i_16 - 3] [i_3 - 1] [i_3 - 4] [i_3]));
                    }
                    for (long long int i_20 = 1; i_20 < 22; i_20 += 1) /* same iter space */
                    {
                        arr_76 [i_0] [i_17] [20LL] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)120))));
                        var_39 *= ((/* implicit */unsigned char) (~(-2787788914396484027LL)));
                    }
                    var_40 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_74 [i_3 - 1] [i_3 - 3] [(unsigned char)17] [i_3 - 4] [i_3 + 1])) : (((/* implicit */int) var_1))));
                }
                for (long long int i_21 = 1; i_21 < 22; i_21 += 2) 
                {
                    arr_79 [i_0] [i_0] [(unsigned char)17] [(unsigned char)17] [i_21] [i_21] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (arr_60 [i_0 - 1] [i_3] [i_0 - 1])));
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -4367342526519830340LL)) && (((/* implicit */_Bool) 2787788914396484026LL)))))) : (arr_61 [i_3 - 4]))))));
                }
                var_42 = ((((/* implicit */_Bool) var_10)) ? (2894464304448566655LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
            }
            for (unsigned char i_22 = 0; i_22 < 24; i_22 += 3) 
            {
                arr_82 [i_0] [i_0] [i_0] [(unsigned char)14] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_9)) ? (arr_20 [i_22]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                /* LoopNest 2 */
                for (unsigned char i_23 = 2; i_23 < 21; i_23 += 2) 
                {
                    for (unsigned char i_24 = 0; i_24 < 24; i_24 += 2) 
                    {
                        {
                            var_43 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((-(6553553188610372972LL))) : ((+(arr_23 [i_0] [i_3 + 1] [i_22] [i_0])))));
                            arr_88 [i_0] [i_0] [(unsigned char)3] [i_0] = var_5;
                            var_44 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)1))));
                            var_45 = (+(((((/* implicit */_Bool) (unsigned char)78)) ? (619415239902766436LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43))))));
                        }
                    } 
                } 
                var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)108)) && (((/* implicit */_Bool) var_4))));
            }
            /* LoopNest 2 */
            for (long long int i_25 = 0; i_25 < 24; i_25 += 1) 
            {
                for (long long int i_26 = 0; i_26 < 24; i_26 += 2) 
                {
                    {
                        arr_95 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */long long int) var_5);
                        arr_96 [i_0 - 1] [i_3] [i_25] [i_25] = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) arr_92 [i_0 - 1] [i_3] [i_26])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_27 = 0; i_27 < 24; i_27 += 3) 
                        {
                            arr_99 [i_26] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_1))));
                            arr_100 [i_26] [i_3 + 1] [i_25] [i_26] [i_27] = ((/* implicit */long long int) (unsigned char)122);
                        }
                        for (long long int i_28 = 0; i_28 < 24; i_28 += 3) 
                        {
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)111)) || (((/* implicit */_Bool) var_9))));
                            arr_103 [i_3] [i_3 - 1] [i_26] [i_26] [i_26] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_81 [i_0 + 1] [i_0 + 1])) ? (arr_81 [i_0 + 1] [i_26]) : (arr_81 [i_0 - 1] [i_28])));
                            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_57 [5LL] [i_0] [i_3] [i_25] [i_26] [i_28])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_0 + 1]))) : (-6553553188610372972LL)));
                            var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) ((arr_43 [i_0 - 1] [i_0] [i_0 - 2] [i_3 + 1]) < (arr_43 [i_0 - 2] [6LL] [i_0 - 2] [i_3 - 3]))))));
                        }
                        arr_104 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_102 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_102 [i_25] [i_0 - 2] [i_0 - 2] [i_0] [i_0]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_29 = 4; i_29 < 23; i_29 += 3) 
            {
                for (long long int i_30 = 3; i_30 < 21; i_30 += 1) 
                {
                    for (unsigned char i_31 = 0; i_31 < 24; i_31 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)224))));
                            arr_111 [i_0] [i_30] [i_0] [i_30] [i_31] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2853560160546571028LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) : (905377538172474915LL)));
                        }
                    } 
                } 
            } 
        }
        var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_106 [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)103))))))));
    }
    for (unsigned char i_32 = 2; i_32 < 23; i_32 += 4) /* same iter space */
    {
        var_52 = ((/* implicit */long long int) (unsigned char)9);
        arr_114 [i_32] [i_32] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned char) arr_75 [(unsigned char)4] [i_32] [(unsigned char)4] [i_32] [i_32] [i_32]))), (max((((long long int) var_1)), (min((((/* implicit */long long int) arr_11 [i_32] [i_32])), (var_9)))))));
    }
    var_53 -= ((/* implicit */long long int) (((+(((/* implicit */int) var_8)))) == (((/* implicit */int) var_10))));
    var_54 = var_3;
    /* LoopSeq 3 */
    for (unsigned char i_33 = 0; i_33 < 11; i_33 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_34 = 0; i_34 < 11; i_34 += 2) 
        {
            var_55 = ((((long long int) (unsigned char)29)) ^ (arr_2 [i_34]));
            arr_121 [i_33] = ((/* implicit */unsigned char) (+((-(arr_42 [i_33] [i_34])))));
        }
        arr_122 [i_33] = (~(-2894464304448566655LL));
    }
    for (unsigned char i_35 = 3; i_35 < 16; i_35 += 4) /* same iter space */
    {
        arr_126 [i_35] = ((/* implicit */long long int) (!((((!(((/* implicit */_Bool) var_0)))) && (((((/* implicit */_Bool) -905377538172474917LL)) && (((/* implicit */_Bool) -905377538172474915LL))))))));
        arr_127 [i_35] = ((/* implicit */long long int) var_10);
        var_56 = ((/* implicit */unsigned char) ((min((var_4), ((+(var_4))))) - (((/* implicit */long long int) ((/* implicit */int) min((arr_53 [i_35 + 1]), (arr_53 [i_35 + 2])))))));
        var_57 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)154))));
    }
    for (unsigned char i_36 = 3; i_36 < 16; i_36 += 4) /* same iter space */
    {
        var_58 = ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_36 - 3]))) ? (((((/* implicit */_Bool) arr_1 [i_36 - 3])) ? (var_9) : (arr_1 [i_36 - 3]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))) % (arr_1 [i_36 - 3]))));
        arr_130 [i_36] = ((unsigned char) 2894464304448566660LL);
    }
}
