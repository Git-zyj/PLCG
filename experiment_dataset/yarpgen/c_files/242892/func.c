/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242892
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_2)))) * ((+(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
                {
                    arr_10 [i_3] [i_1] [i_2] [i_3 + 2] = var_2;
                    var_19 = ((/* implicit */unsigned char) (+((-((+(((/* implicit */int) (_Bool)1))))))));
                    var_20 = ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) (_Bool)1))))))));
                    var_21 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_6 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_1]))))));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    arr_14 [i_4] [i_1] = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)48)))) + (((/* implicit */int) (unsigned char)215))));
                    arr_15 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_4] [i_1] [i_0])))))));
                    arr_16 [i_1] [i_1] = arr_0 [i_2];
                }
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    arr_20 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_12);
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */short) (+((-(var_7)))));
                        arr_25 [i_5] [i_2] = ((/* implicit */long long int) (((~(arr_11 [i_5] [i_2] [i_1] [i_0]))) / (((/* implicit */unsigned long long int) var_9))));
                        var_23 = ((arr_21 [i_0] [i_1] [i_2] [i_5] [i_6]) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    }
                    for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        arr_28 [i_0] = ((/* implicit */signed char) var_2);
                        var_24 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [i_2] [i_0]))) & (var_7))))));
                        arr_29 [i_0] [i_1] [i_2] [i_5] [i_1] = ((/* implicit */short) arr_2 [i_1]);
                        var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                    }
                }
                for (short i_8 = 3; i_8 < 19; i_8 += 2) 
                {
                    var_26 = ((/* implicit */short) arr_17 [i_0] [i_1] [i_2] [i_2] [i_8]);
                    arr_33 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 4; i_9 < 19; i_9 += 2) 
                    {
                        var_27 = ((/* implicit */short) (+((+(var_9)))));
                        arr_36 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 4) 
                    {
                        arr_39 [i_10] [i_2] [i_10] [i_10] [i_10 - 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0] [i_0]))));
                        var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_0]))));
                    }
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        arr_44 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) || ((!(((/* implicit */_Bool) var_5))))));
                        arr_45 [i_11] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_6 [i_8] [i_8] [i_8] [i_8]))))));
                        arr_46 [i_11] [i_8] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 508U)))))))));
                    }
                    arr_47 [i_8] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) var_14);
                }
                /* vectorizable */
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    var_29 *= ((/* implicit */short) (-(var_7)));
                    arr_51 [i_0] [i_1] = arr_48 [i_2];
                }
            }
            var_30 ^= var_14;
            arr_52 [i_0] = ((/* implicit */signed char) arr_32 [i_0] [i_0] [i_1] [i_1]);
            /* LoopSeq 3 */
            for (short i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                var_31 |= ((/* implicit */unsigned int) var_5);
                var_32 = ((/* implicit */unsigned char) var_11);
            }
            /* vectorizable */
            for (short i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                arr_59 [i_14] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (-(arr_11 [i_14] [i_1] [i_1] [i_0])));
                var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                var_34 = ((/* implicit */unsigned long long int) arr_31 [i_14] [i_14] [i_1] [i_0] [i_0]);
            }
            for (unsigned long long int i_15 = 2; i_15 < 19; i_15 += 4) 
            {
                arr_64 [i_0] [i_1] |= ((/* implicit */unsigned char) (~((~(var_3)))));
                arr_65 [i_15 - 1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_34 [i_15] [i_15] [i_15] [i_15] [i_15 - 2] [i_15 - 1] [i_0]))));
                var_35 -= ((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_1] [i_1] [i_15 + 1] [i_15] [i_15 + 1]);
                arr_66 [i_15 - 1] |= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_14))))));
                var_36 |= ((/* implicit */unsigned short) (!((!(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_1] [i_15] [i_15])) || (((/* implicit */_Bool) var_7))))))));
            }
        }
        arr_67 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)91)))))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
    {
        arr_70 [i_16] = arr_35 [i_16] [i_16] [i_16] [i_16] [i_16];
        arr_71 [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_62 [i_16] [i_16] [i_16] [i_16]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
    }
    /* vectorizable */
    for (unsigned int i_17 = 1; i_17 < 14; i_17 += 2) 
    {
        arr_74 [i_17 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_31 [i_17] [i_17] [i_17 - 1] [i_17] [i_17 + 1]))));
        var_37 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        arr_75 [i_17] [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_24 [i_17] [i_17] [i_17 - 1]))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_18 = 0; i_18 < 23; i_18 += 3) 
    {
        arr_78 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(-816004280682770407LL)))))) && ((!(((/* implicit */_Bool) var_7))))));
        /* LoopSeq 3 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            arr_81 [i_19] [i_19] [i_18] = ((/* implicit */signed char) arr_77 [i_18] [i_19]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_20 = 0; i_20 < 23; i_20 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 1) 
                {
                    var_38 = ((/* implicit */unsigned char) arr_79 [i_21] [i_19]);
                    arr_88 [i_19] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_79 [i_18] [i_21]))))));
                    arr_89 [i_21] [i_19] [i_19] [i_18] = ((/* implicit */unsigned int) var_3);
                    var_39 = (+((-(0ULL))));
                }
                arr_90 [i_20] [i_19] [i_18] [i_20] &= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_87 [i_18] [i_19] [i_20]))))));
                /* LoopSeq 3 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    arr_93 [i_20] [i_19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
                    var_40 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)29534))));
                }
                for (short i_23 = 1; i_23 < 22; i_23 += 2) 
                {
                    arr_97 [i_18] [i_19] [i_19] [i_20] [i_20] [i_19] = (!(((/* implicit */_Bool) arr_91 [i_23 - 1] [i_20] [i_19] [i_23])));
                    arr_98 [i_18] [i_19] [i_19] [i_23] = ((/* implicit */long long int) (+(((/* implicit */int) arr_91 [i_19] [i_20] [i_23 + 1] [i_23]))));
                }
                for (unsigned char i_24 = 3; i_24 < 20; i_24 += 2) 
                {
                    arr_101 [i_18] [i_19] [i_19] [i_24] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)22263))));
                    var_41 += ((/* implicit */unsigned short) (+(var_16)));
                    arr_102 [i_19] [i_19] [i_19] [i_20] = ((/* implicit */short) (+(((/* implicit */int) arr_86 [i_18] [i_18] [i_24 + 2] [i_24 + 2] [i_24 + 2]))));
                }
            }
            for (unsigned short i_25 = 0; i_25 < 23; i_25 += 1) /* same iter space */
            {
                var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)86)))))));
                arr_107 [i_18] [i_19] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_86 [i_18] [i_18] [i_19] [i_19] [i_25]))));
                arr_108 [i_18] [i_19] [i_25] = ((/* implicit */unsigned long long int) var_13);
            }
            for (unsigned short i_26 = 0; i_26 < 23; i_26 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (((+(((/* implicit */int) var_13)))) + ((((+(((/* implicit */int) arr_83 [i_18] [i_19] [i_26])))) - ((+(((/* implicit */int) var_8)))))))))));
                arr_111 [i_19] [i_18] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_82 [i_26] [i_19]))) + (var_7)))));
                var_44 = ((/* implicit */unsigned long long int) var_10);
            }
            arr_112 [i_19] [i_19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_106 [i_19] [i_18] [i_18] [i_18])))))));
        }
        /* vectorizable */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
        {
            arr_115 [i_27] [i_27] = ((/* implicit */_Bool) ((var_9) + ((~(var_18)))));
            var_45 = ((/* implicit */unsigned int) var_6);
            arr_116 [i_27] [i_27] [i_27] = ((/* implicit */_Bool) arr_100 [i_27]);
            var_46 |= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            for (unsigned char i_28 = 0; i_28 < 23; i_28 += 4) 
            {
                var_47 = ((/* implicit */short) (+(((/* implicit */int) arr_77 [i_18] [i_28]))));
                var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) (((~(((/* implicit */int) arr_113 [i_18] [i_18] [i_28])))) % (((/* implicit */int) var_17)))))));
            }
        }
        for (unsigned short i_29 = 0; i_29 < 23; i_29 += 2) 
        {
            arr_124 [i_18] [i_29] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >> (((((/* implicit */int) var_8)) - (17110)))))) * ((+(var_16)))));
            arr_125 [i_29] [i_18] [i_18] = ((/* implicit */unsigned char) arr_118 [i_18] [i_29] [i_29]);
            arr_126 [i_18] = ((/* implicit */short) (-((~(arr_105 [i_18] [i_29] [i_29] [i_29])))));
        }
    }
    for (signed char i_30 = 0; i_30 < 21; i_30 += 2) 
    {
        var_49 = (-((-((+(((/* implicit */int) arr_103 [i_30] [i_30] [i_30])))))));
        arr_130 [i_30] [i_30] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_129 [i_30]))))));
        arr_131 [i_30] [i_30] = ((/* implicit */long long int) arr_91 [i_30] [i_30] [i_30] [i_30]);
        arr_132 [i_30] = ((/* implicit */unsigned int) arr_77 [i_30] [i_30]);
    }
    for (long long int i_31 = 0; i_31 < 12; i_31 += 2) 
    {
        var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1)))))));
        var_51 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_62 [i_31] [i_31] [i_31] [i_31])))))));
    }
    var_52 = ((/* implicit */short) ((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_32 = 0; i_32 < 17; i_32 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_33 = 0; i_33 < 17; i_33 += 2) 
        {
            arr_142 [i_32] [i_33] [i_33] = ((/* implicit */unsigned int) arr_7 [i_33]);
            var_53 *= ((/* implicit */unsigned int) var_12);
        }
        for (unsigned short i_34 = 2; i_34 < 13; i_34 += 2) 
        {
            var_54 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_32 [i_32] [i_34] [i_32] [i_34]))))));
            arr_146 [i_32] [i_34] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_40 [i_32] [i_32] [i_32] [i_34] [i_34 - 1] [i_34 - 2]))))));
            /* LoopSeq 3 */
            for (unsigned short i_35 = 4; i_35 < 14; i_35 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_36 = 0; i_36 < 17; i_36 += 1) 
                {
                    arr_151 [i_35] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                    var_55 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
                    var_56 = ((/* implicit */unsigned short) (-(var_18)));
                }
                var_57 &= ((/* implicit */_Bool) var_2);
                arr_152 [i_32] [i_34] [i_35 + 3] [i_35] = ((((/* implicit */int) arr_76 [i_35 + 3])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_100 [i_34]))))));
            }
            for (long long int i_37 = 4; i_37 < 13; i_37 += 2) 
            {
                arr_156 [i_37] = ((/* implicit */unsigned char) (~((+(var_10)))));
                arr_157 [i_32] [i_34] [i_37] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))));
            }
            for (short i_38 = 2; i_38 < 15; i_38 += 1) 
            {
                arr_160 [i_32] [i_38] [i_38] [i_38] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_55 [i_32]))))));
                arr_161 [i_32] [i_34] [i_38] [i_38] = ((/* implicit */long long int) arr_92 [i_34]);
            }
            var_58 = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
            var_59 = ((/* implicit */unsigned short) max((var_59), (((/* implicit */unsigned short) (-(((var_10) - (((/* implicit */long long int) var_9)))))))));
        }
        arr_162 [i_32] = ((/* implicit */unsigned long long int) var_0);
        arr_163 [i_32] = ((/* implicit */unsigned int) arr_22 [i_32] [i_32] [i_32] [i_32] [i_32]);
    }
}
