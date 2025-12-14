/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194419
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)56247)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (((((/* implicit */_Bool) (signed char)124)) ? (1932906658U) : (((/* implicit */unsigned int) -2147483646))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!((((-(((/* implicit */int) arr_0 [i_0])))) != (((/* implicit */int) ((arr_1 [(short)7] [i_0]) > (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((172690833) ^ (((/* implicit */int) arr_3 [i_0])))) >= (((((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) (unsigned char)56)))) | (((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_0 [(short)6]))))))));
        var_11 = min(((-(((/* implicit */int) arr_3 [7])))), (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) > (2362060633U)))), (min((arr_0 [i_0]), (((/* implicit */short) var_0))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_12 *= ((/* implicit */unsigned short) arr_6 [i_1] [i_1]);
        var_13 = ((/* implicit */long long int) ((unsigned int) var_1));
    }
    for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_4 = 2; i_4 < 12; i_4 += 2) 
            {
                var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3 - 1])) ? (((/* implicit */int) arr_7 [i_3 - 1])) : (var_2)));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (unsigned char)45))));
                arr_15 [i_3] [(short)7] = (~(((/* implicit */int) var_8)));
                var_16 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_2] [i_3 - 1]))));
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                /* LoopSeq 4 */
                for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 1932906657U))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) var_7)))))))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((signed char) ((unsigned short) arr_13 [i_6] [i_6])))));
                    }
                    arr_23 [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)14));
                    arr_24 [i_2] [i_2 - 2] [11U] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_2 - 1] [i_3 - 1]))));
                    arr_25 [i_3] [4] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) var_4);
                    arr_26 [i_3] [i_3 - 1] [i_3] [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (arr_19 [i_5 + 1] [i_5 + 1] [i_3 - 1] [i_2 - 1])));
                }
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((int) arr_27 [i_9] [i_3] [i_3] [i_2 - 1]));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_3] [i_3]))))) ? (((/* implicit */int) var_5)) : ((-(var_1)))));
                        var_21 ^= ((/* implicit */unsigned long long int) ((2147483642) - (((/* implicit */int) (unsigned char)27))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        arr_34 [i_3] = ((/* implicit */int) ((unsigned long long int) arr_18 [i_3 - 1]));
                        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (145))))))));
                    }
                    for (signed char i_11 = 1; i_11 < 11; i_11 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) arr_6 [i_3] [i_11 + 1]);
                        var_24 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8272459056306844212LL)) ? (((/* implicit */int) (unsigned short)54705)) : (((/* implicit */int) arr_30 [i_2 + 1] [i_2] [i_2] [i_2] [i_2])))))));
                    }
                    for (signed char i_12 = 1; i_12 < 11; i_12 += 2) /* same iter space */
                    {
                        var_25 = ((unsigned char) arr_14 [i_2] [i_3 - 1] [i_3]);
                        var_26 ^= (!(((/* implicit */_Bool) var_2)));
                        arr_39 [i_2] [i_3] [i_5] [i_8] [i_12] [i_12 + 3] [10] = (i_3 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) << (((/* implicit */int) arr_22 [i_3] [i_3] [i_3]))))) || (((/* implicit */_Bool) ((signed char) arr_11 [i_3])))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) arr_22 [i_3] [i_3] [i_3])) - (1)))))) || (((/* implicit */_Bool) ((signed char) arr_11 [i_3]))))));
                    }
                    arr_40 [i_2] [i_2] [i_3] [i_8] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_18 [i_3 - 1]))));
                    arr_41 [i_2] [i_3] = ((/* implicit */unsigned char) ((_Bool) -1885856600));
                    var_27 = ((/* implicit */short) ((((/* implicit */int) (short)24734)) >= (((/* implicit */int) (unsigned short)10383))));
                    arr_42 [i_2] [i_3] [i_5 - 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) var_4)))));
                }
                for (int i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(var_2)))) & (((unsigned int) 2362060629U))));
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                        var_30 = ((/* implicit */unsigned short) arr_14 [i_5 + 2] [i_2 + 1] [i_3]);
                        var_31 = ((/* implicit */int) ((short) arr_38 [i_2] [i_5 + 2] [i_3 - 1] [i_13] [i_2 + 1] [i_2] [(unsigned char)2]));
                    }
                    for (short i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        var_32 = ((/* implicit */int) ((unsigned int) arr_30 [i_3 - 1] [i_3 - 1] [i_5 + 2] [i_2 - 1] [i_15]));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_3] [i_5] [i_5] [i_3] [i_3] [i_5 + 2] [i_15])) ? (arr_49 [i_2] [i_2] [i_2] [i_3] [i_2] [i_5 - 1] [i_2]) : (((/* implicit */int) var_0))));
                        var_34 = ((/* implicit */signed char) 48545315);
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65472)) ^ (((/* implicit */int) arr_47 [i_5 + 3] [i_5 + 3] [i_13] [i_15] [i_15] [i_15] [i_15]))));
                    }
                    arr_51 [3ULL] [i_13] [3ULL] [3ULL] [(short)3] [i_3] = ((/* implicit */long long int) arr_21 [i_3] [i_3] [i_13]);
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2])))))));
                    arr_52 [i_3] [i_2] [(unsigned short)0] [i_5 + 2] [12ULL] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_44 [i_3] [i_5 - 2] [i_3] [i_2 + 1])) : (((/* implicit */int) arr_44 [i_3] [i_5 + 2] [i_3] [i_2 - 1])));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [2U] [2U]))) < (36626501U))) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) var_5)))))));
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_3] [i_3 - 1])))))));
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_3] [i_5 - 2] [i_16] [i_17])) ? (((/* implicit */int) arr_44 [i_3] [i_16] [i_5 + 4] [i_16])) : (((/* implicit */int) arr_44 [i_3] [i_3 - 1] [i_2 + 1] [i_3]))));
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)36817)) == (((/* implicit */int) var_0)))) ? (((/* implicit */int) arr_44 [i_5] [i_5 - 2] [i_5 - 2] [i_5])) : (((/* implicit */int) arr_14 [i_17] [i_17] [i_5])))))));
                    }
                    for (int i_18 = 0; i_18 < 15; i_18 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) var_1))));
                        var_42 = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) var_9)))));
                        arr_62 [i_2] [i_3 - 1] [i_5] [i_16] [i_3] [i_18] [i_2] = ((/* implicit */long long int) ((signed char) arr_37 [i_5 + 3] [i_3 - 1]));
                    }
                    var_43 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) : (3199999564U)));
                }
                var_44 = (((~(((/* implicit */int) (signed char)-64)))) & (arr_48 [i_2] [i_3] [i_5] [i_5 + 2] [i_2] [i_3] [i_5]));
            }
            /* vectorizable */
            for (signed char i_19 = 0; i_19 < 15; i_19 += 3) 
            {
                var_45 = ((/* implicit */unsigned long long int) var_9);
                arr_65 [i_2 + 1] [i_3] [i_2 + 1] = var_4;
                /* LoopNest 2 */
                for (unsigned short i_20 = 3; i_20 < 14; i_20 += 1) 
                {
                    for (unsigned short i_21 = 2; i_21 < 14; i_21 += 4) 
                    {
                        {
                            arr_72 [i_3 - 1] [i_3] [i_3] [(unsigned char)7] = ((/* implicit */long long int) (+(((/* implicit */int) arr_60 [i_20 - 2] [i_20 - 2] [i_20] [13LL] [i_20] [i_3]))));
                            var_46 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)17))));
                            arr_73 [i_3] [i_3] [i_19] [0] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) arr_67 [i_20] [i_20] [i_20])) + (((/* implicit */int) var_9)))) & (((/* implicit */int) arr_44 [i_3] [i_20] [i_3] [i_3]))));
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_57 [(short)8] [i_2 - 1] [i_2] [i_2 - 2] [i_2 - 2])) ? (var_2) : (((/* implicit */int) ((unsigned char) arr_64 [i_2] [i_3] [(short)9] [7])))));
                            var_48 = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
            }
            for (unsigned char i_22 = 0; i_22 < 15; i_22 += 1) 
            {
                /* LoopNest 2 */
                for (int i_23 = 2; i_23 < 14; i_23 += 2) 
                {
                    for (short i_24 = 2; i_24 < 14; i_24 += 1) 
                    {
                        {
                            arr_80 [(short)13] [i_3 - 1] [i_3] [(short)13] [i_3] = ((/* implicit */short) (-(min((((/* implicit */unsigned int) ((unsigned short) arr_45 [i_2] [i_3] [i_2]))), (min((arr_63 [(unsigned char)4] [(unsigned char)4] [i_23 + 1] [i_24 - 1]), (((/* implicit */unsigned int) var_5))))))));
                            arr_81 [i_3] [i_3] [i_3] [i_22] [i_3] [i_3] = ((/* implicit */int) arr_7 [i_2]);
                            var_49 = min((((/* implicit */unsigned int) (unsigned char)192)), (((((/* implicit */unsigned int) 2147483642)) ^ (4294967295U))));
                        }
                    } 
                } 
                arr_82 [i_2] &= ((((/* implicit */int) (short)-24738)) - (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_49 [(short)12] [(short)12] [(short)12] [i_2] [i_3] [4U] [i_2])))))));
                arr_83 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) ((long long int) ((int) ((((/* implicit */int) var_9)) + (2147483630)))));
                arr_84 [i_3] [i_3 - 1] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */short) var_8)), (((short) var_3)))))));
            }
            var_50 = ((/* implicit */int) min((2362060638U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) ((signed char) 2831763185U))))))));
            var_51 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_48 [i_3] [(unsigned short)1] [3] [3] [i_3] [(unsigned short)1] [i_2 - 2])))));
            var_52 = ((/* implicit */unsigned int) var_6);
        }
        arr_85 [(_Bool)1] = min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)167)))), ((unsigned short)0));
    }
    for (unsigned int i_25 = 2; i_25 < 14; i_25 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_26 = 0; i_26 < 15; i_26 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_27 = 0; i_27 < 15; i_27 += 1) /* same iter space */
            {
                arr_92 [i_27] [i_27] [i_27] [i_25] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)28))));
                var_53 = ((/* implicit */_Bool) arr_37 [i_25 + 1] [i_26]);
                var_54 = ((/* implicit */unsigned char) (unsigned short)65534);
            }
            for (unsigned short i_28 = 0; i_28 < 15; i_28 += 1) /* same iter space */
            {
                var_55 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24734)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_76 [i_25] [i_25] [i_28])))))) : (((unsigned long long int) arr_28 [i_25 + 1] [i_25 + 1] [i_28] [i_25 - 1]))));
                /* LoopNest 2 */
                for (unsigned short i_29 = 3; i_29 < 14; i_29 += 1) 
                {
                    for (int i_30 = 0; i_30 < 15; i_30 += 4) 
                    {
                        {
                            var_56 = ((/* implicit */signed char) arr_63 [i_25] [i_30] [i_28] [i_29]);
                            var_57 ^= ((/* implicit */unsigned int) min(((~(min((((/* implicit */unsigned long long int) -6999801186205015596LL)), (18028039660493271031ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_78 [i_26] [i_25] [i_25 - 1] [12U] [(signed char)6])))))));
                        }
                    } 
                } 
                arr_100 [4U] [i_26] [i_28] = ((/* implicit */short) (_Bool)0);
            }
            /* LoopSeq 1 */
            for (int i_31 = 1; i_31 < 11; i_31 += 1) 
            {
                /* LoopNest 2 */
                for (short i_32 = 0; i_32 < 15; i_32 += 3) 
                {
                    for (int i_33 = 0; i_33 < 15; i_33 += 1) 
                    {
                        {
                            arr_108 [i_25 - 1] [i_26] [i_26] [i_26] [i_32] [i_32] [14LL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_79 [i_26]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_88 [i_26] [i_32])) || (((/* implicit */_Bool) var_3))))))))) : (((((/* implicit */_Bool) ((short) var_3))) ? (arr_19 [i_31] [i_31] [i_31 + 1] [i_31 + 1]) : (((/* implicit */unsigned long long int) ((arr_77 [i_25 + 1] [i_31] [(unsigned short)0]) % (((/* implicit */int) (unsigned short)65535)))))))));
                            var_58 = ((/* implicit */unsigned long long int) min(((~(((int) var_8)))), (((/* implicit */int) (unsigned short)61119))));
                            var_59 = ((/* implicit */unsigned int) min((((((/* implicit */int) var_6)) + (((/* implicit */int) min((((/* implicit */unsigned short) arr_69 [i_25] [(unsigned short)12] [i_25] [i_32] [i_25] [i_33] [i_25])), ((unsigned short)4416)))))), (((/* implicit */int) arr_66 [i_31] [i_31] [i_31] [i_31] [i_31] [(unsigned short)12]))));
                            var_60 = var_8;
                            var_61 *= ((/* implicit */_Bool) min((((long long int) (-(4128016631198991678LL)))), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_34 = 0; i_34 < 15; i_34 += 4) /* same iter space */
                {
                    arr_112 [i_31] = min((min((((/* implicit */long long int) (unsigned char)46)), (-4128016631198991679LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_60 [i_25 + 1] [i_25] [i_31 + 4] [i_34] [i_34] [i_31])) : (((/* implicit */int) arr_60 [i_25 - 1] [i_26] [i_34] [i_34] [i_34] [i_31]))))));
                    var_62 *= ((/* implicit */unsigned int) var_1);
                }
                for (unsigned char i_35 = 0; i_35 < 15; i_35 += 4) /* same iter space */
                {
                    var_63 = ((/* implicit */unsigned char) max((var_63), (((/* implicit */unsigned char) ((((/* implicit */int) arr_66 [i_25 - 1] [i_25 - 1] [i_31] [i_35] [i_35] [i_35])) - ((~(var_1))))))));
                    var_64 *= arr_8 [i_26];
                }
                var_65 = var_6;
            }
        }
        arr_116 [i_25] = ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (arr_11 [i_25])))) ? (((/* implicit */unsigned int) (-(-1375176328)))) : (min((arr_106 [i_25] [(_Bool)1] [i_25] [i_25] [i_25] [i_25] [i_25 - 1]), (((/* implicit */unsigned int) var_0)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned short)33378))))))))));
        var_66 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_4)) <= (var_1))))))) * (((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_12 [(unsigned char)6] [i_25] [i_25])))) ? (min((7591042646363093958LL), (((/* implicit */long long int) arr_47 [i_25 + 1] [(unsigned short)2] [i_25 - 1] [i_25] [i_25 - 2] [i_25] [i_25 + 1])))) : (((long long int) 4294967295U))))));
        var_67 = ((/* implicit */unsigned short) var_4);
    }
    var_68 += ((/* implicit */unsigned char) ((int) ((unsigned long long int) (unsigned short)11)));
    var_69 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (short)-803)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) (unsigned char)104))))), ((-(((/* implicit */int) var_0))))));
}
