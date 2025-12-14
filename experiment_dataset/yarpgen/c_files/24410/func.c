/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24410
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
    var_12 &= ((/* implicit */int) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */long long int) var_1);
                        var_14 ^= ((/* implicit */long long int) ((((2361387674U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))))) * (((/* implicit */unsigned int) ((var_7) + (((/* implicit */int) (unsigned char)125)))))));
                        var_15 *= ((/* implicit */int) ((((long long int) 2361387667U)) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1] [i_0] [i_0 + 2] [i_1 + 3] [i_1 + 3])))));
                    }
                } 
            } 
            var_16 -= ((/* implicit */long long int) arr_4 [(_Bool)1] [i_1 - 2]);
            var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_1 [6LL]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [(short)2] [(short)4] [i_1 + 1]))) : (arr_3 [i_0 + 1])));
        }
        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            arr_14 [i_4] &= ((/* implicit */long long int) ((unsigned int) var_8));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_10))));
        }
        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 3) /* same iter space */
        {
            var_19 -= ((/* implicit */short) (~(var_11)));
            /* LoopSeq 2 */
            for (int i_6 = 4; i_6 < 10; i_6 += 2) 
            {
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */long long int) (short)8146);
                    arr_23 [i_0] [i_0] [i_6 - 4] [i_0] = ((/* implicit */_Bool) ((arr_7 [i_6 + 1] [i_5 + 2] [i_0 + 2] [i_0]) << (((-1887334121) + (1887334152)))));
                    arr_24 [i_0] [i_6] [i_5] [i_7] [i_0] [i_7] = ((unsigned int) var_1);
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 + 1])) + (((/* implicit */int) arr_2 [i_0 - 1])))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_0] [i_5 - 1])) % (((/* implicit */int) arr_17 [i_6] [i_6] [i_5 - 1] [i_6])))))));
                    var_22 = ((/* implicit */int) arr_25 [i_0 - 1] [i_6 - 1] [i_5 - 1] [i_8]);
                }
                for (unsigned int i_9 = 2; i_9 < 9; i_9 += 1) 
                {
                    arr_30 [i_0] [i_6] [i_5 + 2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)27393)) : (((/* implicit */int) arr_6 [i_0 + 1] [i_6 - 3] [i_6 - 3]))));
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        var_23 = ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_9 - 2])) ? (arr_15 [i_9 + 2] [i_9 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
                        arr_33 [i_6] &= ((/* implicit */_Bool) var_7);
                    }
                    for (short i_11 = 2; i_11 < 9; i_11 += 3) 
                    {
                        arr_37 [i_9] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5 + 2] [i_5 + 2] [10LL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))));
                        var_24 = ((/* implicit */unsigned int) var_0);
                    }
                    for (int i_12 = 1; i_12 < 10; i_12 += 2) 
                    {
                        var_25 *= ((/* implicit */int) arr_34 [i_6] [i_5] [4U] [i_6] [i_5 + 1] [i_6] [i_6]);
                        arr_40 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */short) ((_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_5] [i_5])) : (var_7))));
                    }
                }
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned int) arr_26 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5 - 1])) - (var_2))))));
                var_27 = ((/* implicit */unsigned char) var_3);
                /* LoopSeq 1 */
                for (unsigned short i_13 = 1; i_13 < 8; i_13 += 4) 
                {
                    var_28 &= ((/* implicit */short) ((1896233418) % (((/* implicit */int) (unsigned short)50724))));
                    var_29 = ((/* implicit */_Bool) var_6);
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_8))));
                        arr_49 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_48 [i_14] [i_13 + 3] [i_6 + 1] [i_0] [i_0 - 1]));
                    }
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned int) arr_17 [i_0] [i_5 - 1] [i_6 - 4] [i_13]);
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_0] [i_6] [i_0] [i_6 - 1] [i_13] [i_13 + 3] [i_0])))));
                        var_32 = ((/* implicit */unsigned short) ((int) var_5));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) -563110802140851049LL)) ? (arr_51 [i_0 + 1]) : (arr_51 [i_0 + 2])));
                    }
                    arr_53 [i_0 + 2] [i_0 + 2] [i_5] [i_0] [i_0 + 2] = ((/* implicit */unsigned short) var_4);
                }
            }
            for (signed char i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                var_34 = ((((/* implicit */_Bool) arr_26 [i_0 + 1] [i_5 + 2] [i_5 + 2] [i_5 + 2])) ? (((((/* implicit */_Bool) (unsigned char)207)) ? (var_0) : (((/* implicit */long long int) -1896233419)))) : ((-(var_9))));
                arr_57 [i_16] [i_5] &= ((/* implicit */short) ((signed char) var_5));
                var_35 &= var_4;
            }
        }
        for (unsigned int i_17 = 1; i_17 < 9; i_17 += 3) /* same iter space */
        {
            var_36 &= ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (arr_26 [i_0] [i_17] [i_17 + 1] [i_17]) : (2092957599)));
            arr_61 [i_0] = ((((var_6) / (607557327U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 394486773U)))));
            /* LoopNest 3 */
            for (int i_18 = 1; i_18 < 8; i_18 += 3) 
            {
                for (unsigned int i_19 = 0; i_19 < 11; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) arr_17 [i_0] [i_0] [i_18] [(short)6]);
                            var_38 = ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_21 = 0; i_21 < 11; i_21 += 3) 
            {
                for (unsigned char i_22 = 0; i_22 < 11; i_22 += 2) 
                {
                    {
                        var_39 = ((/* implicit */short) (+(((((/* implicit */int) (unsigned char)207)) * (((/* implicit */int) (_Bool)1))))));
                        var_40 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [i_17 + 2]))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_23 = 4; i_23 < 10; i_23 += 2) 
                        {
                            arr_79 [i_23] [i_21] [i_21] [i_21] [i_21] [(short)8] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1896233419) : (((/* implicit */int) (short)-13446)))))));
                            var_41 = ((/* implicit */unsigned long long int) (~(arr_27 [i_0 + 2] [i_17 + 1] [i_21] [i_23 - 2])));
                        }
                        for (short i_24 = 2; i_24 < 9; i_24 += 3) 
                        {
                            var_42 = ((/* implicit */_Bool) (unsigned short)63124);
                            var_43 = ((/* implicit */long long int) arr_73 [i_17 + 2] [i_17 + 2] [i_17 - 1] [i_17]);
                            var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) var_4))));
                            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) ((unsigned char) var_5)))));
                        }
                        for (long long int i_25 = 2; i_25 < 9; i_25 += 3) 
                        {
                            arr_85 [i_0] = ((/* implicit */unsigned short) ((signed char) var_4));
                            arr_86 [i_25] [i_0] [i_25] [i_25] [i_25] = ((/* implicit */short) ((((/* implicit */int) var_8)) + (((/* implicit */int) (short)-32475))));
                        }
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
        {
            arr_91 [(short)2] [(short)4] [i_26] &= ((2092957599) % (((/* implicit */int) var_1)));
            /* LoopNest 2 */
            for (int i_27 = 4; i_27 < 10; i_27 += 4) 
            {
                for (short i_28 = 0; i_28 < 11; i_28 += 4) 
                {
                    {
                        var_46 -= ((/* implicit */unsigned char) var_11);
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_8))) ? (var_0) : (((/* implicit */long long int) var_7))));
                        /* LoopSeq 1 */
                        for (unsigned char i_29 = 1; i_29 < 8; i_29 += 1) 
                        {
                            arr_99 [i_0] [i_0] [i_26] [i_28] [i_28] [i_28] [i_29] &= ((/* implicit */_Bool) ((((/* implicit */int) (short)4557)) - (var_7)));
                            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) -2092957600)) % (var_0)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32484)) : (((/* implicit */int) arr_46 [i_26] [i_26] [i_27] [i_28] [i_29] [i_27] [i_27])))) : (((/* implicit */int) var_3))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_31 = 0; i_31 < 11; i_31 += 1) 
            {
                for (unsigned char i_32 = 0; i_32 < 11; i_32 += 1) 
                {
                    {
                        var_49 += ((/* implicit */signed char) ((((/* implicit */_Bool) 607557327U)) ? (822251329U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22296)))));
                        var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_13 [i_0 + 1] [i_0 + 1] [i_0 - 1]) : (var_0)));
                    }
                } 
            } 
            var_51 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_67 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1]))));
        }
        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) /* same iter space */
        {
            arr_111 [i_0] = ((/* implicit */long long int) var_6);
            /* LoopNest 2 */
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                for (unsigned int i_35 = 0; i_35 < 11; i_35 += 3) 
                {
                    {
                        arr_117 [i_35] [i_0] [i_34] [i_0] [i_0] = ((/* implicit */long long int) var_10);
                        var_52 = ((/* implicit */unsigned short) ((short) arr_82 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]));
                        var_53 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((7150928119039051997ULL) * (((/* implicit */unsigned long long int) 1011264260)))) : (((/* implicit */unsigned long long int) ((unsigned int) var_10)))));
                    }
                } 
            } 
        }
        arr_118 [0ULL] |= ((/* implicit */long long int) (short)-1);
    }
    for (_Bool i_36 = 0; i_36 < 0; i_36 += 1) 
    {
        var_54 = ((/* implicit */int) max((var_54), (-1896233423)));
        var_55 = ((/* implicit */_Bool) var_0);
        var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned long long int) arr_119 [i_36] [15])), (12763634983314059073ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)91)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)6891))))))));
    }
    var_57 &= ((/* implicit */int) ((var_2) * (max((var_6), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) % (var_11))))))));
    var_58 = ((/* implicit */unsigned char) var_6);
}
