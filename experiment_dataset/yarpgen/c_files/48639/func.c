/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48639
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
    var_10 = ((/* implicit */short) (-(var_2)));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 -= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned short)51665)) ? (((/* implicit */int) (signed char)-39)) : (-2147483644))) > (((arr_5 [i_0] [i_2]) >> (((arr_5 [i_0] [i_2 - 1]) - (1664352994))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44168))))) : (((/* implicit */int) var_4))));
                    arr_7 [(signed char)2] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 1) 
                {
                    {
                        var_12 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (var_0)))) * (((((/* implicit */_Bool) (unsigned short)21386)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [15ULL] [i_5]))))));
                        arr_15 [i_0] [i_3] [i_0] [i_3] [i_5 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483644)) ? (((((/* implicit */int) (signed char)-24)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1]))));
                        var_13 = ((/* implicit */int) ((unsigned long long int) (unsigned short)0));
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) arr_4 [i_0 + 2]))));
                        var_15 -= ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551607ULL))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned long long int) min((var_16), ((+(((((/* implicit */_Bool) 0ULL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 24; i_7 += 1) 
                {
                    for (long long int i_8 = 1; i_8 < 24; i_8 += 1) 
                    {
                        {
                            arr_26 [i_3] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1842)) ? (((/* implicit */int) (signed char)93)) : (1898616036)))) ? (((((/* implicit */_Bool) 17197784973838568130ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0])))));
                            var_17 = (i_3 % 2 == zero) ? (((((((/* implicit */int) var_4)) + (2147483647))) >> (((arr_8 [i_0 - 3] [i_3]) + (34398749))))) : (((((((/* implicit */int) var_4)) + (2147483647))) >> (((((arr_8 [i_0 - 3] [i_3]) + (34398749))) + (1641617491)))));
                            arr_27 [i_0] [i_3] [i_6] [i_7] [4U] |= ((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_0] [i_3]);
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_17 [i_0] [i_6]))) >> ((~(((/* implicit */int) (signed char)-16)))))))));
                            var_19 -= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) (short)11462)) : (((/* implicit */int) (short)11455)))));
                        }
                    } 
                } 
                arr_28 [i_3] = ((/* implicit */unsigned short) ((short) (-(var_1))));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_0 - 3] [i_3] [i_3] [i_0 - 3] [i_0])) - (((/* implicit */int) (signed char)79))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4713783917033403890LL)) && (((/* implicit */_Bool) var_9)))))) : ((+(2412161791584923467ULL))));
                arr_29 [i_0] [i_6] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) 2147483647)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1681153037023019475LL)) || (((/* implicit */_Bool) (short)-25865))))))));
            }
            for (short i_9 = 1; i_9 < 24; i_9 += 3) 
            {
                var_21 = ((/* implicit */short) arr_3 [4LL]);
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) ((signed char) var_9)))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_9 + 1] [i_10] [(signed char)14]))))))));
                            var_24 -= ((/* implicit */unsigned long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775787LL))) + (40LL)))));
                        }
                    } 
                } 
                arr_39 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) -1898616046)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4611686018427387904ULL)));
            }
            for (long long int i_12 = 3; i_12 < 23; i_12 += 4) 
            {
                /* LoopSeq 4 */
                for (signed char i_13 = 2; i_13 < 23; i_13 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_14 = 1; i_14 < 23; i_14 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))));
                        var_26 = ((/* implicit */long long int) (signed char)19);
                        arr_49 [3] [i_3] [i_3] [3] = ((/* implicit */long long int) arr_41 [i_0] [i_3] [i_12] [i_3]);
                        arr_50 [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */int) (short)2441)) <= (((/* implicit */int) (short)-25865))));
                        arr_51 [i_0] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */short) -2383799665902017803LL);
                    }
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_3] [(short)1] [i_13 - 2] [i_15])) ? (18446744073709551615ULL) : (var_1)))) ? (arr_16 [i_13 - 2] [i_15] [i_15]) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_1) : (((/* implicit */unsigned long long int) var_2))))));
                        var_28 = (-(arr_6 [19] [i_3] [i_15]));
                    }
                    for (signed char i_16 = 3; i_16 < 23; i_16 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_0 - 1] [i_3] [i_12 + 1] [i_13 - 1] [i_16 + 2])) ? (var_0) : (((/* implicit */unsigned long long int) arr_34 [i_0 + 1] [i_3] [i_12 + 2] [i_13 + 1] [i_16 + 1]))));
                        var_30 -= ((/* implicit */unsigned long long int) arr_41 [14LL] [i_13] [i_3] [14LL]);
                        var_31 = ((/* implicit */unsigned long long int) (-(arr_45 [i_12] [i_16 + 2] [i_12] [i_13 - 2] [i_12 - 3] [i_12])));
                    }
                    arr_57 [i_3] [i_3] [i_12] [14LL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 - 1]))));
                }
                for (unsigned int i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        arr_62 [11ULL] [i_3] [i_12 - 2] [(_Bool)1] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10896373271746849991ULL))));
                        arr_63 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= ((-(882485588022197357LL)))));
                    }
                    for (signed char i_19 = 0; i_19 < 25; i_19 += 3) 
                    {
                        arr_68 [i_0 + 1] [i_0 - 1] [i_3] [i_12] [i_0 - 1] [i_0 - 1] [i_3] = var_7;
                        arr_69 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_12 - 3] [i_12 - 3] [i_12])) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) (+(arr_14 [i_3] [i_12 - 2] [i_17] [i_3]))))));
                        arr_70 [i_0] [i_3] [i_0 - 3] = ((/* implicit */short) ((((unsigned long long int) 0ULL)) < (((/* implicit */unsigned long long int) arr_66 [i_19] [i_17] [i_3]))));
                    }
                    var_32 &= ((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)1)))) | (((((/* implicit */_Bool) 2754655563U)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) arr_53 [11ULL] [i_3]))))));
                    arr_71 [i_0] [i_3] [i_3] [i_17] [i_12] = ((/* implicit */long long int) 13012157714434616629ULL);
                }
                for (short i_20 = 3; i_20 < 24; i_20 += 3) 
                {
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)7)))) + (((((/* implicit */_Bool) 3102893744729158894ULL)) ? (arr_43 [10]) : (((/* implicit */long long int) arr_32 [i_3] [i_3] [i_12] [i_3])))))))));
                    var_34 *= ((/* implicit */signed char) (+(((var_0) ^ (var_0)))));
                }
                for (int i_21 = 2; i_21 < 21; i_21 += 4) 
                {
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((unsigned long long int) arr_20 [i_21] [i_12 + 1] [i_0 + 1] [i_0 + 1]))));
                    var_36 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_72 [i_0] [i_3] [i_21 - 2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [(signed char)10] [i_21]))) : (var_9))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 1) 
                    {
                        var_37 = ((long long int) arr_35 [i_12 - 1] [i_0 - 3]);
                        var_38 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) -1691501709))))));
                        var_39 ^= 0ULL;
                    }
                    var_40 &= ((/* implicit */short) ((((/* implicit */_Bool) ((var_0) >> (((var_2) - (1757048464)))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_20 [i_0] [5ULL] [(unsigned short)11] [i_0]) : (((/* implicit */int) (_Bool)1)))) : (arr_18 [i_21] [i_21 - 1])));
                    arr_80 [i_21 - 1] [i_3] [i_3] [21ULL] = ((/* implicit */signed char) arr_6 [i_21 - 2] [i_21] [i_21 + 1]);
                }
                var_41 -= ((arr_44 [(signed char)20] [i_3] [i_3] [i_3] [i_3]) % (((/* implicit */unsigned long long int) ((1681153037023019477LL) + (((/* implicit */long long int) var_6))))));
            }
        }
        /* LoopNest 2 */
        for (signed char i_23 = 2; i_23 < 22; i_23 += 3) 
        {
            for (long long int i_24 = 0; i_24 < 25; i_24 += 3) 
            {
                {
                    arr_86 [i_0] [i_0] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((~(-1241107277))) : (((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) ((var_2) >= (((/* implicit */int) (short)12753))))) : (((/* implicit */int) (signed char)-90))))));
                    /* LoopNest 2 */
                    for (long long int i_25 = 2; i_25 < 22; i_25 += 1) 
                    {
                        for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 2) 
                        {
                            {
                                arr_91 [i_0] [i_0] [i_0] [i_0] [i_23] [i_25] [3] = max((((/* implicit */unsigned long long int) max((19LL), (((/* implicit */long long int) -1318306288))))), (((unsigned long long int) ((int) (_Bool)1))));
                                var_42 = ((/* implicit */int) 17765745926662941423ULL);
                                arr_92 [i_23] [i_23 - 1] [i_23] [i_23] [i_26] = ((/* implicit */unsigned long long int) ((signed char) (-(arr_46 [i_0] [i_23 - 2] [i_24] [i_25]))));
                                arr_93 [i_23] [i_23] [i_24] [i_25] [i_0] = ((/* implicit */unsigned int) -1LL);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_27 = 1; i_27 < 24; i_27 += 2) 
        {
            for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_29 = 4; i_29 < 24; i_29 += 3) 
                    {
                        for (long long int i_30 = 0; i_30 < 25; i_30 += 2) 
                        {
                            {
                                var_43 *= ((/* implicit */int) var_0);
                                var_44 = (i_29 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (signed char)32)))))) ? ((((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((long long int) arr_72 [i_29] [i_29] [i_28 - 1] [i_29])) - (8934057003004354104LL))))) : (((/* implicit */int) arr_2 [i_27] [i_29 - 4]))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (signed char)32)))))) ? ((((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((((long long int) arr_72 [i_29] [i_29] [i_28 - 1] [i_29])) - (8934057003004354104LL))) + (3320363636191838866LL))))) : (((/* implicit */int) arr_2 [i_27] [i_29 - 4])))));
                            }
                        } 
                    } 
                    var_45 &= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) (unsigned short)6144)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_48 [(_Bool)1] [i_27] [i_28] [i_28] [i_27] [i_28] [i_28])))) == (18446744073709551604ULL)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_31 = 0; i_31 < 25; i_31 += 4) 
        {
            var_46 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_0 + 1] [17ULL] [i_0 - 2] [i_0] [i_0 - 3]))) + (var_6));
            arr_107 [i_0] [i_0] = ((/* implicit */short) ((int) (short)-17766));
            /* LoopSeq 1 */
            for (int i_32 = 3; i_32 < 22; i_32 += 3) 
            {
                var_47 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_94 [i_0 - 3] [i_0 - 3])))) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) ((unsigned short) (short)3584)))));
                var_48 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_20 [i_0] [i_0] [8LL] [i_0])) ? (arr_72 [i_31] [24ULL] [10U] [i_31]) : (arr_101 [i_0] [i_0])))));
            }
        }
    }
}
