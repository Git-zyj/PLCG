/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192956
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) max((var_11), (max((((/* implicit */signed char) arr_1 [i_1])), (max((arr_4 [i_1] [(_Bool)1] [i_0 + 2]), (arr_4 [i_0 + 2] [4LL] [i_0 + 1])))))));
                arr_5 [i_0 + 1] [i_1] = ((/* implicit */long long int) min((((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) (unsigned short)52945)) : (((/* implicit */int) ((_Bool) (signed char)81)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_12 ^= ((/* implicit */unsigned short) arr_7 [i_0 + 2] [i_2] [i_2] [i_3]);
                            var_13 = ((/* implicit */_Bool) arr_3 [(unsigned char)0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((min(((signed char)81), (((/* implicit */signed char) var_8)))), (var_10))))));
    var_15 = ((/* implicit */int) (+(var_0)));
    /* LoopSeq 4 */
    for (long long int i_4 = 2; i_4 < 17; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            arr_16 [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_4] [i_4] [i_4]), ((signed char)81)))) ? (((/* implicit */int) arr_10 [i_4 - 2] [i_5] [i_5] [i_5] [(signed char)0])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (signed char)-82))))))));
            var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)60865), (((/* implicit */unsigned short) arr_8 [i_4 + 2] [i_5] [i_5]))))) | ((+(((/* implicit */int) (signed char)82))))));
            arr_17 [5U] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_14 [i_4] [i_4 + 3]) % (arr_14 [i_4 + 1] [i_4 - 1])))) ? (max((arr_13 [i_4 - 1] [15]), (((/* implicit */int) (unsigned short)31152)))) : (((/* implicit */int) ((((/* implicit */int) max(((unsigned short)65523), (((/* implicit */unsigned short) (_Bool)1))))) == (((arr_10 [(unsigned char)2] [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [4])))))))));
        }
        arr_18 [(signed char)10] = ((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4]);
    }
    /* vectorizable */
    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 10; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                {
                    arr_28 [(unsigned char)8] [i_6] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_6 [(signed char)20] [i_6] [i_6] [i_8]))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_24 [i_6 - 2])));
                    arr_29 [i_6 - 2] [i_6] = ((/* implicit */long long int) ((arr_1 [i_6 - 1]) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (signed char)-82))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)34383)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_6 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [8] [8] [(_Bool)1] [i_6] [i_8]))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_14 [i_8] [i_7])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) ((unsigned char) arr_11 [i_6 + 1]));
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_41 [i_6] [9] [i_10] [i_6] [(signed char)3] = arr_35 [i_6 - 1] [i_9] [i_9] [(signed char)8] [1];
                            var_19 ^= ((((/* implicit */int) (!(var_8)))) % (((/* implicit */int) arr_8 [i_11 - 1] [i_10] [(_Bool)1])));
                            arr_42 [i_6 + 1] [i_6] [2U] [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned short)16834))));
                        }
                        for (unsigned int i_13 = 2; i_13 < 11; i_13 += 3) 
                        {
                            var_20 ^= ((/* implicit */_Bool) arr_14 [i_9] [i_13]);
                            arr_46 [i_6] [i_6] [i_10] [i_11] [(unsigned short)9] = ((/* implicit */signed char) ((arr_25 [i_6 + 1] [i_6 - 1] [i_6]) ? (((/* implicit */int) arr_25 [i_6 + 1] [(unsigned short)7] [(unsigned short)7])) : (((/* implicit */int) arr_34 [i_11 - 1] [i_10] [i_6]))));
                        }
                        var_21 = arr_7 [(_Bool)1] [i_6] [i_11] [i_11 - 1];
                    }
                    for (int i_14 = 1; i_14 < 11; i_14 += 2) 
                    {
                        var_22 = ((arr_7 [i_6 - 2] [i_6] [i_10] [i_14 - 1]) ? (((/* implicit */int) arr_7 [i_6 - 1] [i_6] [5LL] [i_14 - 1])) : (((/* implicit */int) arr_7 [i_6] [i_6] [i_10] [i_14])));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_6] [i_9])) / (((/* implicit */int) ((_Bool) arr_34 [i_6] [i_10] [i_14])))));
                    }
                    for (int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        arr_53 [i_9] [(unsigned short)0] [i_6] [(unsigned short)9] = ((/* implicit */unsigned int) ((int) (_Bool)1));
                        arr_54 [i_15] [i_6] [i_6] [i_6 + 1] = ((/* implicit */unsigned int) ((_Bool) arr_23 [i_6] [i_6]));
                        arr_55 [i_6] [i_10] [i_9] [i_6] = ((/* implicit */long long int) arr_47 [i_6]);
                    }
                    for (int i_16 = 2; i_16 < 9; i_16 += 4) 
                    {
                        arr_60 [i_6] [i_6 + 1] [(_Bool)1] [(unsigned char)9] [i_6] [i_16 + 3] = ((/* implicit */unsigned short) ((((arr_35 [i_6] [i_9] [i_6] [(signed char)5] [i_9]) ? (((/* implicit */int) (_Bool)1)) : (arr_19 [i_6]))) >> (((var_0) + (4566012312077717401LL)))));
                        /* LoopSeq 3 */
                        for (long long int i_17 = 1; i_17 < 11; i_17 += 2) 
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (arr_61 [i_9] [i_9] [i_10] [i_17 + 1] [i_17] [i_9])));
                            var_25 = ((arr_40 [i_6] [(_Bool)1] [i_6 - 1] [(unsigned char)3] [i_6 - 2] [i_16 + 2]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 12; i_18 += 3) 
                        {
                            arr_67 [i_6] [i_6] [i_10] = ((/* implicit */unsigned char) (unsigned short)48796);
                            arr_68 [i_6] [i_6] [9] [i_18] = ((/* implicit */unsigned short) var_7);
                        }
                        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_19] [i_10] [i_9] [i_6 - 2])))))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_57 [i_6] [i_9] [i_6] [i_16])) ? (((((/* implicit */long long int) var_4)) & (4112927341128005002LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_32 [(unsigned short)6] [i_6])) ^ (((/* implicit */int) (signed char)-126)))))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) arr_35 [(_Bool)1] [3] [i_10] [i_16] [i_19])) | (arr_19 [i_6])));
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_38 [6LL] [2] [i_10] [2] [4LL] [i_16]))));
                            var_30 ^= var_0;
                        }
                        var_31 = ((/* implicit */_Bool) 4294967295U);
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) arr_2 [i_6] [(unsigned short)22] [i_16]))));
                    }
                    arr_71 [0] [i_10] [i_10] [i_9] |= ((/* implicit */int) arr_35 [(unsigned short)11] [(unsigned char)9] [i_9] [i_10] [i_10]);
                    arr_72 [i_6] [i_9] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_10] [(_Bool)1])) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */int) arr_21 [i_10] [8LL])) & (((/* implicit */int) (unsigned short)43604))))));
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_6] [i_6] [i_6 - 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_34 = ((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6]))));
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 12; i_20 += 4) 
        {
            for (signed char i_21 = 0; i_21 < 12; i_21 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 10; i_22 += 4) 
                    {
                        for (unsigned short i_23 = 0; i_23 < 12; i_23 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) -7506989478593445142LL))))))));
                                var_36 = ((/* implicit */unsigned char) ((((arr_11 [(unsigned char)1]) && (((/* implicit */_Bool) (unsigned short)45137)))) ? (((/* implicit */int) (_Bool)0)) : (var_4)));
                                arr_83 [i_6] [i_20] [i_6] [i_22 - 1] [i_20] [i_23] = ((/* implicit */signed char) ((var_3) ? (((/* implicit */int) arr_6 [13] [i_21] [i_6] [i_23])) : ((~(((/* implicit */int) var_6))))));
                                arr_84 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_3 [i_23]))))));
                            }
                        } 
                    } 
                    var_37 |= ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)14))))) >= (((/* implicit */int) arr_34 [i_6 - 1] [i_6 - 2] [i_21])));
                    arr_85 [i_6] [i_20] [(signed char)9] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (unsigned short)17508)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_32 [i_6] [i_6])) : ((~(((/* implicit */int) (unsigned short)36213))))));
                    arr_86 [i_6] [i_6] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [10LL] [i_20] [i_6] [i_6 + 1])) ? (1743568959) : (((/* implicit */int) arr_6 [(unsigned char)4] [i_20] [i_6] [i_6 - 1]))));
                    var_38 = ((/* implicit */int) 506869446U);
                }
            } 
        } 
        var_39 = ((/* implicit */unsigned short) var_0);
    }
    for (unsigned int i_24 = 0; i_24 < 17; i_24 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            for (unsigned short i_26 = 2; i_26 < 13; i_26 += 4) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    {
                        var_40 = ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */long long int) ((int) arr_0 [i_26 + 1]))) : ((+((((_Bool)1) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_28 = 4; i_28 < 14; i_28 += 4) 
                        {
                            var_41 -= ((/* implicit */_Bool) min((max(((unsigned short)53653), (((/* implicit */unsigned short) (signed char)-88)))), (((/* implicit */unsigned short) (!(((_Bool) arr_7 [i_25] [i_24] [i_25] [i_27])))))));
                            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_28 - 1]), (((/* implicit */unsigned short) var_5))))) ? (min((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_3 [i_25])))), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_10)))))) : (((/* implicit */int) ((unsigned short) var_2)))));
                            arr_100 [i_24] [i_25] [i_25] [i_25] [i_26 - 1] [i_27] [i_28 - 1] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_26 + 1] [i_24] [i_28] [i_28 - 2]))))), (4294967294U)));
                        }
                    }
                } 
            } 
        } 
        arr_101 [i_24] [i_24] = var_4;
    }
    for (unsigned int i_29 = 0; i_29 < 17; i_29 += 4) /* same iter space */
    {
        var_43 = ((((/* implicit */int) ((unsigned short) arr_96 [i_29]))) < (((/* implicit */int) arr_96 [i_29])));
        var_44 = ((/* implicit */unsigned char) arr_88 [i_29] [(unsigned short)8]);
        var_45 = ((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) 1U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_104 [i_29])) ? (((/* implicit */int) arr_93 [i_29])) : (((/* implicit */int) var_2)))))))), ((signed char)92)));
        arr_105 [i_29] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_14 [i_29] [i_29])) ? (((/* implicit */long long int) ((/* implicit */int) arr_92 [i_29] [13] [i_29]))) : (arr_99 [i_29] [i_29] [(unsigned short)6] [15] [i_29])))))));
    }
}
