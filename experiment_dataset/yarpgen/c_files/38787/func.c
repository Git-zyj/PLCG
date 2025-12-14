/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38787
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
    var_10 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_0)))), (min((var_4), (((/* implicit */long long int) var_0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))) : (min(((-(var_6))), (var_3)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_0]))));
                    var_12 = ((/* implicit */int) min((var_12), (max((((/* implicit */int) var_8)), ((+(((/* implicit */int) (signed char)127))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) (~(var_7)));
                        var_14 = ((/* implicit */unsigned short) arr_7 [i_3 + 1] [(_Bool)1]);
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((unsigned int) arr_2 [i_1]))));
                    }
                    for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                    {
                        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((short) var_8))), (((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_7)))) ? (arr_8 [i_2 + 3] [i_2 + 1] [i_2] [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (arr_8 [(unsigned short)9] [i_1] [(_Bool)1] [(unsigned short)9] [i_1] [i_2])))) : (min((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)8128)) : (((/* implicit */int) (_Bool)0)))))))));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) ((min((((/* implicit */long long int) var_0)), (var_3))) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2))))))))))));
                    }
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_4))));
                    arr_13 [i_2] [i_1] [13] [(unsigned short)11] = ((/* implicit */int) ((unsigned long long int) arr_7 [i_1] [i_1]));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_19 |= ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_5] [(signed char)6] [i_5] [i_5])) >> (((((/* implicit */int) (short)20265)) - (20243)))))) / (((unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_5] [i_5])) / (((/* implicit */int) arr_2 [i_5])))))));
        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL)));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)40908)) ? (3257290352U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)9238)) >= (1224271918))))))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(short)0])) && (((/* implicit */_Bool) var_9)))))) / (max((((/* implicit */unsigned int) var_9)), (var_0))))))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_21 [i_5] = ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_9 [i_6] [(_Bool)1] [i_5] [i_5])) != (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) arr_9 [i_5] [i_6] [i_5] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_8))))));
            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_12 [(unsigned short)15] [(unsigned short)12] [i_6 - 1] [i_5]))))), (((((/* implicit */unsigned long long int) var_0)) / (arr_1 [i_6 - 1])))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))) >= (var_0)))) < ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */int) arr_10 [i_5])), (max((((/* implicit */int) var_5)), (arr_6 [14LL] [i_5] [i_6])))))));
            var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (var_7))))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_5))))), ((~(var_7)))))));
        }
        var_24 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((long long int) arr_17 [i_5] [i_5])) : (((/* implicit */long long int) ((int) var_6)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) 9664513977136298918ULL))) : (((/* implicit */int) arr_14 [i_5]))))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 1; i_7 < 21; i_7 += 2) 
    {
        var_25 *= ((/* implicit */unsigned short) ((long long int) arr_22 [i_7 + 1]));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (unsigned short i_9 = 2; i_9 < 21; i_9 += 4) 
            {
                for (unsigned short i_10 = 1; i_10 < 20; i_10 += 4) 
                {
                    {
                        var_26 = ((/* implicit */long long int) ((unsigned long long int) var_8));
                        var_27 = ((((/* implicit */long long int) var_0)) / (var_2));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (unsigned short)29825))));
                            var_29 |= ((/* implicit */unsigned int) ((unsigned short) ((long long int) (unsigned short)30242)));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 1) 
                        {
                            var_30 ^= ((var_4) & (((/* implicit */long long int) ((/* implicit */int) var_5))));
                            arr_41 [i_15] [(unsigned short)0] [i_14] [i_13] [i_12] [(_Bool)1] [(short)11] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((int) var_5)))));
                        }
                        var_31 = arr_40 [(_Bool)1] [18U] [i_7] [(_Bool)1] [i_7];
                        var_32 &= ((/* implicit */signed char) ((_Bool) arr_39 [i_7] [(_Bool)1] [i_13] [i_14] [i_7 - 1]));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_22 [i_7 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [i_7 + 1] [i_7 + 1])))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_16] [i_12] [i_12] [i_7])) << (((var_4) - (6506946070433855460LL)))))) : (var_6)));
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((int) ((var_6) / (((/* implicit */long long int) var_0))))))));
                        var_35 -= ((/* implicit */unsigned int) arr_39 [i_7] [i_12] [i_13] [i_16] [i_7]);
                    }
                    var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)27768))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            for (long long int i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 3; i_19 < 21; i_19 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_20 = 1; i_20 < 21; i_20 += 1) 
                        {
                            var_37 = ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-105)));
                            arr_53 [10U] [i_19 - 3] [i_18] [(_Bool)1] [12LL] = ((/* implicit */unsigned long long int) ((arr_31 [i_20 - 1] [i_19 + 1] [i_19] [i_19 - 2] [i_19] [i_19] [i_17]) ? (arr_29 [i_19 - 2] [i_18] [i_18] [i_19]) : (((/* implicit */long long int) var_0))));
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_38 *= ((/* implicit */unsigned long long int) ((arr_44 [i_19 - 3] [(_Bool)1] [(unsigned short)21] [i_19 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_19 - 2] [i_17] [i_18] [i_17]))) : (var_0)));
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_6)))) && (((/* implicit */_Bool) var_0))));
                            var_40 = ((/* implicit */unsigned char) var_9);
                            var_41 = ((/* implicit */unsigned short) var_4);
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_42 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                            var_43 = ((/* implicit */long long int) ((arr_23 [i_17]) ? (((/* implicit */int) arr_44 [i_7] [(_Bool)1] [i_18] [i_19])) : ((~(((/* implicit */int) (unsigned short)65535))))));
                            arr_60 [i_18] [i_17] [i_18] [i_19 - 1] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_18] [i_19 - 1] [i_17] [i_17] [i_18] [i_18])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [(signed char)11] [i_22] [i_22] [i_18])) ^ (((/* implicit */int) var_5))))) : (var_0)));
                            var_44 *= ((/* implicit */_Bool) var_5);
                        }
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) arr_28 [i_7 + 1] [i_7 + 1] [(_Bool)1] [i_19]))));
                        var_46 *= ((/* implicit */_Bool) var_5);
                    }
                    var_47 ^= ((/* implicit */_Bool) ((short) 9223372036854775783LL));
                }
            } 
        } 
        var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_7] [i_7] [i_7 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))));
    }
    for (signed char i_23 = 0; i_23 < 19; i_23 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_24 = 0; i_24 < 19; i_24 += 2) 
        {
            var_49 = ((/* implicit */unsigned long long int) arr_32 [i_24] [10U] [i_24] [i_24] [i_23] [i_24] [i_24]);
            /* LoopSeq 3 */
            for (unsigned long long int i_25 = 3; i_25 < 17; i_25 += 1) 
            {
                var_50 = ((/* implicit */int) var_8);
                var_51 ^= ((/* implicit */long long int) ((_Bool) max((((/* implicit */long long int) var_0)), (var_3))));
            }
            for (unsigned short i_26 = 0; i_26 < 19; i_26 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                {
                    var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) var_6))));
                    var_53 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (937151819)))) * (((/* implicit */int) ((((/* implicit */_Bool) 3)) && (((/* implicit */_Bool) 7317645777145777980ULL)))))));
                }
                /* vectorizable */
                for (unsigned int i_28 = 0; i_28 < 19; i_28 += 2) 
                {
                    var_54 = ((/* implicit */unsigned int) arr_28 [(short)6] [i_24] [(short)6] [(short)6]);
                    arr_75 [i_28] [i_28] [i_28] [i_26] [i_24] [17ULL] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_7)) < (arr_62 [i_23])));
                    var_55 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2)))));
                }
                var_56 = ((/* implicit */_Bool) ((int) ((long long int) 2626460787U)));
            }
            for (short i_29 = 4; i_29 < 16; i_29 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_30 = 0; i_30 < 19; i_30 += 1) 
                {
                    arr_81 [i_30] [1ULL] [i_24] [i_30] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_23] [i_23] [i_30] [i_23])) ? (min((min((((/* implicit */int) arr_25 [i_30] [i_23] [i_23])), (-1))), (((/* implicit */int) (unsigned short)33522)))) : (((/* implicit */int) arr_24 [17U] [i_29 + 1] [i_29 + 3]))));
                    var_57 ^= ((/* implicit */int) arr_70 [10ULL] [i_24] [10ULL]);
                    var_58 = ((/* implicit */signed char) var_9);
                    var_59 = ((/* implicit */signed char) var_9);
                }
                /* vectorizable */
                for (unsigned int i_31 = 2; i_31 < 17; i_31 += 4) 
                {
                    var_60 = ((/* implicit */unsigned short) ((arr_32 [i_31] [i_31 - 1] [i_31 - 2] [i_31] [i_23] [i_23] [i_31 - 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_32 [i_31 + 2] [i_31 + 2] [i_31 + 1] [i_31] [i_31] [18LL] [i_31 - 1]))));
                    var_61 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9))))));
                }
                arr_86 [i_29 + 3] [i_29 + 3] [i_23] [i_24] = ((/* implicit */long long int) ((min((max((((/* implicit */long long int) var_7)), (var_4))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))))) <= (min((var_4), (((/* implicit */long long int) ((arr_59 [i_29 - 1] [(unsigned short)0] [i_23] [i_23] [i_23]) < (((/* implicit */int) arr_30 [i_24])))))))));
                var_62 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_46 [i_29 + 2] [i_24] [i_23])) : (((/* implicit */int) arr_79 [i_29 + 3] [i_29] [i_29] [i_23]))))))), (((((/* implicit */_Bool) 11168988539262636864ULL)) ? (9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
            }
        }
        for (int i_32 = 0; i_32 < 19; i_32 += 2) 
        {
            var_63 |= ((((/* implicit */_Bool) (short)-9239)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((-9223372036854775784LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            var_64 |= (!((_Bool)0));
        }
        var_65 = ((/* implicit */unsigned short) (~(((((((/* implicit */long long int) ((/* implicit */int) var_9))) + (var_6))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
    {
        for (unsigned long long int i_34 = 3; i_34 < 23; i_34 += 1) 
        {
            {
                var_66 = ((/* implicit */int) ((long long int) var_0));
                var_67 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (1U)))) ? (((((/* implicit */int) var_5)) + (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_93 [12LL] [i_34 - 1]))))) ? (var_4) : (max((((/* implicit */long long int) arr_92 [4U] [4U])), (var_6))));
            }
        } 
    } 
}
