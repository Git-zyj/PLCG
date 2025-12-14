/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226876
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
    var_20 = ((/* implicit */long long int) (+(((((-463646976) + (2147483647))) << (((((/* implicit */int) (unsigned char)97)) - (97)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) | (arr_0 [i_0] [i_0])));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (signed char)-7))) ? (((long long int) arr_2 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            var_22 = ((/* implicit */signed char) (!(((((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) != (68718428160LL)))));
        }
        for (unsigned short i_2 = 3; i_2 < 23; i_2 += 3) 
        {
            arr_9 [i_0] = ((/* implicit */signed char) arr_7 [i_0] [i_2]);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (unsigned short)8428))));
                        arr_17 [i_2 + 2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                        var_24 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (signed char)15))));
                            var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_2 + 2] [i_2 - 1]))));
                            var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [i_2] [i_2 + 1] [i_2] [i_0] [i_0] [i_2])) ? (((((/* implicit */_Bool) 3448616134U)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)29)))) : (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (signed char)33))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-18)) ? (((((/* implicit */_Bool) var_16)) ? (arr_20 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2] [i_2]) : (var_16))) : (arr_0 [i_2 - 2] [i_2 + 1])));
                /* LoopNest 2 */
                for (short i_7 = 2; i_7 < 23; i_7 += 4) 
                {
                    for (signed char i_8 = 3; i_8 < 22; i_8 += 2) 
                    {
                        {
                            arr_33 [(signed char)10] [13U] [i_6] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)-33)))));
                            var_29 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2 - 3])))))));
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (+(arr_0 [i_7] [i_2]))))));
                            var_31 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                            var_32 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)29))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    arr_36 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_2 - 3] [i_2] [i_2 - 2] [i_2 - 2])) >> (((((((/* implicit */int) (unsigned short)36167)) | (((/* implicit */int) (unsigned short)1792)))) - (36651)))));
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29545))) ^ (arr_20 [i_2 + 1] [i_2 + 2] [i_0] [i_2] [i_0] [18U] [i_2]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 2; i_10 < 24; i_10 += 3) 
                    {
                        var_34 = ((/* implicit */signed char) (unsigned short)19534);
                        var_35 = ((/* implicit */short) ((unsigned long long int) arr_14 [i_0] [5U] [i_2 + 1]));
                        arr_39 [(signed char)12] [i_0] [i_0] [i_6] [i_9] [i_10 + 1] |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)77)) + (((/* implicit */int) arr_29 [i_2] [i_2 + 1] [i_9] [i_9] [i_10 + 1]))));
                        var_36 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)56567))));
                        var_37 = ((((/* implicit */_Bool) (unsigned char)0)) ? (((unsigned int) var_2)) : (((unsigned int) arr_22 [22U] [22U] [i_6] [i_9])));
                    }
                    arr_40 [i_0] [i_2] [i_0] [i_2] [i_9] = var_3;
                }
                arr_41 [i_6] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_0] [i_2 - 1] [i_0] [i_6] [18U]);
            }
            for (int i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 3])) ? (arr_4 [i_2 - 1] [i_2 + 2] [i_2 - 1]) : (arr_4 [i_2 - 2] [i_2 + 1] [i_2 + 1]))))));
                var_39 = ((/* implicit */unsigned int) var_1);
                arr_44 [i_11] [i_2] = (~(((((/* implicit */_Bool) -1743091439155869229LL)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) var_2)))));
            }
            for (unsigned int i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        var_40 = ((/* implicit */long long int) (signed char)-15);
                        var_41 |= (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) var_7))));
                        var_42 = ((/* implicit */signed char) (-(((((/* implicit */int) (short)-31611)) - (((/* implicit */int) var_0))))));
                    }
                    var_43 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_50 [i_0] [i_2] [i_0] [i_12] [24] [i_13] [i_13])) ? (((/* implicit */int) (short)-29557)) : (arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                }
                for (int i_15 = 4; i_15 < 24; i_15 += 2) 
                {
                    var_44 &= ((/* implicit */unsigned int) ((short) var_6));
                    /* LoopSeq 2 */
                    for (short i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        var_45 = ((/* implicit */long long int) ((((/* implicit */int) arr_37 [i_2 + 2] [i_2 + 2] [i_16] [i_2 + 2] [i_16] [i_2 + 2])) > (((/* implicit */int) var_11))));
                        arr_56 [i_0] [i_0] [i_12] [i_12] [i_16] = ((/* implicit */short) var_0);
                        var_46 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_15 - 3] [i_2 - 3]))));
                        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_15] [i_12] [i_15 - 2] [i_12] [i_2 + 2])) ? (arr_38 [i_15] [i_12] [i_2 + 1] [i_12] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
                    }
                    for (signed char i_17 = 1; i_17 < 22; i_17 += 1) 
                    {
                        var_48 = ((/* implicit */long long int) (+(0ULL)));
                        var_49 = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) arr_5 [i_12])))));
                        var_50 = ((/* implicit */int) (-((+(var_15)))));
                        arr_59 [(short)3] [i_12] [19LL] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) | ((-(((/* implicit */int) (signed char)-16))))));
                    }
                }
                var_51 = ((/* implicit */short) ((var_18) << (((var_4) - (2381184909U)))));
                var_52 = ((/* implicit */unsigned char) ((long long int) arr_53 [i_2 + 2] [i_2 + 2] [i_2] [i_2]));
            }
        }
        for (unsigned int i_18 = 0; i_18 < 25; i_18 += 3) 
        {
            var_53 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_25 [i_18] [i_18] [i_0]))));
            arr_62 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31620)) ? (arr_19 [i_0] [i_0] [i_0] [i_0]) : (arr_19 [i_18] [i_0] [i_18] [i_0])));
            arr_63 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((3221129808U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))));
            /* LoopSeq 2 */
            for (unsigned int i_19 = 1; i_19 < 24; i_19 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 25; i_20 += 1) 
                {
                    for (int i_21 = 4; i_21 < 24; i_21 += 2) 
                    {
                        {
                            arr_74 [i_0] [i_18] [i_18] [i_19 - 1] [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) ((signed char) var_10));
                            var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_58 [i_21] [i_21] [i_19 - 1] [i_21] [i_0])))) ? (arr_16 [i_21 - 4] [i_21 - 3] [i_21 - 2] [i_21] [i_21 - 3] [i_21 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        }
                    } 
                } 
                var_55 = ((/* implicit */signed char) var_10);
            }
            for (unsigned int i_22 = 1; i_22 < 24; i_22 += 2) /* same iter space */
            {
                arr_77 [i_0] [i_0] [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_69 [i_22 + 1] [i_22 - 1] [i_22] [i_22 - 1] [i_22] [i_22])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (8388592U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29)))))) : (1743091439155869227LL)));
                /* LoopNest 2 */
                for (unsigned int i_23 = 0; i_23 < 25; i_23 += 1) 
                {
                    for (unsigned short i_24 = 2; i_24 < 24; i_24 += 1) 
                    {
                        {
                            var_56 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_22 - 1] [i_22 + 1] [i_24 + 1] [i_24 + 1] [i_24 + 1])) ? (((((/* implicit */_Bool) arr_12 [i_0])) ? (arr_71 [i_0] [i_0] [i_18] [i_22] [i_23] [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_24] [i_24] [i_24 - 2] [i_24]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_22 - 1] [i_22 + 1] [i_22 - 1] [i_24 + 1] [i_24 + 1])))));
                            var_57 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_26 [i_22 - 1])) : (((((/* implicit */_Bool) var_14)) ? (var_18) : (var_18)))));
                            var_58 = ((/* implicit */unsigned int) max((var_58), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-30)))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (signed char i_25 = 0; i_25 < 25; i_25 += 4) 
            {
                var_59 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (arr_58 [18ULL] [i_18] [i_25] [i_0] [i_25]) : (253018121)))) : ((+(18ULL)))));
                arr_88 [i_0] [i_18] [i_25] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (arr_38 [i_0] [i_0] [i_0] [i_25] [i_25]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-16)) & (((/* implicit */int) arr_79 [(_Bool)1] [i_18] [i_18] [(_Bool)1])))))));
            }
            for (signed char i_26 = 0; i_26 < 25; i_26 += 1) 
            {
                var_60 = ((/* implicit */_Bool) max((var_60), (((/* implicit */_Bool) (~(arr_89 [i_0] [i_18] [(signed char)9]))))));
                var_61 = ((/* implicit */_Bool) ((unsigned short) (signed char)1));
                arr_91 [(signed char)9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1743091439155869229LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_50 [i_0] [i_26] [i_0] [i_18] [i_18] [i_0] [i_0]))))) ? (arr_20 [i_26] [i_26] [i_0] [i_18] [i_0] [14U] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17)))));
            }
        }
        arr_92 [i_0] = (((+(0ULL))) >> (((/* implicit */int) (signed char)6)));
        var_62 -= ((/* implicit */_Bool) arr_12 [i_0]);
    }
    for (unsigned int i_27 = 0; i_27 < 17; i_27 += 1) 
    {
        var_63 = ((/* implicit */signed char) arr_11 [i_27] [i_27] [i_27] [i_27]);
        arr_95 [i_27] [i_27] = ((/* implicit */unsigned int) var_19);
    }
}
