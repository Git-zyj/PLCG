/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27499
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
    var_17 += ((/* implicit */unsigned short) (+(max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)19689)) : (((/* implicit */int) var_1))))))));
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_15))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) (unsigned short)4038)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)22763)) : (((/* implicit */int) (unsigned short)48827))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19086)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_19 += (unsigned short)4;
                                arr_13 [i_2] = var_11;
                            }
                        } 
                    } 
                    arr_14 [i_2] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_1 [i_2])))), (((((/* implicit */_Bool) (unsigned short)44340)) ? (((/* implicit */int) (unsigned short)65510)) : (((/* implicit */int) (unsigned short)45855))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_15 [i_0] [(unsigned short)3] [i_0] [i_0]), (max((var_2), ((unsigned short)65521))))))));
                            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((unsigned short)55070), (arr_16 [i_5 - 1] [i_2] [i_2])))) ? (((/* implicit */int) (unsigned short)12274)) : ((-(((/* implicit */int) (unsigned short)14864)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_15 [i_0] [i_1] [i_2] [i_5]), ((unsigned short)65012)))))))));
                            arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_5 [i_5 + 1] [(unsigned short)0] [i_5])) << (((((/* implicit */int) arr_5 [i_5 + 1] [i_5] [i_5 + 3])) - (57410)))))));
                        }
                        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_5 + 3] [i_5 + 3] [i_1] [i_5] [i_5])) * (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((unsigned short) arr_17 [i_5 + 3] [i_5 + 3] [i_1] [i_5 + 3] [i_5]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65533)))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        arr_23 [i_2] [(unsigned short)0] [(unsigned short)0] [i_7] [i_2] = min((max((var_3), (arr_3 [i_0] [i_1] [i_0]))), (((unsigned short) max(((unsigned short)61498), ((unsigned short)4051)))));
                        var_23 = (unsigned short)4037;
                    }
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            arr_31 [(unsigned short)4] [i_0] [i_2] [i_2] [i_8] [i_9] = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned short)4037)) * (((/* implicit */int) (unsigned short)42395)))) - (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [(unsigned short)7] [(unsigned short)4])) ? (((/* implicit */int) arr_21 [i_2] [i_1] [i_2] [i_8] [i_9])) : (((/* implicit */int) var_12)))))) / (((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_24 [i_0])))) ^ (((((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0] [i_0])) << (((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_8] [i_8] [i_9])) ? (((/* implicit */int) (unsigned short)24419)) : (((/* implicit */int) arr_16 [(unsigned short)4] [i_1] [i_2])))) - (24412))))))))));
                        }
                        var_25 = min((((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_8] [i_8] [i_8])) <= (((/* implicit */int) arr_0 [i_2]))))), (arr_3 [i_0] [i_0] [i_0]));
                        arr_32 [i_2] = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)4038)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)41117))) : ((-(((/* implicit */int) arr_27 [i_0] [i_2] [i_8] [i_8] [i_1]))))));
                    }
                    for (unsigned short i_10 = 3; i_10 < 11; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [i_10 + 1] [i_10] [i_2] [i_10 - 2]))))));
                        arr_37 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_16 [i_10 + 1] [i_2] [i_0])) >= (((/* implicit */int) (unsigned short)10450)))))) && (((/* implicit */_Bool) (unsigned short)46880))));
                        arr_38 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)3206)) ? (((/* implicit */int) (unsigned short)8283)) : (((/* implicit */int) (unsigned short)31319))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)16194)) <= (((/* implicit */int) ((unsigned short) var_7)))))), (((((/* implicit */_Bool) arr_7 [i_1] [i_10 - 2] [i_10 - 3] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_10 - 2] [i_10 - 3] [i_1])) : (((/* implicit */int) arr_15 [i_10 - 1] [i_10 - 2] [i_10 - 3] [i_10 - 2])))))))));
                    }
                    arr_39 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [i_1])) : (((/* implicit */int) (unsigned short)23139)))), ((-(((/* implicit */int) (unsigned short)48423)))))) + ((+(((/* implicit */int) min((var_11), ((unsigned short)0))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_11 = 1; i_11 < 11; i_11 += 1) 
        {
            arr_43 [i_11] [i_11] [(unsigned short)4] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_40 [i_0] [(unsigned short)6])) - (((/* implicit */int) (unsigned short)61476)))) <= (((/* implicit */int) arr_36 [i_11 - 1] [(unsigned short)2] [i_11 + 1] [i_11 + 1] [i_11 + 1]))));
            arr_44 [i_0] [i_11] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1])) ? (((/* implicit */int) (unsigned short)56174)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)19689)) : (((/* implicit */int) (unsigned short)65012))))));
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            arr_49 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_18 [i_12] [i_12] [i_12] [i_12] [i_12]))));
            arr_50 [i_12] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65535))));
            /* LoopSeq 4 */
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                arr_55 [i_13] [i_0] [i_13] [i_0] = arr_9 [i_13] [i_12] [i_0];
                arr_56 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_13] [i_13] [i_0]))));
            }
            for (unsigned short i_14 = 2; i_14 < 11; i_14 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned short) max((var_28), (((unsigned short) arr_28 [i_12]))));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_14 + 1] [i_12])) ? (((/* implicit */int) arr_15 [i_14 + 1] [i_14 + 1] [i_14] [(unsigned short)6])) : (((((/* implicit */int) (unsigned short)37904)) << (((((/* implicit */int) (unsigned short)61505)) - (61503)))))));
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_0] [i_12] [i_12] [i_12] [i_12] [i_14] [i_12])) <= (((/* implicit */int) (unsigned short)25810))));
            }
            for (unsigned short i_15 = 2; i_15 < 11; i_15 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    arr_65 [i_0] [i_12] [i_16] [(unsigned short)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_12] [i_15])) && (((/* implicit */_Bool) arr_29 [i_15 + 1] [i_16] [i_15] [i_15] [i_15 + 1] [i_16] [i_15 + 1]))));
                    arr_66 [i_0] [i_12] [i_15 - 2] [i_16] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_63 [i_16] [i_16] [i_15 + 1]))));
                }
                for (unsigned short i_17 = 4; i_17 < 11; i_17 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 1; i_18 < 10; i_18 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)35140)) && (((/* implicit */_Bool) (unsigned short)724))));
                        arr_71 [i_12] [i_12] [i_12] [i_12] [i_17] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_42 [i_18 + 1] [(unsigned short)0] [(unsigned short)0]))));
                        arr_72 [i_0] [i_17] = var_11;
                    }
                    for (unsigned short i_19 = 1; i_19 < 10; i_19 += 2) /* same iter space */
                    {
                        arr_75 [i_17] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                        arr_76 [i_0] [i_17] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1186)) ? (((/* implicit */int) arr_51 [i_15 - 1] [i_15 + 1] [i_17 - 3])) : (((/* implicit */int) arr_51 [i_15 - 2] [i_15 - 1] [i_17 - 4]))));
                    }
                    arr_77 [i_12] [i_12] [i_15] [i_15] [i_15 - 2] [i_0] |= ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)4035))))));
                    arr_78 [i_17] = (unsigned short)64274;
                    var_32 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_59 [i_0] [i_12] [(unsigned short)5] [i_0]))));
                }
                for (unsigned short i_20 = 0; i_20 < 12; i_20 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        arr_84 [i_20] [i_20] [i_15 + 1] [(unsigned short)7] [i_21] [i_12] [i_15] = ((unsigned short) arr_67 [i_20]);
                        arr_85 [i_0] [i_0] [i_15] [i_20] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)42396))) >= (((((/* implicit */_Bool) (unsigned short)47859)) ? (((/* implicit */int) (unsigned short)54988)) : (((/* implicit */int) arr_67 [i_12]))))));
                        arr_86 [(unsigned short)5] [(unsigned short)5] [i_12] [i_15] [i_20] [i_21] = ((unsigned short) arr_52 [i_15 - 1] [i_15 - 2] [i_15 - 2] [i_15 - 2]);
                    }
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_20] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_30 [i_12] [i_12] [i_12] [i_20] [i_0] [i_20] [i_12])) != (((/* implicit */int) (unsigned short)65012))))) : ((-(((/* implicit */int) var_16)))))))));
                    var_34 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_57 [i_0] [i_0] [i_0] [(unsigned short)11])) ? (((/* implicit */int) arr_9 [i_12] [i_15 - 1] [i_20])) : (((/* implicit */int) arr_52 [i_15] [i_15] [i_15] [i_15]))))));
                    arr_87 [i_0] [i_12] [(unsigned short)0] [i_20] |= arr_10 [i_15 - 1] [i_12] [i_15 + 1];
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)30720)) ? (((/* implicit */int) arr_63 [i_15] [i_15 + 1] [i_15 - 2])) : (((/* implicit */int) arr_9 [i_15] [i_15 + 1] [i_15 - 1])))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_22 = 3; i_22 < 10; i_22 += 4) 
                {
                    var_36 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_0)))) & (((/* implicit */int) ((((/* implicit */int) (unsigned short)11698)) != (((/* implicit */int) arr_60 [i_22 + 1] [i_0] [i_0] [i_0])))))));
                    arr_92 [i_22] [i_12] [i_15] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_52 [i_22] [i_22 - 3] [i_22 - 2] [i_22])) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23139)) && (((/* implicit */_Bool) arr_34 [i_0] [i_12])))))));
                    arr_93 [i_0] [i_0] [(unsigned short)5] [i_22] = ((unsigned short) arr_0 [i_22]);
                }
            }
            for (unsigned short i_23 = 0; i_23 < 12; i_23 += 3) 
            {
                arr_97 [i_23] [i_23] [i_12] [i_23] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_21 [i_23] [i_12] [i_12] [(unsigned short)2] [i_23]))));
                arr_98 [i_23] [i_23] [i_23] [(unsigned short)11] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_88 [i_23] [i_23] [i_23])) & (((/* implicit */int) (unsigned short)53059))));
            }
        }
        for (unsigned short i_24 = 0; i_24 < 12; i_24 += 4) 
        {
            var_37 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_40 [i_0] [i_24])), (((((/* implicit */_Bool) min((arr_19 [i_0] [i_0]), ((unsigned short)10452)))) ? (((((/* implicit */int) arr_88 [i_0] [i_24] [i_24])) ^ (((/* implicit */int) (unsigned short)63134)))) : ((~(((/* implicit */int) (unsigned short)61501))))))));
            var_38 = ((/* implicit */unsigned short) (((((+(((/* implicit */int) var_15)))) != (((((/* implicit */int) (unsigned short)14255)) - (((/* implicit */int) (unsigned short)7104)))))) ? (((/* implicit */int) arr_99 [i_24])) : ((+(((/* implicit */int) var_1))))));
            var_39 = (unsigned short)24856;
            /* LoopNest 2 */
            for (unsigned short i_25 = 1; i_25 < 9; i_25 += 2) 
            {
                for (unsigned short i_26 = 3; i_26 < 11; i_26 += 4) 
                {
                    {
                        arr_108 [i_0] [(unsigned short)2] [i_25] [i_26] = ((unsigned short) max((((/* implicit */int) (unsigned short)60028)), ((~(((/* implicit */int) var_0))))));
                        var_40 = arr_34 [i_24] [i_24];
                    }
                } 
            } 
        }
    }
}
