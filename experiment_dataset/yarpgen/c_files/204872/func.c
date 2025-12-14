/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204872
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
    var_11 = ((/* implicit */unsigned char) 14318036723478650879ULL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_8 [i_0 - 3] [i_0 - 2] [i_2] [i_0])) - (20)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) var_9)) >> (((((((/* implicit */int) arr_8 [i_0 - 3] [i_0 - 2] [i_2] [i_0])) - (20))) - (73))))));
                    var_13 ^= ((/* implicit */int) ((unsigned char) (signed char)-110));
                    var_14 = ((/* implicit */unsigned long long int) (+((-(arr_7 [i_0] [i_0 - 3] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) (short)28730)) : (((((/* implicit */int) arr_10 [i_3])) ^ (((/* implicit */int) arr_10 [i_3]))))))), (arr_9 [i_3])));
        var_16 = ((/* implicit */unsigned int) arr_10 [i_3]);
        arr_13 [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_11 [i_3]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (arr_12 [i_3])))) : (var_1))), (((/* implicit */unsigned int) (_Bool)0))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (unsigned int i_6 = 2; i_6 < 18; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    {
                        arr_24 [i_4] [i_5] [i_6 - 1] [i_7] = ((/* implicit */unsigned int) arr_9 [i_7]);
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            arr_27 [i_4] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_19 [i_6 - 2] [i_6 + 1] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_19 [i_6 + 1] [i_6] [(short)7] [i_6 - 1]))));
                            arr_28 [i_4] [i_4] [i_5] [i_6 - 1] [i_7] [i_8] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                        }
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_0)) ? (arr_16 [i_4] [i_4]) : (((/* implicit */unsigned long long int) 4294967295U))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            var_18 = ((((/* implicit */_Bool) ((signed char) (+(arr_16 [i_10] [i_9]))))) ? (((/* implicit */int) ((_Bool) ((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (arr_18 [i_9] [i_10])))) == (((/* implicit */int) var_0))))));
            arr_33 [i_9] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_9 [i_9])))))))));
            var_19 = ((/* implicit */long long int) var_4);
            arr_34 [i_9] = ((/* implicit */int) (+(min((arr_9 [i_9]), (((/* implicit */long long int) ((unsigned int) arr_31 [i_9] [i_10])))))));
            arr_35 [i_9] [i_9] [i_10] = ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */signed char) ((arr_14 [i_9] [i_10]) >= (arr_14 [i_10] [i_9]))))));
        }
        /* vectorizable */
        for (unsigned int i_11 = 2; i_11 < 16; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                for (unsigned short i_13 = 1; i_13 < 18; i_13 += 4) 
                {
                    {
                        arr_45 [i_9] [i_11 + 3] [i_9] [(_Bool)1] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_9] [i_9]))) - (arr_9 [i_13])))));
                        arr_46 [i_9] [i_11] [i_9] [i_13] = ((/* implicit */signed char) 1674060277U);
                        var_20 |= ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */unsigned long long int) var_2)) : (12399205007743329151ULL)));
                        var_21 = arr_22 [i_13] [i_13 - 1] [i_13 - 1] [i_11 + 1] [i_11] [i_11];
                        /* LoopSeq 3 */
                        for (long long int i_14 = 2; i_14 < 18; i_14 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) arr_9 [i_9]);
                            var_23 = ((/* implicit */int) ((((/* implicit */int) arr_31 [i_9] [i_9])) == (((/* implicit */int) arr_49 [i_11] [i_11 + 2] [i_11 + 1] [i_14 - 2] [i_14]))));
                            arr_50 [i_9] [i_9] [i_12] [i_9] = ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_14 [i_11 - 1] [i_13 + 1])));
                            var_24 ^= ((/* implicit */short) ((long long int) var_8));
                            arr_51 [i_9] [i_11 - 2] [i_14] [i_13 + 1] [i_14] |= ((/* implicit */unsigned int) arr_20 [i_11 + 1] [i_11 + 3] [i_11 + 2]);
                        }
                        for (long long int i_15 = 2; i_15 < 18; i_15 += 4) /* same iter space */
                        {
                            arr_55 [i_15 - 2] [i_9] [i_11] [i_11] [i_11 - 1] [i_9] [i_9] = ((/* implicit */long long int) arr_38 [i_15] [i_12] [i_11]);
                            var_25 = ((/* implicit */unsigned short) 1674060277U);
                        }
                        for (unsigned int i_16 = 3; i_16 < 17; i_16 += 3) 
                        {
                            var_26 = ((signed char) arr_29 [i_9] [i_9]);
                            var_27 = ((/* implicit */unsigned long long int) ((int) arr_39 [i_9] [i_11 + 1]));
                            var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9] [i_11 - 1]))))) >> (((var_7) - (3503758216U)))));
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (-(((/* implicit */int) arr_39 [i_11] [i_11])))))));
                        }
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned short) ((arr_57 [i_11 - 1] [i_11 + 2] [i_11 - 1] [i_11 + 2]) | (((/* implicit */int) arr_42 [i_11 - 1] [i_9] [i_11 - 1] [i_11] [i_11 - 2] [10]))));
            arr_59 [i_11] |= ((/* implicit */unsigned char) (~(((arr_58 [i_9]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_9] [i_9] [i_9] [i_9] [i_11 + 1] [i_11 + 3])) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_41 [i_9])));
            /* LoopSeq 1 */
            for (long long int i_17 = 0; i_17 < 19; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (short i_18 = 1; i_18 < 17; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                    {
                        {
                            arr_68 [i_9] [i_11 + 2] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (((unsigned int) var_9))));
                            var_32 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (arr_67 [i_9] [i_11] [i_17] [i_18] [i_19] [i_9]))));
                            arr_69 [i_9] [i_9] [i_17] [i_17] [i_19] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                        }
                    } 
                } 
                arr_70 [i_17] [i_9] [i_9] = (i_9 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_9])) << (((arr_25 [i_17]) - (2756890312U)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_37 [i_9])) + (2147483647))) << (((((arr_25 [i_17]) - (2756890312U))) - (22U))))));
            }
        }
        for (unsigned char i_20 = 0; i_20 < 19; i_20 += 1) 
        {
            arr_74 [i_9] [i_20] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (min((var_5), (((/* implicit */long long int) arr_38 [(_Bool)1] [i_9] [i_20])))) : (max((((/* implicit */long long int) var_9)), (arr_21 [i_20])))))) + (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_60 [i_9] [i_9] [i_9] [i_20]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_36 [i_9])) % (arr_9 [i_9]))))))));
            var_33 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)127)), (min((((/* implicit */unsigned int) arr_57 [i_9] [i_9] [i_20] [i_20])), (4294967284U)))));
            var_34 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_3)) ? (arr_29 [i_9] [i_20]) : (arr_29 [i_9] [i_20]))));
            var_35 = ((/* implicit */unsigned short) arr_58 [i_9]);
        }
        var_36 = ((/* implicit */unsigned short) var_8);
        var_37 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_61 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) var_6)) : (4195106615756139303ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_61 [i_9] [i_9])) + (((/* implicit */int) arr_15 [(_Bool)1] [i_9])))))));
        arr_75 [i_9] [(_Bool)0] |= ((/* implicit */long long int) ((((arr_73 [2LL] [i_9] [2LL]) >= (arr_73 [14LL] [i_9] [i_9]))) ? (((/* implicit */unsigned int) ((int) var_2))) : (max((arr_65 [i_9] [i_9] [i_9] [i_9] [i_9]), (arr_65 [i_9] [i_9] [i_9] [i_9] [(_Bool)1])))));
        arr_76 [i_9] [i_9] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (var_5)))), (((((/* implicit */_Bool) var_8)) ? (4222234460U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (arr_36 [i_9])));
    }
    /* vectorizable */
    for (unsigned short i_21 = 3; i_21 < 17; i_21 += 2) 
    {
        var_38 = ((((/* implicit */int) arr_79 [i_21 + 1])) - (((/* implicit */int) arr_79 [i_21 + 4])));
        /* LoopSeq 2 */
        for (unsigned int i_22 = 0; i_22 < 21; i_22 += 4) /* same iter space */
        {
            var_39 = ((/* implicit */_Bool) ((var_9) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 4294967281U)) : (var_10))) : (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
            arr_82 [i_22] [i_22] = ((/* implicit */unsigned short) var_2);
            arr_83 [i_21 - 1] [i_22] [i_21 - 1] = ((/* implicit */signed char) var_3);
            /* LoopNest 2 */
            for (unsigned short i_23 = 1; i_23 < 20; i_23 += 3) 
            {
                for (short i_24 = 0; i_24 < 21; i_24 += 3) 
                {
                    {
                        arr_90 [i_24] [i_23] [i_23] [i_23] [i_21 + 3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_77 [i_21 - 3]))));
                        /* LoopSeq 3 */
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            arr_93 [i_23] [i_25] [i_24] [i_24] [i_23] [i_22] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) | (((/* implicit */int) arr_79 [i_24]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (arr_78 [i_21 + 2] [i_21 - 2])));
                            arr_94 [i_21] [i_22] [i_22] [i_23] [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_80 [i_23 + 1] [i_23])) || (((/* implicit */_Bool) arr_80 [i_24] [i_24]))));
                            arr_95 [i_21] [i_22] [i_23 + 1] [i_23] [i_24] [i_25] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((var_10) - (3999219819413943797LL)))));
                            var_40 -= ((/* implicit */unsigned long long int) (-(arr_88 [i_25])));
                        }
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            arr_98 [i_23 + 1] [i_23] = ((/* implicit */unsigned int) ((arr_91 [i_21] [i_21 - 2] [i_23 - 1] [i_23 - 1] [(signed char)7]) % (((/* implicit */long long int) var_1))));
                            var_41 |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_97 [i_21] [i_21 + 3] [i_22] [i_21] [i_23 - 1] [i_23 - 1]))));
                        }
                        for (unsigned char i_27 = 0; i_27 < 21; i_27 += 4) 
                        {
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) == (var_10)));
                            var_43 = ((arr_92 [i_27] [i_23 - 1] [i_27] [i_23] [i_23 - 1] [i_23 - 1]) >> (((arr_92 [i_27] [i_27] [i_27] [i_27] [i_27] [i_23 - 1]) - (2498619129190265392LL))));
                            var_44 = ((/* implicit */_Bool) ((var_5) ^ ((-(var_10)))));
                            var_45 = ((/* implicit */unsigned char) var_10);
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_28 = 0; i_28 < 21; i_28 += 4) /* same iter space */
        {
            var_46 = ((/* implicit */int) var_7);
            var_47 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)255)) : (arr_85 [i_21 - 2] [i_28]));
            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26112)) ? (((/* implicit */int) arr_80 [i_21 + 3] [i_21 + 2])) : (var_2)));
            arr_103 [i_21] [i_21 + 2] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_84 [i_21 + 4] [i_28] [i_28])) && (((/* implicit */_Bool) arr_89 [i_21 + 2] [i_21 + 1]))));
        }
        arr_104 [(_Bool)0] = ((/* implicit */long long int) (+(((/* implicit */int) (short)26112))));
    }
}
