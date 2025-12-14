/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35252
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)31)) % (((/* implicit */int) ((unsigned char) var_0)))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (arr_1 [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_6 [(unsigned short)17] [i_1] = (!(((/* implicit */_Bool) 4611686018418999296ULL)));
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))) - (((/* implicit */int) arr_5 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 2; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_16 [i_4] [i_4] [i_3] [i_2] = ((/* implicit */short) (-(((/* implicit */int) var_11))));
                    arr_17 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-114))))) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (14438711687328293114ULL))))))))));
                }
            } 
        } 
        arr_18 [i_2] [i_2] = ((/* implicit */unsigned int) var_0);
        var_16 = ((((/* implicit */_Bool) var_12)) ? ((-(((((/* implicit */_Bool) (short)-19660)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_2)));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned long long int) var_8);
        var_17 += ((/* implicit */unsigned int) (short)-19681);
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) ((unsigned int) arr_13 [i_5] [i_6] [i_6]));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_6])))))));
                            var_20 = ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                arr_33 [i_5] [i_5] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10903991882290298878ULL)) ? (((/* implicit */int) arr_15 [i_5] [i_5] [(_Bool)1] [i_5])) : (((/* implicit */int) arr_15 [i_5] [i_6] [i_6] [i_7]))));
            }
            arr_34 [(unsigned short)0] [i_6] = ((/* implicit */unsigned short) ((int) 5374896894507613657ULL));
        }
        for (short i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
        {
            arr_37 [i_5] [i_10] = ((/* implicit */unsigned int) arr_25 [i_5] [(unsigned char)10] [i_5]);
            var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((-(arr_30 [i_5] [i_10] [i_10] [i_10]))) : (5525623949172783267ULL)));
            arr_38 [i_5] [i_10] = ((/* implicit */short) 1318240325U);
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((arr_27 [i_10] [i_5] [i_5]) & (arr_27 [i_10] [i_5] [i_5]))))));
        }
        for (short i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    arr_46 [i_13] [0] [i_11] [0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_9 [i_12])))) * (((/* implicit */int) arr_20 [i_12]))));
                    arr_47 [i_5] [i_5] = (+((((_Bool)1) ? (((/* implicit */int) arr_9 [i_5])) : (((/* implicit */int) arr_14 [2U] [2U] [(unsigned char)5])))));
                    arr_48 [2ULL] [2ULL] [2ULL] = ((/* implicit */int) var_2);
                    arr_49 [i_5] [i_5] [10U] [(short)9] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) : (arr_27 [i_5] [15] [i_12])));
                }
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 1; i_15 < 16; i_15 += 3) 
                    {
                        arr_55 [(unsigned char)9] = ((/* implicit */_Bool) ((unsigned long long int) (short)5623));
                        var_23 *= ((/* implicit */unsigned short) arr_53 [i_15 + 2] [i_15 + 2] [i_15 + 1] [i_15 - 1] [i_15 + 1]);
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((var_9) & (((/* implicit */int) arr_0 [i_11])))))));
                        var_25 *= ((/* implicit */unsigned int) (+(((((/* implicit */int) var_4)) - (((/* implicit */int) (signed char)(-127 - 1)))))));
                        var_26 += ((/* implicit */unsigned int) -1);
                        arr_59 [i_16] [i_12] [i_16] [i_16] [i_5] [i_5] = ((/* implicit */unsigned short) arr_15 [i_11] [i_12] [i_11] [i_16]);
                        var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_11] [0] [0] [i_14])) ? ((+(((/* implicit */int) arr_26 [i_16] [(_Bool)1] [i_12] [i_11])))) : (((/* implicit */int) var_13))));
                    }
                    for (unsigned int i_17 = 1; i_17 < 14; i_17 += 2) 
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (-(((((/* implicit */int) (signed char)30)) & (((/* implicit */int) (unsigned short)29124)))))))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                        arr_64 [(signed char)2] [i_14] [i_12] [i_11] [i_5] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_14 [i_17] [i_17] [i_12])) : (((/* implicit */int) (_Bool)1)))));
                        var_30 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_17 + 3])) * (((/* implicit */int) arr_11 [i_17 + 3]))));
                    }
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        arr_67 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_18 - 1] [i_18 - 1]))) / (arr_41 [i_18 - 1] [i_18 - 1]));
                        var_31 = ((/* implicit */unsigned char) ((unsigned long long int) arr_28 [i_14] [i_14] [i_18 - 1] [i_18]));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_32 [i_11] [i_12] [i_14] [i_18 - 1] [i_18]))));
                    }
                    arr_68 [i_14] [i_14] [i_12] [(unsigned char)7] [i_5] |= ((((/* implicit */int) arr_19 [(unsigned short)5])) * (((/* implicit */int) arr_36 [i_12])));
                    /* LoopSeq 4 */
                    for (unsigned char i_19 = 0; i_19 < 18; i_19 += 3) 
                    {
                        arr_71 [i_5] [i_5] [i_19] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) arr_30 [i_19] [i_11] [i_12] [i_14]));
                        arr_72 [i_5] [i_11] [(_Bool)1] [i_12] [i_14] [i_11] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))) > ((~(3324502094U)))));
                        arr_73 [i_5] [i_5] [(unsigned short)3] [i_11] [(short)5] [i_19] [i_19] = ((/* implicit */int) arr_56 [i_19] [i_19] [i_19] [i_5]);
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 2147324781U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_50 [i_14] [8U] [i_5])) * (((/* implicit */int) arr_50 [i_20] [i_12] [(short)3]))))) : (arr_31 [i_5] [i_11] [i_12] [i_14] [i_20]))))));
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((13071847179201937962ULL) / (((/* implicit */unsigned long long int) var_7)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4))))))));
                        arr_76 [i_20] [i_14] [i_12] [i_11] [i_5] = ((/* implicit */_Bool) arr_20 [i_5]);
                        arr_77 [15] [15] [4U] [8U] [(_Bool)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_53 [i_5] [i_5] [i_5] [i_5] [i_5]))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 1) /* same iter space */
                    {
                        arr_81 [i_5] [(_Bool)1] [(_Bool)1] [i_12] [i_14] [i_21] = ((/* implicit */signed char) (unsigned short)0);
                        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_25 [i_5] [i_11] [i_12]))));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 1) /* same iter space */
                    {
                        arr_84 [10ULL] [i_11] [i_5] |= ((/* implicit */unsigned char) ((arr_41 [i_14] [i_12]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5])))));
                        var_36 = ((/* implicit */unsigned long long int) var_8);
                    }
                }
                for (unsigned short i_23 = 0; i_23 < 18; i_23 += 4) 
                {
                    arr_87 [i_5] [(unsigned char)2] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_12]))));
                    arr_88 [i_5] [i_5] [i_11] [i_12] [i_12] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967288U)) ? (arr_82 [i_5] [i_11] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                }
                for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 3) 
                {
                    arr_92 [i_5] [i_11] [i_12] [9ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_5] [(_Bool)1] [i_12] [i_24] [16U] [i_24]))) + (arr_30 [i_11] [(signed char)2] [(signed char)2] [i_11])));
                    var_37 = ((((/* implicit */_Bool) arr_62 [i_11] [i_5] [2ULL] [i_11] [i_5])) ? (arr_62 [(signed char)12] [2ULL] [(short)10] [i_24] [i_5]) : (arr_62 [i_5] [i_11] [i_5] [i_24] [i_24]));
                    var_38 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_11] [i_11]))));
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_25 = 3; i_25 < 17; i_25 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_26 = 0; i_26 < 18; i_26 += 2) 
                    {
                        arr_97 [2ULL] [2ULL] [1U] [i_25] [i_26] [(signed char)17] = ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) arr_56 [i_26] [i_11] [i_11] [i_11])))));
                        arr_98 [(_Bool)1] [(_Bool)1] [i_11] [(unsigned char)12] [(_Bool)1] [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_57 [i_26] [i_5] [i_12] [i_5] [i_11]))))) : (((unsigned int) arr_86 [i_5] [i_5] [i_12] [i_25]))));
                    }
                    for (int i_27 = 0; i_27 < 18; i_27 += 1) 
                    {
                        arr_102 [i_11] [i_11] [(unsigned char)6] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                        arr_103 [i_5] [i_11] [i_11] [i_25] [i_27] = ((/* implicit */signed char) ((unsigned char) 4294967295U));
                        arr_104 [i_5] [i_11] [i_12] [i_12] [i_25] [i_25] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_12])) > (((/* implicit */int) arr_99 [(short)15] [i_5] [i_25 - 2] [i_25 - 3] [i_25 - 2]))));
                    }
                    arr_105 [2ULL] = ((/* implicit */_Bool) var_11);
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((_Bool) 2393665054U)))));
                    arr_106 [i_5] [i_11] [i_11] [(signed char)7] [i_25] [i_25 - 3] = ((/* implicit */unsigned long long int) arr_58 [i_25] [i_12] [i_11]);
                }
                for (signed char i_28 = 0; i_28 < 18; i_28 += 4) 
                {
                    var_40 = arr_80 [i_5] [i_5] [i_5] [i_5] [(_Bool)1];
                    arr_109 [(unsigned short)15] [1ULL] [i_12] [i_28] [i_28] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_27 [i_5] [(unsigned char)4] [(unsigned char)4]) != (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                    arr_110 [i_5] [5] [i_12] [10U] = ((/* implicit */short) var_7);
                }
                for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                {
                    arr_114 [(unsigned short)16] [i_11] [i_11] = ((/* implicit */signed char) ((unsigned short) ((unsigned long long int) var_9)));
                    var_41 = (-(arr_100 [i_29] [i_29 - 1] [i_29] [i_29]));
                }
                for (signed char i_30 = 0; i_30 < 18; i_30 += 4) 
                {
                    arr_118 [i_30] [i_12] [16ULL] [(unsigned char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)56039))) ? (var_7) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-4914)))))));
                    var_42 += ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_94 [i_12] [i_30]))));
                    arr_119 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) arr_8 [(_Bool)1]);
                    var_43 |= ((/* implicit */_Bool) arr_62 [(unsigned char)7] [i_11] [2U] [i_30] [i_11]);
                }
                var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) arr_19 [i_5])))))));
            }
            arr_120 [i_5] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((_Bool) 3198435842626210250ULL)))));
        }
        var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (~(var_8))))));
    }
    var_46 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
}
