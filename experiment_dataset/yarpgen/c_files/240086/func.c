/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240086
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned int) ((int) var_17))), (min((var_2), (((/* implicit */unsigned int) var_4)))))));
        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_4)))))))) != (((((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_7))))) / (((/* implicit */int) ((short) var_16)))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_6)))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((max((((/* implicit */unsigned short) var_10)), (var_15))), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (var_2)))))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (max((var_16), (((/* implicit */unsigned long long int) var_4)))) : (((((/* implicit */_Bool) var_0)) ? (max((var_8), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
                var_21 = ((/* implicit */unsigned char) var_14);
            }
            arr_10 [i_1] = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (var_16)));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((unsigned int) min((((unsigned int) var_9)), (((/* implicit */unsigned int) var_6))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
        {
            arr_14 [i_3] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((var_2), (var_12)))), (((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_16))) : (max((var_8), (((/* implicit */unsigned long long int) var_1))))))));
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                for (signed char i_5 = 3; i_5 < 19; i_5 += 4) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_6] [i_4] [i_6] [i_5] [i_3] = ((/* implicit */_Bool) var_11);
                            var_23 &= ((/* implicit */long long int) max((max((((/* implicit */unsigned int) (signed char)127)), (1865026345U))), (((unsigned int) (_Bool)0))));
                            var_24 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) ? (((var_12) & (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_13))))))));
                            var_25 ^= ((/* implicit */unsigned short) ((((unsigned long long int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_10))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (max((min((var_16), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (unsigned short)11605)) : (-515898573)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) > (var_16)))))));
                        var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((unsigned int) var_17)), (((/* implicit */unsigned int) min((var_10), (var_5))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) - (var_11)))), (((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */unsigned long long int) var_12))))))));
                    }
                } 
            } 
            var_28 = max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0))))), (((unsigned short) var_13)));
            arr_26 [i_0] [i_3] |= var_7;
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
        {
            arr_31 [i_9] [i_0] = ((/* implicit */unsigned short) ((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
            /* LoopSeq 2 */
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8))))));
                arr_36 [i_9] |= ((/* implicit */unsigned int) var_5);
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_1))));
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)218)) ? (1963284402U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211)))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                arr_41 [i_0] [i_9] = ((/* implicit */short) var_0);
                var_32 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_10)))) : (((long long int) var_5))));
            }
            arr_42 [i_9] &= ((((/* implicit */int) var_6)) | (((/* implicit */int) var_3)));
            var_33 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) & (((/* implicit */int) var_4))));
        }
        arr_43 [i_0] [i_0] = ((/* implicit */unsigned char) min((0U), (((/* implicit */unsigned int) (unsigned char)63))));
        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_14)))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_2)) : (var_16))))))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
    {
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */unsigned long long int) var_11))));
        arr_46 [i_12] = ((/* implicit */unsigned short) ((((unsigned long long int) var_3)) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    }
    for (unsigned int i_13 = 1; i_13 < 20; i_13 += 2) 
    {
        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_12)) : (var_8))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))))))));
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 23; i_14 += 4) 
        {
            arr_54 [i_13] [i_14] = ((/* implicit */short) min(((+(((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) max((var_1), (var_7)))) : (((/* implicit */int) ((signed char) var_8))))))));
            arr_55 [i_13] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) | (var_2)))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_14)))))))) / (((unsigned long long int) var_11))));
        }
        /* vectorizable */
        for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_16 = 2; i_16 < 20; i_16 += 3) 
            {
                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((signed char) var_7)))));
                /* LoopSeq 1 */
                for (int i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    var_39 = ((/* implicit */unsigned char) ((short) var_17));
                    var_40 |= ((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_10)) & (((/* implicit */int) var_14))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_14))));
                        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((unsigned char) var_17)))));
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))) : (((unsigned int) 15553406136698513092ULL))));
                        arr_65 [i_13 + 2] [i_16] [i_13 + 2] [i_13] [4U] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_3))));
                    }
                    for (unsigned char i_19 = 2; i_19 < 22; i_19 += 2) 
                    {
                        var_44 = ((/* implicit */unsigned int) ((unsigned long long int) var_10));
                        var_45 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_14)))));
                    }
                    for (signed char i_20 = 1; i_20 < 19; i_20 += 1) 
                    {
                        var_46 += ((signed char) var_2);
                        arr_71 [i_15] [i_16] [i_15] = ((/* implicit */unsigned char) ((short) var_12));
                        var_47 = ((/* implicit */unsigned short) ((signed char) var_9));
                    }
                    var_48 |= ((/* implicit */signed char) (-(var_16)));
                    var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (var_11)))) != (var_8))))));
                }
            }
            for (int i_21 = 0; i_21 < 23; i_21 += 1) 
            {
                arr_74 [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))));
                /* LoopSeq 3 */
                for (unsigned short i_22 = 0; i_22 < 23; i_22 += 2) /* same iter space */
                {
                    var_50 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_8) : (var_16))));
                    arr_78 [i_21] = ((/* implicit */short) ((int) var_0));
                    var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1)))))));
                }
                for (unsigned short i_23 = 0; i_23 < 23; i_23 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_24 = 2; i_24 < 22; i_24 += 4) 
                    {
                        var_52 ^= ((/* implicit */signed char) ((unsigned int) var_6));
                        var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_8)))))));
                    }
                    for (unsigned char i_25 = 2; i_25 < 21; i_25 += 4) 
                    {
                        var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - ((+(((/* implicit */int) (unsigned short)0))))));
                        arr_86 [i_13 + 2] [i_15] [i_15] [i_23] [i_23] [i_25 + 1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_13))));
                        var_55 = ((/* implicit */int) max((var_55), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) / (var_16))))));
                        arr_87 [i_15] [i_21] [i_15] [i_25] = ((/* implicit */int) ((9223372036854775807LL) & (-1560719264267481518LL)));
                        var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_13))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_26 = 0; i_26 < 23; i_26 += 3) /* same iter space */
                    {
                        arr_90 [i_21] = ((/* implicit */_Bool) var_4);
                        arr_91 [i_15] [i_21] [i_23] [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))));
                        arr_92 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_3))))));
                        var_57 = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_5)) - (232)))));
                    }
                    for (unsigned char i_27 = 0; i_27 < 23; i_27 += 3) /* same iter space */
                    {
                        var_58 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))));
                        var_59 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) * (((/* implicit */int) var_9)))) << (((((/* implicit */int) var_13)) - (86)))));
                        var_60 = ((/* implicit */unsigned long long int) min((var_60), (((((/* implicit */_Bool) ((long long int) (unsigned short)1456))) ? (((/* implicit */unsigned long long int) var_12)) : (var_8)))));
                    }
                    var_61 = ((unsigned short) var_11);
                }
                for (unsigned short i_28 = 0; i_28 < 23; i_28 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_29 = 1; i_29 < 21; i_29 += 2) 
                    {
                        var_62 += ((/* implicit */unsigned long long int) var_13);
                        var_63 = ((/* implicit */short) (-(((/* implicit */int) var_6))));
                        var_64 = ((/* implicit */unsigned long long int) max((var_64), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))));
                    }
                    var_65 = ((/* implicit */unsigned short) ((unsigned char) var_15));
                    arr_100 [i_28] [i_15] [i_21] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_17))))));
                    var_66 = ((/* implicit */short) ((long long int) var_4));
                }
                var_67 += ((/* implicit */signed char) ((unsigned short) var_11));
            }
            for (unsigned long long int i_30 = 4; i_30 < 21; i_30 += 1) 
            {
                var_68 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_17))))) <= (((/* implicit */int) var_1))));
                var_69 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9))));
            }
            /* LoopSeq 1 */
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_32 = 0; i_32 < 23; i_32 += 1) 
                {
                    for (unsigned char i_33 = 0; i_33 < 23; i_33 += 2) 
                    {
                        {
                            arr_112 [i_32] [i_15] [i_31] [i_31] [i_33] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0))))));
                            var_70 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) var_15))));
                        }
                    } 
                } 
                arr_113 [i_31] [i_31] [i_31] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) var_6)))));
            }
        }
        /* LoopNest 2 */
        for (signed char i_34 = 1; i_34 < 22; i_34 += 3) 
        {
            for (signed char i_35 = 0; i_35 < 23; i_35 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_36 = 0; i_36 < 23; i_36 += 1) 
                    {
                        arr_120 [i_13] [i_13] [i_34] [i_35] [i_35] [i_13] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned short) var_7))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        var_71 = ((/* implicit */signed char) max((var_71), (((/* implicit */signed char) ((max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_0))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))))))))));
                    }
                    for (int i_37 = 0; i_37 < 23; i_37 += 1) 
                    {
                        arr_123 [i_13] [i_34 - 1] [i_37] = (-(((/* implicit */int) ((unsigned short) var_16))));
                        var_72 = ((/* implicit */short) var_0);
                    }
                    /* vectorizable */
                    for (signed char i_38 = 0; i_38 < 23; i_38 += 4) /* same iter space */
                    {
                        arr_126 [i_38] [i_35] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4))))));
                        arr_127 [i_38] [i_38] [i_13] [i_38] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))));
                    }
                    /* vectorizable */
                    for (signed char i_39 = 0; i_39 < 23; i_39 += 4) /* same iter space */
                    {
                        arr_131 [4LL] [i_35] [i_35] = ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_10)));
                        arr_132 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) + ((~(var_11)))));
                    }
                    var_73 -= ((/* implicit */_Bool) ((long long int) ((long long int) var_7)));
                    arr_133 [i_13 - 1] [i_35] = max((((/* implicit */int) ((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))));
                }
            } 
        } 
    }
    var_74 = ((/* implicit */unsigned long long int) var_12);
    var_75 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)152)) * (0)));
}
