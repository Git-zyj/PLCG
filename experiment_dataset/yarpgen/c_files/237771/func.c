/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237771
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
    var_17 = ((/* implicit */unsigned int) var_3);
    var_18 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) (unsigned short)31998))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_16))))))));
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33538)) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)3584), (((/* implicit */unsigned short) var_7)))))) : ((~(var_12))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
    var_20 = ((/* implicit */short) ((int) ((signed char) max((((/* implicit */short) (unsigned char)147)), (var_14)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 3; i_2 < 22; i_2 += 2) /* same iter space */
            {
                var_21 |= ((/* implicit */signed char) max((min((max((2147483646), (((/* implicit */int) (unsigned short)31998)))), (((((((/* implicit */int) var_2)) + (2147483647))) << (((((((/* implicit */int) var_2)) + (119))) - (14))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) (short)21192))))))))));
                var_22 = ((/* implicit */short) (~(max((8711642195348994090ULL), (((unsigned long long int) (unsigned char)196))))));
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    arr_11 [i_0] [3LL] [i_2] [9LL] [i_3] = ((/* implicit */long long int) max((min((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_9)))), (((/* implicit */int) min((var_1), (((/* implicit */short) var_6))))))), (min((((/* implicit */int) var_5)), ((+(((/* implicit */int) var_0))))))));
                    var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)33522)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_8 [(_Bool)1] [1U] [i_1] [i_0]))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((((/* implicit */_Bool) -1286894955)) || (((/* implicit */_Bool) 1017104824004227014LL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14)))) : ((~(((/* implicit */int) arr_0 [i_2 + 2] [i_2 + 2]))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    arr_14 [i_4] [0LL] [i_1] [(signed char)2] = ((/* implicit */unsigned short) var_1);
                    arr_15 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)31991)) << (((((/* implicit */int) (unsigned short)3584)) - (3574)))));
                }
            }
            for (signed char i_5 = 3; i_5 < 22; i_5 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3840319866846987336LL))))) << (((((/* implicit */int) var_5)) + (23047)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 3) 
                {
                    var_26 = (unsigned short)3584;
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        arr_23 [i_6 + 2] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
                        arr_24 [i_0] [0LL] [i_5] [i_6] [i_7] [i_6] = ((/* implicit */signed char) var_5);
                    }
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) var_14);
                        var_28 = ((/* implicit */unsigned short) ((unsigned int) ((var_6) ? (((/* implicit */int) (unsigned short)61952)) : (((/* implicit */int) (unsigned short)33538)))));
                    }
                    arr_28 [i_5] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) << ((((((-(((/* implicit */int) (unsigned short)31978)))) + (31996))) - (15)))));
                    var_29 = ((/* implicit */unsigned long long int) var_13);
                    arr_29 [i_0] [i_1] [3LL] [i_6] = ((/* implicit */unsigned char) var_12);
                }
            }
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) var_6))));
        }
        /* LoopSeq 4 */
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            var_31 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max(((unsigned char)196), (((/* implicit */unsigned char) var_9))))) ? (((/* implicit */int) (short)16)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)197)) > (var_4)))))) << (((((((/* implicit */_Bool) arr_27 [(signed char)11])) ? (1221587900) : (((/* implicit */int) (!(var_6)))))) - (1221587894)))));
            arr_32 [i_0] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_17 [i_0] [i_9])), (max((((unsigned long long int) arr_10 [i_0] [(unsigned short)18] [i_9] [i_0] [i_9] [i_9])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (15285210589824724716ULL)))))));
            var_32 = ((long long int) ((((/* implicit */_Bool) max((arr_25 [i_0] [i_9] [i_9] [i_0] [i_9]), (((/* implicit */int) var_15))))) ? (((long long int) var_14)) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        }
        for (int i_10 = 3; i_10 < 22; i_10 += 4) 
        {
            arr_35 [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (var_12))));
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)8078))))))) ? (((unsigned long long int) var_5)) : (var_12)));
        }
        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned long long int) var_16))))) ? (((/* implicit */int) max(((short)9763), (max((arr_1 [i_0] [i_0]), (((/* implicit */short) var_7))))))) : ((~(((/* implicit */int) min((var_10), (var_10))))))));
                var_35 ^= ((/* implicit */signed char) (_Bool)1);
                arr_43 [i_0] [i_0] [(short)1] = ((/* implicit */int) (!(((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) >= (var_12)))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    for (short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */signed char) arr_7 [i_13] [i_14]);
                            var_37 = ((/* implicit */short) ((min((4294967295U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)24644))))))) >= (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_5))))), (max((((/* implicit */int) var_15)), (var_16))))))));
                            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (!((!((_Bool)1))))))));
                            var_39 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)23))))) ? (max((((/* implicit */unsigned long long int) var_2)), (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)31998))))) : ((+(max((var_12), (((/* implicit */unsigned long long int) var_11))))))));
                        }
                    } 
                } 
            }
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (min((arr_25 [i_0] [(unsigned char)11] [i_0] [i_11] [i_0]), (((/* implicit */int) max((var_0), (((/* implicit */short) (unsigned char)19))))))) : (max((((((/* implicit */_Bool) arr_36 [i_11] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-8184)))), (((/* implicit */int) max(((unsigned short)33545), ((unsigned short)21591))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_15 = 2; i_15 < 21; i_15 += 3) 
            {
                arr_50 [i_15] [(short)20] [i_15] = ((/* implicit */_Bool) arr_33 [i_0] [i_11] [i_11]);
                var_41 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)0))));
                var_42 ^= ((/* implicit */signed char) ((var_7) ? (((/* implicit */int) arr_47 [i_15 - 2] [i_15 + 1] [i_15 - 1] [i_11] [i_11])) : (((/* implicit */int) (unsigned short)3584))));
                arr_51 [i_15] [i_15] [i_15] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 646464008))));
                var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_15] [i_15 + 2] [i_15] [(unsigned short)10])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)33538))));
            }
            /* vectorizable */
            for (unsigned long long int i_16 = 3; i_16 < 21; i_16 += 4) 
            {
                var_44 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33538)) ^ (((/* implicit */int) var_0))))) : (3022601923957832903LL)));
                var_45 |= ((/* implicit */short) var_2);
                var_46 = ((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)));
            }
            for (long long int i_17 = 0; i_17 < 24; i_17 += 3) 
            {
                var_47 = ((/* implicit */long long int) ((unsigned long long int) var_2));
                var_48 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(3319255695937460052LL)))), (max((((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)79))), (((var_3) << (((var_16) - (2013347240)))))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_18 = 1; i_18 < 23; i_18 += 1) 
        {
            var_49 += ((/* implicit */signed char) (-(((/* implicit */int) arr_30 [i_18 + 1] [0LL] [i_18 + 1]))));
            arr_60 [i_18] = ((/* implicit */long long int) (unsigned char)61);
            var_50 = ((/* implicit */long long int) (~(((/* implicit */int) (short)1))));
        }
    }
    /* vectorizable */
    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
    {
        arr_63 [i_19] = ((/* implicit */_Bool) var_11);
        arr_64 [i_19] = ((/* implicit */_Bool) 255);
        var_51 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (unsigned int i_20 = 2; i_20 < 20; i_20 += 3) 
        {
            arr_67 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 1766198947U)) >= (((long long int) (_Bool)1))));
            arr_68 [i_19] [i_20] [i_19] = ((/* implicit */long long int) (unsigned char)155);
            /* LoopNest 2 */
            for (short i_21 = 1; i_21 < 20; i_21 += 4) 
            {
                for (long long int i_22 = 2; i_22 < 18; i_22 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 3) 
                        {
                            arr_77 [i_19] [i_19] [i_21] [(short)1] [i_22] [i_23] = ((/* implicit */unsigned char) var_6);
                            arr_78 [i_23] [i_22] [i_19] [i_20] [i_19] [i_19] [i_19] = ((/* implicit */int) ((long long int) arr_46 [i_19] [i_22 + 3] [i_22 + 3] [i_20 + 1] [(unsigned char)2]));
                            var_52 = ((/* implicit */unsigned char) var_7);
                        }
                        for (unsigned short i_24 = 0; i_24 < 21; i_24 += 1) /* same iter space */
                        {
                            arr_81 [i_19 - 1] [i_20 - 1] [6LL] [i_19] [i_24] = ((/* implicit */int) ((long long int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_9)))));
                            var_53 = ((/* implicit */signed char) (+(-2)));
                        }
                        for (unsigned short i_25 = 0; i_25 < 21; i_25 += 1) /* same iter space */
                        {
                            arr_86 [(short)7] [i_19] [i_21] [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_2)) >= (((/* implicit */int) var_15)))) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (unsigned short)26027)))))));
                            var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -646463993)) ? (((((/* implicit */_Bool) 1023U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_19] [i_20] [i_19] [i_19] [i_25]))) : (63LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        }
                        arr_87 [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_12)));
                    }
                } 
            } 
            var_55 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_55 [i_19] [i_19 - 1] [i_19 - 1] [i_19 - 1])) >= (((/* implicit */int) var_11))));
            var_56 = ((/* implicit */_Bool) (+(((unsigned long long int) var_15))));
        }
        for (unsigned char i_26 = 0; i_26 < 21; i_26 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_27 = 0; i_27 < 21; i_27 += 4) 
            {
                for (unsigned char i_28 = 1; i_28 < 19; i_28 += 2) 
                {
                    for (unsigned char i_29 = 2; i_29 < 19; i_29 += 2) 
                    {
                        {
                            var_57 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) 457131751)) || (((/* implicit */_Bool) (unsigned char)242))))) : (((/* implicit */int) ((signed char) (short)-1)))));
                            arr_100 [i_19] [i_26] = var_0;
                            var_58 = ((/* implicit */unsigned int) arr_42 [i_19 - 1] [(unsigned char)11] [(unsigned short)10] [i_19]);
                            var_59 -= ((/* implicit */long long int) arr_56 [i_19]);
                        }
                    } 
                } 
            } 
            var_60 = ((/* implicit */long long int) min((var_60), (((/* implicit */long long int) var_14))));
            /* LoopSeq 3 */
            for (unsigned long long int i_30 = 0; i_30 < 21; i_30 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_31 = 2; i_31 < 20; i_31 += 1) 
                {
                    for (short i_32 = 3; i_32 < 20; i_32 += 1) 
                    {
                        {
                            var_61 = ((/* implicit */short) min((var_61), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) arr_83 [i_26] [i_30] [(signed char)15])) > (((/* implicit */int) (signed char)68))))))))));
                            var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (var_7)));
                        }
                    } 
                } 
                arr_110 [i_19] [i_26] [i_30] = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned char)253)) / (((/* implicit */int) var_8))))));
            }
            for (signed char i_33 = 1; i_33 < 20; i_33 += 3) 
            {
                var_63 = ((/* implicit */short) ((((/* implicit */int) arr_48 [i_19] [i_19])) << (((((4915819020624260642ULL) << (((/* implicit */int) (short)0)))) - (4915819020624260641ULL)))));
                var_64 = ((/* implicit */long long int) var_1);
            }
            for (unsigned int i_34 = 1; i_34 < 20; i_34 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_35 = 1; i_35 < 20; i_35 += 2) 
                {
                    for (long long int i_36 = 0; i_36 < 21; i_36 += 1) 
                    {
                        {
                            var_65 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned long long int) arr_89 [i_19]))));
                            var_66 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) -646464006)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_83 [(unsigned char)14] [i_26] [i_19]))))));
                        }
                    } 
                } 
                arr_122 [i_19] = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)));
            }
        }
    }
    for (unsigned short i_37 = 1; i_37 < 12; i_37 += 3) 
    {
        var_67 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((signed char) arr_0 [i_37 - 1] [i_37]))) : ((~(((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_2)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_38 = 0; i_38 < 16; i_38 += 4) 
        {
            var_68 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) ^ (((unsigned long long int) var_13))));
            var_69 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
            /* LoopNest 3 */
            for (long long int i_39 = 1; i_39 < 15; i_39 += 1) 
            {
                for (unsigned char i_40 = 3; i_40 < 15; i_40 += 4) 
                {
                    for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
                    {
                        {
                            arr_137 [i_38] [i_38] [8U] [i_40] [(short)12] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) var_2))));
                            var_70 = ((/* implicit */long long int) max((var_70), (((/* implicit */long long int) ((((/* implicit */int) arr_105 [i_40 - 1] [i_38] [i_40 - 3] [14LL] [4LL])) ^ (((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_42 = 3; i_42 < 15; i_42 += 3) 
        {
            var_71 = ((/* implicit */unsigned char) (+(((long long int) var_10))));
            var_72 = ((/* implicit */short) min((var_72), (((/* implicit */short) ((unsigned int) min((var_16), (((/* implicit */int) (unsigned short)62337))))))));
        }
        var_73 = ((/* implicit */_Bool) min((var_10), (var_8)));
    }
    for (unsigned char i_43 = 0; i_43 < 17; i_43 += 3) 
    {
        arr_145 [(short)8] &= ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */short) arr_13 [i_43] [i_43] [i_43])), (var_0)))) ? (((((/* implicit */int) (short)0)) ^ (((/* implicit */int) var_10)))) : (((/* implicit */int) var_0)))), ((~(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (short)-6)))))))));
        arr_146 [i_43] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) min((((/* implicit */unsigned short) arr_107 [i_43] [i_43] [i_43] [i_43] [i_43] [i_43])), (var_10)))), (var_13)))));
        /* LoopNest 2 */
        for (unsigned char i_44 = 0; i_44 < 17; i_44 += 4) 
        {
            for (unsigned long long int i_45 = 0; i_45 < 17; i_45 += 3) 
            {
                {
                    var_74 = ((/* implicit */unsigned char) 0LL);
                    arr_152 [i_44] &= ((((/* implicit */int) var_2)) > ((-(((/* implicit */int) var_11)))));
                    var_75 = ((/* implicit */short) max(((unsigned char)35), ((unsigned char)196)));
                }
            } 
        } 
    }
}
