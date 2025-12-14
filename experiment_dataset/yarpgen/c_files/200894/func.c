/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200894
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
    var_16 = ((/* implicit */int) var_13);
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((int) var_14)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_8 [i_0] = ((((/* implicit */_Bool) -6849161047269716760LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_15)));
            var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) (signed char)51)))));
        }
        arr_9 [i_0] = ((/* implicit */int) ((long long int) arr_3 [i_0] [i_0]));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) var_4))))))));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) ((long long int) arr_12 [i_2] [i_2]));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            arr_19 [i_2] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))))))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6331)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (_Bool)0))));
            arr_20 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)64526))));
        }
        for (unsigned char i_4 = 2; i_4 < 7; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 8; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) arr_24 [i_4 + 2] [i_5 - 2] [i_5] [i_6 + 1]);
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)53))) / (-6849161047269716771LL)));
                    }
                } 
            } 
            arr_29 [i_2] [(signed char)0] = ((/* implicit */unsigned char) (~(((int) var_1))));
            var_23 = ((/* implicit */long long int) ((arr_1 [i_4 - 2]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84)))));
            arr_30 [i_2] = ((/* implicit */unsigned char) (((_Bool)0) ? (6849161047269716762LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            arr_31 [i_4] = ((/* implicit */signed char) ((long long int) 6849161047269716794LL));
        }
        for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            arr_35 [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_7] [i_7]))) : (3515453299720271553LL)));
            arr_36 [i_2] [i_7] [i_2] = ((/* implicit */unsigned char) (((!((_Bool)1))) ? (-6849161047269716743LL) : (-6849161047269716774LL)));
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_42 [i_2] [i_7] [i_7] [(signed char)1] [i_8] [i_9] = ((/* implicit */int) (_Bool)1);
                    var_24 -= ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_7]))) : (-6113992044838620188LL));
                    var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_7))));
                }
                /* LoopSeq 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_26 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_27 ^= ((/* implicit */_Bool) ((var_13) & (((/* implicit */unsigned long long int) var_11))));
                    var_28 = ((/* implicit */signed char) var_1);
                    var_29 = ((/* implicit */_Bool) (~(arr_7 [i_10])));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_7] [i_10]))) : (var_13)));
                }
                for (signed char i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    var_31 *= ((/* implicit */unsigned char) arr_47 [i_2] [i_7] [i_8] [i_11]);
                    arr_48 [i_2] [i_2] [i_8] [(short)3] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_15 [i_7] [i_8] [i_11])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_18 [i_2] [i_7] [i_8]))))));
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_7] [i_8])) || ((_Bool)1))))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((unsigned int) var_3));
                        arr_53 [i_2] [i_2] [i_7] [i_8] [i_12] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4769304720656637871ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 18446744073709551615ULL)))) : (arr_47 [i_7] [(unsigned short)1] [i_12] [i_13])));
                        var_34 ^= ((/* implicit */_Bool) (+(((((-1104402983) + (2147483647))) << (((var_9) - (1602957239)))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        arr_56 [i_12] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_57 [i_7] [i_12] = ((/* implicit */unsigned int) arr_52 [i_2]);
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        var_35 = ((((/* implicit */_Bool) 36024398972452864ULL)) ? (-6849161047269716765LL) : (6849161047269716759LL));
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)107)) >> (((var_13) - (15975850725386108568ULL)))))) ? (((/* implicit */unsigned long long int) arr_49 [i_2] [i_8] [i_12] [i_15])) : (10644296340934863545ULL))))));
                        var_37 |= ((/* implicit */signed char) (+(((arr_50 [i_7] [i_7] [i_12]) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    }
                    arr_60 [9U] [i_7] [i_8] [i_12] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_54 [i_2] [i_7] [i_2] [(unsigned char)3] [i_12] [i_12] [i_12]))));
                }
                var_38 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) (-(var_1)))) : (var_13)));
                var_39 += ((/* implicit */unsigned short) (signed char)90);
            }
            arr_61 [i_2] [i_7] [i_2] |= ((/* implicit */signed char) ((((/* implicit */int) arr_23 [(unsigned short)4] [i_2] [i_7])) / (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) (signed char)67))))));
            arr_62 [i_2] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_7])) && (((/* implicit */_Bool) var_15)))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 4; i_16 < 9; i_16 += 3) 
        {
            for (signed char i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                {
                    arr_67 [i_2] [i_16] [i_17] [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_2] [(_Bool)1]))));
                    arr_68 [i_2] [8U] [i_17] |= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_7)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 2) /* same iter space */
    {
        arr_71 [i_18] = ((/* implicit */int) max((((((/* implicit */long long int) (-(-1104402970)))) <= (((((/* implicit */_Bool) arr_6 [i_18] [i_18] [i_18])) ? (((/* implicit */long long int) arr_32 [i_18] [i_18])) : (-6849161047269716764LL))))), (((269543290) == (((/* implicit */int) arr_2 [i_18]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_19 = 0; i_19 < 10; i_19 += 2) 
        {
            var_40 = ((/* implicit */unsigned long long int) (+(var_9)));
            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (~(((/* implicit */int) arr_12 [i_18] [i_19])))))));
        }
    }
    for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 2) /* same iter space */
    {
        arr_77 [i_20] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)511)) >= (((/* implicit */int) (_Bool)1))))))))));
        /* LoopSeq 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_22 = 0; i_22 < 10; i_22 += 1) 
            {
                arr_83 [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_76 [i_22]))));
                arr_84 [i_21] = ((/* implicit */unsigned int) ((signed char) 9223372036854775793LL));
                arr_85 [i_20] [i_21] [i_21] = ((/* implicit */unsigned char) var_12);
                var_42 = ((/* implicit */long long int) ((_Bool) (signed char)-66));
            }
            arr_86 [4LL] [i_20] [i_21] |= ((/* implicit */unsigned long long int) arr_17 [3LL] [i_20] [i_21]);
        }
        for (unsigned short i_23 = 0; i_23 < 10; i_23 += 3) 
        {
            var_43 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) max((arr_11 [i_23]), ((unsigned short)23239)))))));
            arr_91 [i_23] = ((/* implicit */signed char) (-(((-8939816086848648103LL) | (((/* implicit */long long int) 3221225472U))))));
            /* LoopSeq 3 */
            for (unsigned int i_24 = 1; i_24 < 7; i_24 += 1) 
            {
                arr_94 [i_23] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) == ((~(((/* implicit */int) arr_12 [i_24 + 1] [i_24]))))));
                arr_95 [i_23] = (-((~(-4374401245730110304LL))));
            }
            for (unsigned int i_25 = 0; i_25 < 10; i_25 += 4) 
            {
                var_44 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_80 [i_20] [i_23] [i_25]))))), (((int) ((unsigned int) var_7)))));
                var_45 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))), (((unsigned int) ((arr_50 [i_20] [i_23] [3LL]) + (((/* implicit */long long int) ((/* implicit */int) arr_78 [i_23] [i_23]))))))));
            }
            for (int i_26 = 0; i_26 < 10; i_26 += 4) 
            {
                var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1104403001)) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_14))));
                var_47 += ((/* implicit */unsigned long long int) (+(min((arr_97 [i_20] [i_20]), (arr_97 [(signed char)7] [i_26])))));
                var_48 = ((/* implicit */unsigned int) (_Bool)1);
                arr_102 [i_23] [i_23] = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) arr_6 [i_20] [i_23] [i_23])));
            }
            var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) (~((~((((_Bool)1) ? (((/* implicit */int) arr_87 [i_20])) : (((/* implicit */int) var_8)))))))))));
            arr_103 [i_23] [i_23] [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_79 [i_23]), (arr_79 [i_23])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_79 [i_23]))) - (-16LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_79 [i_20])))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_27 = 0; i_27 < 10; i_27 += 4) 
        {
            arr_107 [i_20] [i_27] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (3199420022936969704LL)));
            arr_108 [3] [i_27] |= ((((((/* implicit */_Bool) var_6)) && (arr_16 [i_20] [i_27] [i_27]))) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) var_13))) > ((+(-1104402983)))))) : (min(((~(((/* implicit */int) arr_74 [8U] [i_27])))), (((/* implicit */int) (signed char)105)))));
        }
    }
}
