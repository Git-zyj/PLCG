/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221101
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (((!(((/* implicit */_Bool) 4119433200U)))) ? (((int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_5 [i_0] = ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_6))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
            arr_6 [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)423))))) ? (var_9) : ((((!(((/* implicit */_Bool) var_5)))) ? ((~(var_6))) : (var_9)))));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                var_17 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) var_13)))));
                var_18 -= ((/* implicit */_Bool) var_13);
            }
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */signed char) var_12);
                /* LoopSeq 1 */
                for (signed char i_4 = 4; i_4 < 14; i_4 += 4) 
                {
                    var_20 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (signed char)-21)))));
                    arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_9)));
                }
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */int) var_8);
                arr_18 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                var_22 = ((/* implicit */short) ((int) ((unsigned int) (signed char)23)));
            }
            arr_19 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((-(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        }
        /* vectorizable */
        for (short i_6 = 2; i_6 < 16; i_6 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) var_2)))))));
            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_5))));
        }
        for (short i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            var_26 ^= ((/* implicit */long long int) ((short) ((signed char) (+(((/* implicit */int) var_14))))));
            /* LoopSeq 3 */
            for (unsigned int i_8 = 4; i_8 < 17; i_8 += 1) 
            {
                arr_27 [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)24))));
                var_27 -= ((/* implicit */unsigned long long int) var_12);
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((signed char) var_14)))));
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
            }
            for (int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                var_30 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((int) var_8)))))));
                var_31 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (var_11) : ((-(((/* implicit */int) var_14))))))));
                var_32 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_6)))))) : (var_6)));
            }
            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                arr_35 [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) (+(var_15)));
                arr_36 [i_0] [(signed char)15] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) var_13))));
                arr_37 [i_10] [i_7] [i_0] = ((/* implicit */short) (+(var_8)));
            }
        }
        arr_38 [i_0] = ((/* implicit */unsigned short) var_7);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            arr_42 [i_11] = ((/* implicit */unsigned short) ((int) var_0));
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                for (unsigned char i_13 = 2; i_13 < 17; i_13 += 1) 
                {
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_12)) : ((+(var_6)))));
                        arr_47 [i_13] [i_13] [i_12] [4] [i_12] = ((short) var_7);
                    }
                } 
            } 
        }
        for (signed char i_14 = 1; i_14 < 17; i_14 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_15 = 2; i_15 < 15; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_16 = 1; i_16 < 16; i_16 += 2) 
                {
                    for (short i_17 = 2; i_17 < 16; i_17 += 4) 
                    {
                        {
                            var_34 -= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                            var_35 ^= ((/* implicit */signed char) (+((+(((/* implicit */int) (signed char)-24))))));
                            var_36 -= var_8;
                        }
                    } 
                } 
                var_37 ^= ((/* implicit */unsigned long long int) ((short) var_1));
            }
            for (int i_18 = 4; i_18 < 15; i_18 += 1) 
            {
                arr_61 [4ULL] [i_14 - 1] [i_18] |= ((/* implicit */short) var_15);
                var_38 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(var_15)))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
                arr_62 [(signed char)6] [i_0] [i_14] [i_14] = ((/* implicit */unsigned int) ((unsigned short) (~(var_3))));
            }
            for (short i_19 = 2; i_19 < 16; i_19 += 3) 
            {
                arr_66 [i_19 - 2] [i_14] [(signed char)12] = ((/* implicit */signed char) var_12);
                var_39 |= ((/* implicit */signed char) var_9);
            }
            arr_67 [(signed char)8] [2U] &= ((/* implicit */unsigned int) var_14);
            arr_68 [i_14] [(unsigned short)14] [i_0] = ((/* implicit */short) ((signed char) (+(((/* implicit */int) ((signed char) var_11))))));
            var_40 -= ((/* implicit */unsigned int) var_4);
        }
        /* vectorizable */
        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 2) 
        {
            arr_71 [i_0] [i_20] [i_20] = ((/* implicit */unsigned short) var_7);
            var_41 = ((/* implicit */int) ((unsigned char) var_10));
            var_42 ^= ((/* implicit */short) (~(((/* implicit */int) var_10))));
        }
    }
    /* vectorizable */
    for (unsigned int i_21 = 0; i_21 < 12; i_21 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_22 = 0; i_22 < 12; i_22 += 1) 
        {
            var_43 *= ((/* implicit */short) var_1);
            /* LoopSeq 3 */
            for (unsigned int i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_24 = 0; i_24 < 12; i_24 += 1) 
                {
                    arr_82 [i_21] [i_22] [i_21] [i_24] = ((/* implicit */unsigned int) var_1);
                    var_44 = var_14;
                    var_45 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(var_4)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_3)) : (var_9)))));
                    var_46 &= ((/* implicit */short) var_8);
                }
                var_47 = ((/* implicit */short) (+(var_3)));
                var_48 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (signed char)35)))));
            }
            for (unsigned int i_25 = 0; i_25 < 12; i_25 += 2) 
            {
                var_49 -= var_2;
                arr_85 [i_21] [i_21] [i_22] [i_21] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_11)))));
            }
            for (short i_26 = 0; i_26 < 12; i_26 += 2) 
            {
                var_50 &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                /* LoopSeq 3 */
                for (unsigned short i_27 = 4; i_27 < 8; i_27 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_28 = 0; i_28 < 12; i_28 += 1) 
                    {
                        var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) var_6))));
                        var_52 ^= ((/* implicit */signed char) (+(var_8)));
                        var_53 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)5))));
                        arr_93 [i_28] [i_28] [i_21] [i_27] [i_28] = ((/* implicit */unsigned char) (~(var_9)));
                        arr_94 [i_21] [i_28] [i_28] [i_21] [i_21] [(unsigned short)7] = ((/* implicit */short) (+(((/* implicit */int) var_10))));
                    }
                    var_54 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))));
                    var_55 = ((/* implicit */short) (+(var_8)));
                    arr_95 [(signed char)10] [i_22] [i_26] [i_26] [i_27] = var_12;
                }
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    arr_99 [i_22] [i_22] [i_29] [i_29] [i_22] = ((/* implicit */signed char) (-(((/* implicit */int) var_14))));
                    /* LoopSeq 1 */
                    for (short i_30 = 1; i_30 < 11; i_30 += 1) 
                    {
                        var_56 = ((/* implicit */unsigned char) var_1);
                        var_57 = ((/* implicit */int) ((signed char) var_1));
                        var_58 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_7))))));
                        var_59 = var_3;
                        arr_102 [(signed char)4] [i_22] [i_29] [i_22] [i_22] = ((/* implicit */unsigned short) var_15);
                    }
                    arr_103 [8] [i_21] |= ((/* implicit */signed char) (~(var_15)));
                    arr_104 [i_29] [i_29] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
                    var_60 = ((/* implicit */int) ((short) (+(var_8))));
                }
                for (unsigned int i_31 = 0; i_31 < 12; i_31 += 1) 
                {
                    arr_107 [i_31] [i_31] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) var_10))));
                    var_61 = ((/* implicit */short) max((var_61), (((/* implicit */short) (!((!(((/* implicit */_Bool) var_1)))))))));
                    arr_108 [i_21] [5ULL] [(short)3] [11ULL] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) (~(var_11))))));
                    var_62 = ((/* implicit */unsigned char) max((var_62), (((/* implicit */unsigned char) ((short) (-(((/* implicit */int) var_10))))))));
                }
            }
        }
        for (unsigned int i_32 = 2; i_32 < 11; i_32 += 3) 
        {
            arr_113 [i_32] = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_13)))));
            arr_114 [i_32] [i_21] [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (var_12)));
        }
        for (short i_33 = 0; i_33 < 12; i_33 += 4) 
        {
            var_63 = ((/* implicit */unsigned char) max((var_63), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
            var_64 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_34 = 1; i_34 < 10; i_34 += 4) 
            {
                var_65 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_1)) : (var_15)))) ? (((/* implicit */unsigned int) var_12)) : ((+(var_8)))));
                arr_122 [i_21] [i_21] [i_34 - 1] |= ((/* implicit */signed char) var_15);
            }
        }
        var_66 = var_11;
        arr_123 [i_21] [i_21] = ((/* implicit */unsigned short) var_4);
    }
}
