/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238610
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) max(((~(((/* implicit */int) arr_2 [i_2])))), (((/* implicit */int) max((((unsigned short) arr_6 [i_2])), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_7))))))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((short) 18446744073709551615ULL))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) max((arr_1 [i_2 + 1]), (((/* implicit */short) ((((/* implicit */_Bool) (short)-15208)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0])))))))))))));
                    var_21 += ((/* implicit */int) ((((/* implicit */_Bool) (+(var_11)))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4686835394054230679ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-27409)) | (var_10))))))));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_0)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_4] [i_3])) ? (var_6) : (arr_14 [i_3] [i_4]))) / ((~(arr_11 [i_4])))));
            var_24 = ((/* implicit */int) ((unsigned long long int) arr_12 [i_3] [i_4]));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    {
                        var_25 = ((short) arr_19 [i_4] [i_4] [11]);
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (-(arr_14 [i_4] [(short)21]))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 4) 
            {
                var_27 |= ((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) << (((((/* implicit */int) (short)-5962)) + (5966))))) >> (((((/* implicit */int) var_0)) + (29031)))));
                var_28 -= ((/* implicit */unsigned long long int) ((short) arr_17 [i_3]));
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_25 [i_3] [i_3]))));
            }
            var_30 = ((/* implicit */short) ((1162897745) ^ (arr_16 [i_4])));
        }
        var_31 = ((/* implicit */short) ((4290211711377398983ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48285)))));
        var_32 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? (arr_18 [i_3] [i_3]) : (var_7)));
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 4; i_8 < 24; i_8 += 2) 
        {
            var_33 -= ((short) ((1642484979) | (((/* implicit */int) var_0))));
            var_34 = ((/* implicit */int) 0ULL);
            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_3])))))));
        }
        /* LoopSeq 4 */
        for (int i_9 = 3; i_9 < 23; i_9 += 2) /* same iter space */
        {
            var_36 -= ((/* implicit */unsigned long long int) arr_16 [i_3]);
            arr_32 [i_9] [0] [i_3] |= ((/* implicit */unsigned short) arr_12 [i_3] [i_3]);
            var_37 = ((/* implicit */int) max((var_37), (arr_18 [i_9 - 1] [i_9 - 3])));
            var_38 = ((arr_23 [i_9 - 3] [i_9 + 2] [i_3] [i_3]) - (arr_23 [i_9 + 1] [i_9 + 1] [i_3] [18]));
        }
        for (int i_10 = 3; i_10 < 23; i_10 += 2) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned long long int) min((var_39), (18446744073709551606ULL)));
            var_40 ^= ((/* implicit */unsigned long long int) arr_10 [i_10] [i_3]);
        }
        for (int i_11 = 3; i_11 < 23; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_12 = 3; i_12 < 23; i_12 += 4) 
            {
                var_41 |= ((/* implicit */short) ((16ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)13106)) | (((/* implicit */int) var_4)))))));
                var_42 &= arr_20 [i_3] [i_11] [i_11] [i_3];
            }
            for (unsigned short i_13 = 2; i_13 < 24; i_13 += 1) 
            {
                var_43 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(arr_33 [i_3] [i_11])))) - (var_18)));
                var_44 -= ((unsigned long long int) arr_41 [10ULL] [10ULL] [i_3]);
            }
            for (unsigned long long int i_14 = 1; i_14 < 23; i_14 += 2) 
            {
                var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_14 - 1] [(short)4])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) : (arr_27 [i_11 + 1] [i_14 - 1] [i_14 - 1]))))));
                var_46 |= ((/* implicit */int) ((short) arr_25 [i_11 + 1] [i_11 - 2]));
                var_47 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_3] [i_14] [i_14 + 1]))));
            }
            var_48 ^= ((/* implicit */unsigned short) ((341438217) >> (((arr_35 [i_3]) - (10824436190011333941ULL)))));
            var_49 &= ((/* implicit */unsigned long long int) ((short) arr_39 [i_3]));
            var_50 ^= ((/* implicit */unsigned short) arr_25 [i_11 - 2] [i_11 - 2]);
        }
        for (int i_15 = 1; i_15 < 24; i_15 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                var_51 = ((/* implicit */unsigned short) var_14);
                var_52 = ((/* implicit */short) arr_16 [i_15]);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 4) 
            {
                for (short i_18 = 0; i_18 < 25; i_18 += 1) 
                {
                    {
                        var_53 = ((/* implicit */unsigned short) (short)27971);
                        /* LoopSeq 3 */
                        for (int i_19 = 4; i_19 < 23; i_19 += 1) /* same iter space */
                        {
                            var_54 = ((/* implicit */unsigned long long int) max((var_54), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_15 - 1])))))));
                            var_55 = (~(var_18));
                            var_56 = ((((/* implicit */unsigned long long int) arr_16 [i_15])) | (((((/* implicit */_Bool) arr_23 [i_3] [(unsigned short)16] [i_15] [i_19 + 1])) ? (((/* implicit */unsigned long long int) var_9)) : (18446744073709551606ULL))));
                        }
                        for (int i_20 = 4; i_20 < 23; i_20 += 1) /* same iter space */
                        {
                            var_57 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 286807112)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15)))) * (((/* implicit */int) ((unsigned short) 10536042402672940358ULL)))));
                            arr_64 [i_3] [i_15 - 1] |= ((/* implicit */int) arr_58 [i_15] [(unsigned short)15] [i_18] [i_20]);
                        }
                        for (int i_21 = 4; i_21 < 23; i_21 += 1) /* same iter space */
                        {
                            var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) 0ULL))));
                            var_59 = arr_11 [i_17];
                        }
                        var_60 ^= arr_37 [i_3] [i_17] [i_3];
                        arr_67 [i_15] [i_17] [i_3] |= ((/* implicit */short) ((((/* implicit */int) var_5)) ^ (1642484979)));
                        var_61 = ((((/* implicit */_Bool) ((4ULL) - (var_18)))) ? (((/* implicit */unsigned long long int) arr_18 [i_15 + 1] [(unsigned short)4])) : (arr_15 [i_15 + 1] [i_15 + 1] [i_15 + 1]));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (short i_22 = 1; i_22 < 15; i_22 += 2) 
    {
        var_62 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_54 [i_22] [i_22 + 1] [i_22 + 1] [i_22 + 1]))) << (((18446744073709551608ULL) - (18446744073709551607ULL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_23 = 0; i_23 < 16; i_23 += 4) 
        {
            for (unsigned long long int i_24 = 0; i_24 < 16; i_24 += 4) 
            {
                for (short i_25 = 0; i_25 < 16; i_25 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_26 = 0; i_26 < 16; i_26 += 4) 
                        {
                            var_63 = ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (arr_3 [8ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_22 + 1] [i_22 + 1] [i_22 + 1]))));
                            var_64 = ((/* implicit */unsigned long long int) var_0);
                        }
                        for (int i_27 = 1; i_27 < 14; i_27 += 2) 
                        {
                            var_65 &= ((/* implicit */short) arr_12 [(short)21] [(short)21]);
                            var_66 *= ((/* implicit */unsigned long long int) ((short) var_1));
                        }
                        for (unsigned long long int i_28 = 1; i_28 < 14; i_28 += 1) 
                        {
                            var_67 = ((short) ((((/* implicit */_Bool) arr_63 [i_22] [i_23] [i_22] [i_28 + 1] [i_28 + 1])) ? (arr_0 [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_22] [i_22] [i_22])))));
                            var_68 = ((/* implicit */short) ((((/* implicit */_Bool) arr_60 [i_22 - 1] [i_22 + 1] [i_22 - 1] [i_22])) && (((/* implicit */_Bool) arr_76 [i_22] [i_23] [i_23] [i_23] [i_28 - 1] [i_28]))));
                            var_69 += ((/* implicit */short) ((((/* implicit */_Bool) arr_75 [i_22 + 1] [i_23] [i_23])) ? (arr_75 [i_22] [i_22] [i_25]) : (arr_75 [i_22] [i_22] [i_24])));
                            var_70 = ((((/* implicit */int) (short)22649)) << (((((/* implicit */int) arr_1 [i_28 + 1])) + (21276))));
                            var_71 = ((/* implicit */unsigned short) max((var_71), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_74 [i_23] [i_23] [i_23])) : (-1642484954)))) && (((/* implicit */_Bool) ((arr_22 [i_22] [i_25]) >> (((18446744073709551614ULL) - (18446744073709551602ULL)))))))))));
                        }
                        var_72 = ((/* implicit */unsigned short) (short)-7571);
                    }
                } 
            } 
        } 
        arr_84 [4ULL] |= ((unsigned long long int) ((unsigned short) arr_14 [i_22] [5ULL]));
    }
}
