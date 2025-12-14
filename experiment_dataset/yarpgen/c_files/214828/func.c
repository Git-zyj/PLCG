/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214828
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 24; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 -= (+((~(((/* implicit */int) arr_9 [16LL] [i_1 - 1] [i_2 - 1] [i_3] [i_3])))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-((+(var_11))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 4; i_4 < 24; i_4 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */short) (~((~(6409221283563518858ULL)))));
        /* LoopSeq 1 */
        for (int i_5 = 2; i_5 < 24; i_5 += 3) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (+((-(6409221283563518873ULL))))))));
            /* LoopSeq 3 */
            for (unsigned short i_6 = 1; i_6 < 24; i_6 += 3) 
            {
                arr_19 [i_6] [i_5] [i_4] [i_4 - 1] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_9 [(unsigned short)18] [i_4] [i_5] [i_5 - 2] [(unsigned short)23]))))));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_15 [i_4 - 2] [i_5] [i_6 - 1])))))))));
                    arr_22 [i_4] [i_7] [2U] [i_6] [i_7] = ((/* implicit */long long int) (~((+(12037522790146032742ULL)))));
                    arr_23 [i_7] [i_7] = ((/* implicit */int) (+((~(arr_7 [i_4] [i_5] [i_6] [i_7])))));
                }
                arr_24 [i_4 - 2] [i_4] = ((/* implicit */unsigned char) (+((~(arr_13 [16])))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_28 [i_4] [i_5] [i_8] [i_5] = ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned char)112))))));
                arr_29 [i_4 + 1] [i_4 + 1] [i_8] [i_8] = ((/* implicit */int) (+((+(12037522790146032742ULL)))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_10 = 2; i_10 < 24; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_4]))))))))));
                        arr_40 [i_4] [i_5 - 2] [i_9] [i_10] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_12))))));
                        arr_41 [i_11] [i_5] = (!(((/* implicit */_Bool) (-(6409221283563518884ULL)))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_17 [(_Bool)1] [(_Bool)1] [(unsigned short)13]))))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (-((-(12037522790146032742ULL))))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_28 = (+((~(var_7))));
                        arr_49 [i_4] [i_5 + 1] [i_9] [i_10] [i_13] [i_13] = ((/* implicit */signed char) (+((~(8604501850629737985LL)))));
                        var_29 ^= ((/* implicit */short) (~((+(4294967295U)))));
                        arr_50 [i_4] [i_5 + 1] [i_9] [i_10] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(1652348136))))));
                        var_30 = ((/* implicit */unsigned short) (+((-(12037522790146032742ULL)))));
                    }
                    for (int i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        arr_54 [i_4] [i_5] [i_9] [i_10 + 1] [i_9] &= ((/* implicit */unsigned long long int) (+((~(arr_34 [(_Bool)1])))));
                        var_31 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_5))))));
                    }
                    var_32 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_11 [i_4 - 4]))))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    var_33 = ((/* implicit */_Bool) (-((+(8604501850629737988LL)))));
                    arr_57 [i_15] [i_15] [i_9] [17ULL] [i_5] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -948121810)))))));
                    /* LoopSeq 2 */
                    for (signed char i_16 = 1; i_16 < 23; i_16 += 3) /* same iter space */
                    {
                        arr_60 [i_4] [i_5] [11] [i_15] [i_4] [11LL] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_4] [i_5] [i_9] [i_15] [14U] [i_9] [i_9])))))));
                        arr_61 [i_5] [i_16] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_8))))));
                        arr_62 [i_4] [i_4] [i_4] [i_15] [i_16] = ((/* implicit */long long int) (-((~(12037522790146032742ULL)))));
                        arr_63 [(_Bool)1] [i_15] [i_9] [i_9] [i_5 - 1] [i_4 - 3] [i_4] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_48 [13LL] [i_4]))))));
                    }
                    for (signed char i_17 = 1; i_17 < 23; i_17 += 3) /* same iter space */
                    {
                        arr_66 [(_Bool)1] [(_Bool)1] &= ((/* implicit */_Bool) (~((~(((/* implicit */int) var_16))))));
                        var_34 = ((/* implicit */unsigned short) (+((+(var_10)))));
                        arr_67 [i_4] [i_17] [i_4] [i_4 - 3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_43 [i_5] [i_9] [i_15] [i_9] [i_5] [i_4]))))));
                        arr_68 [i_17] [i_15] [i_5 + 1] [i_17] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_64 [i_17]))))));
                        arr_69 [i_17] = (-((+(((/* implicit */int) (short)28287)))));
                    }
                    arr_70 [i_4] [i_5] [i_9] [i_4] = ((/* implicit */unsigned long long int) (-((+(arr_13 [i_4 + 1])))));
                    var_35 *= (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)118))))));
                }
                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (-((-(arr_3 [i_4]))))))));
                var_37 = ((/* implicit */short) (!((!(var_4)))));
                arr_71 [i_9] [i_4 - 1] [i_4 - 1] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_7))))));
            }
            var_38 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
            var_39 ^= ((/* implicit */unsigned char) (+((~(12037522790146032732ULL)))));
        }
        var_40 -= ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_25 [i_4 + 1] [i_4] [i_4 - 1]))))));
    }
    var_41 = ((/* implicit */unsigned int) (~((+((-(((/* implicit */int) var_17))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_18 = 0; i_18 < 25; i_18 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_19 = 4; i_19 < 23; i_19 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_21 = 0; i_21 < 25; i_21 += 3) /* same iter space */
                {
                    arr_82 [i_18] [i_21] [i_18] = ((/* implicit */long long int) (-((+(6409221283563518875ULL)))));
                    arr_83 [i_21] [i_19 - 3] [i_19 - 3] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_18] [i_18] [i_18] [i_18] [i_18])))))));
                }
                for (long long int i_22 = 0; i_22 < 25; i_22 += 3) /* same iter space */
                {
                    arr_87 [i_22] [i_20] [i_19] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) 6409221283563518858ULL))));
                    arr_88 [i_18] [i_19] = (-((+(((/* implicit */int) arr_46 [i_18] [i_19 + 1] [i_20] [i_19 + 1])))));
                }
                /* LoopSeq 1 */
                for (long long int i_23 = 1; i_23 < 24; i_23 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_24 = 0; i_24 < 25; i_24 += 3) 
                    {
                        var_42 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_81 [i_23] [i_23] [i_23] [i_23] [i_19] [i_18]))))));
                        arr_94 [i_18] [i_19] [8U] |= ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_1))))));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 25; i_25 += 3) 
                    {
                        var_43 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_0))))));
                        arr_99 [i_18] [i_18] [i_18] [i_23] [i_18] [i_18] = ((/* implicit */_Bool) (-((-(2147483647)))));
                        arr_100 [i_25] [i_23] [(signed char)8] [i_19] [(signed char)8] [i_18] [i_18] |= ((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)-109))))));
                        arr_101 [i_23] [i_19 - 4] [i_23] [i_23] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_3))))));
                    }
                    arr_102 [i_23 - 1] [i_20] [i_23] [i_23] [i_18] [i_18] = ((/* implicit */short) (-((+(6409221283563518873ULL)))));
                    var_44 -= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 6409221283563518911ULL)))))));
                    var_45 = ((/* implicit */short) (!((!(((/* implicit */_Bool) 4294967295U))))));
                }
            }
            for (long long int i_26 = 1; i_26 < 24; i_26 += 3) 
            {
                var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) (!(((/* implicit */_Bool) (~(-8604501850629737989LL)))))))));
                var_47 = ((/* implicit */long long int) (-((~(var_2)))));
                arr_105 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) (-((+(var_2)))));
            }
            for (short i_27 = 2; i_27 < 23; i_27 += 3) 
            {
                arr_108 [i_27] [i_19] [i_18] [i_18] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_12))))));
                var_48 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 6409221283563518884ULL))))));
                var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))))));
                /* LoopSeq 3 */
                for (signed char i_28 = 3; i_28 < 24; i_28 += 3) 
                {
                    arr_111 [i_28] = (-((-(((/* implicit */int) (signed char)-108)))));
                    arr_112 [i_18] [i_19 + 2] [i_28] [i_28] = ((/* implicit */short) (+((+(232699642)))));
                }
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
                {
                    arr_115 [i_29] [i_18] [i_18] [i_18] = (-((-(((/* implicit */int) arr_106 [i_18] [i_19])))));
                    var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) (+((+(((/* implicit */int) var_8)))))))));
                    var_51 = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_27 [i_18] [i_18]))))));
                }
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
                {
                    arr_120 [i_18] [i_19 - 4] [i_27] [i_18] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_18] [i_18] [i_18])))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_31 = 0; i_31 < 25; i_31 += 3) 
                    {
                        arr_124 [i_18] [i_18] [i_18] [7] [i_18] [8LL] [i_18] = (!((!(((/* implicit */_Bool) -948121823)))));
                        arr_125 [(signed char)21] [(signed char)21] [(signed char)21] [(signed char)21] [(signed char)21] = (+((~(((/* implicit */int) arr_97 [i_18] [2] [i_18] [i_30] [i_31])))));
                    }
                    arr_126 [14ULL] [i_19 + 1] [i_27 - 1] = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_20 [i_18] [0ULL]))))));
                }
            }
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                var_52 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)15)))))));
                arr_129 [i_32] = ((/* implicit */unsigned short) (+((-(arr_89 [(unsigned short)22])))));
                var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) (+(((/* implicit */int) (!(var_3)))))))));
            }
            arr_130 [i_18] = (-((~(((/* implicit */int) arr_58 [i_18] [i_18] [i_18] [i_18] [i_19 - 4] [i_19])))));
            var_54 = ((/* implicit */unsigned long long int) (-((+(-361029236455924963LL)))));
            arr_131 [i_19] [i_18] [i_18] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_93 [i_18] [i_18] [(_Bool)1] [(_Bool)1] [i_19]))))));
        }
        for (unsigned long long int i_33 = 2; i_33 < 21; i_33 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
            {
                arr_136 [i_18] [i_33] [i_34 - 1] [i_33] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
                arr_137 [i_18] [i_33] [(unsigned char)5] [i_33 + 3] = (+((+(536870911LL))));
                /* LoopSeq 2 */
                for (unsigned short i_35 = 0; i_35 < 25; i_35 += 3) /* same iter space */
                {
                    arr_140 [i_18] [i_18] [5ULL] [i_18] [i_35] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))));
                    arr_141 [i_18] [i_18] [i_35] [i_35] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_25 [i_18] [i_33] [i_34]))))));
                    arr_142 [i_18] [i_18] [i_34 - 1] [i_35] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1186732350)))))));
                    var_55 -= ((/* implicit */short) (+((~(((/* implicit */int) var_8))))));
                }
                for (unsigned short i_36 = 0; i_36 < 25; i_36 += 3) /* same iter space */
                {
                    var_56 ^= ((/* implicit */_Bool) (+((-(((/* implicit */int) var_13))))));
                    arr_146 [i_18] [i_18] [i_36] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                }
            }
            for (unsigned char i_37 = 0; i_37 < 25; i_37 += 3) 
            {
                arr_149 [i_18] [i_33 + 3] [(_Bool)1] [i_18] = ((/* implicit */signed char) (~((-(((/* implicit */int) arr_35 [i_18]))))));
                var_57 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_1))))));
                var_58 = (-((-(((/* implicit */int) (_Bool)1)))));
            }
            for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                {
                    arr_157 [i_39] [i_39] [i_38] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_18])))))));
                    arr_158 [i_18] [i_33] [i_39] = (-((-(((/* implicit */int) (_Bool)1)))));
                    arr_159 [i_39] [i_33] [i_38] [i_39] = ((/* implicit */unsigned short) (~((+(-8604501850629737992LL)))));
                }
                /* LoopSeq 1 */
                for (short i_40 = 1; i_40 < 24; i_40 += 3) 
                {
                    arr_163 [i_18] [i_40] [i_38] = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_56 [i_18] [i_18] [(signed char)22] [i_38] [i_38] [i_40]))))));
                    arr_164 [i_18] [i_33] [i_33] [i_33] [i_40] [15U] = ((/* implicit */int) (~((+(arr_117 [i_18] [i_33] [8LL] [i_40 + 1])))));
                    var_59 = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_14 [i_18] [i_33] [i_38]))))));
                    var_60 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)14935)))))));
                }
                arr_165 [i_18] [i_33] [i_38] = ((/* implicit */unsigned char) (+((-(var_10)))));
                arr_166 [(_Bool)1] [i_33] [i_38] = ((/* implicit */signed char) (+((+(arr_33 [22LL] [i_38])))));
            }
            var_61 ^= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_144 [i_33 + 4] [i_18] [i_18] [i_18])))))))));
        }
        var_63 = ((/* implicit */short) (~((+(6638371708574740009ULL)))));
    }
}
