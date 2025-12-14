/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19887
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
    var_15 = ((/* implicit */unsigned short) (-(((((unsigned long long int) var_10)) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (2147483647))))))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_6)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) 2147483647))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) 2677624019777303563LL);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                arr_9 [i_0] [(unsigned short)10] [i_1] [i_0] = ((/* implicit */signed char) -2147483647);
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (var_5) : (((/* implicit */unsigned int) -2147483647))))) ? (arr_8 [i_0] [i_0] [i_1 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                var_19 = ((/* implicit */short) var_5);
            }
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) var_6)) : (var_2)))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
                        var_22 = ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_4 [i_1 - 2] [i_0]));
                        var_23 = ((/* implicit */_Bool) var_10);
                    }
                } 
            } 
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) 5934998283877369405LL))));
        }
    }
    for (int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
    {
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)20796)) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) (signed char)51))))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 1) 
        {
            for (unsigned short i_7 = 2; i_7 < 13; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 1) 
                        {
                            arr_28 [i_9] [i_8] [i_7] [i_6] [i_5] |= ((/* implicit */int) (unsigned char)149);
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10)))) : (((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */unsigned long long int) var_13)) : (var_9)))))))));
                            var_26 &= (unsigned short)17860;
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (-(((((/* implicit */_Bool) 2147483647)) ? (-2147483647) : (((/* implicit */int) var_6)))))))));
                            var_28 ^= ((/* implicit */int) ((unsigned short) (unsigned char)239));
                        }
                        for (short i_10 = 1; i_10 < 15; i_10 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) var_5)) ? (arr_6 [i_8] [i_6] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_7] [i_10 + 1])))))))) : (min((min((((/* implicit */long long int) arr_12 [i_5])), (arr_4 [i_5] [i_8]))), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_6])) % (((/* implicit */int) (_Bool)1))))))))))));
                            var_30 = ((((-294177495) + (2147483647))) << (((((((/* implicit */int) arr_26 [i_10] [i_10 - 1] [i_7] [i_5] [i_7] [i_6] [i_5])) + (146))) - (21))));
                        }
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_6] [i_7] [i_8])))))));
                    }
                } 
            } 
        } 
        arr_31 [i_5] [i_5] |= ((/* implicit */unsigned int) 2147483626);
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                {
                    var_32 = ((/* implicit */short) arr_18 [i_11] [i_12]);
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) var_9))));
                    var_34 = ((/* implicit */_Bool) min((var_34), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5] [i_12]))) < (var_9))))) != ((~(var_8)))))));
                }
            } 
        } 
    }
    for (int i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
    {
        arr_41 [i_13] [i_13] = ((/* implicit */unsigned short) (signed char)116);
        var_35 = (!(((/* implicit */_Bool) arr_34 [i_13] [i_13])));
    }
    for (short i_14 = 0; i_14 < 12; i_14 += 1) 
    {
        var_36 = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [4U] [i_14])) || (((/* implicit */_Bool) arr_24 [i_14] [(unsigned short)5]))))), (((unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) var_13)))))));
        var_37 = ((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned short)23874))));
        var_38 *= ((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_4)))), (((int) ((((/* implicit */int) (short)17697)) ^ (-2147483642))))));
        var_39 = ((/* implicit */_Bool) (((-(((/* implicit */int) ((unsigned char) arr_20 [12] [12] [12]))))) / ((-(((arr_15 [i_14] [(_Bool)1]) / (((/* implicit */int) (signed char)-127))))))));
    }
    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) : (var_8)))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) (unsigned char)2))))))) ? (-1800419753) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned short)23874)) ? (293257137) : (((/* implicit */int) (unsigned short)6)))) : (((/* implicit */int) var_10))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 1) 
    {
        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((int) (unsigned short)36489)), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)108)), ((unsigned short)0))))))) | (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) 293257106)))))))))));
        var_42 *= ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_15])) && (((/* implicit */_Bool) var_7))))) >> (((((/* implicit */_Bool) arr_35 [i_15])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_15] [i_15])))))) : (((-2147483635) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_12 [i_15 + 1]))))))));
    }
    for (short i_16 = 2; i_16 < 13; i_16 += 1) 
    {
        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_37 [i_16 - 2] [i_16 - 2]) >> (((((((/* implicit */_Bool) arr_49 [i_16])) ? (arr_34 [i_16] [i_16]) : (arr_4 [(signed char)12] [(_Bool)1]))) + (5852641525202766683LL)))))) ? (((/* implicit */long long int) max((1262895676U), (((/* implicit */unsigned int) arr_15 [i_16] [i_16 + 2]))))) : (((((/* implicit */_Bool) (~(arr_36 [(unsigned char)16] [(signed char)4] [i_16] [(signed char)4])))) ? (max((((/* implicit */long long int) (signed char)-117)), (arr_4 [i_16] [10ULL]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_51 [(signed char)14] [i_16])) : (((/* implicit */int) var_4))))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_17 = 1; i_17 < 14; i_17 += 4) 
        {
            var_44 = ((unsigned short) ((arr_25 [i_17] [i_17 + 1] [i_17] [i_16] [i_16]) ? (var_13) : (((/* implicit */unsigned int) 293257137))));
            arr_54 [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((unsigned long long int) ((arr_40 [i_17]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14))))));
            arr_55 [i_16] = ((/* implicit */_Bool) arr_1 [i_16] [i_16 + 1]);
        }
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_45 -= (~((~(arr_22 [i_16] [i_16] [i_16] [i_16]))));
            var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) var_3))));
            /* LoopSeq 3 */
            for (signed char i_19 = 0; i_19 < 15; i_19 += 2) 
            {
                var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) (unsigned short)65535))));
                /* LoopSeq 1 */
                for (signed char i_20 = 0; i_20 < 15; i_20 += 2) 
                {
                    var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) ((long long int) 479324102U)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_21 = 1; i_21 < 13; i_21 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned int) arr_63 [i_16] [(unsigned char)14] [i_20] [i_21]);
                        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) var_12))));
                        var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29752)) ? (((/* implicit */int) arr_53 [i_21])) : (((/* implicit */int) (unsigned char)149))))) ? (((((/* implicit */int) (signed char)108)) + (((/* implicit */int) (unsigned short)1984)))) : (((/* implicit */int) var_7)))))));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 1) 
                    {
                        var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)75)) || (((/* implicit */_Bool) (short)2047))))) - (((((/* implicit */_Bool) (unsigned char)224)) ? (2147483631) : (((/* implicit */int) (unsigned short)27405)))))))));
                        var_53 &= var_10;
                    }
                    var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_19] [i_19])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_61 [i_16] [i_16] [i_16 + 2] [i_16] [i_16]))));
                    /* LoopSeq 2 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_55 = ((/* implicit */unsigned short) arr_20 [i_16 + 1] [9LL] [i_16 + 1]);
                        var_56 &= ((/* implicit */unsigned int) ((unsigned char) arr_11 [i_16 + 2] [i_16] [i_16 - 2]));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        arr_72 [i_16] [i_18] [i_19] [i_16] = ((/* implicit */unsigned short) var_0);
                        var_57 = ((/* implicit */int) arr_51 [i_16] [i_16 - 1]);
                    }
                    /* LoopSeq 3 */
                    for (int i_25 = 0; i_25 < 15; i_25 += 2) 
                    {
                        var_58 = ((/* implicit */long long int) min((var_58), (((((/* implicit */_Bool) 7351677832106299254ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)17360)))))));
                        var_59 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_56 [i_16] [i_16 - 1] [11U])) && (((/* implicit */_Bool) arr_56 [i_20] [i_19] [i_16])))) ? (((/* implicit */unsigned long long int) arr_73 [i_20] [i_25] [i_25] [i_25] [i_25])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (4867664907066539277ULL)))));
                    }
                    for (unsigned char i_26 = 0; i_26 < 15; i_26 += 2) 
                    {
                        var_60 *= ((/* implicit */unsigned char) (~(arr_69 [i_16 - 1] [i_18] [(unsigned short)11] [i_19] [i_26])));
                        var_61 = ((/* implicit */unsigned long long int) min((var_61), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11587155814405784219ULL)) ? (((((/* implicit */_Bool) 1530045953)) ? (1068692949) : (((/* implicit */int) arr_1 [i_18] [i_18])))) : (((((/* implicit */_Bool) arr_21 [(unsigned char)5] [(unsigned char)5] [i_20] [i_20])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_70 [i_26] [i_18] [(unsigned char)2] [i_26])))))))));
                    }
                    for (int i_27 = 0; i_27 < 15; i_27 += 1) 
                    {
                        var_62 = ((/* implicit */long long int) 8U);
                        var_63 ^= var_2;
                    }
                }
                var_64 = ((/* implicit */signed char) max((var_64), (((/* implicit */signed char) ((short) var_4)))));
                var_65 = ((/* implicit */short) min((var_65), (((/* implicit */short) (!(arr_50 [i_19]))))));
            }
            for (long long int i_28 = 1; i_28 < 13; i_28 += 1) 
            {
                var_66 = ((/* implicit */long long int) max((var_66), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_3))) & (((/* implicit */int) ((_Bool) var_14))))))));
                var_67 = ((/* implicit */short) var_4);
                var_68 = ((/* implicit */unsigned int) min((var_68), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
                var_69 = ((/* implicit */_Bool) min((var_69), (((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-41))))) > (((((/* implicit */_Bool) var_12)) ? (2547164476U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24576)))))))));
                var_70 = ((/* implicit */unsigned int) max((var_70), (((/* implicit */unsigned int) ((arr_6 [i_28] [i_28] [i_28 + 1]) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_65 [i_16 + 1] [(signed char)7] [(signed char)0] [i_16] [(signed char)0] [(signed char)7])))))))))));
            }
            for (short i_29 = 0; i_29 < 15; i_29 += 1) 
            {
                var_71 = ((/* implicit */unsigned short) max((var_71), (((/* implicit */unsigned short) ((int) arr_18 [i_18] [i_29])))));
                var_72 |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_79 [i_16] [i_16] [i_16 + 2] [12U] [i_16 - 2]))));
            }
            arr_86 [i_16] [i_18] = ((_Bool) (-(((/* implicit */int) var_12))));
            var_73 = ((((/* implicit */_Bool) (signed char)52)) ? ((+(arr_4 [i_16] [i_16]))) : (((/* implicit */long long int) arr_17 [i_16 + 1] [i_16])));
        }
        /* LoopNest 3 */
        for (int i_30 = 0; i_30 < 15; i_30 += 1) 
        {
            for (long long int i_31 = 0; i_31 < 15; i_31 += 1) 
            {
                for (int i_32 = 0; i_32 < 15; i_32 += 2) 
                {
                    {
                        var_74 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_16 + 2] [i_16 + 2] [i_16 - 2] [i_16 + 1])) && (((/* implicit */_Bool) (unsigned short)45322)))))) & (max((((/* implicit */unsigned long long int) var_4)), (min((var_9), (((/* implicit */unsigned long long int) (unsigned short)59694))))))));
                        var_75 = ((/* implicit */long long int) max((var_75), (((/* implicit */long long int) arr_26 [i_16] [i_30] [i_16] [i_31] [i_32] [i_32] [i_32]))));
                        arr_93 [i_16] [i_30] [i_31] [i_32] [i_16] = max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-2029)), (arr_65 [i_32] [i_32] [i_31] [(unsigned short)14] [i_16] [i_16])))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) var_10)))));
                    }
                } 
            } 
        } 
        var_76 = ((/* implicit */unsigned long long int) max((var_76), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3329080989541089110ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_8 [i_16] [i_16] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51)))))) ? (min((min((arr_23 [i_16] [i_16] [i_16] [i_16]), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_66 [i_16] [(unsigned char)3] [(unsigned char)3] [i_16] [i_16] [i_16] [i_16]))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-7205)) / (((/* implicit */int) (_Bool)1))))))))));
        var_77 = ((/* implicit */short) min((var_77), (((/* implicit */short) var_14))));
    }
}
