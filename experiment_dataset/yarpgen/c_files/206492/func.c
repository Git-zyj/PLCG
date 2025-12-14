/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206492
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0]) & (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0])))))));
        var_17 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((2305843009213693951LL) | (var_4)))))))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ ((-(arr_6 [i_1] [i_0])))));
        }
        for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
        {
            var_20 = (i_2 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) & (arr_0 [i_0]))) << (((arr_9 [i_2] [i_2 + 1]) - (7878859097408370659ULL)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) & (arr_0 [i_0]))) << (((((arr_9 [i_2] [i_2 + 1]) - (7878859097408370659ULL))) - (1308864115645628780ULL))))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) arr_0 [i_3]);
                            var_22 = ((/* implicit */short) max((var_22), (arr_10 [i_0])));
                            var_23 = ((/* implicit */long long int) (unsigned char)255);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_16 [(_Bool)1] [i_2] [i_2] [i_6] [i_6] [(_Bool)1])) ? (arr_13 [(unsigned short)14] [i_6] [(unsigned short)14] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) | (((/* implicit */long long int) var_13)))))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 3; i_8 < 15; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(6261964973069445151ULL))))));
                        var_26 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_8 - 3]) : (-2305843009213693951LL)))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8 - 3] [i_8] [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 3]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0]))) / (arr_19 [i_0])))));
                    }
                    var_28 = ((/* implicit */short) (((+(((/* implicit */int) arr_4 [i_0])))) * (((/* implicit */int) arr_17 [i_0] [i_2 + 3] [i_2] [i_7] [i_2] [i_2 - 1] [i_0]))));
                }
                var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0]))));
                var_30 = ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_2]);
            }
        }
    }
    /* vectorizable */
    for (short i_9 = 2; i_9 < 21; i_9 += 4) 
    {
        var_31 = ((((/* implicit */_Bool) arr_27 [i_9 - 2] [i_9 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_9] [i_9 - 2]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_9] [16]))) - (arr_26 [i_9] [i_9]))));
        arr_28 [i_9] [i_9 - 2] = arr_25 [i_9] [i_9];
        var_32 = ((/* implicit */_Bool) arr_27 [i_9] [i_9]);
        /* LoopSeq 4 */
        for (short i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            var_33 ^= ((/* implicit */long long int) arr_25 [i_9] [i_10]);
            /* LoopNest 2 */
            for (signed char i_11 = 3; i_11 < 19; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_34 = ((/* implicit */short) arr_33 [i_9 - 1] [(unsigned short)4] [i_9] [i_10] [i_11] [i_10]);
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_9 + 1] [i_9 + 1] [i_9])) ? (((((/* implicit */_Bool) arr_31 [i_9 - 1] [i_10])) ? (((/* implicit */int) arr_34 [(_Bool)1] [i_10] [4ULL])) : (1877444130))) : (((/* implicit */int) arr_29 [i_9] [i_11] [i_10]))));
                    }
                } 
            } 
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_36 ^= ((/* implicit */short) arr_35 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9] [i_9]);
            arr_38 [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_13] [i_13])) & ((+(((/* implicit */int) arr_29 [i_9] [i_13] [i_9]))))));
            /* LoopNest 3 */
            for (long long int i_14 = 4; i_14 < 21; i_14 += 4) 
            {
                for (long long int i_15 = 3; i_15 < 21; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */signed char) (!(arr_36 [i_9] [i_13])));
                            var_38 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_40 [i_9])) < (((/* implicit */int) arr_32 [i_9] [i_13] [i_14] [i_9])))) ? (((/* implicit */int) ((((/* implicit */int) arr_46 [i_16] [i_15] [i_14] [i_13] [(short)20])) == (((/* implicit */int) var_14))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_40 [i_15 - 3])))))));
                        }
                    } 
                } 
            } 
            arr_47 [i_9 - 1] [i_9] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7205)) ? (621787558) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_34 [i_9] [i_9] [i_13])) ? (((/* implicit */int) arr_43 [i_9 - 2] [i_13] [i_9] [i_13] [i_9])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned char)0))));
        }
        for (short i_17 = 2; i_17 < 20; i_17 += 4) 
        {
            var_39 = ((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_9] [i_9 - 1] [i_9 - 2] [i_17 + 1])) & (((/* implicit */int) arr_32 [i_9 + 1] [i_17 + 2] [i_17 + 1] [i_17 - 2]))));
            /* LoopNest 2 */
            for (short i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                for (int i_19 = 0; i_19 < 22; i_19 += 4) 
                {
                    {
                        var_40 = ((/* implicit */signed char) (short)19518);
                        var_41 = var_11;
                        arr_55 [i_9] [i_17] [i_17] [i_18] [i_19] = ((/* implicit */short) (((~(((/* implicit */int) arr_25 [i_9] [i_9])))) << (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_32 [(unsigned char)6] [i_17] [(unsigned char)6] [i_19]))))));
                        /* LoopSeq 1 */
                        for (int i_20 = 1; i_20 < 21; i_20 += 4) 
                        {
                            var_42 = ((/* implicit */short) (~((~(((/* implicit */int) arr_48 [17LL]))))));
                            var_43 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) (short)19543)) - (19524)))))) ? (((arr_31 [i_9 - 2] [i_9]) / (((/* implicit */int) arr_53 [i_9] [i_17] [i_18] [i_19])))) : ((-(((/* implicit */int) arr_53 [i_9] [i_9] [i_9 + 1] [i_9]))))));
                            var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_58 [i_9] [i_20] [i_20] [i_19] [i_20] [(_Bool)1] [(signed char)12])) + (((/* implicit */int) arr_35 [i_9] [i_20] [i_9] [i_19] [(unsigned char)17] [i_20 - 1])))))));
                        }
                        var_45 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_53 [i_9] [i_9] [i_18] [i_19])) << (((((/* implicit */int) arr_33 [i_9 - 2] [i_19] [i_18] [i_19] [i_18] [i_19])) - (82)))))));
                    }
                } 
            } 
            var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_56 [i_9] [i_9] [i_17])) == (((/* implicit */int) arr_41 [i_9] [i_17]))))))))));
            /* LoopNest 2 */
            for (unsigned short i_21 = 0; i_21 < 22; i_21 += 3) 
            {
                for (short i_22 = 0; i_22 < 22; i_22 += 2) 
                {
                    {
                        var_47 ^= ((((((/* implicit */_Bool) (unsigned char)30)) && (((/* implicit */_Bool) arr_54 [i_9] [i_17 + 1] [i_21] [i_9])))) ? (((/* implicit */int) ((((/* implicit */int) arr_30 [i_22] [i_21] [i_17])) < (((/* implicit */int) arr_60 [i_17 + 1] [i_9]))))) : ((+(((/* implicit */int) arr_37 [i_9] [i_9 - 2] [i_9])))));
                        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) arr_51 [i_9 - 1] [i_9 + 1])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : (-2305843009213693972LL)));
                        var_49 |= ((/* implicit */unsigned short) arr_64 [i_9] [3] [i_17 - 1] [i_21] [i_22] [i_22]);
                        arr_66 [i_9 - 2] [i_21] [i_22] = (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_30 [10LL] [10LL] [i_22])) : (((/* implicit */int) arr_46 [6] [i_17] [i_17 + 1] [6] [i_17 - 1])))));
                    }
                } 
            } 
        }
        for (int i_23 = 3; i_23 < 19; i_23 += 3) 
        {
            var_50 = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) arr_51 [i_9] [i_23])) / (arr_62 [i_9] [i_9] [i_23] [i_23])))));
            /* LoopSeq 1 */
            for (unsigned char i_24 = 0; i_24 < 22; i_24 += 2) 
            {
                var_51 = ((/* implicit */unsigned short) (+((~(var_2)))));
                /* LoopNest 2 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (unsigned int i_26 = 0; i_26 < 22; i_26 += 2) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned char) arr_58 [i_9] [i_23] [i_23] [i_24] [i_25] [i_26] [i_26]);
                            var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_9] [i_9] [i_9 - 2] [i_25] [i_25])) ? (((/* implicit */int) arr_46 [i_9 - 2] [i_9] [i_9 - 1] [i_25] [i_26])) : (((/* implicit */int) arr_46 [i_9] [i_9] [i_9 - 1] [i_9] [i_9]))));
                        }
                    } 
                } 
                arr_75 [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_9] [i_9 + 1] [i_9] [i_9] [i_9] [i_23])) ? (((((/* implicit */_Bool) arr_27 [i_9 - 2] [i_24])) ? (arr_49 [i_9 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_9] [(_Bool)1] [i_9]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_23 + 1] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_27 = 0; i_27 < 22; i_27 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_28 = 0; i_28 < 22; i_28 += 2) 
                    {
                        var_54 = ((/* implicit */long long int) arr_65 [i_24] [i_27]);
                        var_55 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_9] [i_9])) * (((/* implicit */int) arr_29 [i_9] [i_23] [i_23])))))));
                        arr_81 [i_9] [i_23] [i_27] [i_27] [i_23] = ((/* implicit */long long int) arr_71 [i_9] [i_9] [i_23] [i_24] [i_27] [i_28]);
                        var_56 = ((/* implicit */int) arr_54 [(unsigned short)14] [i_23] [(short)14] [(unsigned char)14]);
                    }
                    for (short i_29 = 0; i_29 < 22; i_29 += 1) 
                    {
                        var_57 = ((/* implicit */unsigned short) (_Bool)1);
                        arr_84 [i_9] [i_23] [i_23] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_52 [i_9] [i_23] [i_23 - 1] [i_27])) ? (((/* implicit */int) (unsigned char)231)) : ((~(((/* implicit */int) arr_71 [i_9] [i_23] [i_24] [i_24] [i_9] [i_29]))))));
                    }
                    arr_85 [(_Bool)1] [i_9 + 1] [i_23] [i_23] [i_23] [i_27] = ((/* implicit */short) (+(((/* implicit */int) arr_58 [11ULL] [i_23] [i_23] [i_24] [i_24] [i_23] [i_27]))));
                }
            }
            var_58 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_71 [i_23 + 3] [i_23] [i_23 + 1] [i_23] [i_23] [i_23]))));
        }
    }
    /* vectorizable */
    for (unsigned short i_30 = 4; i_30 < 19; i_30 += 4) 
    {
        var_59 = (~(((/* implicit */int) arr_64 [i_30] [i_30 - 2] [i_30] [i_30] [i_30] [i_30])));
        var_60 = ((/* implicit */long long int) arr_60 [i_30] [i_30]);
        var_61 = ((/* implicit */int) arr_80 [i_30] [i_30]);
        /* LoopNest 2 */
        for (_Bool i_31 = 0; i_31 < 0; i_31 += 1) 
        {
            for (short i_32 = 0; i_32 < 21; i_32 += 1) 
            {
                {
                    var_62 = ((/* implicit */unsigned char) ((((arr_65 [i_31 + 1] [i_31 + 1]) + (2147483647))) << (((((arr_65 [i_31 + 1] [i_31 + 1]) + (691471149))) - (15)))));
                    var_63 = ((/* implicit */short) arr_93 [i_32] [i_31 + 1] [i_31]);
                }
            } 
        } 
    }
    for (short i_33 = 2; i_33 < 12; i_33 += 2) 
    {
        arr_98 [i_33] [i_33] = ((/* implicit */signed char) arr_8 [i_33] [i_33]);
        var_64 = ((/* implicit */unsigned int) (unsigned char)238);
    }
    var_65 *= ((/* implicit */short) (-(((/* implicit */int) (short)32751))));
}
