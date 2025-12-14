/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30641
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
    var_16 = ((/* implicit */int) ((unsigned char) ((long long int) ((int) var_14))));
    var_17 = ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            arr_12 [i_2] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((unsigned char) 623640404));
                            var_18 = ((/* implicit */unsigned short) ((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))));
                            var_19 = ((_Bool) (-(arr_0 [i_0])));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        {
                            var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) (!(arr_16 [i_5] [i_6] [i_5] [i_5]))))));
                            var_21 = (!(((/* implicit */_Bool) arr_19 [i_0] [9LL] [i_7] [i_6 + 1] [i_7])));
                        }
                    } 
                } 
            } 
            var_22 &= ((/* implicit */int) var_4);
            var_23 |= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_1]))) > (4441155970990873621ULL))))));
        }
        for (int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            var_24 = (!(((/* implicit */_Bool) arr_11 [i_0 - 1] [i_8] [i_0] [i_8] [i_8] [i_8])));
            var_25 = ((/* implicit */long long int) ((arr_11 [i_0] [i_8] [i_0 + 1] [i_8] [i_0 + 1] [i_8]) != (((/* implicit */int) var_8))));
            var_26 = ((/* implicit */unsigned char) ((int) var_5));
            var_27 += var_0;
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (long long int i_10 = 2; i_10 < 11; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */int) ((((arr_23 [i_0 - 1]) + (9223372036854775807LL))) << (((((var_6) + (878654095893255143LL))) - (23LL)))));
                            var_29 += ((/* implicit */int) arr_3 [i_10] [i_0]);
                            arr_30 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(21ULL)))) ? (arr_5 [i_8]) : (((/* implicit */long long int) ((int) arr_29 [i_0] [i_0] [i_9] [i_10] [i_11] [i_0])))));
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (var_6) : (var_4)))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_3 [i_10 - 1] [i_0 + 1]))));
                        }
                    } 
                } 
            } 
        }
        for (short i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            var_31 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11209))) : (-1682199691142263796LL)))));
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    {
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_35 [i_0] [i_12])))))) | (arr_8 [i_0] [i_0] [i_0] [i_0 - 2]))))));
                        var_33 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
                    }
                } 
            } 
        }
        /* LoopSeq 4 */
        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
        {
            arr_42 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_15]))) ? (((/* implicit */unsigned int) ((int) var_8))) : (arr_8 [i_0] [i_0] [i_15] [i_15])));
            /* LoopSeq 2 */
            for (int i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
            {
                var_34 = ((/* implicit */int) arr_39 [i_0 - 1]);
                arr_45 [i_15] = (signed char)0;
                var_35 = ((/* implicit */unsigned char) (~(arr_44 [i_15])));
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    var_36 = ((/* implicit */unsigned long long int) ((unsigned char) arr_41 [i_16] [i_17] [i_15]));
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((unsigned int) arr_8 [i_0 - 1] [i_16] [i_16] [i_0 + 1])))));
                    arr_48 [i_15] [i_15] [i_16] [i_15] = ((arr_4 [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))));
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_0 - 1] [i_0 - 1] [9ULL] [i_0]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (5ULL)))));
                    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)236))))) ? (((((/* implicit */_Bool) 1027242103)) ? (((/* implicit */unsigned long long int) -5506566625814199352LL)) : (var_14))) : (((/* implicit */unsigned long long int) -8124881591430016519LL)))))));
                }
            }
            for (int i_18 = 0; i_18 < 12; i_18 += 4) /* same iter space */
            {
                var_40 += ((/* implicit */unsigned int) arr_39 [i_15]);
                var_41 = ((/* implicit */unsigned long long int) var_6);
            }
            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_13) ? (var_3) : (((/* implicit */int) arr_35 [i_0] [i_15]))))) || ((!(((/* implicit */_Bool) (unsigned short)59886)))))))));
            var_43 += ((/* implicit */long long int) (!((_Bool)1)));
        }
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            var_44 = ((/* implicit */unsigned char) ((long long int) 15949234662981004344ULL));
            var_45 += ((/* implicit */unsigned char) var_6);
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_21 = 2; i_21 < 10; i_21 += 2) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (signed char i_23 = 0; i_23 < 12; i_23 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned short) var_3);
                            arr_64 [i_0] [i_20] [i_0] [i_22] [i_23] |= ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
                        }
                    } 
                } 
            } 
            arr_65 [i_20] [i_0] = ((/* implicit */_Bool) (unsigned char)171);
        }
        for (long long int i_24 = 0; i_24 < 12; i_24 += 3) 
        {
            var_47 -= ((/* implicit */unsigned char) (~((~(var_9)))));
            /* LoopSeq 4 */
            for (int i_25 = 4; i_25 < 8; i_25 += 2) 
            {
                var_48 = ((/* implicit */int) ((arr_24 [i_24] [i_0 - 2] [i_25]) == (arr_24 [i_0] [i_0 - 1] [i_0])));
                arr_70 [i_0] [i_24] [i_25] [i_24] = ((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_24] [i_24] [i_24] [i_24]))));
                /* LoopNest 2 */
                for (unsigned short i_26 = 0; i_26 < 12; i_26 += 3) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)54335)) ? (((/* implicit */int) arr_33 [i_0 + 1])) : (var_1)));
                            arr_77 [i_0 + 1] [i_24] [i_24] [i_26] [i_27] = ((/* implicit */short) var_0);
                            var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) ((((/* implicit */long long int) 3814388935U)) >= (var_6))))));
                            var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) var_10))));
                            var_52 = ((/* implicit */signed char) ((arr_49 [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) arr_32 [i_25 - 4])) : (((/* implicit */int) arr_58 [i_0] [i_0] [i_0 - 1]))));
                        }
                    } 
                } 
            }
            for (signed char i_28 = 0; i_28 < 12; i_28 += 4) 
            {
                var_53 = (+((-(-66670474))));
                var_54 = ((/* implicit */int) arr_71 [i_0 - 1] [3LL] [i_28] [3LL] [i_0]);
            }
            for (long long int i_29 = 3; i_29 < 11; i_29 += 3) 
            {
                var_55 = ((/* implicit */unsigned long long int) ((long long int) -1027242103));
                var_56 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_24])) ? (((/* implicit */int) (short)-30336)) : (((/* implicit */int) arr_32 [i_24]))))) ? (((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_58 [i_29] [7LL] [i_0])))))));
            }
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_31 = 0; i_31 < 12; i_31 += 1) 
                {
                    arr_89 [i_24] [i_24] [1ULL] [1ULL] [1ULL] [1ULL] = ((arr_63 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1]) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))));
                    var_57 = ((/* implicit */long long int) 0);
                    /* LoopSeq 2 */
                    for (signed char i_32 = 0; i_32 < 12; i_32 += 3) 
                    {
                        arr_93 [i_32] [i_24] [i_30] [i_24] [i_0 + 1] = (unsigned char)178;
                        arr_94 [i_30] [i_0] [i_24] [i_24] [i_24] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_13))));
                    }
                    for (unsigned int i_33 = 2; i_33 < 11; i_33 += 2) 
                    {
                        var_58 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)18865))));
                        var_59 = (~(((/* implicit */int) (_Bool)0)));
                        arr_98 [i_24] [i_30] = ((/* implicit */long long int) arr_38 [i_0] [i_0] [i_0] [i_31]);
                        arr_99 [i_0] [11] [i_0] [6LL] [i_24] = ((/* implicit */long long int) arr_55 [i_31] [i_24]);
                        arr_100 [i_24] [i_31] [i_31] [i_30] [i_24] [i_24] = ((/* implicit */int) var_13);
                    }
                    arr_101 [i_24] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_62 [i_30]))))));
                    arr_102 [i_24] [i_24] = ((/* implicit */int) ((var_10) >> (((var_9) - (3791366570U)))));
                }
                for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                {
                    arr_105 [i_24] = ((/* implicit */_Bool) (+(arr_82 [i_34] [i_24])));
                    var_60 = ((/* implicit */unsigned short) min((var_60), (((/* implicit */unsigned short) (-(arr_28 [i_0] [i_0] [i_34] [i_24]))))));
                }
                var_61 += ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0 - 1])) || (((/* implicit */_Bool) arr_23 [i_0 - 2]))));
            }
            /* LoopNest 3 */
            for (int i_35 = 0; i_35 < 12; i_35 += 1) 
            {
                for (long long int i_36 = 1; i_36 < 10; i_36 += 2) 
                {
                    for (unsigned char i_37 = 2; i_37 < 11; i_37 += 3) 
                    {
                        {
                            var_62 = ((/* implicit */unsigned int) arr_75 [i_0] [(unsigned short)8] [(unsigned char)8] [i_36] [i_24] [i_37]);
                            var_63 &= ((/* implicit */unsigned long long int) 9223372036854775791LL);
                            arr_114 [i_24] [i_24] = ((/* implicit */long long int) var_13);
                            var_64 *= ((/* implicit */_Bool) arr_53 [i_36] [i_24]);
                            var_65 = ((/* implicit */_Bool) var_4);
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
    {
        var_66 = (~(((((/* implicit */_Bool) var_12)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))))));
        /* LoopNest 3 */
        for (short i_39 = 0; i_39 < 24; i_39 += 3) 
        {
            for (unsigned short i_40 = 0; i_40 < 24; i_40 += 2) 
            {
                for (long long int i_41 = 0; i_41 < 24; i_41 += 4) 
                {
                    {
                        arr_125 [i_38] [i_39] [i_38] [(_Bool)1] [i_39] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_119 [i_38] [i_38] [i_38] [i_38])) ? (2147483647) : (-519200927)))) : (5ULL)));
                        /* LoopSeq 4 */
                        for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
                        {
                            var_67 += ((/* implicit */short) ((unsigned int) arr_116 [i_42]));
                            var_68 = ((/* implicit */long long int) ((arr_127 [i_42] [i_39] [i_40] [i_39] [i_39] [i_38]) ? (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1353180160U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44)))));
                            arr_130 [i_38] [i_39] [i_40] [i_38] [i_42] [i_41] [i_39] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_129 [i_42] [i_38] [i_39] [i_38])))));
                            arr_131 [(short)1] [i_39] [i_39] [i_41] [i_39] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)22876)))) + (((/* implicit */int) (_Bool)1))));
                            var_69 -= ((/* implicit */short) arr_128 [i_38] [i_39] [i_40] [i_41] [i_42]);
                        }
                        for (signed char i_43 = 0; i_43 < 24; i_43 += 3) 
                        {
                            var_70 = ((/* implicit */int) ((((/* implicit */_Bool) arr_116 [i_38])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_129 [i_41] [i_41] [i_40] [i_40]))) : (var_6))))));
                            arr_134 [i_39] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)65))));
                        }
                        for (unsigned int i_44 = 0; i_44 < 24; i_44 += 2) 
                        {
                            var_71 |= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            var_72 = ((/* implicit */unsigned int) min((var_72), (((/* implicit */unsigned int) (+(((/* implicit */int) (!((_Bool)0)))))))));
                            var_73 = ((/* implicit */signed char) ((unsigned long long int) ((var_11) ? (((/* implicit */long long int) var_1)) : (arr_138 [i_39]))));
                            var_74 = ((/* implicit */unsigned char) var_15);
                            var_75 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_133 [i_44] [i_44] [i_40] [(_Bool)1] [i_44] [i_40] [i_41]))));
                        }
                        for (unsigned short i_45 = 0; i_45 < 24; i_45 += 4) 
                        {
                            var_76 = ((/* implicit */_Bool) ((int) var_7));
                            arr_141 [i_38] [i_39] [i_39] [i_41] [(_Bool)1] = ((/* implicit */signed char) arr_121 [i_38] [i_38] [i_41] [i_41]);
                            arr_142 [i_38] [i_39] [i_39] = ((/* implicit */unsigned char) ((((var_4) > (((/* implicit */long long int) var_5)))) ? (arr_116 [i_38]) : (((((/* implicit */_Bool) var_4)) ? (var_5) : (arr_116 [i_45])))));
                            var_77 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)84))));
                        }
                        arr_143 [i_39] [i_39] [i_39] = ((/* implicit */int) ((unsigned int) ((int) var_5)));
                        arr_144 [i_38] [i_39] [i_38] = ((/* implicit */unsigned char) arr_119 [i_41] [i_40] [(signed char)11] [i_38]);
                    }
                } 
            } 
        } 
    }
    var_78 = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) var_12)) ? (var_3) : (-1027242103)))))));
}
