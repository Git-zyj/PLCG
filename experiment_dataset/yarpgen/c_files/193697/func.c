/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193697
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((unsigned char) ((unsigned char) (+(4094611705U))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_0] = ((/* implicit */long long int) ((4259960640U) << (((var_1) - (3386749337145426188LL)))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (15092990183157082906ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    arr_12 [i_0] [11] [10LL] [i_1] |= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-31169))));
                    arr_13 [i_0] [i_0] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (9223372036854775807LL) : (-9223372036854775807LL)));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_14 -= ((/* implicit */signed char) ((unsigned char) 9223372036854775807LL));
                        var_15 = ((/* implicit */signed char) 18446744073709551609ULL);
                        arr_18 [i_5] [i_4] [i_1 - 2] [i_0] &= (~(0ULL));
                        var_16 = ((/* implicit */int) (unsigned short)3968);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        arr_22 [i_0] [4U] [i_0] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12054)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64726))) : (var_1)));
                        var_17 ^= ((short) 9223372036854775807LL);
                        var_18 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 6ULL))));
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            arr_25 [i_0] [i_1] [i_4] [i_6] [i_7] [i_7] = (unsigned char)180;
                            var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) (unsigned char)65)) ? (-9223372036854775807LL) : (7301563384593940855LL)))));
                            arr_26 [i_0] [i_1] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4259960628U))))));
                        }
                        for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            var_20 ^= ((/* implicit */short) ((int) var_0));
                            arr_30 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)54281))));
                            var_21 *= ((/* implicit */unsigned long long int) ((unsigned char) var_4));
                        }
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            arr_35 [i_9] [i_9] [i_4] [i_9] [i_0] = ((/* implicit */int) (~((-(18446744073709551609ULL)))));
                            var_22 = ((/* implicit */int) ((unsigned int) 3015752432U));
                            var_23 = ((/* implicit */short) var_11);
                            arr_36 [i_9] [i_9] [i_4] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 35006626U)) ? (var_6) : (15751325839686732421ULL)))) ? (((/* implicit */int) (unsigned char)82)) : (((((/* implicit */int) (short)-18191)) | (222501544))));
                            var_24 *= ((/* implicit */unsigned int) (short)(-32767 - 1));
                        }
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            arr_40 [i_6] [i_10] [i_4] [i_0] [i_0] [i_1] &= ((/* implicit */int) (-(10ULL)));
                            arr_41 [i_10] [i_4] [i_1] [i_10] = ((int) (unsigned char)242);
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned short)65535)))))))));
                            var_26 ^= ((/* implicit */unsigned int) ((int) 9223372036854775807LL));
                        }
                        var_27 = ((/* implicit */signed char) 3456693202U);
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        arr_45 [(unsigned char)9] [i_1] [i_1] [9LL] |= ((/* implicit */short) ((((((/* implicit */_Bool) 1136822537169796198LL)) ? (5121611115837918823LL) : (((/* implicit */long long int) 821704900U)))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) 1136822537169796198LL))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            arr_48 [i_0] [i_1 - 2] [i_1 - 2] = ((/* implicit */short) -2047541119);
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2LL)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) -1732540045)) : (var_3))) : (var_5)));
                            arr_49 [i_0] [i_1] [i_4] [(unsigned char)0] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65535))));
                        }
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            var_29 -= ((/* implicit */unsigned short) ((unsigned long long int) 2147483647));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3760852901U)) ? (16743814090805246728ULL) : (((/* implicit */unsigned long long int) 0LL))));
                            arr_53 [i_1] [i_11] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((int) 4294967295U));
                        }
                    }
                    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 12; i_15 += 4) 
                        {
                            arr_60 [i_0] [i_0] [i_0] = ((/* implicit */int) var_3);
                            var_31 = ((/* implicit */unsigned char) ((4294967279U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144)))));
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((1462055433U) << (((((((/* implicit */_Bool) 2147418112U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)82)))) - (46492))))))));
                            var_33 = ((/* implicit */short) -9223372036854775807LL);
                        }
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) var_8))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        arr_64 [i_0] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3074816206U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)190)))) : (var_6)));
                        var_35 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                    }
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        arr_69 [i_0] = ((/* implicit */unsigned int) ((short) var_11));
                        var_36 = ((/* implicit */unsigned short) ((long long int) (short)16130));
                    }
                    for (signed char i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        var_37 -= ((/* implicit */long long int) ((3647349556U) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775780LL))) + (48LL)))));
                        arr_72 [(unsigned char)10] [i_18] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                        var_38 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (short)(-32767 - 1)))));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_20 = 0; i_20 < 12; i_20 += 3) 
                        {
                            var_39 = 8037055586527893174LL;
                            var_40 = (~(4298862706809698890LL));
                            arr_79 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) var_11);
                            var_41 = ((/* implicit */long long int) ((((/* implicit */unsigned int) 1291807225)) ^ (2147418095U)));
                        }
                        var_42 = ((/* implicit */long long int) (-((~(var_4)))));
                        var_43 = ((/* implicit */int) var_6);
                    }
                    var_44 = ((/* implicit */unsigned char) var_0);
                    var_45 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (unsigned char)216))));
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        var_46 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (signed char)119))));
                        /* LoopSeq 2 */
                        for (unsigned int i_22 = 0; i_22 < 12; i_22 += 1) 
                        {
                            var_47 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8271))) != (((var_6) + (((/* implicit */unsigned long long int) -10LL))))));
                            arr_85 [i_0] [i_0] [i_0] [i_22] [i_0] = (-(-8037055586527893187LL));
                            arr_86 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */signed char) (unsigned char)29);
                        }
                        for (short i_23 = 0; i_23 < 12; i_23 += 3) 
                        {
                            arr_89 [i_0] [i_21] = (+(((((/* implicit */_Bool) 490302442)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_3))));
                            arr_90 [i_0] [i_0] [(unsigned char)4] [(unsigned char)4] [i_21] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)16103))));
                            var_48 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (short)16147))))) ? (((/* implicit */long long int) var_0)) : (((long long int) 18446744073709551615ULL))));
                        }
                        var_49 = ((/* implicit */unsigned char) var_4);
                    }
                }
                var_50 += ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (4283536674U))));
            }
        } 
    } 
    var_51 = ((/* implicit */unsigned int) var_1);
    var_52 += ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
}
