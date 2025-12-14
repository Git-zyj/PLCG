/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236120
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))))) ? ((~((~(((/* implicit */int) (unsigned short)65510)))))) : (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) min((var_8), (var_2))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_13 -= arr_0 [(unsigned short)1];
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = var_11;
            var_14 = ((/* implicit */unsigned short) (+(min(((~(((/* implicit */int) var_7)))), (((((/* implicit */int) (unsigned short)65501)) & (((/* implicit */int) var_9))))))));
            var_15 ^= ((/* implicit */unsigned short) min(((+((~(((/* implicit */int) (unsigned short)12251)))))), (min((((((/* implicit */_Bool) (unsigned short)65510)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (unsigned short)53255)))), (((/* implicit */int) ((unsigned short) var_7)))))));
            var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1])))), (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (unsigned short)60794))))));
            var_18 = ((/* implicit */unsigned short) (((((((~(((/* implicit */int) (unsigned short)65535)))) + (2147483647))) >> (((((/* implicit */int) var_9)) - (32864))))) * (((/* implicit */int) min((((unsigned short) arr_4 [i_2] [i_0])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [(unsigned short)5]))))))))));
            var_19 = arr_0 [i_2];
        }
        for (unsigned short i_3 = 2; i_3 < 20; i_3 += 3) /* same iter space */
        {
            arr_13 [i_0] [i_3] = ((unsigned short) min((((/* implicit */int) (unsigned short)13)), ((+(((/* implicit */int) arr_1 [(unsigned short)20]))))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    arr_20 [i_5] [(unsigned short)9] [i_0] [i_0] [i_0] = ((unsigned short) (!(((/* implicit */_Bool) arr_1 [i_5]))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)34818)) ? (((/* implicit */int) (unsigned short)65497)) : (((((/* implicit */_Bool) (unsigned short)59665)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_2 [i_3] [i_0]))))));
                    var_21 = arr_17 [i_0] [i_3] [i_5];
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    var_22 = (unsigned short)65535;
                    arr_25 [i_0] [i_3] [i_0] [i_6] [i_3] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned short)65528))))));
                    var_23 |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_6] [i_6]))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65507)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_19 [i_0] [i_3 + 2]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_4] [i_0])))));
                    var_25 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_26 [(unsigned short)9] [(unsigned short)9] [(unsigned short)19] [(unsigned short)18] [i_0])) || (((/* implicit */_Bool) var_0))))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_0] [i_3] [i_4] [i_4]))))) ? (((((/* implicit */int) arr_14 [i_7] [i_0] [i_0] [i_0])) % (((/* implicit */int) (unsigned short)8)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))));
                }
                var_27 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_0 [i_0 - 2])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_3 + 3] [i_0 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                var_28 = ((unsigned short) min(((-(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_14 [i_4 + 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_26 [i_0] [i_3] [i_4] [i_3] [i_4]))))));
                var_29 = (unsigned short)11;
                arr_28 [i_4] [i_3 - 2] [(unsigned short)15] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
            }
        }
        for (unsigned short i_8 = 2; i_8 < 20; i_8 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_9 = 2; i_9 < 22; i_9 += 4) 
            {
                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (unsigned short)11161)) / (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) arr_8 [i_0 + 1] [i_8 + 2] [i_9])))) > (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */int) arr_17 [i_9] [i_8] [i_0])) >= (((/* implicit */int) (unsigned short)24944))))) : ((~(((/* implicit */int) var_7)))))))))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)24919)) <= (((((/* implicit */_Bool) arr_3 [i_9 - 2])) ? (((/* implicit */int) arr_16 [i_8 - 2])) : (((/* implicit */int) (unsigned short)37493))))));
                var_32 = (unsigned short)36897;
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) arr_2 [i_8] [i_9 - 1]))))))) ? (((/* implicit */int) ((unsigned short) min((arr_26 [i_0 + 1] [i_0] [i_0] [i_8] [(unsigned short)8]), ((unsigned short)65516))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65519)))))));
            }
            arr_34 [i_0] [(unsigned short)2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_8] [i_0])) >= ((+(((/* implicit */int) ((unsigned short) (unsigned short)65533)))))));
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    for (unsigned short i_12 = 2; i_12 < 19; i_12 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) max((var_34), (arr_32 [i_0 + 1] [i_8] [i_10])));
                            var_35 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) (unsigned short)62213)) << (((((/* implicit */int) arr_9 [(unsigned short)11])) - (13727))))), (((((/* implicit */_Bool) arr_33 [i_12] [i_0] [i_10] [i_11])) ? (((/* implicit */int) arr_14 [(unsigned short)19] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)3)))))) >= (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9048))))), ((+(((/* implicit */int) (unsigned short)35873))))))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned short i_13 = 2; i_13 < 22; i_13 += 3) /* same iter space */
    {
        var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_13 - 2] [i_13 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))));
        /* LoopNest 3 */
        for (unsigned short i_14 = 3; i_14 < 21; i_14 += 4) 
        {
            for (unsigned short i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 23; i_16 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 3; i_17 < 21; i_17 += 4) 
                        {
                            var_37 -= arr_11 [i_15] [i_14 - 3];
                            var_38 = ((unsigned short) (unsigned short)65528);
                            arr_57 [i_13] [i_14] [i_15] [i_13] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65484)) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56506)))))));
                        }
                        var_39 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_13])) ? (((/* implicit */int) arr_40 [i_16] [i_13 - 1] [i_16])) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_14] [i_16])) == (((/* implicit */int) var_5)))))));
                        arr_58 [(unsigned short)22] [i_14] [i_13] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [(unsigned short)20] [i_14 + 2] [i_14])) ? (((/* implicit */int) arr_29 [i_13] [i_13 - 2] [i_13])) : (((/* implicit */int) (unsigned short)56536))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_18 = 3; i_18 < 19; i_18 += 4) 
        {
            var_40 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_42 [i_18 + 4] [i_13 - 1]))));
            var_41 = (unsigned short)47930;
        }
        var_42 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
        var_43 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_12 [i_13])) / (((/* implicit */int) arr_52 [i_13] [i_13 - 2] [i_13 - 1] [i_13]))))));
    }
    /* vectorizable */
    for (unsigned short i_19 = 2; i_19 < 22; i_19 += 3) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_0 [i_19 - 1]))));
        var_45 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_19] [(unsigned short)8] [i_19]))));
        var_46 = ((unsigned short) (unsigned short)0);
        var_47 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_19 - 2]))));
        var_48 -= ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_52 [(unsigned short)16] [i_19] [i_19 + 1] [(unsigned short)16])))) <= ((~(((/* implicit */int) arr_30 [i_19] [i_19]))))));
    }
    for (unsigned short i_20 = 2; i_20 < 22; i_20 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_21 = 0; i_21 < 23; i_21 += 2) 
        {
            for (unsigned short i_22 = 4; i_22 < 22; i_22 += 4) 
            {
                {
                    arr_75 [i_22] [i_21] [i_21] [(unsigned short)7] = ((/* implicit */unsigned short) (+(((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (unsigned short)65534))))) / (((((/* implicit */_Bool) arr_36 [i_20] [i_20] [i_20])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))))));
                    var_49 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((arr_4 [i_21] [i_22]), (arr_48 [i_22])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (unsigned short)9048))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_23 = 2; i_23 < 21; i_23 += 4) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned short) min((var_50), (((unsigned short) arr_1 [i_20 - 2]))));
                        var_51 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_22 - 2] [i_21] [i_20 - 2])) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) arr_10 [(unsigned short)21] [(unsigned short)21]))))) ? (((/* implicit */int) (unsigned short)65521)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) var_4))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_24 = 2; i_24 < 21; i_24 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_25 = 0; i_25 < 23; i_25 += 2) 
                        {
                            var_52 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_20])) ? (((/* implicit */int) arr_76 [i_21] [i_22] [i_24 - 2] [i_25])) : (((/* implicit */int) arr_6 [i_22] [i_24] [(unsigned short)17])))) < (((/* implicit */int) arr_12 [i_22]))));
                            arr_84 [i_22] [i_24] [i_25] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_38 [i_20] [i_21] [i_21] [i_24] [(unsigned short)18]))));
                            var_53 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_67 [i_24 + 1] [i_21] [i_22 - 1]))));
                            arr_85 [(unsigned short)11] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_24 - 2] [i_21])) ? (((/* implicit */int) ((unsigned short) (unsigned short)43889))) : (((/* implicit */int) arr_56 [i_25]))));
                            arr_86 [(unsigned short)7] [i_21] [i_21] [i_22] [i_24] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_65 [i_20 + 1])) >= (((/* implicit */int) (unsigned short)0))));
                        }
                        for (unsigned short i_26 = 4; i_26 < 21; i_26 += 1) 
                        {
                            var_54 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_66 [i_22 - 3])) > (((/* implicit */int) arr_66 [i_22 - 4]))));
                            var_55 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)43886))));
                        }
                        for (unsigned short i_27 = 1; i_27 < 21; i_27 += 3) 
                        {
                            var_56 += ((/* implicit */unsigned short) (~(((/* implicit */int) arr_45 [i_24 + 1] [i_20 - 2]))));
                            arr_93 [(unsigned short)22] [(unsigned short)1] [i_22] [i_24] [i_27] = arr_17 [i_27 + 2] [i_21] [i_20];
                        }
                        var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)16)))))));
                        arr_94 [i_20 - 1] [i_21] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_21 [i_22 - 4] [i_21] [i_24] [(unsigned short)18]))));
                        var_58 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_20] [i_22 - 2] [i_24 - 2]))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_28 = 0; i_28 < 23; i_28 += 2) 
        {
            var_59 = ((unsigned short) (~(((/* implicit */int) (unsigned short)62213))));
            var_60 = arr_80 [i_20 - 1] [i_20 + 1] [i_28] [i_28];
        }
        for (unsigned short i_29 = 2; i_29 < 20; i_29 += 4) 
        {
            arr_102 [i_29 - 2] [(unsigned short)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */int) min((var_10), (var_9)))) + (((/* implicit */int) min((var_4), (var_0)))))) : (((((/* implicit */int) (unsigned short)43881)) >> (((((/* implicit */int) (unsigned short)65530)) - (65514)))))));
            arr_103 [i_20] &= min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_10), (arr_53 [i_29] [i_29] [i_20 - 1] [i_20 - 1] [(unsigned short)0] [i_20]))))))), (min((arr_10 [i_29 - 2] [i_20 - 1]), (arr_10 [i_20 - 2] [i_29]))));
            arr_104 [i_29] = ((/* implicit */unsigned short) (+((-(((((/* implicit */int) arr_61 [i_29])) - (((/* implicit */int) (unsigned short)33680))))))));
            var_61 -= arr_47 [i_29];
            var_62 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_8 [i_29] [i_29] [i_29])) ? (((/* implicit */int) (unsigned short)33674)) : (((/* implicit */int) arr_16 [(unsigned short)18])))) : (((/* implicit */int) min(((unsigned short)14799), ((unsigned short)8191))))))));
        }
        arr_105 [i_20] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)6] [(unsigned short)6] [i_20])) ? (((/* implicit */int) (unsigned short)4428)) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) arr_8 [i_20] [i_20] [(unsigned short)20])) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)65529))))));
    }
}
